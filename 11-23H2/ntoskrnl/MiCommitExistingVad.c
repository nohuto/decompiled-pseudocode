/*
 * XREFs of MiCommitExistingVad @ 0x140276CC0
 * Callers:
 *     MiAllocateFromSubAllocatedRegion @ 0x1406AB290 (MiAllocateFromSubAllocatedRegion.c)
 *     MiAllocateVirtualMemory @ 0x1406F7430 (MiAllocateVirtualMemory.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140A3E384 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140A3E748 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     MiFreeLargeZeroPages @ 0x140212098 (MiFreeLargeZeroPages.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPageProtection @ 0x140272CB0 (MiGetPageProtection.c)
 *     MiMakeProtectionMask @ 0x140276C10 (MiMakeProtectionMask.c)
 *     MiMakeSystemAddressValid @ 0x1402776C0 (MiMakeSystemAddressValid.c)
 *     ExpTryAcquireSpinLockShared @ 0x1402778C0 (ExpTryAcquireSpinLockShared.c)
 *     MiVadPureReserve @ 0x140277E00 (MiVadPureReserve.c)
 *     MiSanitizePfnProtection @ 0x140278C90 (MiSanitizePfnProtection.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiComputePageCommitment @ 0x1402E4D40 (MiComputePageCommitment.c)
 *     MiIsPteDecommittedPage @ 0x1402E4F94 (MiIsPteDecommittedPage.c)
 *     MmIsAddressValidEx @ 0x1402E6240 (MmIsAddressValidEx.c)
 *     MiPopLargePfnList @ 0x1402E729C (MiPopLargePfnList.c)
 *     MiIncreaseUsedPtesCount @ 0x1402F1B64 (MiIncreaseUsedPtesCount.c)
 *     PsReferencePartitionSafe @ 0x1402F9EAC (PsReferencePartitionSafe.c)
 *     PsDereferencePartition @ 0x1402F9EDC (PsDereferencePartition.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     MiLocateLockedVadEvent @ 0x14030B6B4 (MiLocateLockedVadEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140317000 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14046B8F2 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiComputePreferredNode @ 0x140617CE0 (MiComputePreferredNode.c)
 *     MiFlushGraphicsPtes @ 0x140626978 (MiFlushGraphicsPtes.c)
 *     MiLockWorkingSetForLargeMapping @ 0x140650698 (MiLockWorkingSetForLargeMapping.c)
 *     MiReturnCrossPartitionCharges @ 0x14065B8A4 (MiReturnCrossPartitionCharges.c)
 *     MiGetVadLargePageMinimumIndex @ 0x140661124 (MiGetVadLargePageMinimumIndex.c)
 *     MiCreateLargePfnList @ 0x140667F3C (MiCreateLargePfnList.c)
 *     MiInsertLargeUserMapping @ 0x140669040 (MiInsertLargeUserMapping.c)
 *     MiChargeFullProcessCommitment @ 0x1406F7A10 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1406F9680 (MiCommitPageTablesForVad.c)
 *     MiReturnFullProcessCommitment @ 0x140765044 (MiReturnFullProcessCommitment.c)
 *     MiChargeProcessPhysicalPages @ 0x140A43B54 (MiChargeProcessPhysicalPages.c)
 *     MiReturnProcessPhysicalPages @ 0x140A43ED0 (MiReturnProcessPhysicalPages.c)
 */

