/*
 * XREFs of KeWaitForMultipleObjects @ 0x1402F13C0
 * Callers:
 *     PopFxProcessWorkPool @ 0x14022EBF8 (PopFxProcessWorkPool.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140237720 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140238330 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x14027DB4C (MmWaitMultipleForCacheManagerPrefetch.c)
 *     MiReadyToZeroNextLargePage @ 0x1402C4BF0 (MiReadyToZeroNextLargePage.c)
 *     PopSleepDeviceList @ 0x14038BCE0 (PopSleepDeviceList.c)
 *     CcAsyncReadWorker @ 0x1403C4AE0 (CcAsyncReadWorker.c)
 *     MiMappedPageWriter @ 0x1403C5160 (MiMappedPageWriter.c)
 *     CcQueueLazyWriteScanThread @ 0x1403C7DE0 (CcQueueLazyWriteScanThread.c)
 *     KeBalanceSetManager @ 0x1403C81D0 (KeBalanceSetManager.c)
 *     MiRebuildLargePagesThread @ 0x1403CA190 (MiRebuildLargePagesThread.c)
 *     MiDereferenceSegmentThread @ 0x1403CBBF0 (MiDereferenceSegmentThread.c)
 *     MiStoreEvictThread @ 0x1403CDBF0 (MiStoreEvictThread.c)
 *     MiModifiedPageWriter @ 0x1403CFD20 (MiModifiedPageWriter.c)
 *     CcQueueLazyWriteScanThreadForVolume @ 0x14053D400 (CcQueueLazyWriteScanThreadForVolume.c)
 *     MiPartitionWorkingSetManager @ 0x14058DE20 (MiPartitionWorkingSetManager.c)
 *     MiIssueAsynchronousFlush @ 0x1405980C8 (MiIssueAsynchronousFlush.c)
 *     MiWaitForAsynchronousFlushes @ 0x1405983C0 (MiWaitForAsynchronousFlushes.c)
 *     DifKeWaitForMultipleObjectsWrapper @ 0x140616030 (DifKeWaitForMultipleObjectsWrapper.c)
 *     CmpDoFileWrite @ 0x140714594 (CmpDoFileWrite.c)
 *     PiUEventNotifyUserMode @ 0x14078B2D4 (PiUEventNotifyUserMode.c)
 *     EtwpLogger @ 0x140799440 (EtwpLogger.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1407A11A0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     ObWaitForMultipleObjects @ 0x1407A1400 (ObWaitForMultipleObjects.c)
 *     CmpFinishSystemHivesLoad @ 0x140833B80 (CmpFinishSystemHivesLoad.c)
 *     ExpWorkQueueManagerThread @ 0x14083ECE0 (ExpWorkQueueManagerThread.c)
 *     PfTLoggingWorker @ 0x140882180 (PfTLoggingWorker.c)
 *     PfGenerateTrace @ 0x140988074 (PfGenerateTrace.c)
 *     PopThermalReadCounters @ 0x140990634 (PopThermalReadCounters.c)
 *     PsShutdownSystem @ 0x1409B1074 (PsShutdownSystem.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1409EF190 (EtwpCovSampCaptureWorkerThread.c)
 *     PnprQuiesceWorker @ 0x140A69140 (PnprQuiesceWorker.c)
 *     MiZeroAllPageFiles @ 0x140A6A1B0 (MiZeroAllPageFiles.c)
 *     KiComputeDispatchInterruptCost @ 0x140B24E48 (KiComputeDispatchInterruptCost.c)
 * Callees:
 *     KiWaitForAllObjects @ 0x1402175B8 (KiWaitForAllObjects.c)
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KiCheckForThreadDispatch @ 0x140294824 (KiCheckForThreadDispatch.c)
 *     KeAbPreWait @ 0x14029F580 (KeAbPreWait.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KiCommitThreadWait @ 0x1402B5240 (KiCommitThreadWait.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     KiDeliverApc @ 0x1402F1DC0 (KiDeliverApc.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiWaitSatisfyMutant @ 0x1402F35E0 (KiWaitSatisfyMutant.c)
 *     KiProcessDeferredReadyList @ 0x140344800 (KiProcessDeferredReadyList.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x140353BB0 (KeAbPostReleaseEx.c)
 *     KiSelectNextThread @ 0x14035C3FC (KiSelectNextThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheck @ 0x14041F3B0 (KeBugCheck.c)
 *     __report_rangecheckfailure @ 0x140502A3C (__report_rangecheckfailure.c)
 *     KiSatisfyThreadWait @ 0x140578730 (KiSatisfyThreadWait.c)
 */

