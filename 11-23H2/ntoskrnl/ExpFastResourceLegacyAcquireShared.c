/*
 * XREFs of ExpFastResourceLegacyAcquireShared @ 0x1403C88E4
 * Callers:
 *     ExAcquireResourceSharedLite @ 0x14023D680 (ExAcquireResourceSharedLite.c)
 *     SeAccessCheckByType @ 0x1402B3AC0 (SeAccessCheckByType.c)
 *     SepMandatoryIntegrityCheck @ 0x1402B5EA0 (SepMandatoryIntegrityCheck.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x1403380F0 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1403384E0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 * Callees:
 *     ExAcquireFastResourceShared @ 0x1403C9180 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x1403C9884 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExpFastResourceLegacyAcquireShared2 @ 0x140415548 (ExpFastResourceLegacyAcquireShared2.c)
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
