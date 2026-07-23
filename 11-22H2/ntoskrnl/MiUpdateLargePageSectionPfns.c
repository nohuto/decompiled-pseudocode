/*
 * XREFs of MiUpdateLargePageSectionPfns @ 0x140628FEC
 * Callers:
 *     MiCreatePagingFileMap @ 0x140747EA4 (MiCreatePagingFileMap.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140271240 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x140285680 (MiSwizzleInvalidPte.c)
 *     MiMakeValidPte @ 0x1402CF2B0 (MiMakeValidPte.c)
 *     MiConvertEntireLargePageToSmall @ 0x1402D2AD0 (MiConvertEntireLargePageToSmall.c)
 *     MiSetPfnPteFrame @ 0x1402E15A0 (MiSetPfnPteFrame.c)
 *     MiSetPfnTbFlushStamp @ 0x1402E1630 (MiSetPfnTbFlushStamp.c)
 *     MiGetPfnPageSizeIndex @ 0x1402E88E0 (MiGetPfnPageSizeIndex.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     MiSetPfnNodeBlinkLow @ 0x140349C98 (MiSetPfnNodeBlinkLow.c)
 *     MiWritePteShadow @ 0x140356D4C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140356DAC (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiUpdateLargePageSectionPfns(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  char v3; // bl
  unsigned __int64 v4; // r12
  __int64 v6; // r13
  unsigned __int64 ValidPte; // rdi
  __int64 v8; // rsi
  int PfnPageSizeIndex; // eax
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r14
  _QWORD *v13; // rbp
  int v14; // r12d
  unsigned __int64 v15; // rbx
  __int64 v16; // r8
  bool v17; // zf
  unsigned __int64 v18; // r12
  __int64 v19; // rdx
  char v20; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  __int64 v25; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v26; // [rsp+88h] [rbp+10h]
  unsigned __int64 v27; // [rsp+98h] [rbp+20h]

  v26 = a2;
  v3 = a3;
  v4 = a2;
  LODWORD(a3) = a3 | 0x80000000;
  v6 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  ValidPte = MiMakeValidPte(0LL, v6, a3);
  v8 = MiSwizzleInvalidPte(32LL * (v3 & 0x1F));
  PfnPageSizeIndex = MiGetPfnPageSizeIndex(a1);
  v10 = -1LL;
  v27 = v4 + 8 * MiLargePageSizes[PfnPageSizeIndex];
  v11 = v27;
  MiConvertEntireLargePageToSmall(a1, PfnPageSizeIndex, 0, 1, 0LL, 0LL, 0LL);
  v12 = v4;
  if ( v4 < v11 )
  {
    v13 = (_QWORD *)(a1 + 40);
    do
    {
      if ( v10 == -1LL || (v12 & 0xFFF) == 0 )
      {
        v25 = MI_READ_PTE_LOCK_FREE(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v10 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v25) >> 12) & 0xFFFFFFFFFFLL;
      }
      v14 = 0;
      ValidPte ^= (ValidPte ^ (v6 << 12)) & 0xFFFFFFFFFF000LL;
      v15 = ValidPte;
      if ( !MiPteInShadowRange(v12) )
        goto LABEL_14;
      if ( MiPteHasShadow() )
      {
        v14 = 1;
        if ( !HIBYTE(word_140C66DFC) )
        {
          v17 = (ValidPte & 1) == 0;
          goto LABEL_12;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v17 = (ValidPte & 1) == 0;
LABEL_12:
        if ( !v17 )
          v15 = ValidPte | 0x8000000000000000uLL;
      }
LABEL_14:
      *(_QWORD *)v12 = v15;
      if ( v14 )
        MiWritePteShadow(v12, v15, v16);
      v18 = (unsigned __int8)MiLockPageInline((__int64)(v13 - 5));
      MiSetPfnTbFlushStamp((__int64)(v13 - 5), 0, 1);
      MiSetPfnNodeBlinkLow((__int64)(v13 - 5), 0);
      v19 = *(v13 - 2);
      *(v13 - 5) = 0LL;
      *(v13 - 3) = v8;
      *(v13 - 2) = v19 & 0xC000000000000000uLL | 1;
      *((_WORD *)v13 - 4) = 2;
      *v13 |= 0x8000000000000000uLL;
      MiSetPfnPteFrame((__int64)(v13 - 5), v10);
      v20 = *((_BYTE *)v13 - 6) & 0xFE;
      *(v13 - 4) = v12;
      *((_BYTE *)v13 - 6) = v20 | 6;
      _InterlockedAnd64(v13 - 2, 0x7FFFFFFFFFFFFFFFuLL);
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && CurrentIrql <= 0xFu
          && (unsigned __int8)v18 <= 0xFu
          && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
          v17 = (v24 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v24;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v18);
      v4 = v26;
      ++v6;
      v13 += 6;
      v12 += 8LL;
    }
    while ( v12 < v27 );
  }
}
