/*
 * XREFs of KiHaltOnAddressWakeEntireList @ 0x14057FF6C
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
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140571548 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddress @ 0x14057FE88 (KiHaltOnAddress.c)
 * Callees:
 *     HalRequestIpi @ 0x14035C190 (HalRequestIpi.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memset @ 0x140435A00 (memset.c)
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
