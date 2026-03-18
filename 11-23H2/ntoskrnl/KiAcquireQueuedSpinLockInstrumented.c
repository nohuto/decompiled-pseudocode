/*
 * XREFs of KiAcquireQueuedSpinLockInstrumented @ 0x14046018E
 * Callers:
 *     CcCanIWrite @ 0x14020F180 (CcCanIWrite.c)
 *     CcCanIWriteStreamEx @ 0x14020FC80 (CcCanIWriteStreamEx.c)
 *     MiProcessWorkingSets @ 0x14021FA10 (MiProcessWorkingSets.c)
 *     MiLockPageTableInternal @ 0x140237700 (MiLockPageTableInternal.c)
 *     ExpAcquireResourceExclusiveLite @ 0x14023B4D0 (ExpAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 *     ExpAcquireResourceSharedLite @ 0x14023DDC0 (ExpAcquireResourceSharedLite.c)
 *     IoGetAttachedDeviceReference @ 0x14025A100 (IoGetAttachedDeviceReference.c)
 *     CcUnpinFileDataEx @ 0x14025D810 (CcUnpinFileDataEx.c)
 *     ExReleaseResourceForThreadLite @ 0x14025FD60 (ExReleaseResourceForThreadLite.c)
 *     ExpReleaseResourceForThreadLite @ 0x140260600 (ExpReleaseResourceForThreadLite.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260E60 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1402633E0 (ExpAcquireSharedStarveExclusive.c)
 *     MiAddWorkingSetEntries @ 0x14026BD20 (MiAddWorkingSetEntries.c)
 *     CcUninitializeCacheMap @ 0x14029BC40 (CcUninitializeCacheMap.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14029CBD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     CcFlushCachePreProcess @ 0x14029DE80 (CcFlushCachePreProcess.c)
 *     MiObtainSystemCacheView @ 0x14029FE90 (MiObtainSystemCacheView.c)
 *     MiReleaseSystemCacheView @ 0x1402A0140 (MiReleaseSystemCacheView.c)
 *     KxAcquireQueuedSpinLock @ 0x1402A0A70 (KxAcquireQueuedSpinLock.c)
 *     ExpApplyPriorityBoost @ 0x1402A8540 (ExpApplyPriorityBoost.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A91B0 (NtWaitForWorkViaWorkerFactory.c)
 *     IopCheckDeviceAndDriver @ 0x1402AF050 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x1402AF440 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x1402AFDB0 (IopDecrementDeviceObjectRef.c)
 *     IopDecrementVpbRefCount @ 0x1402AFF90 (IopDecrementVpbRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1402B0120 (IopIncrementDeviceObjectRefCount.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402B8980 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402B8D40 (ExpWorkerFactoryCheckCreate.c)
 *     CcSetDirtyInMask @ 0x1402C8FF0 (CcSetDirtyInMask.c)
 *     IopfCompleteRequest @ 0x1402C99B0 (IopfCompleteRequest.c)
 *     CcSetDirtyPinnedData @ 0x1402FC580 (CcSetDirtyPinnedData.c)
 *     NtSetInformationWorkerFactory @ 0x140302E90 (NtSetInformationWorkerFactory.c)
 *     PoQueryWatchdogTime @ 0x1403193D0 (PoQueryWatchdogTime.c)
 *     CcCopyWriteWontFlush @ 0x140319820 (CcCopyWriteWontFlush.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140319D40 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     IopDereferenceVpbAndFree @ 0x140319F50 (IopDereferenceVpbAndFree.c)
 *     ExpSetResourceOwnerPointerEx @ 0x14031A170 (ExpSetResourceOwnerPointerEx.c)
 *     ExpBoostIoAfterAcquire @ 0x14031AEB0 (ExpBoostIoAfterAcquire.c)
 *     IoAcquireCancelSpinLock @ 0x140339A20 (IoAcquireCancelSpinLock.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1403C8950 (ExAcquireSharedWaitForExclusive.c)
 *     ExAcquireFastResourceShared @ 0x1403C9180 (ExAcquireFastResourceShared.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x1403CAA50 (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseFastResourceShared @ 0x1403CAF80 (ExpReleaseFastResourceShared.c)
 *     ExDisownFastResource @ 0x1403CC400 (ExDisownFastResource.c)
 * Callees:
 *     KxWaitForLockOwnerShipWithIrql @ 0x1404602E8 (KxWaitForLockOwnerShipWithIrql.c)
 *     PerfLogSpinLockAcquire @ 0x140600D04 (PerfLogSpinLockAcquire.c)
 */

__int64 __fastcall KiAcquireQueuedSpinLockInstrumented(__int64 a1, volatile __int64 *a2, __int64 a3)
{
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int InterruptCount; // ebp
  int v6; // r14d
  int v7; // r9d
  int v8; // esi
  char v9; // di
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  CurrentPrcb = KeGetCurrentPrcb();
  InterruptCount = 0;
  v6 = 0;
  v7 = 0;
  v8 = (int)a2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v9 = 1;
    result = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v6 = result;
  }
  else
  {
    v9 = 0;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  v10 = _InterlockedExchange64(a2, a1);
  if ( v10 )
  {
    result = KxWaitForLockOwnerShipWithIrql(a1, v10, a3, 0LL);
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    v7 = result;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += result;
  }
  if ( v9 )
  {
    v11 = __rdtsc();
    return PerfLogSpinLockAcquire(v8, v11, (int)v11 - v6, v7, InterruptCount, 1);
  }
  return result;
}
