/*
 * XREFs of KeSetPriorityThread @ 0x1402B0310
 * Callers:
 *     CcApplyLowIoPriorityToThread @ 0x14029BA88 (CcApplyLowIoPriorityToThread.c)
 *     MiZeroInParallel @ 0x140304230 (MiZeroInParallel.c)
 *     KeGenericProcessorCallback @ 0x140305A04 (KeGenericProcessorCallback.c)
 *     PfTSetTraceWorkerPriority @ 0x14035E7B0 (PfTSetTraceWorkerPriority.c)
 *     CcBoostLowPriorityWorkerThread @ 0x14036D094 (CcBoostLowPriorityWorkerThread.c)
 *     MiMappedPageWriter @ 0x14038FA30 (MiMappedPageWriter.c)
 *     KeBalanceSetManager @ 0x140392980 (KeBalanceSetManager.c)
 *     KeSwapProcessOrStack @ 0x140393930 (KeSwapProcessOrStack.c)
 *     MiRebuildLargePagesThread @ 0x140394C20 (MiRebuildLargePagesThread.c)
 *     KiExecuteDpc @ 0x14039A720 (KiExecuteDpc.c)
 *     MiDereferenceSegmentThread @ 0x1403A7500 (MiDereferenceSegmentThread.c)
 *     FsRtlWorkerThread @ 0x1403B3760 (FsRtlWorkerThread.c)
 *     KeSetThreadSchedulerAssist @ 0x14056D2BC (KeSetThreadSchedulerAssist.c)
 *     ExRegisterBootDevice @ 0x140609520 (ExRegisterBootDevice.c)
 *     MiPartitionWorkingSetManager @ 0x1406295C0 (MiPartitionWorkingSetManager.c)
 *     MiSetIdealProcessorThread @ 0x1406670DC (MiSetIdealProcessorThread.c)
 *     NtSetInformationThread @ 0x140733AB0 (NtSetInformationThread.c)
 *     MiZeroHugeRangeCore @ 0x140A2DF6C (MiZeroHugeRangeCore.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x140AD2EB0 (ViPendingQueuePassiveLevelCompletion.c)
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     KiSetPriorityThread @ 0x1402B05A0 (KiSetPriorityThread.c)
 *     KiProcessDeferredReadyList @ 0x1402B0E40 (KiProcessDeferredReadyList.c)
 *     KiSetQuantumTargetThread @ 0x1402B2AC0 (KiSetQuantumTargetThread.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     EtwTracePriority @ 0x140466D2E (EtwTracePriority.c)
 */

KPRIORITY __stdcall KeSetPriorityThread(PKTHREAD Thread, KPRIORITY Priority)
{
  __int64 v2; // r9
  int v5; // r12d
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  bool v8; // r15
  char PriorityDecrement; // cl
  char v10; // al
  KPRIORITY v11; // ebp
  char BasePriority; // al
  int RealtimePriorityFloor; // edx
  __int64 v14; // r8
  unsigned __int8 v15; // al
  unsigned __int8 v16; // al
  unsigned __int8 v17; // al
  _DWORD *SchedulerAssist; // r8
  int v20; // [rsp+70h] [rbp+8h] BYREF
  __int64 v21; // [rsp+80h] [rbp+18h] BYREF

  if ( Thread->Process == (_KPROCESS *)&KiInitialProcess )
    return 1;
  v5 = 0;
  v21 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      v2 = 4LL;
    else
      v2 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v2;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v20 = 0;
  v8 = Thread == CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v20);
    while ( Thread->ThreadLock );
  }
  PriorityDecrement = Thread->PriorityDecrement;
  v10 = Thread->Priority;
  v11 = v10;
  if ( PriorityDecrement )
  {
    if ( (PriorityDecrement & 0xF) != 0 )
    {
      Thread->ForegroundLossTime = MEMORY[0xFFFFF78000000320];
      v10 = Thread->Priority;
    }
    Thread->PriorityDecrement = 0;
  }
  if ( Priority != v10 )
    KiSetQuantumTargetThread(Thread, CurrentPrcb, v8);
  BasePriority = Thread->BasePriority;
  if ( BasePriority >= 16 )
  {
    if ( Priority < 16 )
      goto LABEL_22;
    goto LABEL_10;
  }
  if ( BasePriority )
  {
LABEL_10:
    if ( Thread->Priority && !Priority )
    {
      RealtimePriorityFloor = Thread->RealtimePriorityFloor;
      v14 = 1LL;
      goto LABEL_29;
    }
  }
  if ( Priority != 63 )
  {
    RealtimePriorityFloor = Thread->RealtimePriorityFloor;
    v14 = (unsigned int)Priority;
    if ( Priority >= 16 )
    {
      v15 = Thread->PriorityFloorCounts[(char)Priority];
      if ( v15 == 0xFF )
        KeBugCheckEx(0x157u, (ULONG_PTR)Thread, (char)Priority, 1uLL, 0LL);
      Thread->PriorityFloorCounts[(char)Priority] = v15 + 1;
      Thread->PriorityFloorSummary |= 1 << Priority;
      goto LABEL_16;
    }
LABEL_29:
    Priority = 32;
LABEL_16:
    Thread->RealtimePriorityFloor = Priority;
    if ( RealtimePriorityFloor != 32 )
    {
      v16 = Thread->PriorityFloorCounts[(char)RealtimePriorityFloor];
      if ( !v16 )
        KeBugCheckEx(0x157u, (ULONG_PTR)Thread, (char)RealtimePriorityFloor, 2uLL, 0LL);
      v17 = v16 - 1;
      Thread->PriorityFloorCounts[(char)RealtimePriorityFloor] = v17;
      if ( !v17 )
        Thread->PriorityFloorSummary ^= 1 << RealtimePriorityFloor;
    }
    if ( (unsigned __int8)KiSetPriorityThread(Thread, &v21, v14, v2) )
      v5 = Thread->Priority;
  }
LABEL_22:
  Thread->ThreadLock = 0LL;
  KiProcessDeferredReadyList(CurrentPrcb, &v21, CurrentIrql);
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
  {
    if ( v5 )
      EtwTracePriority((_DWORD)Thread, 1328, v11, v5, 0LL);
  }
  return v11;
}