NTSTATUS __stdcall KeWaitForMultipleObjects(
        ULONG Count,
        PVOID Object[],
        WAIT_TYPE WaitType,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PKWAIT_BLOCK WaitBlockArray)
{
  __int64 *v8; // r12
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int8 CurrentIrql; // r11
  unsigned __int8 WaitIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v13; // rcx
  ULONG v14; // r13d
  unsigned __int8 v15; // r14
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  struct _KPRCB *v18; // r10
  char *v19; // rdi
  PVOID *__attribute__((__org_arrdim(0,0))) v20; // r11
  unsigned __int64 v21; // r8
  ULONG v22; // r14d
  volatile signed __int32 *v23; // rbx
  PVOID *v24; // rdx
  __int64 v25; // r9
  int v26; // ecx
  unsigned __int64 v27; // rax
  unsigned int v28; // edi
  unsigned int v29; // ebx
  unsigned __int64 v30; // r15
  NTSTATUS v31; // r14d
  PVOID *__attribute__((__org_arrdim(0,0))) v32; // r11
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 v35; // rbx
  _KWAIT_STATUS_REGISTER v36; // al
  struct _KPRCB *v37; // rdi
  _DWORD *v38; // rcx
  __int64 v39; // r13
  struct _KPRCB *v40; // rcx
  _DWORD *v41; // rdx
  volatile __int64 WaitStatus; // r15
  void *volatile AbWaitObject; // rcx
  __int64 *v44; // rbx
  volatile signed __int32 *v45; // rdi
  __int64 v46; // rcx
  __int64 **v47; // rax
  __int64 ThreadTimerDelay; // rdx
  unsigned __int64 v49; // rcx
  struct _KPRCB *v50; // rbx
  _DWORD *v51; // rcx
  unsigned __int8 v52; // r10
  _DWORD *v53; // r9
  struct _KPRCB *v54; // rdi
  _DWORD *v55; // rcx
  bool v56; // zf
  _DWORD *v57; // rcx
  _DWORD *v58; // rcx
  unsigned __int8 v59; // cl
  _DWORD *v60; // rcx
  _DWORD *v61; // rcx
  _DWORD *v62; // r9
  _DWORD *v63; // rcx
  _DWORD *v64; // rcx
  int v65; // eax
  int v66; // eax
  int v67; // eax
  int v68; // eax
  struct _KPRCB *v69; // rcx
  _DWORD *v70; // rdx
  unsigned __int64 v71; // rax
  char v72; // r14
  __int64 *v73; // rax
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 *v76; // rdi
  __int64 v77; // rax
  unsigned int v78; // r8d
  unsigned __int64 v79; // rdx
  __int64 v80; // r9
  unsigned __int64 v81; // rdi
  char *v82; // rbx
  __int64 v83; // rax
  __int64 v84; // r13
  NTSTATUS v85; // ebx
  int v86; // eax
  _DWORD *v87; // rcx
  int v88; // eax
  _DWORD *v89; // rcx
  int v90; // eax
  struct _KPRCB *v91; // rbx
  _DWORD *v92; // rcx
  int v93; // eax
  _DWORD *v94; // rcx
  int v95; // eax
  _DWORD *v96; // rcx
  int v97; // eax
  int v98; // eax
  int v99; // eax
  int v100; // eax
  int v101; // eax
  int v102; // eax
  int v103; // eax
  int v104; // eax
  __int64 v105; // rax
  struct _KPRCB *v106; // rdi
  _DWORD *v107; // rcx
  int v108; // eax
  _DWORD *v109; // rcx
  int v110; // eax
  _DWORD *v111; // rcx
  int v112; // eax
  struct _KPRCB *v113; // rcx
  _DWORD *v114; // rdx
  int v115; // eax
  struct _KPRCB *v116; // rcx
  _DWORD *v117; // rdx
  unsigned __int8 v118; // al
  struct _KPRCB *v119; // r9
  _DWORD *v120; // r8
  int v121; // eax
  unsigned __int8 v122; // [rsp+40h] [rbp-79h]
  int v123; // [rsp+44h] [rbp-75h]
  ULONG v124; // [rsp+48h] [rbp-71h] BYREF
  PVOID *__attribute__((__org_arrdim(0,0))) v125; // [rsp+50h] [rbp-69h] BYREF
  struct _KPRCB *v126; // [rsp+58h] [rbp-61h]
  KWAIT_REASON v127; // [rsp+60h] [rbp-59h] BYREF
  __int64 v128; // [rsp+68h] [rbp-51h]
  LONGLONG QuadPart; // [rsp+70h] [rbp-49h]
  int v130; // [rsp+78h] [rbp-41h] BYREF
  _DWORD v131[4]; // [rsp+7Ch] [rbp-3Dh] BYREF
  int v132; // [rsp+8Ch] [rbp-2Dh] BYREF
  int v133; // [rsp+90h] [rbp-29h] BYREF
  PVOID v134; // [rsp+98h] [rbp-21h] BYREF
  _QWORD v135[2]; // [rsp+A0h] [rbp-19h] BYREF

  v8 = (__int64 *)WaitBlockArray;
  v127 = WaitReason;
  v125 = Object;
  v124 = Count;
  QuadPart = 0LL;
  if ( Count == 1 )
    return KeWaitForSingleObject(*Object, WaitReason, WaitMode, Alertable, Timeout);
  CurrentThread = KeGetCurrentThread();
  if ( !WaitBlockArray )
  {
    if ( Count <= 3 )
    {
      v8 = (__int64 *)&CurrentThread->320;
      goto LABEL_5;
    }
LABEL_138:
    KeBugCheck(0xCu);
  }
  if ( Count > 0x40 )
    goto LABEL_138;
LABEL_5:
  if ( WaitType )
  {
    v134 = 0LL;
    v122 = _bittestandreset((signed __int32 *)&CurrentThread->116, 2u);
    if ( !v122 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      CurrentThread->WaitIrql = CurrentIrql;
    }
    if ( Timeout )
    {
      if ( Timeout->HighPart >= 0 )
      {
        QuadPart = Timeout->QuadPart;
        v123 = 1;
      }
      else
      {
        v123 = 2;
        QuadPart = MEMORY[0xFFFFF78000000008]
                 - MEMORY[0xFFFFF780000003B0]
                 - (Timeout->QuadPart
                  + CurrentThread->RelativeTimerBias);
      }
    }
    else
    {
      v123 = 0;
    }
LABEL_12:
    WaitIrql = CurrentThread->WaitIrql;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = WaitMode;
      if ( Alertable )
        CurrentThread->MiscFlags |= 0x10u;
      CurrentPrcb = KeGetCurrentPrcb();
      v130 = 0;
      v13 = CurrentPrcb->SchedulerAssist;
      if ( v13 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v66 = v13[6];
          v13[6] = v66 + 1;
          if ( v66 == -1 )
LABEL_141:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v57 = CurrentPrcb->SchedulerAssist;
        if ( v57 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v67 = v57[6] - 1;
            v57[6] = v67;
            if ( !v67 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v130);
        while ( CurrentThread->ThreadLock );
        v58 = CurrentPrcb->SchedulerAssist;
        if ( v58 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v68 = v58[6];
            v58[6] = v68 + 1;
            if ( v68 == -1 )
              goto LABEL_141;
          }
        }
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || WaitIrql )
        break;
      KiReleaseThreadLockSafe((__int64)CurrentThread);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v69 = KeGetCurrentPrcb();
          v70 = v69->SchedulerAssist;
          v56 = (v70[5] & 0xFFFF0003) == 0;
          v70[5] &= 0xFFFF0003;
          if ( v56 )
            KiRemoveSystemWorkPriorityKick(v69);
        }
      }
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      v59 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v59 <= 0xFu )
      {
        v62 = KeGetCurrentPrcb()->SchedulerAssist;
        v62[5] |= ~((unsigned __int8)(1LL << (v59 + 1)) - 1) & 4;
      }
      CurrentThread->WaitIrql = 0;
    }
    v14 = v124;
    v15 = v127;
    if ( Alertable )
    {
      if ( CurrentThread->Alerted[WaitMode] )
      {
        CurrentThread->Alerted[WaitMode] = 0;
        v85 = 257;
        goto LABEL_90;
      }
      if ( !WaitMode
        || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink == &CurrentThread->ApcStateFill[16] )
      {
        if ( !CurrentThread->Alerted[0] )
        {
LABEL_20:
          CurrentThread->WaitBlockFill6[68] = 5;
          CurrentThread->WaitReason = v15;
          CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
          CurrentThread->ThreadLock = 0LL;
          v16 = KeGetCurrentPrcb();
          v17 = v16->SchedulerAssist;
          if ( v17 )
          {
            if ( v16->NestingLevel <= 1u )
            {
              v65 = v17[6] - 1;
              v17[6] = v65;
              if ( !v65 )
                KiRemoveSystemWorkPriorityKick(v16);
            }
          }
          v18 = KeGetCurrentPrcb();
          v19 = (char *)v8 + 17;
          v20 = v125;
          v21 = 0LL;
          v126 = v18;
          v22 = 0;
          v128 = 0LL;
          while ( 1 )
          {
            v131[0] = 0;
            v23 = (volatile signed __int32 *)v20[v22];
            *(v19 - 1) = 1;
            *v19 = 4;
            *(_WORD *)(v19 + 1) = v22;
            *(_QWORD *)(v19 + 7) = CurrentThread;
            *(_QWORD *)(v19 + 15) = v23;
            if ( _interlockedbittestandset(v23, 7u) )
            {
              do
              {
                do
                  KeYieldProcessorEx(v131);
                while ( (*v23 & 0x80u) != 0 );
              }
              while ( _interlockedbittestandset(v23, 7u) );
              v20 = v125;
              v21 = v128;
              v18 = v126;
            }
            if ( (*(_BYTE *)v23 & 0x7F) == 2 )
            {
              if ( (v23[12] & 2) != 0 )
              {
                _bittestandset64((__int64 *)&v21, v22);
                v128 = v21;
              }
              if ( *((int *)v23 + 1) > 0
                || CurrentThread == *((struct _KTHREAD **)v23 + 5) && *((_BYTE *)v23 + 2) == v18->DpcRoutineActive )
              {
                if ( *((_DWORD *)v23 + 1) == 0x80000000 )
                {
                  _InterlockedAnd(v23, 0xFFFFFF7F);
                  v91 = KeGetCurrentPrcb();
                  v124 = 0;
                  v92 = v91->SchedulerAssist;
                  if ( !v92 )
                    goto LABEL_185;
                  if ( v91->NestingLevel > 1u )
                    goto LABEL_185;
                  v93 = v92[6];
                  v92[6] = v93 + 1;
                  if ( v93 != -1 )
                    goto LABEL_185;
                  while ( 1 )
                  {
                    KiRemoveSystemWorkPriorityKick(v91);
                    while ( 1 )
                    {
LABEL_185:
                      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
                      {
                        KiSatisfyThreadWait((_DWORD)v126, (_DWORD)CurrentThread, v122, (_DWORD)v8, v22);
                        RtlRaiseStatus(-1073741423);
                      }
                      v94 = v91->SchedulerAssist;
                      if ( v94 )
                      {
                        if ( v91->NestingLevel <= 1u )
                        {
                          v95 = v94[6] - 1;
                          v94[6] = v95;
                          if ( !v95 )
                            KiRemoveSystemWorkPriorityKick(v91);
                        }
                      }
                      do
                        KeYieldProcessorEx(&v124);
                      while ( CurrentThread->ThreadLock );
                      v96 = v91->SchedulerAssist;
                      if ( v96 )
                      {
                        if ( v91->NestingLevel <= 1u )
                        {
                          v97 = v96[6];
                          v96[6] = v97 + 1;
                          if ( v97 == -1 )
                            break;
                        }
                      }
                    }
                  }
                }
                v54 = KeGetCurrentPrcb();
                v127 = Executive;
                v55 = v54->SchedulerAssist;
                if ( v55 )
                {
                  if ( v54->NestingLevel <= 1u )
                  {
                    v86 = v55[6];
                    v55[6] = v86 + 1;
                    if ( v86 == -1 )
LABEL_171:
                      KiRemoveSystemWorkPriorityKick(v54);
                  }
                }
                while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
                {
                  v87 = v54->SchedulerAssist;
                  if ( v87 )
                  {
                    if ( v54->NestingLevel <= 1u )
                    {
                      v88 = v87[6] - 1;
                      v87[6] = v88;
                      if ( !v88 )
                        KiRemoveSystemWorkPriorityKick(v54);
                    }
                  }
                  do
                    KeYieldProcessorEx(&v127);
                  while ( CurrentThread->ThreadLock );
                  v89 = v54->SchedulerAssist;
                  if ( v89 )
                  {
                    if ( v54->NestingLevel <= 1u )
                    {
                      v90 = v89[6];
                      v89[6] = v90 + 1;
                      if ( v90 == -1 )
                        goto LABEL_171;
                    }
                  }
                }
                v39 = (__int64)v126;
                if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
                {
                  CurrentThread->WaitStatus = v22;
                  CurrentThread->AbWaitObject = 0LL;
                  v56 = (*((_DWORD *)v23 + 1))-- == 1;
                  if ( v56 )
                    KiWaitSatisfyMutant(v23, CurrentThread, v39);
                }
                goto LABEL_50;
              }
            }
            else if ( *((int *)v23 + 1) > 0 )
            {
              v37 = KeGetCurrentPrcb();
              v133 = 0;
              v38 = v37->SchedulerAssist;
              if ( v38 )
              {
                if ( v37->NestingLevel <= 1u )
                {
                  v101 = v38[6];
                  v38[6] = v101 + 1;
                  if ( v101 == -1 )
LABEL_208:
                    KiRemoveSystemWorkPriorityKick(v37);
                }
              }
              while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
              {
                v60 = v37->SchedulerAssist;
                if ( v60 )
                {
                  if ( v37->NestingLevel <= 1u )
                  {
                    v102 = v60[6] - 1;
                    v60[6] = v102;
                    if ( !v102 )
                      KiRemoveSystemWorkPriorityKick(v37);
                  }
                }
                do
                  KeYieldProcessorEx(&v133);
                while ( CurrentThread->ThreadLock );
                v61 = v37->SchedulerAssist;
                if ( v61 )
                {
                  if ( v37->NestingLevel <= 1u )
                  {
                    v103 = v61[6];
                    v61[6] = v103 + 1;
                    if ( v103 == -1 )
                      goto LABEL_208;
                  }
                }
              }
              if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
              {
                CurrentThread->WaitStatus = v22;
                CurrentThread->AbWaitObject = 0LL;
                if ( (*(_BYTE *)v23 & 7) == 1 )
                {
                  *((_DWORD *)v23 + 1) = 0;
                }
                else if ( (*(_BYTE *)v23 & 0x7F) == 5 )
                {
                  --*((_DWORD *)v23 + 1);
                }
              }
              v39 = (__int64)v126;
LABEL_50:
              _InterlockedAnd(v23, 0xFFFFFF7F);
LABEL_51:
              CurrentThread->WaitBlockFill6[68] = 2;
              CurrentThread->ThreadLock = 0LL;
              v40 = KeGetCurrentPrcb();
              v41 = v40->SchedulerAssist;
              if ( v41 )
              {
                if ( v40->NestingLevel <= 1u )
                {
                  v104 = v41[6] - 1;
                  v41[6] = v104;
                  if ( !v104 )
                    KiRemoveSystemWorkPriorityKick(v40);
                }
              }
              WaitStatus = CurrentThread->WaitStatus;
              AbWaitObject = CurrentThread->AbWaitObject;
              if ( AbWaitObject )
              {
                CurrentThread->AbWaitObject = 0LL;
                v105 = KeAbPreAcquire(AbWaitObject, 0LL, 1LL);
                if ( v105 )
                  *(_BYTE *)(v105 + 18) = 1;
              }
              if ( v22 )
              {
                v44 = &v8[6 * (unsigned __int8)v22];
                do
                {
                  if ( *((_BYTE *)v8 + 17) < 5u )
                  {
                    v45 = (volatile signed __int32 *)v8[4];
                    KiAcquireKobjectLockSafe(v45);
                    if ( *((_BYTE *)v8 + 17) == 4 )
                    {
                      v46 = *v8;
                      v47 = (__int64 **)v8[1];
                      if ( *(__int64 **)(*v8 + 8) != v8 || *v47 != v8 )
                        goto LABEL_58;
                      *v47 = (__int64 *)v46;
                      *(_QWORD *)(v46 + 8) = v47;
                    }
                    _InterlockedAnd(v45, 0xFFFFFF7F);
                  }
                  v8 += 6;
                }
                while ( v8 != v44 );
              }
              v35 = CurrentThread->WaitIrql;
              v36.Flags = (unsigned __int8)CurrentThread->WaitRegister;
              if ( (v36.Flags & 0x38) != 0 )
              {
                if ( (v36.Flags & 0x18) != 0 )
                {
                  if ( (v36.Flags & 8) != 0 )
                    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
                  v135[0] = 0LL;
                  v106 = KeGetCurrentPrcb();
                  LODWORD(v125) = 0;
                  v107 = v106->SchedulerAssist;
                  if ( v107 )
                  {
                    if ( v106->NestingLevel <= 1u )
                    {
                      v108 = v107[6];
                      v107[6] = v108 + 1;
                      if ( v108 == -1 )
LABEL_225:
                        KiRemoveSystemWorkPriorityKick(v106);
                    }
                  }
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 48), 0LL) )
                  {
                    v109 = v106->SchedulerAssist;
                    if ( v109 )
                    {
                      if ( v106->NestingLevel <= 1u )
                      {
                        v110 = v109[6] - 1;
                        v109[6] = v110;
                        if ( !v110 )
                          KiRemoveSystemWorkPriorityKick(v106);
                      }
                    }
                    do
                      KeYieldProcessorEx(&v125);
                    while ( *(_QWORD *)(v39 + 48) );
                    v111 = v106->SchedulerAssist;
                    if ( v111 )
                    {
                      if ( v106->NestingLevel <= 1u )
                      {
                        v112 = v111[6];
                        v111[6] = v112 + 1;
                        if ( v112 == -1 )
                          goto LABEL_225;
                      }
                    }
                  }
                  if ( !*(_QWORD *)(v39 + 16) )
                    KiSelectNextThread(v39, v135, v21);
                  _InterlockedAnd64((volatile signed __int64 *)(v39 + 48), 0LL);
                  v113 = KeGetCurrentPrcb();
                  v114 = v113->SchedulerAssist;
                  if ( v114 )
                  {
                    if ( v113->NestingLevel <= 1u )
                    {
                      v115 = v114[6] - 1;
                      v114[6] = v115;
                      if ( !v115 )
                        KiRemoveSystemWorkPriorityKick(v113);
                    }
                  }
                  KiProcessDeferredReadyList(v39, v135, (unsigned __int8)v35);
                }
                else
                {
                  KiCheckForThreadDispatch(v39, 1u);
                  KiDeliverApc(0LL, 0LL, 0LL);
                  if ( KiIrqlFlags )
                  {
                    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
                    {
                      v116 = KeGetCurrentPrcb();
                      v117 = v116->SchedulerAssist;
                      v56 = (v117[5] & 0xFFFF0001) == 0;
                      v117[5] &= 0xFFFF0001;
                      if ( v56 )
                        KiRemoveSystemWorkPriorityKick(v116);
                    }
                  }
                  __writecr8(0LL);
                }
              }
              else if ( v122 )
              {
                KiCheckForThreadDispatch(v39, v35);
              }
              else
              {
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v118 = KeGetCurrentIrql();
                    if ( v118 <= 0xFu && (unsigned __int8)v35 <= 0xFu && v118 >= 2u )
                    {
                      v119 = KeGetCurrentPrcb();
                      v120 = v119->SchedulerAssist;
                      v121 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v35 + 1));
                      v56 = (v121 & v120[5]) == 0;
                      v120[5] &= v121;
                      if ( v56 )
                        KiRemoveSystemWorkPriorityKick(v119);
                    }
                  }
                }
                __writecr8(v35);
              }
              return WaitStatus;
            }
            v24 = (PVOID *)*((_QWORD *)v23 + 2);
            if ( *v24 != v23 + 2 )
