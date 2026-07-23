/*
 * XREFs of MmSetAddressRangeModifiedEx @ 0x14027F460
 * Callers:
 *     CcFlushCacheOneRange @ 0x14029E8E0 (CcFlushCacheOneRange.c)
 *     CcPurgeAndClearCacheSection @ 0x1402F1564 (CcPurgeAndClearCacheSection.c)
 *     CcZeroDataInCache @ 0x1402FC1A8 (CcZeroDataInCache.c)
 *     MmSetAddressRangeModified @ 0x140363D50 (MmSetAddressRangeModified.c)
 *     CcUnpinRepinnedBcb @ 0x140394370 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MiGetSystemCacheReverseMap @ 0x1402626A0 (MiGetSystemCacheReverseMap.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiMakeProtectionMask @ 0x140276C10 (MiMakeProtectionMask.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiCaptureDirtyBitToPfn @ 0x140283390 (MiCaptureDirtyBitToPfn.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x140284A5C (MI_TIGHTER_PERMISSIONS.c)
 *     MiWriteValidPteNewProtection @ 0x140284A90 (MiWriteValidPteNewProtection.c)
 *     MiLockWorkingSetOptimal @ 0x140285BFC (MiLockWorkingSetOptimal.c)
 *     MiReleasePageFileInfo @ 0x14029556C (MiReleasePageFileInfo.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MmSetAddressRangeModifiedEx(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r13
  int v5; // edi
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // r12
  __int64 CurrentIrql; // r10
  bool v16; // zf
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 Flink; // rdx
  _KPROCESS *Process; // rcx
  __int64 v22; // r8
  unsigned __int64 v23; // rbx
  _DWORD *SchedulerAssist; // r9
  __int64 v26; // rdx
  unsigned __int8 v27; // dl
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *v29; // r9
  int v30; // eax
  int v31; // eax
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  unsigned __int8 v34[4]; // [rsp+20h] [rbp-138h] BYREF
  int v35; // [rsp+24h] [rbp-134h]
  int ProtectionMask; // [rsp+28h] [rbp-130h]
  int v37; // [rsp+2Ch] [rbp-12Ch] BYREF
  int v38; // [rsp+30h] [rbp-128h]
  __int64 v39; // [rsp+38h] [rbp-120h]
  __int64 v40; // [rsp+40h] [rbp-118h]
  __int64 v41; // [rsp+48h] [rbp-110h]
  __int64 v42; // [rsp+50h] [rbp-108h]
  int v43; // [rsp+60h] [rbp-F8h] BYREF
  __int16 v44; // [rsp+64h] [rbp-F4h]
  __int16 v45; // [rsp+66h] [rbp-F2h]
  __int64 v46; // [rsp+68h] [rbp-F0h]
  __int64 v47; // [rsp+70h] [rbp-E8h]
  __int64 v48; // [rsp+78h] [rbp-E0h]
  _BYTE v49[152]; // [rsp+80h] [rbp-D8h] BYREF

  v3 = a2 - 1;
  v34[0] = 0;
  v45 = 0;
  memset(v49, 0, sizeof(v49));
  LOBYTE(v2) = 0;
  v35 = v2;
  ProtectionMask = MiMakeProtectionMask(4u);
  v46 = 20LL;
  v43 = 0;
  v5 = ProtectionMask;
  v44 = 0;
  v47 = 0LL;
  v48 = 0LL;
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = (((a1 + v3) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v9 = 0LL;
  v41 = MiLockWorkingSetOptimal(&unk_140C6F800, v6, v34);
  v10 = *(_QWORD *)(MiGetSystemCacheReverseMap(v8) + 24);
  v11 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v10 & 1) == 0 )
    v11 = v10;
  v42 = *(_QWORD *)(qword_140C673C8 + 8LL * (*(_WORD *)(*(_QWORD *)v11 + 60LL) & 0x3FF)) + 17344LL;
  do
  {
    v12 = *(_QWORD *)v6;
    if ( (*(_QWORD *)v6 & 1) != 0 )
    {
      v38 = 0;
      v13 = 0LL;
      v14 = (v12 >> 12) & 0xFFFFFFFFFFLL;
      v2 = 48 * v14 - 0x220000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      v39 = CurrentIrql;
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( (_BYTE)CurrentIrql == 2 )
          LODWORD(v26) = 4;
        else
          v26 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v26;
      }
      v37 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v37);
          while ( *(__int64 *)(v2 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 24), 0x3FuLL) );
        LOBYTE(CurrentIrql) = v39;
      }
      v16 = (*(_BYTE *)(v2 + 34) & 0x10) == 0;
      v17 = *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v2 + 40) >> 43) & 0x3FFLL));
      v40 = v17;
      if ( v16 || (*(_DWORD *)(v2 + 16) & 0x400LL) == 0 )
      {
        v18 = MiCaptureDirtyBitToPfn(v2);
        LOBYTE(CurrentIrql) = v39;
        v13 = v18;
        v17 = v40;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (_DWORD)KiIrqlFlags )
      {
        v27 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v27 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v27 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v29 = CurrentPrcb->SchedulerAssist;
          v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
          v16 = (v30 & v29[5]) == 0;
          v29[5] &= v30;
          if ( v16 )
          {
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            LOBYTE(CurrentIrql) = v39;
          }
          v17 = v40;
        }
      }
      __writecr8((unsigned __int8)CurrentIrql);
      if ( v13 )
        MiReleasePageFileInfo(v17, v13, 0LL);
      v5 = ProtectionMask;
      if ( ProtectionMask != 2 || (v12 & 0x800) == 0 )
      {
        if ( (v12 & 0x42) == 0 )
        {
          LOBYTE(v2) = v35;
          goto LABEL_19;
        }
        v19 = *(_QWORD *)v6;
        if ( !MiPteInShadowRange(v6) )
        {
          v23 = v19 & 0x7F00000000000000LL | v12 & 0x80FFFFFFFFFFFFBDuLL;
          goto LABEL_16;
        }
        if ( (MiFlags & 0x600000) != 0 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( Process->AddressPolicy != 1 && (v19 & 1) != 0 && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            Flink = (__int64)Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v32 = *(_QWORD *)(Flink + 8 * ((v6 >> 3) & 0x1FF));
              Flink = v19 | 0x20;
              if ( (v32 & 0x20) == 0 )
                Flink = v19;
              v19 = Flink;
              if ( (v32 & 0x42) != 0 )
                v19 = Flink | 0x42;
            }
          }
        }
        v23 = v19 & 0x7F00000000000000LL | v12 & 0x80FFFFFFFFFFFFBDuLL;
        if ( (unsigned int)MiPteHasShadow(Process, Flink, v22) )
        {
          v33 = v23;
          if ( !HIBYTE(word_140C66CFC) && (v23 & 1) != 0 )
            v33 = v23 | 0x8000000000000000uLL;
          *(_QWORD *)v6 = v33;
          MiWritePteShadow(v6, v33);
        }
        else
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v23 & 1) != 0 )
          {
            v23 |= 0x8000000000000000uLL;
          }
LABEL_16:
          *(_QWORD *)v6 = v23;
        }
        v5 = ProtectionMask;
        LOBYTE(v2) = 1;
        v35 = v2;
LABEL_18:
        MiInsertTbFlushEntry(&v43, v8, 1LL, 0LL);
        goto LABEL_19;
      }
      v9 = (v14 << 12) | v9 & 0xFFF0000000000FFFuLL;
      MiWriteValidPteNewProtection(v6, v9);
      if ( (MiFlags & 0x300) == 0 || (unsigned int)MI_TIGHTER_PERMISSIONS(v12, v9) )
        v31 = 1;
      else
        v31 = v38;
      LODWORD(v2) = (unsigned __int8)v35;
      if ( (v12 & 0x42) != 0 )
        LODWORD(v2) = 1;
      v35 = v2;
      if ( v31 )
        goto LABEL_18;
    }
    else if ( v5 == 2 && (v12 & 8) == 0 )
    {
      *(_QWORD *)v6 = v12 | 8;
    }
LABEL_19:
    v6 += 8LL;
    v8 += 4096LL;
  }
  while ( v6 <= v7 );
  MiFlushTbList(&v43);
  MiUnlockPageTableInternal(v42, v41);
  MiUnlockWorkingSetShared(v42, v34[0]);
  return (unsigned __int8)v2;
}
