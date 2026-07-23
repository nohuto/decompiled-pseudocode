/*
 * XREFs of KeYieldExecution @ 0x140246AC0
 * Callers:
 *     KeDelayExecutionThread @ 0x1402468E0 (KeDelayExecutionThread.c)
 *     NtYieldExecution @ 0x1403CEB80 (NtYieldExecution.c)
 * Callees:
 *     KiCompleteRescheduleContext @ 0x140201EB0 (KiCompleteRescheduleContext.c)
 *     KiAccumulateCycleStats @ 0x14020E7C0 (KiAccumulateCycleStats.c)
 *     KiGetProcessorEfficiencyClass @ 0x14020E8D4 (KiGetProcessorEfficiencyClass.c)
 *     KiQueueReadyThread @ 0x1402345E0 (KiQueueReadyThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140242670 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiCommitRescheduleContextEntry @ 0x140242F60 (KiCommitRescheduleContextEntry.c)
 *     KiFindRescheduleContextEntryForPrcb @ 0x140243C40 (KiFindRescheduleContextEntryForPrcb.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140246840 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiEndThreadAccountingPeriodEx @ 0x140248520 (KiEndThreadAccountingPeriodEx.c)
 *     PoGetFrequencyBucket @ 0x140249CF0 (PoGetFrequencyBucket.c)
 *     KiReadyDeferredReadyList @ 0x140249D60 (KiReadyDeferredReadyList.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252820 (KiFlushSoftwareInterruptBatch.c)
 *     HalRequestSoftwareInterrupt @ 0x140254DD0 (HalRequestSoftwareInterrupt.c)
 *     KiComputePriorityFloor @ 0x1402B10CC (KiComputePriorityFloor.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1402B86C0 (KiSetBasePriorityAndClearDecrement.c)
 *     KiAbPropagateBoosts @ 0x1402BC160 (KiAbPropagateBoosts.c)
 *     KiAbProcessThreadLocks @ 0x1402BC5E0 (KiAbProcessThreadLocks.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140307B50 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiUpdateThreadPriority @ 0x140307E20 (KiUpdateThreadPriority.c)
 *     KiAbQueueAutoBoostDpc @ 0x140307FD8 (KiAbQueueAutoBoostDpc.c)
 *     KiUpdateVPBackingThreadPriority @ 0x14034E478 (KiUpdateVPBackingThreadPriority.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x140410464 (KiReadGuestSchedulerAssistPriority.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetSchedulerAssistPriority @ 0x140410704 (KiSetSchedulerAssistPriority.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x140428670 (KiSwapContext.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KiSetThreadQosLevelUnsafe @ 0x140462A58 (KiSetThreadQosLevelUnsafe.c)
 *     KzReleaseAdditionalPrcbLocks @ 0x14056D7E4 (KzReleaseAdditionalPrcbLocks.c)
 *     KiCheckAssistDataForBamQosLevelOverride @ 0x14056E53C (KiCheckAssistDataForBamQosLevelOverride.c)
 *     KiBeginCounterAccumulation @ 0x140574630 (KiBeginCounterAccumulation.c)
 *     KiEndCounterAccumulation @ 0x140574804 (KiEndCounterAccumulation.c)
 *     KiUpdateThreadHgsFeedback @ 0x140578BD0 (KiUpdateThreadHgsFeedback.c)
 *     EtwTraceXSchedulerPriorityUpdate @ 0x1405FDDD8 (EtwTraceXSchedulerPriorityUpdate.c)
 */

