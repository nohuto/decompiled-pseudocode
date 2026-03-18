/*
 * XREFs of ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x14060A594
 * Callers:
 *     CcPinFileData @ 0x140263770 (CcPinFileData.c)
 *     ExAcquireSharedStarveExclusive @ 0x140348830 (ExAcquireSharedStarveExclusive.c)
 * Callees:
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x1403C9224 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x1403C9280 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive2 @ 0x140414EF8 (ExpFastResourceLegacyAcquireSharedStarveExclusive2.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

char __fastcall ExpFastResourceLegacyAcquireSharedStarveExclusive(_WORD *BugCheckParameter2, char a2)
{
  _BYTE *OwnerEntryForLegacyShim; // rsi
  char v6; // bl

  if ( FeatureFastResource2 )
    return ExpFastResourceLegacyAcquireSharedStarveExclusive2(BugCheckParameter2, a2);
  OwnerEntryForLegacyShim = ExpAllocateOwnerEntryForLegacyShim();
  v6 = ExAcquireFastResourceSharedStarveExclusive((ULONG_PTR)BugCheckParameter2, (ULONG_PTR)OwnerEntryForLegacyShim, a2);
  if ( !v6 )
    ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
  return v6;
}
