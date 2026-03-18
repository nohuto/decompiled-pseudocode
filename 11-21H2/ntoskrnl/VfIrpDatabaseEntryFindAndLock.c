/*
 * XREFs of VfIrpDatabaseEntryFindAndLock @ 0x140AA5A48
 * Callers:
 *     IovCancelIrp @ 0x140A805A8 (IovCancelIrp.c)
 *     IovpCallDriver1 @ 0x140A8B840 (IovpCallDriver1.c)
 *     IovpCheckIrpForCriticalTracking @ 0x140A8C014 (IovpCheckIrpForCriticalTracking.c)
 *     IovpCompleteRequest1 @ 0x140A8C08C (IovpCompleteRequest1.c)
 *     VfIoFreeIrp @ 0x140A8CEB8 (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x140A8D070 (VfIoInitializeIrp.c)
 *     VfIrpWatermark @ 0x140A8D2FC (VfIrpWatermark.c)
 *     VfPendingMoreProcessingRequired @ 0x140A90FE0 (VfPendingMoreProcessingRequired.c)
 *     VfPacketFindAndLock @ 0x140A9C124 (VfPacketFindAndLock.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x140AA5AF8 (VfIrpDatabaseEntryInsertAndLock.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     ViIrpDatabaseAcquireLockShared @ 0x1406022B8 (ViIrpDatabaseAcquireLockShared.c)
 *     ViIrpDatabaseReleaseLockShared @ 0x140602358 (ViIrpDatabaseReleaseLockShared.c)
 *     VfUtilAddressRangeFitNoLock @ 0x140A81A74 (VfUtilAddressRangeFitNoLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140AA5BCC (VfIrpDatabaseEntryReleaseLock.c)
 *     ViIrpDatabaseFindPointer @ 0x140AA5DA4 (ViIrpDatabaseFindPointer.c)
 */

__int64 __fastcall VfIrpDatabaseEntryFindAndLock(unsigned __int64 a1)
{
  __int64 v1; // rdi
  __int64 Pointer; // rax
  KIRQL v4; // bl
  KIRQL v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  v6 = 0;
  if ( VfIrpDatabaseInitialized
    && VfUtilAddressRangeFitNoLock(
         (__m128i *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (a1 >> 12))),
         a1,
         a1 + 208) )
  {
    ViIrpDatabaseAcquireLockShared(&v6);
    Pointer = ViIrpDatabaseFindPointer(a1);
    v1 = Pointer;
    if ( Pointer )
    {
      _InterlockedIncrement((volatile signed __int32 *)(Pointer + 20));
      v4 = v6;
      ViIrpDatabaseReleaseLockShared(v6);
      KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 8));
      *(_BYTE *)(v1 + 16) = v4;
      _InterlockedDecrement((volatile signed __int32 *)(v1 + 20));
      if ( !*(_DWORD *)(v1 + 24) )
      {
        VfIrpDatabaseEntryReleaseLock(v1);
        return 0LL;
      }
    }
    else
    {
      ViIrpDatabaseReleaseLockShared(v6);
    }
  }
  return v1;
}