__int64 __fastcall MiCommitExistingVad(
        ULONG_PTR a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        int a7,
        char a8,
        volatile signed __int64 **a9,
        _DWORD *a10,
        _WORD *a11)
{
  int v13; // r10d
  unsigned int ProtectionMask; // eax
  unsigned int v15; // r9d
  int v16; // eax
  unsigned __int64 v17; // r10
  __int64 v18; // r11
  char v19; // si
  bool v20; // sf
  _KPROCESS *Process; // r9
  __int64 v22; // rbx
  unsigned __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // r15
  ULONG_PTR v27; // rsi
  unsigned __int64 v28; // rdx
  _KPROCESS *v29; // rbx
  _WORD *v30; // rdx
  struct _KTHREAD *v31; // rcx
  ULONG_PTR v32; // r14
  __int64 v33; // rbx
  struct _KTHREAD *v34; // rdi
  unsigned int AbEntrySummary; // eax
  unsigned int v36; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  __int64 v40; // r12
  unsigned __int16 v41; // r15
  __int64 v42; // r13
  _WORD *v43; // r14
  int v44; // ebx
  unsigned __int8 v45; // al
  volatile __int32 *v46; // rbx
  unsigned __int8 CurrentIrql; // r14
  __int64 v48; // rcx
  bool v49; // zf
  __int64 v50; // r14
  unsigned __int64 v51; // rbx
  int v52; // r9d
  unsigned __int64 v53; // r8
  __int64 v54; // rax
  _WORD *v55; // rbx
  struct _KTHREAD *v56; // rcx
  _WORD *v57; // rbx
  unsigned int v58; // ecx
  __int64 v59; // rdx
  unsigned __int64 v60; // rdx
  __int64 result; // rax
  signed __int32 v62; // eax
  signed __int32 v63; // ett
  unsigned __int64 v64; // rbx
  int PageProtection; // eax
  unsigned __int8 v66; // al
  __int64 *v67; // rdx
  unsigned __int8 v68; // di
  __int64 v69; // rbx
  __int64 v70; // r9
  unsigned int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // r10
  __int64 v74; // rax
  __int64 v75; // rcx
  unsigned int v76; // r10d
  __int64 v77; // rdi
  __int64 v78; // rcx
  __int64 LockedVadEvent; // rax
  __int64 v80; // rcx
  __int64 v81; // r9
  __int64 v82; // r9
  int VadLargePageMinimumIndex; // eax
  __int64 v84; // r10
  int LargePfnList; // ebx
  struct _KTHREAD *v86; // rcx
  unsigned __int64 v87; // r8
  struct _KPRCB *v88; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v90; // eax
  unsigned __int8 v91; // cl
  _DWORD *v92; // r9
  __int64 v93; // rdx
  _DWORD *v94; // r9
  __int64 v95; // rdx
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v97; // rcx
  struct _LIST_ENTRY *v98; // rdx
  __int64 v99; // rax
  __int64 v100; // rax
  unsigned int v101; // r9d
  _QWORD *v102; // rcx
  _KPROCESS *v103; // [rsp+50h] [rbp-B0h]
  __int64 v104; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v105; // [rsp+58h] [rbp-A8h]
  volatile signed __int64 **v106; // [rsp+60h] [rbp-A0h]
  __int64 v107; // [rsp+60h] [rbp-A0h]
  int v108; // [rsp+68h] [rbp-98h]
  __int64 v110; // [rsp+78h] [rbp-88h]
  ULONG_PTR v111; // [rsp+80h] [rbp-80h]
  volatile signed __int64 *v112; // [rsp+88h] [rbp-78h]
  __int64 v113; // [rsp+88h] [rbp-78h]
  __int16 v114; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v115; // [rsp+94h] [rbp-6Ch]
  int v116; // [rsp+98h] [rbp-68h]
  int v117; // [rsp+9Ch] [rbp-64h]
  unsigned __int64 v118; // [rsp+A0h] [rbp-60h]
  _WORD *v119; // [rsp+A8h] [rbp-58h]
  unsigned int v120; // [rsp+B0h] [rbp-50h]
  int v121; // [rsp+B4h] [rbp-4Ch]
  int v122; // [rsp+B8h] [rbp-48h] BYREF
  int v123; // [rsp+BCh] [rbp-44h]
  _WORD *v124; // [rsp+C0h] [rbp-40h]
  __int64 v125; // [rsp+C8h] [rbp-38h]
  __int64 v126; // [rsp+D0h] [rbp-30h] BYREF
  int v127; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v128; // [rsp+E0h] [rbp-20h]
  ULONG_PTR v129; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v130; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD *v131; // [rsp+F8h] [rbp-8h]
  struct _KTHREAD *CurrentThread; // [rsp+100h] [rbp+0h]
  ULONG_PTR v133; // [rsp+108h] [rbp+8h]
  unsigned __int64 *v134; // [rsp+110h] [rbp+10h] BYREF
  __int64 v135; // [rsp+118h] [rbp+18h]
  __int64 v136; // [rsp+120h] [rbp+20h]
  _QWORD v137[3]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v138; // [rsp+140h] [rbp+40h] BYREF
  __int64 v139; // [rsp+148h] [rbp+48h]
  __int64 v140; // [rsp+150h] [rbp+50h] BYREF
  __int128 v141; // [rsp+158h] [rbp+58h]
  _QWORD v142[3]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v143[3]; // [rsp+188h] [rbp+88h] BYREF
  _QWORD v144[3]; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD v145[3]; // [rsp+1B8h] [rbp+B8h] BYREF

  v131 = a10;
  v119 = a11;
  v13 = *(_DWORD *)(a1 + 48);
  v134 = 0LL;
  v116 = v13 & 0x2200000;
  v122 = 0;
  v141 = 0LL;
  ProtectionMask = MiMakeProtectionMask(a4);
  v16 = MiSanitizePfnProtection(a1, v15, ProtectionMask);
  v19 = v16;
  v121 = v16;
  v20 = *(int *)(a1 + 52) < 0;
  v112 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v103 = Process;
  if ( v20 )
  {
    v23 = 8 * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) & 0xFFFFFFFFFLL)
        - 0x98000000000LL;
    v22 = 0LL;
  }
  else
  {
    v22 = 0LL;
    v23 = 0LL;
  }
  v129 = v23;
  v24 = 32LL * (v16 & 0x1F);
  v139 = 32LL * (v19 & 0x1F);
  if ( qword_140C65B40 )
  {
    if ( (qword_140C65B40 & v24) != 0 )
      v24 |= 0x10uLL;
    else
      v24 |= qword_140C65B40;
  }
  v25 = v24 | 0x4000000;
  if ( (v17 & 0xA200000) != 0x8200000 )
    v25 = v24;
  v136 = v25;
  v125 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v26 = (a2 + v18 - 1) | 0xFFF;
  v27 = v125;
  v28 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v142[2] = 0LL;
  v133 = v28;
  v110 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
  v143[2] = 0LL;
  v142[1] = v142;
  v135 = ((__int64)(((v26 >> 9) & 0x7FFFFFFFF8LL) - ((a2 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1;
  v142[0] = v142;
  v143[1] = v143;
  v143[0] = v143;
  v144[1] = v144;
  v144[0] = v144;
  v145[1] = v145;
  v145[0] = v145;
  v144[2] = 0LL;
  v145[2] = 0LL;
  v106 = 0LL;
  v126 = 0LL;
  if ( (v17 & 0xA00000) == 0xA00000 )
  {
    v73 = (v17 >> 19) & 3;
    v74 = 16LL;
    v75 = MiVadPageSizes[v73];
    v76 = MiVadPageIndices[v73];
    v104 = v75;
    if ( v75 != 16 )
      v74 = 1LL;
    v115 = v76;
    v77 = a6 & 0x1A;
    v128 = v74;
    if ( v76 > 1 )
    {
      if ( v77 != 2 )
        return 3221225485LL;
    }
    else
    {
      if ( v76 == 1 )
      {
        if ( v77 != 8 )
          return 3221225485LL;
      }
      else if ( v77 != 16 )
      {
        return 3221225485LL;
      }
      v78 = 2 - v76;
      do
      {
        v27 = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v28 = ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v23 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v78;
      }
      while ( v78 );
      v129 = v23;
      v133 = v28;
    }
    if ( a9 == (volatile signed __int64 **)1 )
    {
      LockedVadEvent = MiLocateLockedVadEvent(a1, 16LL);
      if ( LockedVadEvent )
      {
        v106 = *(volatile signed __int64 ***)(LockedVadEvent + 24);
        v22 = (__int64)v106;
        if ( v106 )
          goto LABEL_134;
      }
      else
      {
        v106 = 0LL;
      }
    }
    else if ( a9 )
    {
      v106 = a9;
      v22 = (__int64)a9;
      goto LABEL_134;
    }
    v22 = *(_QWORD *)(*(_QWORD *)(qword_140C673C8 + 8LL * v103[1].IdealProcessor[25]) + 200LL);
LABEL_134:
    v126 = v22;
    goto LABEL_106;
  }
  if ( (a6 & 0x1A) != 0 )
    return 3221225485LL;
  v115 = 3;
  v104 = 1LL;
  v128 = 1LL;
  if ( (int)MiChargeFullProcessCommitment(
              Process,
              ((__int64)(((v26 >> 9) & 0x7FFFFFFFF8LL) - ((a2 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1) >= 0 )
  {
    v117 = 1;
    v118 = ((__int64)(((v26 >> 9) & 0x7FFFFFFFF8LL) - ((a2 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1;
LABEL_12:
    v29 = v103;
    goto LABEL_13;
  }
LABEL_106:
  v117 = 0;
  v66 = MiLockWorkingSetShared(v110);
  v67 = &v126;
  v68 = v66;
  if ( !v22 )
    v67 = 0LL;
  v69 = MiComputePageCommitment((unsigned int)a2 & 0xFFFFF000, v26, a1, v66, 0, 0LL, (__int64)v67);
  MiUnlockWorkingSetShared(v110, v68);
  v70 = v135 - v69;
  v118 = v135 - v69;
  if ( !v126 && v104 != 1 )
    return 3221225496LL;
  v29 = v103;
  if ( !v70 )
    goto LABEL_13;
  if ( v104 == 1 )
  {
    result = MiChargeFullProcessCommitment(v103, v70);
    if ( (int)result < 0 )
      return result;
LABEL_13:
    v123 = 0;
    if ( !(unsigned int)MiVadPureReserve(a1) )
      goto LABEL_25;
    v31 = CurrentThread;
    v32 = (ULONG_PTR)&v29[1].Affinity.StaticBitmap[8];
    v123 = 1;
    v33 = (unsigned int)v30;
    v120 = (unsigned int)v30;
    --CurrentThread->SpecialApcDisable;
    v34 = KeGetCurrentThread();
    _disable();
    AbEntrySummary = v34->AbEntrySummary;
    if ( v34->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v31, v34)) != 0 )
    {
      _BitScanForward(&v36, AbEntrySummary);
      v120 = v36;
      v34->AbEntrySummary = AbEntrySummary & ~(1 << v36);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v62 = *SchedulerAssist;
        do
        {
          v63 = v62;
          v62 = _InterlockedCompareExchange(SchedulerAssist, v62 & 0xFFDFFFFF, v62);
        }
        while ( v63 != v62 );
        if ( (v62 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      _enable();
      v33 = (__int64)(&v34[1].Process + 12 * v120);
      if ( v32 - qword_140C659E8 < 0x8000000000LL )
        SessionId = MmGetSessionIdEx(v34->ApcState.Process);
      else
        SessionId = -1;
      *(_DWORD *)(v33 + 8) = SessionId;
      *(_QWORD *)v33 = v32 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)v32, 0LL) )
      ExfAcquirePushLockExclusiveEx(v32, v33, v32);
    if ( v33 )
      *(_BYTE *)(v33 + 18) = 1;
    if ( (int)MiCommitPageTablesForVad(a1, a2) >= 0 )
    {
      v30 = 0LL;
LABEL_25:
      v40 = v125;
      v41 = (unsigned __int16)v30;
      v42 = v104;
      v43 = v30;
      v124 = v30;
      v119 = v30;
      v111 = (ULONG_PTR)v30;
      v107 = (__int64)v30;
LABEL_26:
      v44 = (int)v30;
      v113 = (__int64)v30;
      LODWORD(v125) = (_DWORD)v30;
      v108 = (int)v30;
      if ( !v115 )
      {
        v71 = MiComputePreferredNode(a1);
        v108 = 1;
        v105 = MiLockWorkingSetForLargeMapping(v110, v72, v71);
        if ( v105 != 17 )
          goto LABEL_38;
      }
      v45 = v103[1].IdealProcessor[30] & 7;
      if ( v45 <= 4u )
      {
        if ( v45 == 2 )
          v46 = (volatile __int32 *)&unk_140C6A180;
        else
LABEL_29:
          v46 = (volatile __int32 *)&v103[1].IdealNode[2];
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v94 = KeGetCurrentPrcb()->SchedulerAssist;
          if ( CurrentIrql == 2 )
            LODWORD(v95) = 4;
          else
            v95 = (-1LL << (CurrentIrql + 1)) & 4;
          v94[5] |= v95;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v46, CurrentIrql);
        }
        else if ( !(unsigned __int8)ExpTryAcquireSpinLockShared(v46) )
        {
          ExpWaitForSpinLockSharedAndAcquire(v48, CurrentIrql);
        }
        if ( *((_DWORD *)v46 + 1) )
          _InterlockedExchange(v46 + 1, 0);
        v105 = CurrentIrql;
        goto LABEL_37;
      }
      if ( v45 == 5 )
        goto LABEL_29;
      v91 = KeGetCurrentIrql();
      v105 = v91;
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v91 <= 0xFu )
      {
        v92 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v91 == 2 )
          LODWORD(v93) = 4;
        else
          v93 = (-1LL << (v91 + 1)) & 4;
        v92[5] |= v93;
      }
      while ( 1 )
      {
LABEL_38:
        if ( v27 > v133 )
        {
          if ( v41 )
          {
            v55 = v119;
            v127 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)v55 + 6, 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v127);
              while ( *((__int64 *)v55 + 3) < 0 );
            }
            *((_QWORD *)v55 + 2) ^= ((unsigned int)*((_QWORD *)v55 + 2) ^ ((unsigned int)*((_QWORD *)v55 + 2)
                                                                         + (v41 << 16))) & 0x3FF0000;
            _InterlockedAnd64((volatile signed __int64 *)v55 + 3, 0x7FFFFFFFFFFFFFFFuLL);
            if ( v41 <= 1u )
              MmIsAddressValidEx(*((_QWORD *)v55 + 1) | 0x8000000000000000uLL);
          }
          if ( v116 == 35651584 && v107 )
            MiFlushGraphicsPtes(v43, v107);
          if ( v108 == 1 )
          {
            MiUnlockWorkingSetExclusive(v110, v105);
          }
          else
          {
            if ( v113 )
              MiUnlockPageTableInternal(v110, v113);
            MiUnlockWorkingSetShared(v110, v105);
          }
          if ( v123 )
          {
            if ( (_InterlockedExchangeAdd64(
                    (volatile signed __int64 *)&v103[1].Affinity.StaticBitmap[8],
                    0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(&v103[1].Affinity.StaticBitmap[8]);
            KeAbPostRelease((ULONG_PTR)&v103[1].Affinity.StaticBitmap[8]);
            v56 = CurrentThread;
            v49 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v49 && ($C71981A45BEB2B45F82C232A7085991E *)v56->ApcState.ApcListHead[0].Flink != &v56->152 )
              KiCheckForKernelApcDelivery();
          }
          if ( v117 )
          {
            v57 = v124;
            if ( v124 )
              MiReturnFullProcessCommitment(v103, v124);
            v118 = v135 - (_QWORD)v57;
          }
          v58 = *(_DWORD *)(a1 + 52);
          v59 = v58;
          LODWORD(v59) = v58 & 0x7FFFFFFF;
          v60 = v118 + (((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31) | v59);
          *(_BYTE *)(a1 + 34) = v60 >> 31;
          *(_DWORD *)(a1 + 52) = v58 ^ (v60 ^ v58) & 0x7FFFFFFF;
          return 0LL;
        }
        if ( !v44 || (v27 & 0xFFF) == 0 )
        {
          if ( v41 )
          {
            MiIncreaseUsedPtesCount(v119, v41);
            v41 = 0;
          }
          if ( v116 == 35651584 && v107 )
          {
            MiFlushGraphicsPtes(v43, v107);
            v43 = 0LL;
            v111 = 0LL;
          }
          v52 = v108;
          if ( v108 != 1 )
          {
            if ( v113 )
            {
              MiUnlockPageTableInternal(v110, v113);
              v52 = v108;
            }
            v113 = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          }
          MiMakeSystemAddressValid(v27, v52);
          if ( v27 < 0xFFFFF6FB7DBED000uLL || v27 > 0xFFFFF6FB7DBEDFFFuLL )
          {
            v53 = ((((__int64)(v27 << 25) >> 16) & 0xFFFFFFE00000uLL) >> 18) - 0x904C0000000LL;
            v54 = *(_QWORD *)v53;
            if ( v53 >= 0xFFFFF6FB7DBED000uLL
              && v53 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0x600000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v54 & 1) != 0
              && ((v54 & 0x20) == 0 || (v54 & 0x42) == 0) )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                v97 = *((_QWORD *)&Flink->Flink + ((v53 >> 3) & 0x1FF));
                if ( (v97 & 0x20) != 0 )
                  v54 |= 0x20uLL;
                if ( (v97 & 0x42) != 0 )
                  v54 |= 0x42uLL;
              }
            }
            v138 = v54;
            v119 = (_WORD *)(48
                           * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v138) >> 12) & 0xFFFFFFFFFFLL)
                           - 0x220000000000LL);
          }
          LODWORD(v125) = 1;
        }
        v49 = v43 == 0LL;
        v50 = v128;
        if ( v49 )
        {
          v111 = v27;
          v107 = v128;
        }
        else
        {
          v107 += v128;
        }
        v51 = *(_QWORD *)v27;
        if ( v27 >= 0xFFFFF6FB7DBED000uLL
          && v27 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0x600000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v51 & 1) != 0
          && ((v51 & 0x20) == 0 || (v51 & 0x42) == 0) )
        {
          v98 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v98 )
          {
            v99 = *((_QWORD *)&v98->Flink + ((v27 >> 3) & 0x1FF));
            if ( (v99 & 0x20) != 0 )
              v51 |= 0x20uLL;
            if ( (v99 & 0x42) != 0 )
              v51 |= 0x42uLL;
          }
        }
        v130 = v51;
        if ( !v51 )
          break;
        if ( !(unsigned int)MiIsPteDecommittedPage(&v130) )
        {
          v124 = (_WORD *)((char *)v124 + v42);
          if ( !*v131 )
          {
            v114 = 0;
            PageProtection = MiGetPageProtection(a1, v27, &v134, &v122, &v114);
            if ( v134 )
            {
              if ( v41 )
              {
                MiIncreaseUsedPtesCount(v119, v41);
                v43 = 0LL;
                v41 = 0;
              }
              else
              {
                v43 = 0LL;
              }
              if ( v116 == 35651584 && v107 )
              {
                MiFlushGraphicsPtes(v111, v107);
                v111 = 0LL;
              }
              else
              {
                v43 = (_WORD *)v111;
              }
              if ( v108 == 1 )
              {
                MiUnlockWorkingSetExclusive(v110, v105);
              }
              else
              {
                MiUnlockPageTableInternal(v110, v113);
                MiUnlockWorkingSetShared(v110, v105);
              }
              v30 = 0LL;
              goto LABEL_26;
            }
            if ( v121 != PageProtection || v122 != a5 )
              *v131 = 1;
          }
          goto LABEL_51;
        }
        if ( v42 != 1 )
          goto LABEL_228;
        v64 = v139 | v51 & 0xFFFFFFFFFFFFFC1FuLL;
        v130 = v64;
        if ( (*(_DWORD *)(a1 + 48) & 0xA200000) == 0x8200000 )
        {
          v64 |= 0x4000000uLL;
          v130 = v64;
        }
        *(_QWORD *)v27 = v64;
        v40 += 8LL;
        v27 += 8 * v50;
LABEL_37:
        v43 = (_WORD *)v111;
        v44 = v125;
      }
      if ( v27 <= v129 )
        v124 = (_WORD *)((char *)v124 + v42);
      if ( v42 == 1 )
      {
        if ( v27 < 0xFFFFF6FB7DBED000uLL || v27 > 0xFFFFF6FB7DBEDFFFuLL )
          v41 += v128;
        *(_QWORD *)v27 = v136;
      }
      else
      {
LABEL_228:
        v100 = MiPopLargePfnList(v142, v115);
        v101 = v115;
        v102 = (_QWORD *)(48 * v100 - 0x220000000000LL);
        v137[0] = v102;
        v137[1] = v102;
        *v102 = v137;
        v102[1] = v137;
        MiInsertLargeUserMapping(a1, v40, (unsigned int)v137, v101, v121);
      }
