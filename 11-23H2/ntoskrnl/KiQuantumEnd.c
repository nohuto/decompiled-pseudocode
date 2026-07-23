/*
 * XREFs of KiQuantumEnd @ 0x1402487C0
 * Callers:
 *     KiDispatchInterrupt @ 0x140249600 (KiDispatchInterrupt.c)
 *     KiIdleLoop @ 0x140423D50 (KiIdleLoop.c)
 * Callees:
 *     KiCompleteRescheduleContext @ 0x140201EB0 (KiCompleteRescheduleContext.c)
 *     KiRemoveThreadFromReadyQueue @ 0x140206BE0 (KiRemoveThreadFromReadyQueue.c)
 *     KiQueueReadyThread @ 0x1402345E0 (KiQueueReadyThread.c)
 *     KiStartRescheduleContext @ 0x140238FF0 (KiStartRescheduleContext.c)
 *     KiDeferredReadySingleThread @ 0x14023A3A0 (KiDeferredReadySingleThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140242670 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiFindRescheduleContextEntryForPrcb @ 0x140243C40 (KiFindRescheduleContextEntryForPrcb.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x140243C70 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140246840 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KeIsUserVaAccessAllowed @ 0x140249CB0 (KeIsUserVaAccessAllowed.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252820 (KiFlushSoftwareInterruptBatch.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1402B19C0 (KiAcquireThreadStateLockForWrite.c)
 *     KiEndThreadCycleAccumulation @ 0x1402B2F20 (KiEndThreadCycleAccumulation.c)
 *     KiTryScheduleNextForegroundBoost @ 0x1402B9DEC (KiTryScheduleNextForegroundBoost.c)
 *     KiInsertDeferredReadyList @ 0x1402B9EE4 (KiInsertDeferredReadyList.c)
 *     KiComputeNewPriority @ 0x1402BAC50 (KiComputeNewPriority.c)
 *     KiAbProcessContextSwitch @ 0x1402BC0A8 (KiAbProcessContextSwitch.c)
 *     KiCheckPreferredHeteroProcessor @ 0x1402C8720 (KiCheckPreferredHeteroProcessor.c)
 *     KiShouldScanSharedReadyQueue @ 0x1403073C8 (KiShouldScanSharedReadyQueue.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140307B50 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiSetPriorityBoost @ 0x140307D98 (KiSetPriorityBoost.c)
 *     KiUpdateThreadPriority @ 0x140307E20 (KiUpdateThreadPriority.c)
 *     KiAdjustRescheduleContextEntryForThreadRemoval @ 0x14030819C (KiAdjustRescheduleContextEntryForThreadRemoval.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1403081E4 (KiGroupSchedulingQuantumEnd.c)
 *     KiCommitRescheduleContext @ 0x140308804 (KiCommitRescheduleContext.c)
 *     KiUpdateVPBackingThreadPriority @ 0x14034E478 (KiUpdateVPBackingThreadPriority.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x140410464 (KiReadGuestSchedulerAssistPriority.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAntiStarvationBoost @ 0x1404121E8 (EtwTraceAntiStarvationBoost.c)
 *     KiSwapContext @ 0x140428670 (KiSwapContext.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KeUpdatePendingQosRequest @ 0x14046187C (KeUpdatePendingQosRequest.c)
 *     KzHeteroRefreshWorkloadProperties @ 0x140462BC0 (KzHeteroRefreshWorkloadProperties.c)
 *     PoSetProcessorQoS @ 0x140463260 (PoSetProcessorQoS.c)
 *     KzReleaseAdditionalPrcbLocks @ 0x14056D7E4 (KzReleaseAdditionalPrcbLocks.c)
 *     KiReleaseThreadStateLock @ 0x140577B78 (KiReleaseThreadStateLock.c)
 */