LABEL_58:
              __fastfail(3u);
            *(_QWORD *)(v19 - 9) = v24;
            *(_QWORD *)(v19 - 17) = v23 + 2;
            *v24 = v19 - 17;
            *((_QWORD *)v23 + 2) = v19 - 17;
            _InterlockedAnd(v23, 0xFFFFFF7F);
            ++v22;
            v19 += 48;
            if ( v22 >= v14 )
            {
              v25 = QuadPart;
              v26 = v123;
              v27 = QuadPart;
              if ( v123 == 2 )
              {
                ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
                v49 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
                v27 = QuadPart;
                if ( CurrentThread->WaitMode
                  && !CurrentThread->WaitBlock[3].SpareLong
                  && !CurrentThread->WaitIrql
                  && !CurrentThread->ApcState.InProgressFlags
                  && (_DWORD)ThreadTimerDelay )
                {
                  v27 = QuadPart + ThreadTimerDelay;
                }
              }
              else
              {
                if ( !v123 )
                  goto LABEL_29;
                if ( !QuadPart )
                {
LABEL_81:
                  v50 = KeGetCurrentPrcb();
                  v132 = 0;
                  v51 = v50->SchedulerAssist;
                  if ( v51 )
                  {
                    if ( v50->NestingLevel <= 1u )
                    {
                      v98 = v51[6];
                      v51[6] = v98 + 1;
                      if ( v98 == -1 )
LABEL_198:
                        KiRemoveSystemWorkPriorityKick(v50);
                    }
                  }
                  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
                  {
                    v63 = v50->SchedulerAssist;
                    if ( v63 )
                    {
                      if ( v50->NestingLevel <= 1u )
                      {
                        v99 = v63[6] - 1;
                        v63[6] = v99;
                        if ( !v99 )
                          KiRemoveSystemWorkPriorityKick(v50);
                      }
                    }
                    do
                      KeYieldProcessorEx(&v132);
                    while ( CurrentThread->ThreadLock );
                    v64 = v50->SchedulerAssist;
                    if ( v64 )
                    {
                      if ( v50->NestingLevel <= 1u )
                      {
                        v100 = v64[6];
                        v64[6] = v100 + 1;
                        if ( v100 == -1 )
                          goto LABEL_198;
                      }
                    }
                  }
                  v39 = (__int64)v126;
                  if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
                  {
                    CurrentThread->WaitStatus = 258LL;
                    CurrentThread->AbWaitObject = 0LL;
                  }
                  goto LABEL_51;
                }
                v49 = MEMORY[0xFFFFF78000000014];
              }
              if ( v49 > v27 )
                goto LABEL_81;
              v26 = v123;
LABEL_29:
              v28 = 0;
              CurrentThread->WaitBlockCount = v14;
              v29 = 0;
              v30 = 0LL;
              if ( v21 )
              {
                do
                {
                  _BitScanForward64(&v71, v21);
                  v72 = v71;
                  v131[1] = v71;
                  v128 = v21 & ~(1LL << v71);
                  v73 = (__int64 *)KeAbPreAcquire(v20[v71], 0LL, 0LL);
                  v76 = v73;
                  if ( !v73 )
                    break;
                  v30 |= 1LL << v72;
                  KeAbPreWait(v73, v74, v75);
                  v21 = v128;
                  v20 = v125;
                  v77 = v29++;
                  *((_BYTE *)&v135[1] + v77) = (2 * *((_BYTE *)v76 + 16)) | 1;
                }
                while ( v21 );
                v25 = QuadPart;
                v28 = 0;
                v26 = v123;
              }
              v31 = KiCommitThreadWait((__int64)CurrentThread, v8, v26, v25, &v134);
              v32 = v125;
              if ( v134 )
              {
                v78 = 0;
                v79 = v30;
                if ( v30 )
                {
                  while ( 1 )
                  {
                    _BitScanForward64((unsigned __int64 *)&v80, v79);
                    v79 &= ~(1LL << v80);
                    v131[2] = v80;
                    if ( v134 == v125[v80] )
                      break;
                    ++v78;
                    if ( !v79 )
                      goto LABEL_164;
                  }
                  v81 = v78;
                  v30 &= ~(1LL << v80);
                  v82 = (char *)KeGetCurrentThread() + 96 * (*((_BYTE *)&v135[1] + v78) >> 1);
                  KeAbPreAcquire(v125[v80], v82 + 1696, 0LL);
                  v82[1714] = 1;
                  if ( v81 >= 6 )
                    _report_rangecheckfailure();
                  v32 = v125;
                  *((_BYTE *)&v135[1] + v81) = 0;
                  v28 = 0;
                }
LABEL_164:
                CurrentThread->AbWaitObject = 0LL;
              }
              for ( ; v30; ++v28 )
              {
                _BitScanForward64((unsigned __int64 *)&v83, v30);
                v84 = (unsigned int)v83;
                v131[3] = v83;
                v30 &= ~(1LL << v83);
                if ( !*((_BYTE *)&v135[1] + v28) )
                  ++v28;
                KeAbPreAcquire(
                  v32[(unsigned int)v83],
                  &KeGetCurrentThread()[1].Process + 12 * (*((_BYTE *)&v135[1] + v28) >> 1),
                  0LL);
                KeAbPostReleaseEx((ULONG_PTR)v125[v84]);
                v32 = v125;
              }
              if ( v31 != 256 )
                return v31;
              v122 = 0;
              v52 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v52 <= 0xFu )
              {
                v53 = KeGetCurrentPrcb()->SchedulerAssist;
                v53[5] |= ~((unsigned __int8)(1LL << (v52 + 1)) - 1) & 4;
              }
              CurrentThread->WaitIrql = v52;
              goto LABEL_12;
            }
          }
        }
        CurrentThread->Alerted[0] = 0;
        v85 = 257;
        goto LABEL_90;
      }
      CurrentThread->ApcState.UserApcPendingAll |= 2u;
    }
    else if ( (CurrentThread->ApcState.UserApcPendingAll & 2) == 0 || !WaitMode )
    {
      goto LABEL_20;
    }
    v85 = 192;
LABEL_90:
    KiReleaseThreadLockSafe((__int64)CurrentThread);
    KiCheckForThreadDispatch((__int64)KeGetCurrentPrcb(), WaitIrql);
    return v85;
  }
  return KiWaitForAllObjects(Count, Object, WaitReason, WaitMode, Alertable, (__int64)Timeout, (__int64)v8);
}