LABEL_51:
      v27 += 8 * v50;
      v40 += 8 * v42;
      goto LABEL_37;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v32, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v32);
    KeAbPostRelease(v32);
    v86 = CurrentThread;
    v49 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v49 && ($C71981A45BEB2B45F82C232A7085991E *)v86->ApcState.ApcListHead[0].Flink != &v86->152 )
      KiCheckForKernelApcDelivery();
    if ( v118 )
    {
      if ( v104 != 1 )
      {
        MiFreeLargeZeroPages((int)v112, (__int64)v142, 1u);
        v87 = v118;
        if ( v112 != (volatile signed __int64 *)&MiSystemPartition )
          goto LABEL_176;
        v88 = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)v88->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable == -1 )
          goto LABEL_176;
        if ( v118 + CachedResidentAvailable <= 0x100 && v118 < 0x80000 )
        {
          do
          {
            v90 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v88->CachedResidentAvailable,
                    v118 + CachedResidentAvailable,
                    CachedResidentAvailable);
            v49 = (_DWORD)CachedResidentAvailable == v90;
            LODWORD(CachedResidentAvailable) = v90;
            if ( v49 )
              goto LABEL_177;
          }
          while ( v90 != -1 && v118 + v90 <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v88->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v87 = v118 + (int)CachedResidentAvailable - 192;
        }
        if ( v87 )
