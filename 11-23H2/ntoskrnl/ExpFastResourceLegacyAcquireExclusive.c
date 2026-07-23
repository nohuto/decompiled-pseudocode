/*
 * XREFs of ExpFastResourceLegacyAcquireExclusive @ 0x1403C9A00
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     CcAcquireByteRangeForWrite @ 0x14029D2C0 (CcAcquireByteRangeForWrite.c)
 *     ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x140334790 (ExEnterCriticalRegionAndAcquireResourceExclusive.c)
 *     ExTryToAcquireResourceExclusiveLite @ 0x14060AFE0 (ExTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x1403C9A64 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExAcquireFastResourceExclusive @ 0x1403C9FA0 (ExAcquireFastResourceExclusive.c)
 *     ExpFastResourceLegacyAcquireExclusive2 @ 0x1404158C4 (ExpFastResourceLegacyAcquireExclusive2.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

char __fastcall ExpFastResourceLegacyAcquireExclusive(ULONG_PTR BugCheckParameter2)
{
  void *OwnerEntryForLegacyShim; // rsi
  char v4; // bl

  if ( FeatureFastResource2 )
    return ExpFastResourceLegacyAcquireExclusive2();
  OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim();
  v4 = ExAcquireFastResourceExclusive(BugCheckParameter2, (ULONG_PTR)OwnerEntryForLegacyShim);
  if ( !v4 )
    ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
  return v4;
}
