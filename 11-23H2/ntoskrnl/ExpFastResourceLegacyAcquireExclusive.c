/*
 * XREFs of ExpFastResourceLegacyAcquireExclusive @ 0x1403C9820
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x1402390E0 (ExAcquireResourceExclusiveLite.c)
 *     CcAcquireByteRangeForWrite @ 0x14029D030 (CcAcquireByteRangeForWrite.c)
 *     ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x140334500 (ExEnterCriticalRegionAndAcquireResourceExclusive.c)
 *     ExTryToAcquireResourceExclusiveLite @ 0x14060AA90 (ExTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x1403C9884 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExAcquireFastResourceExclusive @ 0x1403C9DC0 (ExAcquireFastResourceExclusive.c)
 *     ExpFastResourceLegacyAcquireExclusive2 @ 0x140415530 (ExpFastResourceLegacyAcquireExclusive2.c)
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