LABEL_176:
          _InterlockedExchangeAdd64(v112 + 2160, v87);
LABEL_177:
        if ( v106 )
        {
          MiReturnCommit(v112, v118);
          MiReturnCrossPartitionCharges(v112, 2LL, 1LL, v118);
        }
        else
        {
          MiReturnFullProcessCommitment(v103, v118);
        }
        MiReturnProcessPhysicalPages(v103, v118);
        return 3221225773LL;
      }
      MiReturnFullProcessCommitment(v103, v118);
    }
    return 3221225773LL;
  }
  if ( !(unsigned int)MiChargeProcessPhysicalPages(v103, v70) )
    return 3221225773LL;
  if ( v106 )
  {
    if ( v106 != a9 && !(unsigned __int8)PsReferencePartitionSafe(v106) )
    {
      MiReturnProcessPhysicalPages(v103, v82);
      return 3221226656LL;
    }
    v112 = *v106;
    *v119 = *(_WORD *)*v106;
  }
  else
  {
    if ( (int)MiChargeFullProcessCommitment(v80, v81) < 0 )
      return MiReturnProcessPhysicalPages(v103, v118);
    v112 = *(volatile signed __int64 **)(qword_140C673C8 + 8LL * v103[1].IdealProcessor[25]);
  }
  VadLargePageMinimumIndex = MiGetVadLargePageMinimumIndex(a1);
  v140 = v84;
  LargePfnList = MiCreateLargePfnList(
                   (unsigned int)&v140,
                   a2,
                   v118,
                   MiLargePageSizes[VadLargePageMinimumIndex],
                   a7,
                   a8,
                   (__int64)v106,
                   0,
                   (__int64)v142);
  if ( v106 && v106 != a9 )
    PsDereferencePartition(v106);
  if ( LargePfnList >= 0 )
    goto LABEL_12;
  if ( !v106 )
    MiReturnFullProcessCommitment(v103, v118);
  MiReturnProcessPhysicalPages(v103, v118);
  return (unsigned int)LargePfnList;
}
