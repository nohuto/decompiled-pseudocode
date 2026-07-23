/*
 * XREFs of KiHaltOnAddressWakeEntireList @ 0x14058045C
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
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140571A88 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddress @ 0x140580378 (KiHaltOnAddress.c)
 * Callees:
 *     HalRequestIpi @ 0x14035C330 (HalRequestIpi.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall KiHaltOnAddressWakeEntireList(__int64 a1)
{
  void *result; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  _DWORD v8[68]; // [rsp+20h] [rbp-128h] BYREF

  result = memset(&v8[2], 0, 0x100uLL);
  v3 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v3 )
  {
    v8[0] = 2097153;
    memset(&v8[1], 0, 0x104uLL);
    while ( 1 )
    {
      v4 = *(_QWORD *)(v3 + 8);
      v5 = *(_QWORD *)(v3 + 16);
      if ( !_InterlockedExchange((volatile __int32 *)(v3 + 24), 1) )
      {
        v6 = *(_QWORD *)(v4 + 200);
        v7 = *(unsigned __int8 *)(v4 + 208);
        if ( LOWORD(v8[0]) > (unsigned __int16)v7 )
          goto LABEL_7;
        if ( HIWORD(v8[0]) > (unsigned __int16)v7 )
          break;
      }
LABEL_8:
      v3 = v5;
      if ( !v5 )
        return (void *)HalRequestIpi(0, (__int64)v8);
    }
    LOWORD(v8[0]) = v7 + 1;
LABEL_7:
    *(_QWORD *)&v8[2 * v7 + 2] |= v6;
    goto LABEL_8;
  }
  return result;
}
