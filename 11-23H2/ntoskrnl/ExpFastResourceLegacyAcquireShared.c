/*
 * XREFs of ExpFastResourceLegacyAcquireShared @ 0x1403C8AC4
 * Callers:
 *     ExAcquireResourceSharedLite @ 0x14023D750 (ExAcquireResourceSharedLite.c)
 *     SeAccessCheckByType @ 0x1402B3D50 (SeAccessCheckByType.c)
 *     SepMandatoryIntegrityCheck @ 0x1402B6130 (SepMandatoryIntegrityCheck.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x140338380 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140338770 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 * Callees:
 *     ExAcquireFastResourceShared @ 0x1403C9360 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x1403C9A64 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExpFastResourceLegacyAcquireShared2 @ 0x1404158DC (ExpFastResourceLegacyAcquireShared2.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

char __fastcall ExpFastResourceLegacyAcquireShared(ULONG_PTR BugCheckParameter2)
{
  void *OwnerEntryForLegacyShim; // rsi
  char v4; // bl

  if ( FeatureFastResource2 )
    return ExpFastResourceLegacyAcquireShared2(BugCheckParameter2);
  OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim();
  v4 = ExAcquireFastResourceShared(BugCheckParameter2, (ULONG_PTR)OwnerEntryForLegacyShim);
  if ( !v4 )
    ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
  return v4;
}
