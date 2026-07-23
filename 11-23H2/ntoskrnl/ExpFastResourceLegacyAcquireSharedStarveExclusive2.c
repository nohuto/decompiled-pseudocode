/*
 * XREFs of ExpFastResourceLegacyAcquireSharedStarveExclusive2 @ 0x14041593C
 * Callers:
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x14060AA74 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 * Callees:
 *     ExAcquireFastResourceSharedStarveExclusive2 @ 0x140413370 (ExAcquireFastResourceSharedStarveExclusive2.c)
 *     ExIsFastResourceHeldExclusive2 @ 0x140413FE4 (ExIsFastResourceHeldExclusive2.c)
 *     ExpAllocateOwnerEntryForLegacyShim2 @ 0x140415640 (ExpAllocateOwnerEntryForLegacyShim2.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

char __fastcall ExpFastResourceLegacyAcquireSharedStarveExclusive2(_WORD *BugCheckParameter2, char a2)
{
  void *OwnerEntryForLegacyShim2; // rdi
  char v5; // bl

  OwnerEntryForLegacyShim2 = (void *)ExpAllocateOwnerEntryForLegacyShim2();
  v5 = ExAcquireFastResourceSharedStarveExclusive2(BugCheckParameter2, (ULONG_PTR)OwnerEntryForLegacyShim2, a2);
  if ( !v5 || ExIsFastResourceHeldExclusive2((ULONG_PTR)BugCheckParameter2) )
    ExFreePoolWithTag(OwnerEntryForLegacyShim2, 0);
  return v5;
}
