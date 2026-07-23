/*
 * XREFs of VfIrpDatabaseEntryFindAndLock @ 0x140AE1788
 * Callers:
 *     IovCancelIrp @ 0x140AC1438 (IovCancelIrp.c)
 *     IovpCallDriver1 @ 0x140ACC190 (IovpCallDriver1.c)
 *     IovpCheckIrpForCriticalTracking @ 0x140ACC974 (IovpCheckIrpForCriticalTracking.c)
 *     IovpCompleteRequest1 @ 0x140ACC9EC (IovpCompleteRequest1.c)
 *     VfIoFreeIrp @ 0x140ACD804 (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x140ACD9BC (VfIoInitializeIrp.c)
 *     VfIrpWatermark @ 0x140ACDC48 (VfIrpWatermark.c)
 *     VfPendingMoreProcessingRequired @ 0x140AD1990 (VfPendingMoreProcessingRequired.c)
 *     VfPacketFindAndLock @ 0x140ADD10C (VfPacketFindAndLock.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x140AE1838 (VfIrpDatabaseEntryInsertAndLock.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     ViIrpDatabaseAcquireLockShared @ 0x1405D2AE8 (ViIrpDatabaseAcquireLockShared.c)
 *     ViIrpDatabaseReleaseLockShared @ 0x1405D2B88 (ViIrpDatabaseReleaseLockShared.c)
 *     VfUtilAddressRangeFitNoLock @ 0x140AC2424 (VfUtilAddressRangeFitNoLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140AE190C (VfIrpDatabaseEntryReleaseLock.c)
 *     ViIrpDatabaseFindPointer @ 0x140AE1AE4 (ViIrpDatabaseFindPointer.c)
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
