/*
 * XREFs of KeWaitForMultipleObjects @ 0x140310FC0
 * Callers:
 *     MiReadyToZeroNextLargePage @ 0x1402D0440 (MiReadyToZeroNextLargePage.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x14031038C (MmWaitMultipleForCacheManagerPrefetch.c)
 *     PopFxProcessWorkPool @ 0x140310E14 (PopFxProcessWorkPool.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140344E20 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140368400 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiMappedPageWriter @ 0x14038FA30 (MiMappedPageWriter.c)
 *     KeBalanceSetManager @ 0x140392980 (KeBalanceSetManager.c)
 *     MiRebuildLargePagesThread @ 0x140394C20 (MiRebuildLargePagesThread.c)
 *     MiDereferenceSegmentThread @ 0x1403A7500 (MiDereferenceSegmentThread.c)
 *     MiStoreEvictThread @ 0x1403A7F20 (MiStoreEvictThread.c)
 *     MiZeroPageThread @ 0x1403AF9A0 (MiZeroPageThread.c)
 *     MiModifiedPageWriter @ 0x1403B20D0 (MiModifiedPageWriter.c)
 *     CcAsyncReadWorker @ 0x1403BE4A0 (CcAsyncReadWorker.c)
 *     CcQueueLazyWriteScanThreadForVolume @ 0x1403BFE10 (CcQueueLazyWriteScanThreadForVolume.c)
 *     CcQueueLazyWriteScanThread @ 0x140536EF0 (CcQueueLazyWriteScanThread.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x14053ACC4 (CcAsyncLazywriteWorkerMulti.c)
 *     PopSleepDeviceList @ 0x140590AA8 (PopSleepDeviceList.c)
 *     DifKeWaitForMultipleObjectsWrapper @ 0x1405E6350 (DifKeWaitForMultipleObjectsWrapper.c)
 *     MiPartitionWorkingSetManager @ 0x1406295C0 (MiPartitionWorkingSetManager.c)
 *     MiIssueAsynchronousFlush @ 0x1406360C4 (MiIssueAsynchronousFlush.c)
 *     MiWaitForAsynchronousFlushes @ 0x1406363C4 (MiWaitForAsynchronousFlushes.c)
 *     CmpDoFileWrite @ 0x1406895CC (CmpDoFileWrite.c)
 *     ObWaitForMultipleObjects @ 0x1406E3940 (ObWaitForMultipleObjects.c)
 *     EtwpLogger @ 0x140773610 (EtwpLogger.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x140773CD0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     PiUEventNotifyUserMode @ 0x140783EFC (PiUEventNotifyUserMode.c)
 *     PfGenerateTrace @ 0x1407D4180 (PfGenerateTrace.c)
 *     CmpFinishSystemHivesLoad @ 0x14080D490 (CmpFinishSystemHivesLoad.c)
 *     MiNodeZeroConductor @ 0x140831170 (MiNodeZeroConductor.c)
 *     PfTLoggingWorker @ 0x14083A720 (PfTLoggingWorker.c)
 *     ExpWorkQueueManagerThread @ 0x14083A910 (ExpWorkQueueManagerThread.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1408A8D20 (EtwpCovSampCaptureWorkerThread.c)
 *     PopThermalReadCounters @ 0x14098AF64 (PopThermalReadCounters.c)
 *     PsShutdownSystem @ 0x1409B35F4 (PsShutdownSystem.c)
 *     PnprQuiesceWorker @ 0x140A9DF20 (PnprQuiesceWorker.c)
 *     MiZeroAllPageFiles @ 0x140AABE34 (MiZeroAllPageFiles.c)
 *     KiComputeDispatchInterruptCost @ 0x140B54AFC (KiComputeDispatchInterruptCost.c)
 * Callees:
 *     KiCompleteRescheduleContext @ 0x140201EB0 (KiCompleteRescheduleContext.c)
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KiStartRescheduleContext @ 0x140238F00 (KiStartRescheduleContext.c)
 *     KiCommitThreadWait @ 0x140241F00 (KiCommitThreadWait.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140242580 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     KiFindRescheduleContextEntryForPrcb @ 0x140243B50 (KiFindRescheduleContextEntryForPrcb.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140246750 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiAcquireKobjectLockSafe @ 0x140251F10 (KiAcquireKobjectLockSafe.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252640 (KiFlushSoftwareInterruptBatch.c)
 *     KiProcessDeferredReadyList @ 0x1402B0E40 (KiProcessDeferredReadyList.c)
 *     KiCheckForThreadDispatch @ 0x1402BCA48 (KiCheckForThreadDispatch.c)
 *     KeAbPostReleaseEx @ 0x1402BD4C0 (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x1402FD270 (KeAbPreWait.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140307790 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiAdjustRescheduleContextEntryForThreadRemoval @ 0x140307DDC (KiAdjustRescheduleContextEntryForThreadRemoval.c)
 *     KiCommitRescheduleContext @ 0x140308444 (KiCommitRescheduleContext.c)
 *     KiDeliverApc @ 0x14030F6B0 (KiDeliverApc.c)
 *     KiWaitSatisfyMutant @ 0x140311900 (KiWaitSatisfyMutant.c)
 *     RtlRaiseStatus @ 0x1403215D0 (RtlRaiseStatus.c)
 *     KiWaitForAllObjects @ 0x14034A8FC (KiWaitForAllObjects.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KeBugCheck @ 0x14041E370 (KeBugCheck.c)
 *     memset @ 0x140435400 (memset.c)
 *     __report_rangecheckfailure @ 0x1404FE1FC (__report_rangecheckfailure.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSatisfyThreadWait @ 0x14057A33C (KiSatisfyThreadWait.c)
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
  PKWAIT_BLOCK WaitBlock; // r14
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 CurrentIrql; // dl
  unsigned __int8 *p_WaitIrql; // r8
  unsigned __int8 v12; // si
  unsigned __int8 *i; // r13
  __int64 *v14; // r14
  NTSTATUS v15; // ebx
  unsigned __int8 v16; // r13
  char *v17; // rsi
  unsigned __int64 v18; // r9
  ULONG v19; // r15d
  struct _KPRCB *v20; // rcx
  ULONG v21; // r13d
  PVOID *__attribute__((__org_arrdim(0,0))) v22; // r11
  volatile signed __int32 *v23; // rbx
  PVOID *v24; // rdx
  __int64 v25; // r10
  unsigned int v26; // ecx
  unsigned __int64 v27; // rax
  unsigned int v28; // r12d
  unsigned int v29; // ebx
  unsigned __int64 v30; // r15
  NTSTATUS v31; // esi
  PVOID *__attribute__((__org_arrdim(0,0))) v32; // r11
  __int64 v34; // r13
  volatile __int64 WaitStatus; // r12
  __int64 AbWaitObject; // rcx
  __int64 *v37; // rsi
  volatile signed __int32 *v38; // rbx
  __int64 v39; // rax
  __int64 **v40; // rcx
  unsigned __int64 v41; // rbx
  _KWAIT_STATUS_REGISTER v42; // al
  _DWORD *SchedulerAssist; // r10
  __int64 v44; // r11
  __int64 ThreadTimerDelay; // rdx
  unsigned __int64 v46; // rcx
  unsigned __int8 v47; // dl
  _DWORD *v48; // r10
  __int64 v49; // r8
  bool v50; // zf
  unsigned __int8 v51; // cl
  _DWORD *v52; // r9
  __int64 v53; // rdx
  unsigned __int8 v54; // cl
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v56; // rdx
  unsigned __int64 v57; // rax
  char v58; // r12
  __int64 *v59; // rax
  __int64 *v60; // rsi
  __int64 v61; // rax
  unsigned __int64 v62; // rdx
  __int64 v63; // rax
  char *v64; // rbx
  __int64 v65; // rax
  __int64 v66; // r13
  char *v67; // rbx
  __int64 v68; // rax
  char v69; // di
  __int64 *RescheduleContextEntryForPrcb; // rax
  __int64 v71; // rdx
  unsigned int v72; // r8d
  __int64 *v73; // r11
  char v74; // r10
  __int64 v75; // rdx
  unsigned int v76; // r10d
  __int64 *v77; // rcx
  unsigned __int8 v78; // cl
  struct _KPRCB *v79; // rcx
  _DWORD *v80; // rdx
  unsigned __int8 v81; // cl
  struct _KPRCB *v82; // r9
  _DWORD *v83; // r8
  int v84; // eax
  unsigned __int8 v85; // [rsp+40h] [rbp-C0h]
  ULONG v86; // [rsp+44h] [rbp-BCh] BYREF
  int v87; // [rsp+48h] [rbp-B8h]
  PVOID *__attribute__((__org_arrdim(0,0))) v88; // [rsp+50h] [rbp-B0h] BYREF
  struct _KPRCB *v89; // [rsp+58h] [rbp-A8h]
  KWAIT_REASON v90; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int8 *v91; // [rsp+68h] [rbp-98h]
  unsigned __int64 v92; // [rsp+70h] [rbp-90h]
  LONGLONG QuadPart; // [rsp+78h] [rbp-88h]
  int v94; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v95[4]; // [rsp+84h] [rbp-7Ch] BYREF
  int v96; // [rsp+94h] [rbp-6Ch] BYREF
  PKWAIT_BLOCK v97; // [rsp+98h] [rbp-68h]
  __int64 v98; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v99; // [rsp+A8h] [rbp-58h] BYREF
  PVOID v100[2]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v101[86]; // [rsp+C0h] [rbp-40h] BYREF

  WaitBlock = WaitBlockArray;
  v88 = Object;
  v90 = WaitReason;
  v86 = Count;
  v97 = WaitBlockArray;
  QuadPart = 0LL;
  if ( Count == 1 )
    return KeWaitForSingleObject(*Object, WaitReason, WaitMode, Alertable, Timeout);
  CurrentThread = KeGetCurrentThread();
  if ( WaitBlockArray )
  {
    if ( Count <= 0x40 )
      goto LABEL_4;
LABEL_139:
    KeBugCheck(0xCu);
  }
  if ( Count > 3 )
    goto LABEL_139;
  WaitBlock = CurrentThread->WaitBlock;
  v97 = CurrentThread->WaitBlock;
LABEL_4:
  if ( WaitType == WaitAll )
    return KiWaitForAllObjects(
             Count,
             (_DWORD)Object,
             WaitReason,
             (unsigned __int8)WaitMode,
             Alertable,
             (__int64)Timeout,
             (__int64)WaitBlock);
  v100[0] = 0LL;
  v85 = _bittestandreset((signed __int32 *)&CurrentThread->116, 2u);
  if ( v85 )
  {
    p_WaitIrql = &CurrentThread->WaitIrql;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v44) = 4;
      else
        v44 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v44;
    }
    p_WaitIrql = &CurrentThread->WaitIrql;
    CurrentThread->WaitIrql = CurrentIrql;
  }
  v91 = p_WaitIrql;
  if ( Timeout )
  {
    if ( Timeout->HighPart >= 0 )
    {
      QuadPart = Timeout->QuadPart;
      v87 = 1;
      goto LABEL_12;
    }
    p_WaitIrql = &CurrentThread->WaitIrql;
    v87 = 2;
    QuadPart = MEMORY[0xFFFFF78000000008]
             - MEMORY[0xFFFFF780000003B0]
             - (Timeout->QuadPart
              + CurrentThread->RelativeTimerBias);
  }
  else
  {
    v87 = 0;
  }
  v91 = p_WaitIrql;
LABEL_12:
  v12 = *p_WaitIrql;
  for ( i = v91; ; *i = 0 )
  {
    CurrentThread->MiscFlags &= ~0x10u;
    CurrentThread->WaitRegister.Flags = 0;
    CurrentThread->WaitMode = WaitMode;
    if ( Alertable )
      CurrentThread->MiscFlags |= 0x10u;
    v94 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v94);
      while ( CurrentThread->ThreadLock );
    }
    if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || v12 )
      break;
    CurrentThread->ThreadLock = 0LL;
    if ( (_DWORD)KiIrqlFlags )
    {
      v54 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v54 - 2) <= 0xDu )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v56 = CurrentPrcb->SchedulerAssist;
        v50 = (v56[5] & 0xFFFF0003) == 0;
        v56[5] &= 0xFFFF0003;
        if ( v50 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(1uLL);
    KiDeliverApc(0, 0LL, 0LL);
    v51 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v51 <= 0xFu )
    {
      v52 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v51 == 2 )
        LODWORD(v53) = 4;
      else
        v53 = (-1LL << (v51 + 1)) & 4;
      v52[5] |= v53;
    }
  }
  v14 = (__int64 *)v97;
  if ( Alertable )
  {
    if ( CurrentThread->Alerted[WaitMode] )
    {
      CurrentThread->Alerted[WaitMode] = 0;
      v15 = 257;
    }
    else if ( !WaitMode
           || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink == &CurrentThread->ApcStateFill[16] )
    {
      if ( CurrentThread->Alerted[0] )
      {
        CurrentThread->Alerted[0] = 0;
        v15 = 257;
      }
      else
      {
        v15 = 0;
      }
    }
    else
    {
      CurrentThread->ApcState.UserApcPendingAll |= 2u;
      v15 = 192;
    }
    if ( v15 )
      goto LABEL_132;
LABEL_26:
    v16 = v90;
    v17 = (char *)v14 + 17;
    CurrentThread->WaitBlockFill6[68] = 5;
    v18 = 0LL;
    CurrentThread->WaitReason = v16;
    v19 = 0;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    CurrentThread->ThreadLock = 0LL;
    v20 = KeGetCurrentPrcb();
    v21 = v86;
    v22 = v88;
    v89 = v20;
    v92 = 0LL;
    while ( 1 )
    {
      v95[0] = 0;
      v23 = (volatile signed __int32 *)v22[v19];
      *(v17 - 1) = 1;
      *v17 = 4;
      *(_WORD *)(v17 + 1) = v19;
      *(_QWORD *)(v17 + 7) = CurrentThread;
      *(_QWORD *)(v17 + 15) = v23;
      if ( _interlockedbittestandset(v23, 7u) )
      {
        do
        {
          do
            KeYieldProcessorEx(v95);
          while ( (*v23 & 0x80u) != 0 );
        }
        while ( _interlockedbittestandset(v23, 7u) );
        v22 = v88;
        v18 = v92;
        v20 = v89;
      }
      if ( (*(_BYTE *)v23 & 0x7F) == 2 )
      {
        if ( (v23[12] & 2) != 0 )
        {
          _bittestandset64((__int64 *)&v18, v19);
          v92 = v18;
        }
        if ( *((int *)v23 + 1) > 0
          || CurrentThread == *((struct _KTHREAD **)v23 + 5) && *((_BYTE *)v23 + 2) == v20->DpcRoutineActive )
        {
          if ( *((_DWORD *)v23 + 1) == 0x80000000 )
          {
            _InterlockedAnd(v23, 0xFFFFFF7F);
            v86 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
            {
              do
                KeYieldProcessorEx(&v86);
              while ( CurrentThread->ThreadLock );
            }
            KiSatisfyThreadWait((_DWORD)v89, (_DWORD)CurrentThread, v85, (_DWORD)v14, v19);
            RtlRaiseStatus(-1073741423);
          }
          v90 = Executive;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            do
              KeYieldProcessorEx(&v90);
            while ( CurrentThread->ThreadLock );
          }
          v34 = (__int64)v89;
          if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
          {
            CurrentThread->WaitStatus = v19;
            CurrentThread->AbWaitObject = 0LL;
            v50 = (*((_DWORD *)v23 + 1))-- == 1;
            if ( v50 )
              KiWaitSatisfyMutant(v23, CurrentThread, v34);
          }
          goto LABEL_45;
        }
      }
      else if ( *((int *)v23 + 1) > 0 )
      {
        LODWORD(v88) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v88);
          while ( CurrentThread->ThreadLock );
        }
        if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
        {
          CurrentThread->WaitStatus = v19;
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
        v34 = (__int64)v89;
LABEL_45:
        _InterlockedAnd(v23, 0xFFFFFF7F);
LABEL_46:
        CurrentThread->WaitBlockFill6[68] = 2;
        CurrentThread->ThreadLock = 0LL;
        WaitStatus = CurrentThread->WaitStatus;
        AbWaitObject = (__int64)CurrentThread->AbWaitObject;
        if ( AbWaitObject )
        {
          CurrentThread->AbWaitObject = 0LL;
          v68 = KeAbPreAcquire(AbWaitObject, 0LL);
          if ( v68 )
            *(_BYTE *)(v68 + 18) = 1;
        }
        if ( v19 )
        {
          v37 = &v14[6 * (unsigned __int8)v19];
          do
          {
            if ( *((_BYTE *)v14 + 17) < 5u )
            {
              v38 = (volatile signed __int32 *)v14[4];
              KiAcquireKobjectLockSafe(v38);
              if ( *((_BYTE *)v14 + 17) == 4 )
              {
                v39 = *v14;
                v40 = (__int64 **)v14[1];
                if ( *(__int64 **)(*v14 + 8) != v14 || *v40 != v14 )
                  goto LABEL_52;
                *v40 = (__int64 *)v39;
                *(_QWORD *)(v39 + 8) = v40;
              }
              _InterlockedAnd(v38, 0xFFFFFF7F);
            }
            v14 += 6;
          }
          while ( v14 != v37 );
        }
        v98 = 0LL;
        v41 = *v91;
        v42.Flags = (unsigned __int8)CurrentThread->WaitRegister;
        if ( (v42.Flags & 0x38) != 0 )
        {
          if ( (v42.Flags & 0x18) != 0 )
          {
            if ( (v42.Flags & 8) != 0 )
              _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
            v99 = 0LL;
            v69 = 0;
            memset(v101, 0, 0x150uLL);
            KiAcquirePrcbLocksForIsolationUnit(v34, 0, &v98);
            if ( !*(_QWORD *)(v34 + 16) )
            {
              KiStartRescheduleContext((__int64)v101, &v98, 0LL);
              RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(v101, v34);
              KiAdjustRescheduleContextEntryForThreadRemoval(RescheduleContextEntryForPrcb, v71, 0, 1);
              if ( (v74 & 2) != 0 )
              {
                v75 = LOBYTE(v101[0]);
                v76 = v72;
                if ( LOBYTE(v101[0]) )
                {
                  do
                  {
                    v77 = (__int64 *)&v101[10 * v76 + 4];
                    if ( v77 != v73 )
                    {
                      KiAdjustRescheduleContextEntryForThreadRemoval(v77, v75, 0, 1);
                      v75 = LOBYTE(v101[0]);
                    }
                    ++v76;
                  }
                  while ( v76 < (unsigned __int8)v75 );
                  v72 = 0;
                }
                v101[1] = v72;
              }
              KiSearchForNewThreadsForRescheduleContext(v101, (__int64)&v99);
              v69 = KiCommitRescheduleContext((unsigned __int8 *)v101, v34, 0, &v99);
            }
            KiReleasePrcbLocksForIsolationUnit(&v98);
            if ( v69 )
            {
              KiCompleteRescheduleContext(v101, v34);
              KiFlushSoftwareInterruptBatch((unsigned __int8 *)(v34 + 12760));
            }
            KiProcessDeferredReadyList(v34, &v99, v41);
          }
          else
          {
            KiCheckForThreadDispatch(v34, 1u);
            KiDeliverApc(0, 0LL, 0LL);
            if ( (_DWORD)KiIrqlFlags )
            {
              v78 = KeGetCurrentIrql();
              if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v78 - 2) <= 0xDu )
              {
                v79 = KeGetCurrentPrcb();
                v80 = v79->SchedulerAssist;
                v50 = (v80[5] & 0xFFFF0001) == 0;
                v80[5] &= 0xFFFF0001;
                if ( v50 )
                  KiRemoveSystemWorkPriorityKick(v79);
              }
            }
            __writecr8(0LL);
          }
        }
        else if ( v85 )
        {
          KiCheckForThreadDispatch(v34, v41);
        }
        else
        {
          if ( (_DWORD)KiIrqlFlags )
          {
            v81 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v81 <= 0xFu && (unsigned __int8)v41 <= 0xFu && v81 >= 2u )
            {
              v82 = KeGetCurrentPrcb();
              v83 = v82->SchedulerAssist;
              v84 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v41 + 1));
              v50 = (v84 & v83[5]) == 0;
              v83[5] &= v84;
              if ( v50 )
                KiRemoveSystemWorkPriorityKick(v82);
            }
          }
          __writecr8(v41);
        }
        return WaitStatus;
      }
      v24 = (PVOID *)*((_QWORD *)v23 + 2);
      if ( *v24 != v23 + 2 )
LABEL_52:
        __fastfail(3u);
      *(_QWORD *)(v17 - 9) = v24;
      *(_QWORD *)(v17 - 17) = v23 + 2;
      *v24 = v17 - 17;
      *((_QWORD *)v23 + 2) = v17 - 17;
      _InterlockedAnd(v23, 0xFFFFFF7F);
      v20 = v89;
      ++v19;
      v17 += 48;
      if ( v19 >= v21 )
      {
        v25 = QuadPart;
        v26 = v87;
        v27 = QuadPart;
        if ( v87 == 2 )
        {
          ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
          v46 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
          v27 = QuadPart;
          if ( CurrentThread->WaitMode
            && !CurrentThread->WaitBlock[3].SpareLong
            && !*v91
            && !CurrentThread->ApcState.InProgressFlags
            && (_DWORD)ThreadTimerDelay )
          {
            v27 = QuadPart + ThreadTimerDelay;
          }
        }
        else
        {
          if ( !v87 )
            goto LABEL_34;
          if ( !QuadPart )
          {
LABEL_99:
            v96 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
            {
              do
                KeYieldProcessorEx(&v96);
              while ( CurrentThread->ThreadLock );
            }
            v34 = (__int64)v89;
            if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
            {
              CurrentThread->WaitStatus = 258LL;
              CurrentThread->AbWaitObject = 0LL;
            }
            goto LABEL_46;
          }
          v46 = MEMORY[0xFFFFF78000000014];
        }
        if ( v46 > v27 )
          goto LABEL_99;
        v26 = v87;
LABEL_34:
        v28 = 0;
        CurrentThread->WaitBlockCount = v21;
        v29 = 0;
        v30 = 0LL;
        if ( v18 )
        {
          do
          {
            _BitScanForward64(&v57, v18);
            v58 = v57;
            _bittestandreset64((__int64 *)&v18, (unsigned int)v57);
            v95[1] = v57;
            v92 = v18;
            v59 = (__int64 *)KeAbPreAcquire((__int64)v22[v57], 0LL);
            v60 = v59;
            if ( !v59 )
              break;
            v30 |= 1LL << v58;
            KeAbPreWait(v59);
            v18 = v92;
            v22 = v88;
            v61 = v29++;
            *((_BYTE *)&v101[84] + v61) = (2 * *((_BYTE *)v60 + 16)) | 1;
          }
          while ( v18 );
          v14 = (__int64 *)v97;
          v28 = 0;
          v25 = QuadPart;
          v26 = v87;
        }
        v31 = (unsigned int)KiCommitThreadWait((ULONG_PTR)CurrentThread, v14, v26, v25, v100);
        v32 = v88;
        if ( v100[0] )
        {
          v62 = v30;
          if ( v30 )
          {
            while ( 1 )
            {
              _BitScanForward64((unsigned __int64 *)&v63, v62);
              v62 &= ~(1LL << v63);
              v95[2] = v63;
              if ( v100[0] == v88[v63] )
                break;
              ++v28;
              if ( !v62 )
                goto LABEL_155;
            }
            v30 &= ~(1LL << v63);
            v64 = (char *)KeGetCurrentThread() + 96 * (*((_BYTE *)&v101[84] + v28) >> 1);
            KeAbPreAcquire((__int64)v88[v63], (__int64)(v64 + 1696));
            v64[1714] = 1;
            if ( v28 >= 6 )
              _report_rangecheckfailure();
            v32 = v88;
            *((_BYTE *)&v101[84] + v28) = 0;
          }
LABEL_155:
          v28 = 0;
          CurrentThread->AbWaitObject = 0LL;
        }
        for ( ; v30; ++v28 )
        {
          _BitScanForward64((unsigned __int64 *)&v65, v30);
          v66 = (unsigned int)v65;
          v95[3] = v65;
          v30 &= ~(1LL << v65);
          if ( !*((_BYTE *)&v101[84] + v28) )
            ++v28;
          v67 = (char *)KeGetCurrentThread() + 96 * (*((_BYTE *)&v101[84] + v28) >> 1);
          KeAbPreAcquire((__int64)v32[(unsigned int)v65], (__int64)(v67 + 1696));
          KeAbPostReleaseEx((ULONG_PTR)v88[v66], (ULONG_PTR)(v67 + 1696));
          v32 = v88;
        }
        if ( v31 != 256 )
          return v31;
        v85 = 0;
        v47 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v47 <= 0xFu )
        {
          v48 = KeGetCurrentPrcb()->SchedulerAssist;
          if ( v47 == 2 )
            LODWORD(v49) = 4;
          else
            v49 = (-1LL << (v47 + 1)) & 4;
          v48[5] |= v49;
        }
        p_WaitIrql = v91;
        *v91 = v47;
        goto LABEL_12;
      }
    }
  }
  if ( (CurrentThread->ApcState.UserApcPendingAll & 2) == 0 || !WaitMode )
    goto LABEL_26;
  v15 = 192;
LABEL_132:
  CurrentThread->ThreadLock = 0LL;
  KiCheckForThreadDispatch((__int64)KeGetCurrentPrcb(), v12);
  return v15;
}