__int64 KiQuantumEnd()
{
  struct _KPRCB *CurrentPrcb; // r14
  ULONG_PTR CurrentThread; // rsi
  unsigned __int64 v2; // rdi
  int v3; // ebx
  int v4; // ebx
  int v5; // edx
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  _WORD *v10; // rcx
  __int64 v11; // rcx
  unsigned __int8 v12; // al
  __int64 v13; // rcx
  char v14; // bl
  int v15; // edi
  bool v16; // sf
  __int64 SharedReadyQueue; // r13
  char v18; // r14
  __int64 v19; // r15
  int v20; // ebp
  char v21; // al
  int v22; // edx
  unsigned int v23; // ebp
  int v24; // r12d
  __int64 v25; // r8
  unsigned int v26; // eax
  _QWORD **v27; // rsi
  char v28; // r15
  _QWORD *v29; // rdi
  __int64 v30; // rbx
  bool v31; // cl
  bool v32; // zf
  int GuestSchedulerAssistPriority; // eax
  _QWORD *v34; // r12
  __int64 v35; // r13
  volatile signed __int32 *v36; // rbx
  _QWORD *v37; // rdi
  __int64 v38; // r14
  char v39; // bp
  int v40; // esi
  char v41; // bl
  __int64 v42; // r9
  unsigned int ReadySummary; // ebp
  int v44; // ebp
  _LIST_ENTRY *DispatcherReadyListHead; // r12
  unsigned int QueueIndex; // r15d
  int v47; // r11d
  unsigned int v48; // ebp
  unsigned int v49; // eax
  int v50; // ebp
  char v51; // r13
  __int64 v52; // r15
  unsigned int v53; // r13d
  _LIST_ENTRY *v54; // r14
  int v55; // r12d
  _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY **p_Blink; // rbx
  bool v58; // cl
  __int64 v59; // rsi
  int v60; // eax
  _QWORD *v61; // r12
  __int64 v62; // r8
  __int64 v63; // r13
  volatile signed __int32 *v64; // rbx
  _QWORD *v65; // rdi
  __int64 v66; // r15
  char v67; // bp
  int v68; // esi
  char v69; // bl
  int v70; // eax
  unsigned int v71; // r13d
  ULONG_PTR v72; // rbp
  _QWORD *RescheduleContextEntryForPrcb; // rax
  __int64 v74; // rdx
  __int64 v75; // r9
  __int64 v76; // r9
  _DWORD *v77; // r11
  char v78; // r10
  __int64 v79; // rdx
  __int64 v80; // r10
  _DWORD *v81; // rcx
  char v82; // dl
  _DWORD *v83; // r10
  unsigned __int8 v84; // r8
  __int64 i; // rdx
  _DWORD *v86; // rax
  char v87; // al
  _QWORD **v88; // rbx
  char v89; // r11
  _KSOFTWARE_INTERRUPT_BATCH *p_DeferredDispatchInterrupts; // rsi
  char v91; // di
  __int64 v92; // rax
  int v93; // esi
  unsigned __int64 v94; // rbx
  __int64 v95; // r10
  __int64 v96; // rdx
  _KTHREAD *NextThread; // rbx
  struct _KPRCB *v98; // r8
  signed __int32 *SchedulerAssist; // rdx
  signed __int32 v100; // eax
  signed __int32 v101; // ett
  char IsUserVaAccessAllowed; // di
  __int64 v103; // r8
  __int64 result; // rax
  unsigned __int64 *v105; // r8
  unsigned __int64 v106; // r9
  unsigned int v107; // edx
  __int16 v108; // bx
  volatile signed __int32 *v109; // rcx
  bool v110; // bl
  __int64 v111; // rdx
  int v112; // edi
  unsigned int PrcbFlags; // eax
  struct _KPRCB *v114; // rcx
  _DWORD *v115; // r8
  int v116; // ett
  unsigned __int8 v117; // [rsp+30h] [rbp-238h]
  unsigned int v118; // [rsp+34h] [rbp-234h]
  int v119; // [rsp+34h] [rbp-234h]
  unsigned __int64 v120; // [rsp+38h] [rbp-230h] BYREF
  int v121; // [rsp+40h] [rbp-228h]
  int v122; // [rsp+44h] [rbp-224h]
  int v123; // [rsp+48h] [rbp-220h]
  int v124; // [rsp+4Ch] [rbp-21Ch]
  int v125; // [rsp+50h] [rbp-218h]
  int v126; // [rsp+54h] [rbp-214h]
  int v127; // [rsp+58h] [rbp-210h]
  _QWORD *v128; // [rsp+60h] [rbp-208h] BYREF
  struct _KPRCB *v129; // [rsp+68h] [rbp-200h]
  ULONG_PTR v130; // [rsp+70h] [rbp-1F8h]
  int v131; // [rsp+78h] [rbp-1F0h] BYREF
  _DWORD v132[2]; // [rsp+7Ch] [rbp-1ECh] BYREF
  _DWORD v133[2]; // [rsp+84h] [rbp-1E4h] BYREF
  int v134; // [rsp+8Ch] [rbp-1DCh] BYREF
  _QWORD *v135; // [rsp+90h] [rbp-1D8h] BYREF
  _QWORD *v136; // [rsp+98h] [rbp-1D0h] BYREF
  _QWORD *v137; // [rsp+A0h] [rbp-1C8h] BYREF
  _QWORD *v138; // [rsp+A8h] [rbp-1C0h] BYREF
  _LIST_ENTRY *v139; // [rsp+B0h] [rbp-1B8h]
  __int64 v140; // [rsp+B8h] [rbp-1B0h] BYREF
  __int64 v141; // [rsp+C0h] [rbp-1A8h] BYREF
  __int64 v142; // [rsp+C8h] [rbp-1A0h] BYREF
  unsigned __int64 v143; // [rsp+D0h] [rbp-198h] BYREF
  unsigned __int64 v144; // [rsp+D8h] [rbp-190h] BYREF
  _DWORD v145[84]; // [rsp+E0h] [rbp-188h] BYREF
  int v146; // [rsp+260h] [rbp-8h]

  v128 = 0LL;
  memset(v145, 0, sizeof(v145));
  CurrentPrcb = KeGetCurrentPrcb();
  v117 = 0;
  v129 = CurrentPrcb;
  v120 = 0LL;
  CurrentThread = (ULONG_PTR)CurrentPrcb->CurrentThread;
  v130 = CurrentThread;
  if ( (_KTHREAD *)CurrentThread != CurrentPrcb->IdleThread )
  {
    v2 = *(_QWORD *)(CurrentThread + 72);
    if ( v2 >= *(_QWORD *)(CurrentThread + 32) || KeHeteroSystem || *(_BYTE *)(CurrentThread + 125) )
    {
      v131 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentThread + 64), 0LL) )
      {
        do
          KeYieldProcessorEx(&v131);
        while ( *(_QWORD *)(CurrentThread + 64) );
      }
      if ( v2 >= *(_QWORD *)(CurrentThread + 32) )
      {
        if ( (*(_DWORD *)(CurrentThread + 120) & 0x100) != 0 && *(char *)(CurrentThread + 195) >= 16 )
        {
          v3 = 127;
        }
        else
        {
          v4 = (char)KiComputeNewPriority(CurrentThread, 1LL);
          KiAcquirePrcbLocksForIsolationUnit((__int64)CurrentPrcb, 0, (__int64 *)&v120);
          if ( !(unsigned __int8)KiUpdateVPBackingThreadPriority(CurrentThread) )
            KiUpdateThreadPriority((_DWORD)CurrentPrcb, v5, CurrentThread, v4, CurrentPrcb->NextThread == 0LL);
          KiReleasePrcbLocksForIsolationUnit(&v120);
          v3 = *(unsigned __int8 *)(CurrentThread + 651);
          v117 = 1;
          KiTryScheduleNextForegroundBoost(CurrentThread);
        }
        v6 = KiCyclesPerClockQuantum * v3;
        if ( (*(_DWORD *)(CurrentThread + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(CurrentThread + 120), 5u);
        *(_QWORD *)(CurrentThread + 32) = v2 + v6;
        if ( CurrentPrcb->GroupSetMember != CurrentPrcb->CoreProcessorSet
          && !_bittestandreset((signed __int32 *)(CurrentThread + 116), 7u)
          && (CurrentPrcb->CoreProcessorSet & (CurrentPrcb->GroupSetMember | CurrentPrcb->SchedulerSubNode->IdleCpuSet)) != CurrentPrcb->CoreProcessorSet )
        {
          v7 = *(_QWORD *)(KiProcessorBlock[*(unsigned int *)(CurrentThread + 588)] + 192);
          v8 = *(_QWORD *)(v7 + 24) & *(_QWORD *)(v7 + 80);
          v9 = *(unsigned __int16 *)(v7 + 136);
          v10 = *(_WORD **)(CurrentThread + 576);
          v11 = (unsigned __int16)v9 >= *v10 ? 0LL : *(_QWORD *)&v10[4 * v9 + 4];
          if ( (v11 & v8) != 0 )
          {
            *(_DWORD *)(CurrentThread + 116) |= 0x80u;
            _interlockedbittestandset((volatile signed __int32 *)(CurrentThread + 120), 0xCu);
          }
        }
      }
      v140 = 0LL;
      v141 = 0LL;
      v142 = 0LL;
      if ( KeHeteroSystem )
      {
        v12 = KiAcquireThreadStateLockForWrite(CurrentThread, &v140, &v142, &v141);
        KzHeteroRefreshWorkloadProperties(CurrentThread, v12, v140);
        KiReleaseThreadStateLock(v13, v140, &v142, v141);
      }
      if ( (unsigned int)KiCheckPreferredHeteroProcessor(CurrentThread, CurrentPrcb, 1LL) )
        _interlockedbittestandset((volatile signed __int32 *)(CurrentThread + 120), 0xCu);
      *(_QWORD *)(CurrentThread + 64) = 0LL;
    }
  }
  v14 = 0;
  v123 = 10;
  v15 = MEMORY[0xFFFFF78000000320];
  v16 = (signed int)(CurrentPrcb->ReadyScanTick - MEMORY[0xFFFFF78000000320]) < 0;
  v125 = MEMORY[0xFFFFF78000000320];
  v122 = 16;
  if ( !v16 )
    goto LABEL_82;
  v14 = 1;
  if ( !(unsigned int)KiShouldScanSharedReadyQueue(CurrentPrcb) )
    goto LABEL_82;
  SharedReadyQueue = (__int64)CurrentPrcb->SharedReadyQueue;
  v139 = (_LIST_ENTRY *)SharedReadyQueue;
  if ( (*(_DWORD *)(SharedReadyQueue + 8) & 0x7FFE) == 0 )
    goto LABEL_82;
  v18 = *(_BYTE *)(SharedReadyQueue + 658);
  v19 = SharedReadyQueue + 16;
  v135 = 0LL;
  v132[0] = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)SharedReadyQueue, 0LL) )
  {
    do
      KeYieldProcessorEx(v132);
    while ( *(_QWORD *)SharedReadyQueue );
  }
  v20 = *(_DWORD *)(SharedReadyQueue + 8) & 0x7FFE;
  if ( !v20 )
  {
    _InterlockedAnd64((volatile signed __int64 *)SharedReadyQueue, 0LL);
    v21 = 1;
    goto LABEL_81;
  }
  v22 = 10;
  v121 = 10;
  v23 = __ROR4__(v20, v18);
  v24 = 16;
  v126 = KiLockQuantumTarget;
  v25 = MEMORY[0xFFFFF78000000320];
  v118 = MEMORY[0xFFFFF78000000320];
  do
  {
    _BitScanForward(&v26, v23);
    v23 ^= 1 << v26;
    v132[1] = v26;
    v27 = (_QWORD **)(v19 + 16LL * (((_BYTE)v26 + v18) & 0x1F));
    v124 = ((_BYTE)v26 + v18) & 0x1F;
    v28 = (v26 + v18) & 0x1F;
    v29 = *v27;
    do
    {
      v30 = (__int64)(v29 - 27);
      v31 = 0;
      v32 = (*(_DWORD *)(v29 - 12) & 0x400000) == 0;
      v29 = (_QWORD *)*v29;
      if ( !v32 )
      {
        GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(v30, 0LL);
        v22 = v121;
        v25 = v118;
        v31 = GuestSchedulerAssistPriority != *(_DWORD *)(v30 + 1024);
      }
      if ( (int)v25 - *(_DWORD *)(v30 + 436) - 300 > 0 )
      {
        KiRemoveThreadFromSharedReadyQueue(SharedReadyQueue, v30, v28);
        KiInsertDeferredReadyList(&v135, v30);
        v22 = --v121;
LABEL_48:
        v25 = v118;
        goto LABEL_49;
      }
      if ( v31 )
      {
        KiRemoveThreadFromSharedReadyQueue(SharedReadyQueue, v30, v28);
        KiInsertDeferredReadyList(&v135, v30);
        v22 = v121;
        goto LABEL_48;
      }
LABEL_49:
      --v24;
    }
    while ( v29 != v27 && v22 && v24 );
    v127 = v24;
    v19 = SharedReadyQueue + 16;
  }
  while ( v23 && v22 && v24 );
  _InterlockedAnd64((volatile signed __int64 *)SharedReadyQueue, 0LL);
  v34 = v135;
  if ( v135 )
  {
    v35 = (__int64)v129;
    do
    {
      v36 = (volatile signed __int32 *)(v34 - 27);
      v37 = v34;
      v38 = *(v34 - 18);
      v39 = 0;
      v34 = (_QWORD *)*v34;
      v133[0] = 0;
      while ( _interlockedbittestandset64(v36 + 16, 0LL) )
      {
        do
          KeYieldProcessorEx(v133);
        while ( *((_QWORD *)v36 + 8) );
      }
      v40 = *((char *)v36 + 195);
      if ( (int)(v118 - *((_DWORD *)v36 + 109) - 300) > 0 && v40 < 15 )
      {
        LOBYTE(v25) = 15;
        v39 = 1;
        KiSetPriorityBoost(0, (_DWORD)v36, v25, v38, v126);
      }
      *((_QWORD *)v36 + 8) = 0LL;
      if ( v39 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
        EtwTraceAntiStarvationBoost(v36, (unsigned int)v40, v25);
      *v37 = 0LL;
      v41 = 0;
      v136 = 0LL;
      do
      {
        KiDeferredReadySingleThread(v35, (unsigned __int64)(v37 - 27), (__int64)&v136);
        v37 = v136;
        ++v41;
        if ( v136 )
          v136 = (_QWORD *)*v136;
        if ( (v41 & 0xF) == 0 )
          KiFlushSoftwareInterruptBatch(v35 + 12760);
      }
      while ( v37 );
      KiFlushSoftwareInterruptBatch(v35 + 12760);
    }
    while ( v34 );
    SharedReadyQueue = (__int64)v139;
  }
  if ( v127 && v121 )
  {
    v21 = 1;
    v14 = 1;
  }
  else
  {
    v21 = 1;
    v14 = 1;
    if ( (unsigned int)(v124 + 1) <= 0xE )
      v21 = v124 + 1;
  }
  v15 = v125;
  CurrentThread = v130;
LABEL_81:
  CurrentPrcb = v129;
  *(_BYTE *)(SharedReadyQueue + 658) = v21;
LABEL_82:
  if ( KiGroupSchedulingEnabled )
    KiGroupSchedulingQuantumEnd(CurrentPrcb, &v120, CurrentThread, v117);
  else
    KiAcquirePrcbLocksForIsolationUnit((__int64)CurrentPrcb, 0, (__int64 *)&v120);
  if ( !v14 )
    goto LABEL_129;
  ReadySummary = CurrentPrcb->ReadySummary;
  CurrentPrcb->ReadyScanTick = v15 + 75;
  v44 = ReadySummary & 0x7FFE;
  if ( !v44 )
    goto LABEL_129;
  DispatcherReadyListHead = CurrentPrcb->DispatcherReadyListHead;
  QueueIndex = CurrentPrcb->QueueIndex;
  v125 = KiLockQuantumTarget;
  v126 = QueueIndex;
  v139 = CurrentPrcb->DispatcherReadyListHead;
  v137 = 0LL;
  v47 = MEMORY[0xFFFFF78000000320];
  v119 = MEMORY[0xFFFFF78000000320];
  v48 = __ROR4__(v44, QueueIndex);
  while ( 2 )
  {
    _BitScanForward(&v49, v48);
    v133[1] = v49;
    v127 = v48 ^ (1 << v49);
    v50 = v123;
    v51 = v49 + QueueIndex;
    v52 = (__int64)v129;
    v53 = v51 & 0x1F;
    v54 = &DispatcherReadyListHead[v53];
    v124 = v53;
    v55 = v122;
    Flink = v54->Flink;
    while ( 2 )
    {
      p_Blink = &Flink[-14].Blink;
      v58 = 0;
      v32 = ((__int64)Flink[-6].Flink & 0x400000) == 0;
      v59 = (__int64)Flink;
      Flink = Flink->Flink;
      if ( !v32 )
      {
        v60 = KiReadGuestSchedulerAssistPriority(p_Blink, 0LL);
        v47 = v119;
        v58 = v60 != *((_DWORD *)p_Blink + 256);
      }
      if ( v47 - *((_DWORD *)p_Blink + 109) - 300 > 0 )
      {
        KiRemoveThreadFromReadyQueue(v52, v59, v53);
        KiInsertDeferredReadyList(&v137, p_Blink);
        --v50;
        goto LABEL_95;
      }
      if ( v58 )
      {
        KiRemoveThreadFromReadyQueue(v52, v59, v53);
        KiInsertDeferredReadyList(&v137, p_Blink);
LABEL_95:
        v47 = v119;
      }
      --v55;
      if ( Flink != v54 && v50 && v55 )
        continue;
      break;
    }
    LOBYTE(QueueIndex) = v126;
    v123 = v50;
    v48 = v127;
    v122 = v55;
    DispatcherReadyListHead = v139;
    if ( v127 && v123 && v122 )
      continue;
    break;
  }
  v61 = v137;
  if ( v137 )
  {
    KiReleasePrcbLocksForIsolationUnit(&v120);
    v63 = (__int64)v129;
    do
    {
      v64 = (volatile signed __int32 *)(v61 - 27);
      v65 = v61;
      v66 = *(v61 - 18);
      v67 = 0;
      v61 = (_QWORD *)*v61;
      v134 = 0;
      while ( _interlockedbittestandset64(v64 + 16, 0LL) )
      {
        do
          KeYieldProcessorEx(&v134);
        while ( *((_QWORD *)v64 + 8) );
      }
      v68 = *((char *)v64 + 195);
      if ( v119 - *((_DWORD *)v64 + 109) - 300 > 0 && v68 < 15 )
      {
        LOBYTE(v62) = 15;
        v67 = 1;
        KiSetPriorityBoost(0, (_DWORD)v64, v62, v66, v125);
      }
      *((_QWORD *)v64 + 8) = 0LL;
      if ( v67 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
        EtwTraceAntiStarvationBoost(v64, (unsigned int)v68, v62);
      *v65 = 0LL;
      v69 = 0;
      v138 = 0LL;
      do
      {
        KiDeferredReadySingleThread(v63, (unsigned __int64)(v65 - 27), (__int64)&v138);
        v65 = v138;
        ++v69;
        if ( v138 )
          v138 = (_QWORD *)*v138;
        if ( (v69 & 0xF) == 0 )
          KiFlushSoftwareInterruptBatch(v63 + 12760);
      }
      while ( v65 );
      KiFlushSoftwareInterruptBatch(v63 + 12760);
    }
    while ( v61 );
    CurrentPrcb = (struct _KPRCB *)v63;
    KiAcquirePrcbLocksForIsolationUnit(v63, 0, (__int64 *)&v120);
    v53 = v124;
  }
  else
  {
    CurrentPrcb = v129;
  }
  if ( v122 && v123 )
  {
    v70 = 1;
  }
  else
  {
    v71 = v53 + 1;
    v70 = 1;
    if ( v71 <= 0xE )
      v70 = v71;
  }
  CurrentPrcb->QueueIndex = v70;
LABEL_129:
  v72 = v130;
  if ( !CurrentPrcb->NextThread && (v117 || (*(_DWORD *)(v130 + 120) & 0x1000) != 0) )
  {
    KiStartRescheduleContext((__int64)v145, (__int64 *)&v120, 0LL);
    RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(v145, (__int64)CurrentPrcb);
    if ( (*(_DWORD *)(v72 + 120) & 0x1000) != 0 )
    {
      LOBYTE(v75) = 1;
      KiAdjustRescheduleContextEntryForThreadRemoval(RescheduleContextEntryForPrcb, v74, 0LL, v75);
      if ( (v78 & 2) != 0 )
      {
        v79 = LOBYTE(v145[0]);
        v80 = 0LL;
        if ( LOBYTE(v145[0]) )
        {
          do
          {
            v81 = &v145[10 * v80 + 4];
            if ( v81 != v77 )
            {
              LOBYTE(v76) = 1;
              KiAdjustRescheduleContextEntryForThreadRemoval(v81, v79, 0LL, v76);
              v79 = LOBYTE(v145[0]);
            }
            v80 = (unsigned int)(v80 + 1);
          }
          while ( (unsigned int)v80 < (unsigned __int8)v79 );
        }
        v145[1] = 0;
      }
    }
    else
    {
      v82 = *((_BYTE *)RescheduleContextEntryForPrcb + 32);
      v83 = RescheduleContextEntryForPrcb;
      *((_BYTE *)RescheduleContextEntryForPrcb + 34) |= 2u;
      *((_BYTE *)RescheduleContextEntryForPrcb + 32) = v82 | 8;
      if ( (v82 & 2) != 0 )
      {
        v84 = v145[0];
        for ( i = 0LL; (unsigned int)i < v84; i = (unsigned int)(i + 1) )
        {
          v86 = &v145[10 * i + 4];
          if ( v86 != v83 )
          {
            *((_BYTE *)v86 + 32) |= 8u;
            *((_BYTE *)v86 + 34) |= 2u;
            v84 = v145[0];
          }
        }
      }
    }
    KiSearchForNewThreadsForRescheduleContext(v145, (__int64)&v128);
    v87 = KiCommitRescheduleContext(v145, CurrentPrcb, 0LL, &v128);
    v88 = (_QWORD **)v128;
    if ( v87 || v128 )
    {
      KiReleasePrcbLocksForIsolationUnit(&v120);
      if ( v89 )
      {
        KiCompleteRescheduleContext(v145, (__int64)CurrentPrcb);
        p_DeferredDispatchInterrupts = &CurrentPrcb->DeferredDispatchInterrupts;
        KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts);
      }
      else
      {
        p_DeferredDispatchInterrupts = &CurrentPrcb->DeferredDispatchInterrupts;
      }
      if ( v88 )
      {
        v91 = 0;
        v128 = *v88;
        do
        {
          KiDeferredReadySingleThread((__int64)CurrentPrcb, (unsigned __int64)(v88 - 27), (__int64)&v128);
          v88 = (_QWORD **)v128;
          ++v91;
          if ( v128 )
            v128 = (_QWORD *)*v128;
          if ( (v91 & 0xF) == 0 )
            KiFlushSoftwareInterruptBatch(p_DeferredDispatchInterrupts);
        }
        while ( v88 );
        KiFlushSoftwareInterruptBatch(p_DeferredDispatchInterrupts);
      }
      KiAcquirePrcbLocksForIsolationUnit((__int64)CurrentPrcb, 0, (__int64 *)&v120);
    }
  }
  v92 = v120;
  v93 = 0;
  v94 = v120 & 0xFFFFFFFFFFFFFFFEuLL;
  v95 = 0LL;
  v143 = v120 & 0xFFFFFFFFFFFFFFFEuLL;
  v96 = 0LL;
  if ( (v120 & 1) != 0 )
  {
    if ( (v120 & 1) == 1 )
    {
      v95 = *(_QWORD *)(v94 + 34904) + 8LL;
      v96 = **(unsigned __int8 **)(v94 + 34904);
    }
    KzReleaseAdditionalPrcbLocks(v95, v96, &v143, 1LL);
    v92 = v94;
    v120 = v94;
  }
  NextThread = CurrentPrcb->NextThread;
  if ( NextThread )
  {
    if ( v117 )
      *(_BYTE *)(v72 + 565) = 0;
    if ( (_KTHREAD *)v72 != CurrentPrcb->IdleThread )
    {
      CurrentPrcb->NextThread = 0LL;
      _disable();
      LOBYTE(v42) = 1;
      KiEndThreadCycleAccumulation(CurrentPrcb, v72, 0LL, v42);
      v98 = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)v98->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v100 = *SchedulerAssist;
        do
        {
          v101 = v100;
          v100 = _InterlockedCompareExchange(SchedulerAssist, v100 & 0xFFDFFFFF, v100);
        }
        while ( v101 != v100 );
        if ( (v100 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v98);
      }
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
        NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(v72 + 643) = 30;
      KiQueueReadyThread((__int64)CurrentPrcb, (__int64 *)&v120, v72);
      KiAbProcessContextSwitch(v72, 1LL);
      IsUserVaAccessAllowed = KeIsUserVaAccessAllowed(0LL);
      if ( KeSmapEnabled )
        __asm { stac }
      LOBYTE(v103) = 1;
      result = KiSwapContext(v72, NextThread, v103);
      if ( !IsUserVaAccessAllowed && KeSmapEnabled )
        __asm { clac }
      return result;
    }
  }
  v105 = 0LL;
  v106 = v92 & 0xFFFFFFFFFFFFFFFEuLL;
  v107 = 0;
  v144 = v92 & 0xFFFFFFFFFFFFFFFEuLL;
  result = v92 & 1;
  if ( !(_DWORD)result )
  {
    v105 = &v144;
    v107 = 1;
    goto LABEL_184;
  }
  if ( (_DWORD)result == 1 )
  {
    result = *(_QWORD *)(v106 + 34904);
    v105 = (unsigned __int64 *)(result + 8);
    v107 = *(unsigned __int8 *)result;
  }
  while ( v107 )
  {
LABEL_184:
    result = --v107;
    _InterlockedAnd64((volatile signed __int64 *)(v105[v107] + 48), 0LL);
  }
  if ( (_KTHREAD *)v72 != CurrentPrcb->IdleThread && KeHeteroSystemQos )
  {
    v108 = v146;
    _disable();
    v109 = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    if ( v109 )
      _InterlockedOr(v109, 0x200000u);
    v110 = (v108 & 0x200) != 0;
    v111 = (unsigned __int8)*(_DWORD *)(v72 + 512);
    result = (unsigned __int8)CurrentPrcb->PrcbFlags.PrcbFlags;
    if ( (_DWORD)v111 != (_DWORD)result )
    {
      v112 = CurrentPrcb->PrcbFlags.PrcbFlags & 0x300;
      if ( (unsigned __int8)PoSetProcessorQoS(CurrentPrcb, v111, v105) )
      {
        CurrentPrcb->PrcbFlags.PrcbFlags &= 0xFFFFFCFF;
        PrcbFlags = CurrentPrcb->PrcbFlags.PrcbFlags;
      }
      else
      {
        PrcbFlags = CurrentPrcb->PrcbFlags.PrcbFlags & 0xFFFFFCFF | 0x100;
        CurrentPrcb->PrcbFlags.PrcbFlags = PrcbFlags;
      }
      result = (PrcbFlags & 0x300) != 0;
      LOBYTE(v93) = v112 != 0;
      if ( v93 != (_DWORD)result )
        result = KeUpdatePendingQosRequest(CurrentPrcb);
    }
    if ( v110 )
    {
      v114 = KeGetCurrentPrcb();
      v115 = v114->SchedulerAssist;
      if ( v115 )
      {
        _m_prefetchw(v115);
        LODWORD(result) = *v115;
        do
        {
          v116 = result;
          result = (unsigned int)_InterlockedCompareExchange(v115, result & 0xFFDFFFFF, result);
        }
        while ( v116 != (_DWORD)result );
        if ( (result & 0x200000) != 0 )
          result = KiRemoveSystemWorkPriorityKick(v114);
      }
      _enable();
    }
  }
  return result;
}
