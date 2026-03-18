/*
 * XREFs of KeSetPriorityThread @ 0x140344340
 * Callers:
 *     CcBoostLowPriorityWorkerThread @ 0x14023C3B4 (CcBoostLowPriorityWorkerThread.c)
 *     MiZeroInParallel @ 0x14026446C (MiZeroInParallel.c)
 *     MiZeroInParallelWorker @ 0x14026C240 (MiZeroInParallelWorker.c)
 *     CcApplyLowIoPriorityToThread @ 0x140288EE4 (CcApplyLowIoPriorityToThread.c)
 *     KeGenericProcessorCallback @ 0x14035BB4C (KeGenericProcessorCallback.c)
 *     MiSetIdealProcessorThread @ 0x14035CA04 (MiSetIdealProcessorThread.c)
 *     MiMappedPageWriter @ 0x1403C5160 (MiMappedPageWriter.c)
 *     KeSwapProcessOrStack @ 0x1403C6D20 (KeSwapProcessOrStack.c)
 *     KeBalanceSetManager @ 0x1403C81D0 (KeBalanceSetManager.c)
 *     MiRebuildLargePagesThread @ 0x1403CA190 (MiRebuildLargePagesThread.c)
 *     KiExecuteDpc @ 0x1403CB9F0 (KiExecuteDpc.c)
 *     MiDereferenceSegmentThread @ 0x1403CBBF0 (MiDereferenceSegmentThread.c)
 *     FsRtlWorkerThread @ 0x1403DD920 (FsRtlWorkerThread.c)
 *     KeSetThreadSchedulerAssist @ 0x140576AA4 (KeSetThreadSchedulerAssist.c)
 *     MiPartitionWorkingSetManager @ 0x14058DE20 (MiPartitionWorkingSetManager.c)
 *     PfTSetTraceWorkerPriority @ 0x1405C6380 (PfTSetTraceWorkerPriority.c)
 *     ExRegisterBootDevice @ 0x14063A090 (ExRegisterBootDevice.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x140A914C4 (ViPendingQueuePassiveLevelCompletion.c)
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiProcessDeferredReadyList @ 0x140344800 (KiProcessDeferredReadyList.c)
 *     KiSetPriorityThread @ 0x140344A30 (KiSetPriorityThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140345AA0 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     EtwTracePriority @ 0x14062E0D0 (EtwTracePriority.c)
 */

// local variable allocation has failed, the output may be wrong!
KPRIORITY __stdcall KeSetPriorityThread(PKTHREAD Thread, KPRIORITY Priority)
{
  __int64 v2; // r8
  _DWORD *SchedulerAssist; // r9
  KPRIORITY v4; // edi
  int v6; // r12d
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  struct _KTHREAD *CurrentThread; // r15
  _DWORD *v10; // rcx
  char PriorityDecrement; // cl
  char v12; // al
  KPRIORITY v13; // ebp
  volatile unsigned __int64 CycleTime; // rdx
  unsigned __int64 v15; // rcx
  char BasePriority; // al
  int RealtimePriorityFloor; // edx
  unsigned __int8 v18; // al
  int v19; // eax
  unsigned __int8 v20; // al
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  _DWORD *v25; // rcx
  _DWORD *v26; // rcx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // [rsp+70h] [rbp+8h] BYREF
  __int64 v32; // [rsp+80h] [rbp+18h] BYREF

  v4 = Priority;
  if ( Thread->Process == (_KPROCESS *)&KiInitialProcess )
    return 1;
  v6 = 0;
  v32 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    *(_QWORD *)&Priority = (-1LL << (CurrentIrql + 1)) & 4;
    v2 = (unsigned int)Priority | SchedulerAssist[5];
    SchedulerAssist[5] = v2;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v31 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  v10 = CurrentPrcb->SchedulerAssist;
  if ( v10 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v27 = v10[6];
      v10[6] = v27 + 1;
      if ( v27 == -1 )
LABEL_45:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
  {
    v25 = CurrentPrcb->SchedulerAssist;
    if ( v25 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v28 = v25[6] - 1;
        v25[6] = v28;
        if ( !v28 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v31, *(__int64 *)&Priority, v2, (__int64)SchedulerAssist);
    while ( Thread->ThreadLock );
    v26 = CurrentPrcb->SchedulerAssist;
    if ( v26 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v29 = v26[6];
        v26[6] = v29 + 1;
        if ( v29 == -1 )
          goto LABEL_45;
      }
    }
  }
  PriorityDecrement = Thread->PriorityDecrement;
  v12 = Thread->Priority;
  v13 = v12;
  if ( PriorityDecrement )
  {
    if ( (PriorityDecrement & 0xF) != 0 )
    {
      Thread->ForegroundLossTime = MEMORY[0xFFFFF78000000320];
      v12 = Thread->Priority;
    }
    Thread->PriorityDecrement = 0;
  }
  if ( v4 != v12 )
  {
    if ( Thread != CurrentThread || CurrentPrcb->NestingLevel )
    {
      CycleTime = Thread->CycleTime;
    }
    else
    {
      _disable();
      CycleTime = KiUpdateTotalCyclesCurrentThread(CurrentPrcb, Thread, 0LL);
      _enable();
    }
    v15 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)Thread->SchedulerApc.SpareByte1;
    if ( (*((_DWORD *)&Thread->0 + 1) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 5u);
    BasePriority = Thread->BasePriority;
    Thread->QuantumTarget = v15;
    if ( BasePriority && !v4 )
      v4 = 1;
    if ( BasePriority < 16 || v4 >= 16 )
    {
      RealtimePriorityFloor = Thread->RealtimePriorityFloor;
      if ( v4 < 16 )
      {
        v19 = 32;
      }
      else
      {
        v18 = Thread->PriorityFloorCounts[(char)v4];
        if ( v18 == 0xFF )
          KeBugCheckEx(0x157u, (ULONG_PTR)Thread, (char)v4, 1uLL, 0LL);
        Thread->PriorityFloorCounts[(char)v4] = v18 + 1;
        v19 = v4;
        Thread->PriorityFloorSummary |= 1 << v4;
      }
      Thread->RealtimePriorityFloor = v19;
      if ( RealtimePriorityFloor != 32 )
      {
        v20 = Thread->PriorityFloorCounts[(char)RealtimePriorityFloor];
        if ( !v20 )
          KeBugCheckEx(0x157u, (ULONG_PTR)Thread, (char)RealtimePriorityFloor, 2uLL, 0LL);
        v21 = v20 - 1;
        Thread->PriorityFloorCounts[(char)RealtimePriorityFloor] = v21;
        if ( !v21 )
          Thread->PriorityFloorSummary ^= 1 << RealtimePriorityFloor;
      }
      if ( (unsigned __int8)KiSetPriorityThread(Thread, &v32, (unsigned int)v4) )
        v6 = Thread->Priority;
    }
  }
  Thread->ThreadLock = 0LL;
  v22 = KeGetCurrentPrcb();
  v23 = v22->SchedulerAssist;
  if ( v23 )
  {
    if ( v22->NestingLevel <= 1u )
    {
      v30 = v23[6] - 1;
      v23[6] = v30;
      if ( !v30 )
        KiRemoveSystemWorkPriorityKick(v22);
    }
  }
  KiProcessDeferredReadyList(CurrentPrcb, &v32, CurrentIrql);
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
  {
    if ( v6 )
      EtwTracePriority((_DWORD)Thread, 1328, v13, v6, 0LL);
  }
  return v13;
}
