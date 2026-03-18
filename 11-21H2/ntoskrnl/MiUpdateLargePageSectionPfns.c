/*
 * XREFs of MiUpdateLargePageSectionPfns @ 0x14058D990
 * Callers:
 *     MiCreatePagingFileMap @ 0x1406F3A44 (MiCreatePagingFileMap.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiGetPfnPageSizeIndex @ 0x140235E10 (MiGetPfnPageSizeIndex.c)
 *     MiSetPfnNodeBlinkLow @ 0x1402393AC (MiSetPfnNodeBlinkLow.c)
 *     MiConvertEntireLargePageToSmall @ 0x1402C6AA0 (MiConvertEntireLargePageToSmall.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiSetPfnTbFlushStamp @ 0x14033C33C (MiSetPfnTbFlushStamp.c)
 *     MiSetPfnPteFrame @ 0x14033C3E0 (MiSetPfnPteFrame.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUpdateLargePageSectionPfns(__int64 a1, unsigned __int64 a2, int a3)
{
  char v3; // bl
  unsigned __int64 v4; // r12
  __int64 v6; // r13
  unsigned __int64 ValidPte; // rdi
  __int64 v8; // rsi
  int PfnPageSizeIndex; // eax
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rbx
  __int64 result; // rax
  unsigned __int64 v13; // r14
  _QWORD *v14; // rbp
  int v15; // r12d
  unsigned __int64 v16; // rbx
  bool v17; // zf
  unsigned __int64 v18; // r12
  __int64 v19; // rdx
  char v20; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  __int64 v23; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v24; // [rsp+88h] [rbp+10h]
  unsigned __int64 v25; // [rsp+98h] [rbp+20h]

  v24 = a2;
  v3 = a3;
  v4 = a2;
  v6 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  ValidPte = MiMakeValidPte(0LL, v6, a3 | 0x80000000);
  v8 = MiSwizzleInvalidPte(32LL * (v3 & 0x1F));
  PfnPageSizeIndex = MiGetPfnPageSizeIndex(a1);
  v10 = -1LL;
  v25 = v4 + 8 * MiLargePageSizes[PfnPageSizeIndex];
  v11 = v25;
  result = MiConvertEntireLargePageToSmall(a1, PfnPageSizeIndex, 0, 1, 0LL, 0LL, 0LL);
  v13 = v4;
  if ( v4 < v11 )
  {
    v14 = (_QWORD *)(a1 + 40);
    do
    {
      if ( v10 == -1LL || (v13 & 0xFFF) == 0 )
      {
        v23 = MI_READ_PTE_LOCK_FREE(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v10 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v23) >> 12) & 0xFFFFFFFFFFLL;
      }
      v15 = 0;
      ValidPte ^= (ValidPte ^ (v6 << 12)) & 0xFFFFFFFFFF000LL;
      v16 = ValidPte;
      if ( !MiPteInShadowRange(v13) )
        goto LABEL_14;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v15 = 1;
        if ( !HIBYTE(word_140C51864) )
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
          v16 = ValidPte | 0x8000000000000000uLL;
      }
LABEL_14:
      *(_QWORD *)v13 = v16;
      if ( v15 )
        MiWritePteShadow(v13, v16);
      v18 = (unsigned __int8)MiLockPageInline((__int64)(v14 - 5));
      MiSetPfnTbFlushStamp((__int64)(v14 - 5), 0, 1);
      MiSetPfnNodeBlinkLow((__int64)(v14 - 5), 0);
      v19 = *(v14 - 2);
      *(v14 - 5) = 0LL;
      *(v14 - 3) = v8;
      *(v14 - 2) = v19 & 0xC000000000000000uLL | 1;
      *((_WORD *)v14 - 4) = 2;
      *v14 |= 0x8000000000000000uLL;
      MiSetPfnPteFrame((__int64)(v14 - 5), v10);
      v20 = *((_BYTE *)v14 - 6) & 0xFE;
      *(v14 - 4) = v13;
      *((_BYTE *)v14 - 6) = v20 | 6;
      _InterlockedAnd64(v14 - 2, 0x7FFFFFFFFFFFFFFFuLL);
      result = (unsigned int)KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v18 <= 0xFu && (unsigned __int8)result >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
            v17 = ((unsigned int)result & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= result;
            if ( v17 )
              result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v18);
      v4 = v24;
      ++v6;
      v14 += 6;
      v13 += 8LL;
    }
    while ( v13 < v25 );
  }
  return result;
}