__int64 __fastcall KeYieldExecution(int a1)
{
  int v1; // r12d
  unsigned int v2; // r15d
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 CurrentIrql; // rbx
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // rdx
  __int64 v8; // r14
  int v9; // ecx
  struct _KPRCB *v10; // rdi
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rcx
  int v13; // r9d
  struct _KPRCB **v14; // r8
  unsigned int v15; // r10d
  unsigned __int8 *v16; // rax
  unsigned int v17; // edx
  unsigned int v18; // r14d
  _QWORD *v19; // rbx
  __int64 v20; // r9
  struct _KPRCB *v21; // rdi
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rdx
  ULONG_PTR NextThread; // rcx
  char v24; // dl
  char v25; // dl
  char v26; // r12
  ULONG_PTR v27; // r13
  char v28; // al
  char v29; // dl
  unsigned __int8 v30; // cl
  _QWORD *v31; // r9
  unsigned int v32; // r8d
  _QWORD *v33; // rdx
  _BYTE *v34; // rcx
  __int64 v35; // rdx
  _QWORD *RescheduleContextEntryForPrcb; // r10
  char v37; // r11
  unsigned int v38; // eax
  int v39; // ecx
  char v40; // al
  unsigned int v41; // eax
  unsigned __int8 v42; // r9
  unsigned int i; // r8d
  _QWORD *v44; // rdx
  char v45; // al
  char v46; // al
  char v47; // r12
  char v48; // r13
  unsigned int v49; // edi
  unsigned __int8 *v50; // rdx
  unsigned __int8 v51; // al
  __int64 v52; // r13
  unsigned __int64 v53; // r9
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // r8
  volatile unsigned __int64 CycleTime; // rbx
  __int64 CurrentRunTime; // rcx
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rcx
  bool v60; // zf
  unsigned __int64 v61; // rax
  unsigned __int64 *v62; // rdx
  unsigned __int64 v63; // r11
  bool ProcessorEfficiencyClass; // al
  __int64 v65; // r10
  _BYTE *v66; // rax
  struct _KPRCB *v67; // rcx
  signed __int32 *v68; // r8
  signed __int32 v69; // eax
  signed __int32 v70; // ett
  int v71; // r8d
  unsigned __int64 v72; // rcx
  char Priority; // bl
  int v74; // eax
  unsigned __int8 PriorityDecrement; // cl
  char v76; // bl
  char v77; // cl
  unsigned __int8 v78; // dl
  char BasePriority; // al
  unsigned int PriorityFloorSummary; // eax
  int v81; // eax
  int SchedulerAssistPriorityFloor; // edx
  int v83; // ebx
  char *v84; // rcx
  char v85; // al
  char *v86; // rcx
  char v87; // al
  char v88; // al
  int v89; // r12d
  int v90; // edi
  int v91; // edx
  unsigned int *p_CurrentRunTime; // r12
  struct _KPRCB *v93; // rcx
  _SINGLE_LIST_ENTRY *p_PropagateBoostsEntry; // r8
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx
  unsigned int v96; // ecx
  unsigned int v97; // eax
  int v98; // edx
  __int64 v99; // r8
  _DWORD *Object; // rcx
  volatile int v101; // r8d
  int v102; // edx
  _KPROCESS *Process; // r8
  __int64 v104; // rcx
  int v105; // ecx
  unsigned __int64 v106; // rdx
  __int64 v107; // rdi
  __int64 v108; // rcx
  unsigned __int64 v109; // rax
  char Size; // bl
  unsigned __int64 v111; // rcx
  __int64 v112; // rdx
  __int64 v113; // r8
  unsigned int v114; // eax
  unsigned int v115; // ecx
  int v116; // r9d
  __int64 v117; // rcx
  __int64 v118; // rdx
  __int64 v119; // rdx
  _BYTE *v120; // rax
  __int64 v121; // r9
  unsigned int ThreadFlags2; // r8d
  int v123; // ecx
  unsigned int ExpectedRunTime; // edx
  __int64 v125; // rcx
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  _QWORD *j; // rcx
  struct _KPRCB *v128; // rcx
  signed __int32 *v129; // r8
  signed __int32 v130; // eax
  signed __int32 v131; // ett
  __int64 v132; // r8
  unsigned __int8 v133; // cl
  struct _KPRCB *v134; // r10
  _DWORD *v135; // r9
  int v136; // edx
  unsigned __int64 v138; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v139; // [rsp+48h] [rbp-B8h]
  int BamQosLevelFromAssistPage; // [rsp+4Ch] [rbp-B4h] BYREF
  int v141; // [rsp+50h] [rbp-B0h]
  __int64 v142; // [rsp+58h] [rbp-A8h] BYREF
  struct _KPRCB **v143; // [rsp+60h] [rbp-A0h]
  int v144; // [rsp+68h] [rbp-98h] BYREF
  int v145; // [rsp+6Ch] [rbp-94h] BYREF
  int v146; // [rsp+70h] [rbp-90h]
  _DWORD v147[3]; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v148; // [rsp+80h] [rbp-80h] BYREF
  __int64 v149; // [rsp+88h] [rbp-78h] BYREF
  __int64 v150; // [rsp+90h] [rbp-70h]
  unsigned __int64 v151; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v152; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v153; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v154; // [rsp+B0h] [rbp-50h]
  __int64 v155; // [rsp+B8h] [rbp-48h]
  _QWORD v156[42]; // [rsp+C0h] [rbp-40h] BYREF

  v1 = a1;
  BamQosLevelFromAssistPage = a1;
  v2 = 0;
  v142 = 0LL;
  memset(v156, 0, sizeof(v156));
  v138 = 0LL;
  if ( (v1 & 0xFFFFFFFE) != 0 )
    return (unsigned int)-1073741811;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !CurrentPrcb->ReadySummary && !CurrentPrcb->SharedReadyQueue->ReadySummary )
    return 1073741860;
  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  v154 = CurrentIrql;
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( (_BYTE)CurrentIrql == 2 )
      LODWORD(v7) = 4;
    else
      v7 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v7;
  }
  v8 = (__int64)KeGetCurrentPrcb();
  v155 = v8;
  if ( !*(_DWORD *)(v8 + 32472) && !*(_DWORD *)(*(_QWORD *)(v8 + 34888) + 8LL) )
  {
    v2 = 1073741860;
    goto LABEL_256;
  }
  v9 = CurrentThread->AbEntrySummary | CurrentThread->AbOrphanedEntrySummary;
  v148 = 0LL;
  if ( v9 != 63 )
  {
    v10 = KeGetCurrentPrcb();
    v149 = 0LL;
    KiAbProcessThreadLocks(
      (_DWORD)CurrentThread,
      1,
      1,
      1,
      (__int64)&v148,
      (__int64)&v149,
      (__int64)&v10->AbSelfIoBoostsList);
    KiAbPropagateBoosts(&v149, &v10->AbSelfIoBoostsList, &v148);
    KiReadyDeferredReadyList(v10, &v148);
  }
  v144 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v144);
    while ( CurrentThread->ThreadLock );
  }
  v145 = 0;
  v138 = v8 & 0xFFFFFFFFFFFFFFFEuLL;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(&v145);
    while ( *(_QWORD *)(v8 + 48) );
  }
  v11 = v138;
  if ( !*(_QWORD *)(v8 + 16) )
  {
    v143 = 0LL;
    v12 = v138 & 0xFFFFFFFFFFFFFFFEuLL;
    v141 = 0;
    v151 = v138 & 0xFFFFFFFFFFFFFFFEuLL;
    v13 = v138 & 1;
    v14 = 0LL;
    v146 = v13;
    v15 = 0;
    if ( (v138 & 1) == 0 )
    {
      v14 = (struct _KPRCB **)&v151;
      v141 = 1;
      v143 = (struct _KPRCB **)&v151;
      v15 = 1;
      v139 = 0;
LABEL_33:
      v18 = v139;
      v19 = &v156[6];
      v20 = v15;
      v150 = v15;
      while ( 1 )
      {
        *((_OWORD *)v19 - 2) = 0LL;
        *((_OWORD *)v19 - 1) = 0LL;
        *v19 = 0LL;
        *(v19 - 1) = -1LL;
        *((_BYTE *)v19 + 4) = 63;
        v21 = *v14;
        *(v19 - 4) = *v14;
        SharedReadyQueue = v21->SharedReadyQueue;
        if ( (v21->IdleState & 8) != 0 && (v21->SchedulerSubNode->NonParkedSet & SharedReadyQueue->Affinity) != 0 )
          SharedReadyQueue = 0LL;
        *(v19 - 3) = SharedReadyQueue;
        NextThread = (ULONG_PTR)v21->NextThread;
        *(v19 - 2) = NextThread;
        if ( !NextThread )
        {
          NextThread = (ULONG_PTR)v21->CurrentThread;
          *(v19 - 2) = NextThread;
        }
        if ( v21->NextThread == (_KTHREAD *)NextThread )
        {
          *(_BYTE *)v19 |= 4u;
        }
        else
        {
          v24 = *(_BYTE *)v19;
          if ( v21 == KeGetCurrentPrcb() )
            v25 = v24 | 4;
          else
            v25 = v24 & 0xFB;
          *(_BYTE *)v19 = v25;
        }
        v26 = 0;
        if ( (*(_DWORD *)(NextThread + 120) & 0x400000) == 0 )
          goto LABEL_59;
        if ( (struct _KTHREAD *)NextThread == CurrentThread )
          goto LABEL_49;
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(NextThread + 64), 0LL) )
          break;
LABEL_59:
        v29 = ((v21->IdleState & 1) == 0) | *(_BYTE *)v19 & 0xFE;
        *(_BYTE *)v19 = v29;
        v30 = v29 ^ (v29 ^ (v21->PriorityState->AllFields >> 6)) & 2;
        *(_BYTE *)v19 = v30;
        if ( ((v30 >> 1) & 1u) > v18 )
          v18 = (v30 >> 1) & 1;
        ++v14;
        v19 += 5;
        v143 = v14;
        v150 = --v20;
        if ( !v20 )
        {
          v11 = v138;
          v12 = v151;
          v15 = v141;
          v13 = v146;
          LOBYTE(v1) = BamQosLevelFromAssistPage;
          v139 = v18;
          v17 = v18;
          v8 = v155;
          goto LABEL_63;
        }
      }
      v26 = 1;
