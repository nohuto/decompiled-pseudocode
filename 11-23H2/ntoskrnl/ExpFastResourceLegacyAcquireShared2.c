/*
 * XREFs of ExpFastResourceLegacyAcquireShared2 @ 0x140415548
 * Callers:
 *     ExpFastResourceLegacyAcquireShared @ 0x1403C88E4 (ExpFastResourceLegacyAcquireShared.c)
 * Callees:
 *     ExAcquireFastResourceShared2 @ 0x140412CA0 (ExAcquireFastResourceShared2.c)
 *     ExIsFastResourceHeldExclusive2 @ 0x140413C50 (ExIsFastResourceHeldExclusive2.c)
 *     ExpAllocateOwnerEntryForLegacyShim2 @ 0x1404152AC (ExpAllocateOwnerEntryForLegacyShim2.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

char __fastcall ExpFastResourceLegacyAcquireShared2(_WORD *BugCheckParameter2, char a2)
{
  void *OwnerEntryForLegacyShim2; // rdi
  char v5; // bl

  OwnerEntryForLegacyShim2 = (void *)ExpAllocateOwnerEntryForLegacyShim2();
  v5 = ExAcquireFastResourceShared2(BugCheckParameter2, (ULONG_PTR)OwnerEntryForLegacyShim2, a2);
  if ( !v5 || ExIsFastResourceHeldExclusive2((ULONG_PTR)BugCheckParameter2) )
    ExFreePoolWithTag(OwnerEntryForLegacyShim2, 0);
  return v5;
}
