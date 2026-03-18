/*
 * XREFs of KxWaitForLockOwnerShip @ 0x140260F20
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
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403CD2C0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403CD2F0 (HvlNotifyLongSpinWait.c)
 *     KiHaltOnAddress @ 0x14057FE88 (KiHaltOnAddress.c)
 */

__int64 __fastcall KxWaitForLockOwnerShip(signed __int64 a1, signed __int64 *a2)
{
  volatile signed __int64 *v2; // rbx
  __int64 v3; // rax
  unsigned int v4; // edi
  int v5; // esi
  int v6; // esi
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  int i; // [rsp+24h] [rbp-2Ch]
  signed __int64 v11; // [rsp+28h] [rbp-28h]
  __int128 v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h]

  v2 = (volatile signed __int64 *)(a1 + 8);
  v13 = 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  v12 = 0LL;
  if ( (v3 & 4) != 0 )
    BYTE1(v13) = 1;
  *v2 |= 1uLL;
  v4 = 0;
  *a2 = a1;
  v5 = 0;
  for ( i = 0; ; v5 = i )
  {
    if ( (++v4 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
    {
      v6 = v5 + 1;
      LOBYTE(v13) = 0;
      i = v6;
      if ( (KiVelocityFlags & 0x10000) != 0 && KeGetCurrentIrql() == 2 && (v6 & 1) == 0 )
      {
        v8 = *v2;
        LOBYTE(v13) = 1;
        *((_QWORD *)&v12 + 1) = v8;
        if ( (v8 & 1) != 0 )
        {
          do
          {
            if ( BYTE1(v13) )
              a1 = v8 & 0xFFFFFFFFFFFFFFFBuLL;
            else
              a1 = v8 | 4;
            v11 = a1;
            v9 = v8;
            v8 = _InterlockedCompareExchange64(v2, a1, v8);
            LOBYTE(v12) = v8;
            if ( v9 == v8 )
            {
              do
              {
                *((_QWORD *)&v12 + 1) = a1;
                KiHaltOnAddress(v2, (char *)&v12 + 8);
                v8 = *v2;
                a1 = v11;
                *(_QWORD *)&v12 = *v2;
              }
              while ( *v2 == v11 );
            }
            *((_QWORD *)&v12 + 1) = v8;
          }
          while ( (v12 & 1) != 0 );
        }
      }
      else
      {
        HvlNotifyLongSpinWait(v4);
      }
    }
    else
    {
      _mm_pause();
    }
    if ( (*v2 & 1) == 0 )
      break;
  }
  return v4;
}