LABEL_49:
      v27 = NextThread;
      if ( (*(_DWORD *)(NextThread + 120) & 0x400000) != 0 && *(_DWORD *)(NextThread + 536) == v21->Number )
      {
        if ( *(_BYTE *)(NextThread + 388) == 2
          || *(_BYTE *)(NextThread + 388) == 3
          || *(_BYTE *)(NextThread + 388) == 5
          && (v28 = *(_BYTE *)(NextThread + 112) & 7, v28 != 1)
          && (unsigned __int8)(v28 - 3) > 3u )
        {
          KiUpdateVPBackingThreadPriority(NextThread);
          v14 = v143;
          v20 = v150;
        }
      }
      if ( v26 )
        *(_QWORD *)(v27 + 64) = 0LL;
      goto LABEL_59;
    }
    if ( v13 == 1 )
    {
      v16 = *(unsigned __int8 **)(v12 + 34904);
      v14 = (struct _KPRCB **)(v16 + 8);
      v143 = (struct _KPRCB **)(v16 + 8);
      v15 = *v16;
      v141 = v15;
    }
    v17 = 0;
    v139 = 0;
    if ( v15 )
      goto LABEL_33;
LABEL_63:
    HIDWORD(v156[0]) = v17;
    LODWORD(v156[1]) = v13;
    LOBYTE(v156[0]) = v15;
    if ( v13 )
      BYTE1(v156[0]) = *(_BYTE *)(*(_QWORD *)(v12 + 34904) + 1LL);
    else
      BYTE1(v156[0]) = 0;
    if ( v17 )
    {
      v31 = 0LL;
      v32 = 0;
      if ( v15 )
      {
        v33 = &v156[2];
        while ( v33[2] == *(_QWORD *)(*v33 + 34944LL) )
        {
          ++v32;
          v33 += 5;
          if ( v32 >= v15 )
            goto LABEL_73;
        }
        v31 = v33;
LABEL_73:
        v34 = &v156[6];
        v35 = v15;
        do
        {
          if ( v34 - 32 != (_BYTE *)v31 )
          {
            *((_QWORD *)v34 - 2) = v31[2];
            *v34 = *((_BYTE *)v31 + 32) | 0x20;
          }
          v34 += 40;
          --v35;
        }
        while ( v35 );
      }
    }
    if ( (v1 & 1) != 0 && CurrentThread->Priority < 16 )
    {
      RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(v156, v8);
      v38 = *((unsigned __int8 *)RescheduleContextEntryForPrcb + 32);
      v39 = (v38 >> 1) & 1;
      v40 = v38 | 8;
    }
    else
    {
      RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(v156, v8);
      v41 = *((unsigned __int8 *)RescheduleContextEntryForPrcb + 32);
      v39 = (v41 >> 1) & 1;
      v40 = v41 | 0x10;
    }
    *((_BYTE *)RescheduleContextEntryForPrcb + 34) |= 2u;
    *((_BYTE *)RescheduleContextEntryForPrcb + 32) = v40;
    if ( v39 )
    {
      v42 = v156[0];
      for ( i = 0; i < v42; ++i )
      {
        v44 = &v156[5 * i + 2];
        if ( v44 != RescheduleContextEntryForPrcb )
        {
          v45 = *((_BYTE *)v44 + 32);
          if ( v37 )
            v46 = v45 | 0x10;
          else
            v46 = v45 | 8;
          *((_BYTE *)v44 + 32) = v46;
          *((_BYTE *)v44 + 34) |= 2u;
          v42 = v156[0];
        }
      }
    }
    KiSearchForNewThreadsForRescheduleContext(v156, (__int64)&v142);
    v47 = 0;
    v48 = 0;
    v49 = 0;
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      v48 = 2;
    if ( LOBYTE(v156[0]) )
    {
      do
        v47 |= KiCommitRescheduleContextEntry(&v156[5 * v49++ + 2], v8, v48, &v142);
      while ( v49 < LOBYTE(v156[0]) );
    }
    if ( LODWORD(v156[1]) == 1 )
    {
      v50 = *(unsigned __int8 **)(v156[2] + 34904LL);
      v51 = v50[1] + 1;
      if ( v51 >= *v50 )
        v51 = 0;
      v50[1] = v51;
    }
    if ( v47 || v142 )
    {
      KiReleasePrcbLocksForIsolationUnit(&v138);
      CurrentThread->ThreadLock = 0LL;
      if ( v47 )
      {
        KiCompleteRescheduleContext(v156, v8);
        KiFlushSoftwareInterruptBatch(v8 + 12760);
      }
      if ( v142 )
        KiReadyDeferredReadyList(v8, &v142);
      v147[0] = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(v147);
        while ( CurrentThread->ThreadLock );
      }
      KiAcquirePrcbLocksForIsolationUnit(v8, 0, (__int64 *)&v138);
      v11 = v138;
    }
  }
  v152 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v11 & 1) != 0 )
  {
    KzReleaseAdditionalPrcbLocks(
      *(_QWORD *)((v11 & 0xFFFFFFFFFFFFFFFEuLL) + 34904) + 8LL,
      **(unsigned __int8 **)((v11 & 0xFFFFFFFFFFFFFFFEuLL) + 34904),
      &v152,
      1LL);
    v138 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  v52 = *(_QWORD *)(v8 + 16);
  if ( v52 )
  {
    v53 = 0xFFFFFFFFLL;
    if ( *(_BYTE *)(v8 + 32) )
    {
      CycleTime = CurrentThread->CycleTime;
    }
    else
    {
      _disable();
      *(_BYTE *)(v8 + 32) = 1;
      v54 = __rdtsc();
      v55 = v54 - *(_QWORD *)(v8 + 33152);
      CycleTime = v55 + CurrentThread->CycleTime;
      CurrentThread->CycleTime = CycleTime;
      CurrentRunTime = CurrentThread->CurrentRunTime;
      v58 = v55 * *(unsigned int *)(v8 + 33208);
      *(_QWORD *)(v8 + 33152) = v54;
      v59 = (v58 >> 16) + CurrentRunTime;
      if ( v59 > 0xFFFFFFFF )
        v59 = 0xFFFFFFFFLL;
      v60 = (CurrentThread->Header.Size & 0xBE) == 0;
      CurrentThread->CurrentRunTime = v59;
      if ( !v60 )
        KiEndThreadAccountingPeriodEx(v8, CurrentThread, v55, 0LL);
      v61 = __rdtsc();
      v62 = (unsigned __int64 *)((unsigned __int64)HIDWORD(v61) << 32);
      v63 = v61;
      *(_QWORD *)(v8 + 33400) += v61 - *(_QWORD *)(v8 + 33152);
      if ( (CurrentThread->Header.Size & 0x20) != 0 )
      {
        PoGetFrequencyBucket(v8, v62, v55, v53);
        ProcessorEfficiencyClass = KiGetProcessorEfficiencyClass(v8);
        v62 = (unsigned __int64 *)(v8 + 8 * (ProcessorEfficiencyClass + 2 * v53 + 4176));
        v59 = v65 + *v62;
        *v62 = v59;
      }
      if ( (CurrentThread->Header.Size & 0x40) != 0 )
      {
        v66 = CurrentThread->SchedulerAssist;
        if ( v66 )
          v66[64] = 1;
      }
      *(_QWORD *)(v8 + 33152) = v63;
      if ( (CurrentThread->Header.Size & 2) != 0 )
        KiBeginCounterAccumulation(CurrentThread, 0LL, v55, v53);
      *(_BYTE *)(v8 + 32) = 0;
      if ( *(_BYTE *)(v8 + 6) )
      {
        LOBYTE(v59) = 2;
        *(_BYTE *)(v8 + 6) = 0;
        HalRequestSoftwareInterrupt(v59, v62, v55, v53);
      }
      v67 = KeGetCurrentPrcb();
      v68 = (signed __int32 *)v67->SchedulerAssist;
      if ( v68 )
      {
        _m_prefetchw(v68);
        v69 = *v68;
        do
        {
          v70 = v69;
          v69 = _InterlockedCompareExchange(v68, v69 & 0xFFDFFFFF, v69);
        }
        while ( v70 != v69 );
        if ( (v69 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v67);
      }
      _enable();
    }
    v71 = *(&CurrentThread->MiscFlags + 1);
    v72 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)CurrentThread->SchedulerApc.SpareByte1;
    if ( (v71 & 0x20) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 5u);
      v71 = *(&CurrentThread->MiscFlags + 1);
    }
    Priority = CurrentThread->Priority;
    CurrentThread->QuantumTarget = v72;
    if ( Priority < 16 )
    {
      if ( (KiVelocityFlags & 0x8000) != 0 )
      {
        if ( LOBYTE(CurrentThread->Process[1].IdealProcessor[31]) == 2 )
        {
          v71 = *(&CurrentThread->MiscFlags + 1);
          v74 = v71;
          if ( (v71 & 8) == 0 )
          {
            PriorityDecrement = CurrentThread->PriorityDecrement;
            v53 = PriorityDecrement;
            LOBYTE(v53) = PriorityDecrement & 0xF;
            if ( (PriorityDecrement & 0xF) != 0 )
            {
              CurrentThread->PriorityDecrement = v53;
              v76 = -1 - (PriorityDecrement >> 4) + Priority;
              v77 = CurrentThread->BasePriority + v53;
              if ( v76 >= v77 )
                v77 = v76;
              Priority = v77;
              goto LABEL_151;
            }
          }
        }
        else
        {
          v74 = *(&CurrentThread->MiscFlags + 1);
        }
        v71 = v74;
      }
      v78 = CurrentThread->PriorityDecrement;
      v53 = v78;
      BasePriority = CurrentThread->BasePriority;
      if ( (char)(-1 - (v78 >> 4) - (v78 & 0xF) + Priority) >= BasePriority )
        BasePriority = -1 - (v78 >> 4) - (v78 & 0xF) + Priority;
      Priority = BasePriority;
      if ( v78 )
      {
        if ( (v78 & 0xF) != 0 )
        {
          v71 = *(&CurrentThread->MiscFlags + 1);
          CurrentThread->ForegroundLossTime = MEMORY[0xFFFFF78000000320];
        }
        CurrentThread->PriorityDecrement = 0;
      }
    }
LABEL_151:
    PriorityFloorSummary = CurrentThread->PriorityFloorSummary;
    if ( PriorityFloorSummary )
    {
      _BitScanReverse(&PriorityFloorSummary, PriorityFloorSummary);
      v147[1] = PriorityFloorSummary;
      if ( Priority < (char)PriorityFloorSummary )
        Priority = PriorityFloorSummary;
    }
    v153 = 0LL;
    if ( (v71 & 0x400000) != 0 )
    {
      _InterlockedOr((volatile signed __int32 *)CurrentThread->SchedulerAssist, 0x100000u);
      v81 = KiReadGuestSchedulerAssistPriority(CurrentThread, &v153);
      SchedulerAssistPriorityFloor = CurrentThread->SchedulerAssistPriorityFloor;
      v83 = v81;
      if ( v81 != SchedulerAssistPriorityFloor )
      {
        v84 = (char *)CurrentThread + (char)v81;
        v85 = v84[824];
        if ( v85 == -1 )
          KeBugCheckEx(0x157u, (ULONG_PTR)CurrentThread, (char)v83, 1uLL, 0LL);
        v84[824] = v85 + 1;
        CurrentThread->PriorityFloorSummary |= 1 << v83;
        if ( SchedulerAssistPriorityFloor != 32 )
        {
          v86 = (char *)CurrentThread + (char)SchedulerAssistPriorityFloor;
          v87 = v86[824];
          if ( !v87 )
            KeBugCheckEx(0x157u, (ULONG_PTR)CurrentThread, (char)SchedulerAssistPriorityFloor, 2uLL, 0LL);
          v88 = v87 - 1;
          v86[824] = v88;
          if ( !v88 )
            CurrentThread->PriorityFloorSummary ^= 1 << SchedulerAssistPriorityFloor;
        }
        CurrentThread->SchedulerAssistPriorityFloor = v83;
      }
      v89 = CurrentThread->Priority;
      v90 = (char)KiComputePriorityFloor(CurrentThread, (unsigned __int8)v83);
      if ( v90 != v89 )
      {
        KiSetBasePriorityAndClearDecrement(CurrentThread, 0LL, 0LL);
        KiUpdateThreadPriority(0, v91, (_DWORD)CurrentThread, v90, 0);
      }
      BamQosLevelFromAssistPage = CurrentThread->BamQosLevelFromAssistPage;
      KiCheckAssistDataForBamQosLevelOverride(CurrentThread, &BamQosLevelFromAssistPage);
      if ( BamQosLevelFromAssistPage != (unsigned __int8)CurrentThread->ThreadFlags2 )
        KiSetThreadQosLevelUnsafe(CurrentThread);
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x400000) != 0 )
        _InterlockedAnd((volatile signed __int32 *)CurrentThread->SchedulerAssist, 0xFFEFFFFF);
      if ( v89 != v90 && (BYTE4(xmmword_140D1EAD0) & 0x20) != 0 )
        EtwTraceXSchedulerPriorityUpdate((_DWORD)CurrentThread, v89, v83, v90, (__int64)&v153);
      p_CurrentRunTime = &CurrentThread->CurrentRunTime;
