/*
 * XREFs of KiReleaseQueuedSpinLockInstrumented @ 0x140571548
 * Callers:
 *     CcCanIWrite @ 0x14020F180 (CcCanIWrite.c)
 *     CcCanIWriteStreamEx @ 0x14020FC80 (CcCanIWriteStreamEx.c)
 *     MiProcessWorkingSets @ 0x14021FA10 (MiProcessWorkingSets.c)
 *     ExpAcquireResourceExclusiveLite @ 0x14023B4D0 (ExpAcquireResourceExclusiveLite.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14023CBB0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14023D880 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpAcquireResourceSharedLite @ 0x14023DDC0 (ExpAcquireResourceSharedLite.c)
 *     CcUnpinFileDataEx @ 0x14025D810 (CcUnpinFileDataEx.c)
 *     KxReleaseQueuedSpinLock @ 0x140260360 (KxReleaseQueuedSpinLock.c)
 *     ExpReleaseResourceForThreadLite @ 0x140260600 (ExpReleaseResourceForThreadLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1402633E0 (ExpAcquireSharedStarveExclusive.c)
 *     MiAddWorkingSetEntries @ 0x14026BD20 (MiAddWorkingSetEntries.c)
 *     ExpApplyPriorityBoost @ 0x1402A8540 (ExpApplyPriorityBoost.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A91B0 (NtWaitForWorkViaWorkerFactory.c)
 *     IopCheckDeviceAndDriver @ 0x1402AF050 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x1402AF440 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x1402AFDB0 (IopDecrementDeviceObjectRef.c)
 *     IopDecrementVpbRefCount @ 0x1402AFF90 (IopDecrementVpbRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1402B0120 (IopIncrementDeviceObjectRefCount.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402B8980 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402B8D40 (ExpWorkerFactoryCheckCreate.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402BAD40 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     CcSetDirtyInMask @ 0x1402C8FF0 (CcSetDirtyInMask.c)
 *     IopfCompleteRequest @ 0x1402C99B0 (IopfCompleteRequest.c)
 *     CcSetDirtyPinnedData @ 0x1402FC580 (CcSetDirtyPinnedData.c)
 *     NtSetInformationWorkerFactory @ 0x140302E90 (NtSetInformationWorkerFactory.c)
 *     PoQueryWatchdogTime @ 0x1403193D0 (PoQueryWatchdogTime.c)
 *     MiUnlockPageTableInternal @ 0x1403195C0 (MiUnlockPageTableInternal.c)
 *     CcCopyWriteWontFlush @ 0x140319820 (CcCopyWriteWontFlush.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140319D40 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     IopDereferenceVpbAndFree @ 0x140319F50 (IopDereferenceVpbAndFree.c)
 *     ExpSetResourceOwnerPointerEx @ 0x14031A170 (ExpSetResourceOwnerPointerEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14031A650 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1403C8950 (ExAcquireSharedWaitForExclusive.c)
 *     ExAcquireFastResourceShared @ 0x1403C9180 (ExAcquireFastResourceShared.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x14031A6D0 (KxWaitForLockChainValid.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057FF6C (KiHaltOnAddressWakeEntireList.c)
 *     PerfLogSpinLockRelease @ 0x140600D78 (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall KiReleaseQueuedSpinLockInstrumented(volatile signed __int64 **a1, __int64 a2)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rdx
  volatile signed __int64 **v6; // rdi
  volatile __int64 *v7; // rdx
  volatile signed __int64 *v8; // rax
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  v4 = __rdtsc();
  _m_prefetchw(a1);
  v5 = (__int64)*a1;
  v6 = a1 + 1;
  if ( !*a1 )
  {
    if ( a1 == (volatile signed __int64 **)_InterlockedCompareExchange64(*v6, 0LL, (signed __int64)a1) )
      return PerfLogSpinLockRelease(*v6, a2, v4);
    v5 = KxWaitForLockChainValid((__int64 *)a1);
  }
  *a1 = 0LL;
  v7 = (volatile __int64 *)(v5 + 8);
  v8 = *v6;
  if ( (((unsigned __int8)v8 ^ (unsigned __int8)_InterlockedExchange64(v7, (__int64)*v6)) & 4) != 0 )
  {
    _InterlockedOr(v10, 0);
    KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)v7 >> 5) & 0x7F], 0LL));
  }
  return PerfLogSpinLockRelease(*v6, a2, v4);
}
