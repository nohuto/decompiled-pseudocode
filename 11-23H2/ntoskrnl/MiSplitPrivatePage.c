/*
 * XREFs of MiSplitPrivatePage @ 0x14021CE44
 * Callers:
 *     MiCopyToCfgBitMap @ 0x1406B13B0 (MiCopyToCfgBitMap.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MiCopyOnWrite @ 0x140270030 (MiCopyOnWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiGetProtoPteAddress @ 0x140273120 (MiGetProtoPteAddress.c)
 *     MiMakeSystemAddressValid @ 0x1402776C0 (MiMakeSystemAddressValid.c)
 *     MiVadPureReserve @ 0x140277E00 (MiVadPureReserve.c)
 *     MiIsPrototypePteVadLookup @ 0x14027D190 (MiIsPrototypePteVadLookup.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     MiGetNextPageTable @ 0x1402E5940 (MiGetNextPageTable.c)
 *     MiGetUsedPtesHandle @ 0x1402E5D00 (MiGetUsedPtesHandle.c)
 *     MiIncreaseUsedPtesCount @ 0x1402F1B64 (MiIncreaseUsedPtesCount.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     MiMakeProtoLeafValid @ 0x140362254 (MiMakeProtoLeafValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     MiCopyOnWriteCheckConditions @ 0x140667370 (MiCopyOnWriteCheckConditions.c)
 *     MiChargeFullProcessCommitment @ 0x1406F7A10 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1406F9680 (MiCommitPageTablesForVad.c)
 *     MiReturnFullProcessCommitment @ 0x140765044 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiSplitPrivatePage(ULONG_PTR a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 *v4; // r12
  ULONG_PTR v5; // r13
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r15
  char v9; // di
  int v10; // r9d
  ULONG_PTR v11; // rcx
  unsigned __int64 NextPageTable; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rbx
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // ebx
  __int64 UsedPtesHandle; // rax
  char v22; // di
  int v23; // r14d
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // r8
  _KPROCESS *v27; // rdi
  struct _KTHREAD *v29; // r8
  bool v30; // zf
  __int64 v31; // rdi
  struct _KTHREAD *v32; // r15
  ULONG_PTR v33; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v35; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  int v39; // edi
  __int16 v40; // ax
  unsigned __int64 v41; // rdi
  __int64 v42; // rcx
  int v43; // eax
  unsigned int v44; // ebx
  signed __int32 v45; // eax
  signed __int32 v46; // ett
  __int64 v47; // rax
  struct _KTHREAD *v48; // r8
  int v49; // [rsp+38h] [rbp-49h]
  int v50; // [rsp+40h] [rbp-41h]
  __int64 v51; // [rsp+48h] [rbp-39h] BYREF
  unsigned int v52; // [rsp+50h] [rbp-31h]
  int v53; // [rsp+54h] [rbp-2Dh]
  int v54; // [rsp+58h] [rbp-29h]
  struct _KTHREAD *v55; // [rsp+60h] [rbp-21h]
  _KPROCESS *Process; // [rsp+68h] [rbp-19h]
  int v57; // [rsp+70h] [rbp-11h] BYREF
  __int64 v58; // [rsp+78h] [rbp-9h]
  __int64 ProtoPteAddress; // [rsp+80h] [rbp-1h]
  __int64 v60[9]; // [rsp+90h] [rbp+Fh] BYREF
  char v63; // [rsp+F8h] [rbp+77h]
  int v64; // [rsp+100h] [rbp+7Fh]

  CurrentThread = KeGetCurrentThread();
  v55 = CurrentThread;
  v57 = 0;
  Process = CurrentThread->ApcState.Process;
  v4 = &Process[1].ActiveProcessors.StaticBitmap[26];
  v53 = MiVadPureReserve(a2);
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v60[0] = *(_QWORD *)(v6 + 72);
  v8 = 0LL;
  v50 = 0;
  v49 = 0;
  v54 = 0;
  v64 = MiChargeFullProcessCommitment(v7, 1LL);
  v58 = v64;
  v9 = MiLockWorkingSetShared(&Process[1].ActiveProcessors.StaticBitmap[26]);
  v63 = v9;
  while ( 1 )
  {
    while ( 1 )
    {
      LOBYTE(v10) = v9;
      v11 = v5;
      if ( !v53 )
        goto LABEL_47;
      NextPageTable = MiGetNextPageTable(v5, v5, 0, v10, 0, (__int64)&v57);
      if ( NextPageTable )
        v8 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v5 != NextPageTable )
      {
        if ( v8 )
          MiUnlockPageTableInternal(v4, v8);
        LOBYTE(v13) = v9;
        MiUnlockWorkingSetShared(v4, v13);
        if ( v58 < 0 )
          return (unsigned int)v64;
        v52 = 0;
        --CurrentThread->SpecialApcDisable;
        v31 = 0LL;
        v32 = KeGetCurrentThread();
        v33 = (ULONG_PTR)&Process[1].Affinity.StaticBitmap[8];
        v54 = 1;
        _disable();
        AbEntrySummary = v32->AbEntrySummary;
        if ( v32->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(0LL, v32)) != 0 )
        {
          _BitScanForward(&v35, AbEntrySummary);
          v52 = v35;
          v32->AbEntrySummary = AbEntrySummary & ~(1 << v35);
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v45 = *SchedulerAssist;
            do
            {
              v46 = v45;
              v45 = _InterlockedCompareExchange(SchedulerAssist, v45 & 0xFFDFFFFF, v45);
            }
            while ( v46 != v45 );
            if ( (v45 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
          _enable();
          v31 = (__int64)(&v32[1].Process + 12 * v52);
          if ( v33 - qword_140C659E8 < 0x8000000000LL )
            SessionId = MmGetSessionIdEx(v32->ApcState.Process);
          else
            SessionId = -1;
          *(_DWORD *)(v31 + 8) = SessionId;
          *(_QWORD *)v31 = v33 & 0x7FFFFFFFFFFFFFFCLL;
        }
        if ( _interlockedbittestandset64((volatile signed __int32 *)v33, 0LL) )
          ExfAcquirePushLockExclusiveEx(v33, v31, v33);
        if ( v31 )
          *(_BYTE *)(v31 + 18) = 1;
        v39 = MiCommitPageTablesForVad(a2, a1);
        if ( v39 < 0 )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v33, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v33);
          KeAbPostRelease(v33);
          v48 = v55;
          v30 = v55->SpecialApcDisable++ == -1;
          if ( v30 && ($C71981A45BEB2B45F82C232A7085991E *)v48->ApcState.ApcListHead[0].Flink != &v48->152 )
            KiCheckForKernelApcDelivery();
          if ( v64 >= 0 )
            MiReturnFullProcessCommitment(Process, 1LL);
          return (unsigned int)v39;
        }
        v8 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v63 = MiLockWorkingSetShared(v4);
        v11 = v5;
LABEL_47:
        MiMakeSystemAddressValid(v11, 0);
      }
      ProtoPteAddress = MiGetProtoPteAddress(a2, a1 >> 12, 0LL, v60);
      v14 = ProtoPteAddress;
      v51 = MI_READ_PTE_LOCK_FREE(v5);
      v17 = v51;
      if ( v51 )
        goto LABEL_7;
      if ( v58 < 0 )
      {
LABEL_96:
        if ( v8 )
          MiUnlockPageTableInternal(v4, v8);
        v44 = v64;
LABEL_99:
        LOBYTE(v15) = v63;
        MiUnlockWorkingSetShared(v4, v15);
        return v44;
      }
      UsedPtesHandle = MiGetUsedPtesHandle(a1);
      MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
      if ( v53 )
      {
        if ( !v14 )
          goto LABEL_16;
        v40 = MI_READ_PTE_LOCK_FREE(((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        if ( (v40 & 1) == 0 && (v40 & 0x3E0) == 0 )
          goto LABEL_16;
      }
      v17 = MiSwizzleInvalidPte(-4294966240LL);
      v51 = v17;
      v41 = v17;
      if ( (unsigned int)MiPteInShadowRange(v5) )
      {
        if ( (unsigned int)MiPteHasShadow(v42, v15, v16) )
        {
          v43 = 1;
          if ( !HIBYTE(word_140C66CFC) && (v17 & 1) != 0 )
            v41 = v17 | 0x8000000000000000uLL;
          goto LABEL_52;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v30 = (v17 & 1) == 0;
          v17 = v51;
          if ( !v30 )
            v41 |= 0x8000000000000000uLL;
        }
        else
        {
          v17 = v51;
        }
      }
      v43 = 0;
LABEL_52:
      *(_QWORD *)v5 = v41;
      if ( v43 )
        MiWritePteShadow(v5, v41);
      v14 = ProtoPteAddress;
LABEL_7:
      if ( (v17 & 1) == 0 )
        break;
      v18 = 6 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v51) >> 12) & 0xFFFFFFFFFFLL);
      if ( *(__int64 *)(8 * v18 - 0x220000000000LL + 40) >= 0
        || (*(_QWORD *)(8 * v18 - 0x220000000000LL + 8) | 0x8000000000000000uLL) != v14 )
      {
        goto LABEL_21;
      }
      if ( v58 < 0 )
        goto LABEL_96;
      v20 = MiCopyOnWrite(a1);
      if ( v20 >= 0 )
        goto LABEL_17;
      if ( v8 )
      {
        MiUnlockPageTableInternal(v4, v8);
        v8 = 0LL;
      }
      v9 = v63;
      LOBYTE(v19) = v63;
      MiUnlockWorkingSetShared(v4, v19);
      MiCopyOnWriteCheckConditions(v4, (unsigned int)v20);
      MiLockWorkingSetShared(v4);
      CurrentThread = v55;
    }
    if ( (v17 & 0x400) == 0 )
      goto LABEL_21;
    if ( !(unsigned int)MiIsPrototypePteVadLookup(v17, v15, v16) )
    {
      v15 = qword_140C65B40;
      v47 = v17;
      if ( qword_140C65B40 && (v17 & 0x10) == 0 )
        v47 = v17 & ~qword_140C65B40;
      if ( v47 >> 16 != v14 )
        goto LABEL_21;
    }
    v9 = v63;
    if ( (int)MiMakeProtoLeafValid(v5) < 0 && v17 == MI_READ_PTE_LOCK_FREE(v5) )
      break;
    CurrentThread = v55;
    if ( v8 )
    {
      MiUnlockPageTableInternal(v4, v8);
      v8 = 0LL;
    }
  }
  v44 = v64;
  if ( v64 < 0 )
  {
    if ( v8 )
      MiUnlockPageTableInternal(v4, v8);
    goto LABEL_99;
  }
LABEL_16:
  v50 = 1;
LABEL_17:
  v49 = 1;
  v15 = ((((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31) | *(_DWORD *)(a2 + 52) & 0x7FFFFFFF) + 1) >> 31;
  *(_DWORD *)(a2 + 52) ^= (*(_DWORD *)(a2 + 52) ^ (((*(unsigned __int8 *)(a2 + 34) << 31) | *(_DWORD *)(a2 + 52) & 0x7FFFFFFF)
                                                 + 1)) & 0x7FFFFFFF;
  *(_BYTE *)(a2 + 34) = v15;
  if ( v50 )
  {
    v51 = MiSwizzleInvalidPte(32LL);
    v22 = v51;
    v23 = 0;
    v24 = v51;
    if ( (unsigned int)MiPteInShadowRange(v5) )
    {
      if ( (unsigned int)MiPteHasShadow(v25, v15, v26) )
      {
        v23 = 1;
        if ( HIBYTE(word_140C66CFC) )
          goto LABEL_19;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
        goto LABEL_19;
      }
      if ( (v22 & 1) != 0 )
        v24 |= 0x8000000000000000uLL;
    }
LABEL_19:
    *(_QWORD *)v5 = v24;
    if ( v23 )
      MiWritePteShadow(v5, v24);
  }
LABEL_21:
  if ( v8 )
    MiUnlockPageTableInternal(v4, v8);
  LOBYTE(v15) = v63;
  MiUnlockWorkingSetShared(v4, v15);
  v27 = Process;
  if ( v54 )
  {
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&Process[1].Affinity.StaticBitmap[8],
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&v27[1].Affinity.StaticBitmap[8]);
    KeAbPostRelease((ULONG_PTR)&v27[1].Affinity.StaticBitmap[8]);
    v29 = v55;
    v30 = v55->SpecialApcDisable++ == -1;
    if ( v30 && ($C71981A45BEB2B45F82C232A7085991E *)v29->ApcState.ApcListHead[0].Flink != &v29->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( !v49 && v64 >= 0 )
    MiReturnFullProcessCommitment(v27, 1LL);
  return 0LL;
}