LABEL_219:
      CurrentThread->ThreadLock = 0LL;
      *(_QWORD *)(v8 + 16) = 0LL;
      _disable();
      *(_BYTE *)(v8 + 32) = 1;
      v106 = __rdtsc();
      v107 = v106 - *(_QWORD *)(v8 + 33152);
      CurrentThread->CycleTime += v107;
      v108 = *p_CurrentRunTime;
      v109 = v107 * *(unsigned int *)(v8 + 33208);
      *(_QWORD *)(v8 + 33152) = v106;
      Size = CurrentThread->Header.Size;
      v111 = (v109 >> 16) + v108;
      if ( v111 > 0xFFFFFFFF )
        LODWORD(v111) = -1;
      *p_CurrentRunTime = v111;
      if ( (Size & 0xBE) != 0 )
      {
        if ( Size < 0 )
        {
          v112 = *(_QWORD *)(v8 + 34480);
          v113 = ((unsigned __int64)CurrentThread->Process->PerProcessorCycleTimes >> 4) & 0x1FF;
          v114 = ((unsigned int)CurrentThread->Process->PerProcessorCycleTimes >> 13) & 0x3FFFF;
          _BitScanReverse(&v115, v114);
          v116 = 1 << v115;
          v117 = v115 - 2;
          v53 = v114 ^ v116;
          v147[2] = v117;
          v118 = *(_QWORD *)(*(_QWORD *)(v112 + 8 * v117) + 8 * v53 + 8);
          *(_QWORD *)(v118 + 8 * v113) += v107;
          Size &= ~0x80u;
        }
        if ( (Size & 0x10) != 0 )
        {
          v119 = v8 + 8LL * (unsigned __int8)CurrentThread->Tag;
          *(_QWORD *)(v119 + 33160) += v107;
          Size &= ~0x10u;
        }
        if ( (Size & 0x20) != 0 )
        {
          KiAccumulateCycleStats(v8, (__int64)CurrentThread, v107);
          Size &= ~0x20u;
        }
        if ( (Size & 0x40) != 0 )
        {
          v120 = CurrentThread->SchedulerAssist;
          if ( v120 )
            v120[64] = 0;
        }
        if ( KiHgsPlusEnabled )
        {
          LOBYTE(v53) = 1;
          KiUpdateThreadHgsFeedback(v8, CurrentThread, v107, v53);
        }
        v121 = *(_QWORD *)(v8 + 33200);
        if ( v121 )
        {
          if ( CurrentThread->SystemHeteroCpuPolicy )
          {
            ThreadFlags2 = (unsigned __int8)CurrentThread->ThreadFlags2;
            if ( ThreadFlags2 < 7 )
            {
              v123 = 0;
              ExpectedRunTime = *p_CurrentRunTime;
              if ( *p_CurrentRunTime <= CurrentThread->ExpectedRunTime )
                ExpectedRunTime = CurrentThread->ExpectedRunTime;
              LOBYTE(v123) = ExpectedRunTime >= KiDynamicHeteroCpuPolicyExpectedCycles;
              v125 = CurrentThread->HgsFeedbackClass + (unsigned int)KiHgsPlusConfiguration * (v123 + 2 * ThreadFlags2);
              *(_QWORD *)(v121 + 8 * v125) += v107;
            }
          }
        }
        if ( (Size & 0xBE) != 0 )
        {
          SchedulingGroup = CurrentThread->SchedulingGroup;
          if ( SchedulingGroup )
          {
            for ( j = (_QWORD *)((char *)&SchedulingGroup->Policy + *(unsigned int *)(v8 + 216)); j; j = (_QWORD *)j[51] )
              *j += v107;
          }
          if ( (CurrentThread->Header.Size & 8) != 0
            && (CurrentThread->Affinity->Bitmap[*(unsigned __int16 *)(*(_QWORD *)(v8 + 192) + 136LL)] & *(_QWORD *)(*(_QWORD *)(v8 + 192) + 128LL)) != *(_QWORD *)(*(_QWORD *)(v8 + 192) + 128LL) )
          {
            *(_QWORD *)(v8 + 33192) += v107;
          }
          if ( CurrentThread->WaitBlock[0].SparePtr )
            KiEndCounterAccumulation(CurrentThread);
        }
      }
      v128 = KeGetCurrentPrcb();
      v129 = (signed __int32 *)v128->SchedulerAssist;
      if ( v129 )
      {
        _m_prefetchw(v129);
        v130 = *v129;
        do
        {
          v131 = v130;
          v130 = _InterlockedCompareExchange(v129, v130 & 0xFFDFFFFF, v130);
        }
        while ( v131 != v130 );
        if ( (v130 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v128);
      }
      _enable();
      *(_QWORD *)(v8 + 8) = v52;
      if ( *(_BYTE *)(v52 + 388) == 1 )
        *(_DWORD *)(v52 + 132) = *(_DWORD *)(v52 + 132) - *(_DWORD *)(v52 + 436) + MEMORY[0xFFFFF78000000320];
      LOBYTE(CurrentIrql) = v154;
      *(_BYTE *)(v52 + 388) = 2;
      CurrentThread->WaitIrql = CurrentIrql;
      CurrentThread->WaitReason = 33;
      KiQueueReadyThread(v8, (__int64 *)&v138, (ULONG_PTR)CurrentThread);
      LOBYTE(v132) = 1;
      KiSwapContext(CurrentThread, v52, v132);
      goto LABEL_256;
    }
    v93 = KeGetCurrentPrcb();
    if ( Priority > CurrentThread->Priority )
    {
      if ( CurrentThread->AbWaitEntryCount )
      {
        p_PropagateBoostsEntry = &CurrentThread->PropagateBoostsEntry;
        if ( CurrentThread->PropagateBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
        {
          p_AbPropagateBoostsList = &v93->AbPropagateBoostsList;
          if ( v93 != (struct _KPRCB *)-35704LL )
          {
            p_PropagateBoostsEntry->Next = p_AbPropagateBoostsList->Next;
            p_AbPropagateBoostsList->Next = p_PropagateBoostsEntry;
            _InterlockedIncrement16(&CurrentThread->KeReferenceCount);
            KiAbQueueAutoBoostDpc(v93);
          }
        }
      }
    }
    v96 = CurrentThread->CurrentRunTime;
    p_CurrentRunTime = &CurrentThread->CurrentRunTime;
    v97 = CurrentThread->ExpectedRunTime;
    v98 = 0;
    CurrentThread->Priority = Priority;
    if ( v96 <= v97 )
      v96 = v97;
    LOBYTE(v98) = v96 >= KiDynamicHeteroCpuPolicyExpectedCycles;
    if ( !KeHeteroSystem )
    {
      v99 = 0LL;
      goto LABEL_215;
    }
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x400000) != 0 )
    {
      v99 = (unsigned __int8)CurrentThread->ThreadFlags2;
      goto LABEL_215;
    }
    Object = CurrentThread[1].WaitBlock[1].Object;
    if ( Object )
    {
      v101 = CurrentThread->ThreadFlags2;
      v102 = Object[128];
      if ( (unsigned __int8)v102 == (unsigned __int8)v101
        || (unsigned __int8)v102 != 3
        && (unsigned __int8)v101 != 3
        && (unsigned __int8)v102 >= (unsigned int)(unsigned __int8)v101 )
      {
        LOBYTE(v102) = CurrentThread->ThreadFlags2;
      }
      v99 = (unsigned __int8)v102;
      goto LABEL_215;
    }
    if ( CurrentThread->Tag == 1 )
    {
      v99 = 3LL;
      goto LABEL_215;
    }
    if ( CurrentThread->Tag == 2 )
    {
      v99 = 4LL;
      goto LABEL_215;
    }
    v53 = 0x140000000uLL;
    v99 = (unsigned int)KiThreadPolicyToQosMappingTable[((unsigned int)CurrentThread->ThreadFlags3 >> 8) & 7];
    if ( (_DWORD)v99 != 7 )
      goto LABEL_215;
    Process = CurrentThread->Process;
    v104 = (*(_DWORD *)&Process->0 >> 7) & 0xF;
    if ( (KiDynamicHeteroCpuPolicyMask & 4) != 0 )
    {
      if ( (_DWORD)v104 != 3 )
      {
        if ( (_DWORD)v104 != 8 )
        {
          if ( !v98 && KeHeteroSystemQos && (KiDynamicHeteroCpuPolicyMask & 8) != 0 )
          {
            v99 = 2LL;
            goto LABEL_215;
          }
          goto LABEL_203;
        }
LABEL_206:
        v99 = (unsigned int)KiProcessPolicyToQosMappingTable[v104];
        if ( (_DWORD)v99 == 7 )
        {
          v105 = CurrentThread->Priority;
          if ( CurrentThread->Priority < 15 )
          {
            if ( (KiDynamicHeteroCpuPolicyMask & 2) != 0 )
            {
              if ( v105 >= KiDynamicHeteroCpuPolicyImportantPriority )
              {
                v99 = 0LL;
                goto LABEL_215;
              }
              if ( (CurrentThread->MiscFlags & 0x400) != 0 )
              {
                v99 = 0LL;
                if ( (char)v105 >= 8 )
                  goto LABEL_215;
              }
            }
            v99 = 6LL;
            goto LABEL_215;
          }
          v99 = 0LL;
        }
LABEL_215:
        if ( (_DWORD)v99 != (unsigned __int8)CurrentThread->ThreadFlags2 )
          KiSetThreadQosLevelUnsafe(CurrentThread);
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x400000) != 0 )
        {
          LOBYTE(v99) = 1;
          KiSetSchedulerAssistPriority(CurrentThread->SchedulerAssist, (unsigned int)CurrentThread->Priority, v99);
        }
        goto LABEL_219;
      }
    }
    else if ( (_DWORD)v104 == 8 )
    {
      goto LABEL_206;
    }
LABEL_203:
    if ( (KiDynamicHeteroCpuPolicyMask & 1) != 0 && LOBYTE(Process[1].IdealProcessor[31]) == 2 )
    {
      v99 = 0LL;
      goto LABEL_215;
    }
    goto LABEL_206;
  }
  KiReleasePrcbLocksForIsolationUnit(&v138);
  LOBYTE(CurrentIrql) = v154;
  CurrentThread->ThreadLock = 0LL;
  v2 = 1073741860;
LABEL_256:
  if ( (_DWORD)KiIrqlFlags )
  {
    v133 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v133 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v133 >= 2u )
    {
      v134 = KeGetCurrentPrcb();
      v135 = v134->SchedulerAssist;
      v136 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
      v60 = (v136 & v135[5]) == 0;
      v135[5] &= v136;
      if ( v60 )
        KiRemoveSystemWorkPriorityKick(v134);
    }
  }
  __writecr8((unsigned __int8)CurrentIrql);
  return v2;
}
