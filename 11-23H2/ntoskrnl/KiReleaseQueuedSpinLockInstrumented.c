/*
 * XREFs of KiReleaseQueuedSpinLockInstrumented @ 0x140571A88
 * Callers:
 *     CcCanIWrite @ 0x14020F180 (CcCanIWrite.c)
 *     CcCanIWriteStreamEx @ 0x14020FC80 (CcCanIWriteStreamEx.c)
 *     MiProcessWorkingSets @ 0x14021FA10 (MiProcessWorkingSets.c)
 *     ExpAcquireResourceExclusiveLite @ 0x14023B5A0 (ExpAcquireResourceExclusiveLite.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14023CC80 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14023D950 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpAcquireResourceSharedLite @ 0x14023DE90 (ExpAcquireResourceSharedLite.c)
 *     CcUnpinFileDataEx @ 0x14025DAA0 (CcUnpinFileDataEx.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     ExpReleaseResourceForThreadLite @ 0x140260890 (ExpReleaseResourceForThreadLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x140263670 (ExpAcquireSharedStarveExclusive.c)
 *     MiAddWorkingSetEntries @ 0x14026BFB0 (MiAddWorkingSetEntries.c)
 *     ExpApplyPriorityBoost @ 0x1402A87D0 (ExpApplyPriorityBoost.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A9440 (NtWaitForWorkViaWorkerFactory.c)
 *     IopCheckDeviceAndDriver @ 0x1402AF2E0 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x1402AF6D0 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x1402B0040 (IopDecrementDeviceObjectRef.c)
 *     IopDecrementVpbRefCount @ 0x1402B0220 (IopDecrementVpbRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1402B03B0 (IopIncrementDeviceObjectRefCount.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402B8C10 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402B8FD0 (ExpWorkerFactoryCheckCreate.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402BAFD0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     CcSetDirtyInMask @ 0x1402C9280 (CcSetDirtyInMask.c)
 *     IopfCompleteRequest @ 0x1402C9C40 (IopfCompleteRequest.c)
 *     CcSetDirtyPinnedData @ 0x1402FC810 (CcSetDirtyPinnedData.c)
 *     NtSetInformationWorkerFactory @ 0x140303120 (NtSetInformationWorkerFactory.c)
 *     PoQueryWatchdogTime @ 0x140319660 (PoQueryWatchdogTime.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     CcCopyWriteWontFlush @ 0x140319AB0 (CcCopyWriteWontFlush.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140319FD0 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     IopDereferenceVpbAndFree @ 0x14031A1E0 (IopDereferenceVpbAndFree.c)
 *     ExpSetResourceOwnerPointerEx @ 0x14031A400 (ExpSetResourceOwnerPointerEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14031A8E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1403C8B30 (ExAcquireSharedWaitForExclusive.c)
 *     ExAcquireFastResourceShared @ 0x1403C9360 (ExAcquireFastResourceShared.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x14031A960 (KxWaitForLockChainValid.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14058045C (KiHaltOnAddressWakeEntireList.c)
 *     PerfLogSpinLockRelease @ 0x1406012C8 (PerfLogSpinLockRelease.c)
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
