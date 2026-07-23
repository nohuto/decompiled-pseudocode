/*
 * XREFs of ExpFastResourceLegacyAcquireShared2 @ 0x1404158DC
 * Callers:
 *     ExpFastResourceLegacyAcquireShared @ 0x1403C8AC4 (ExpFastResourceLegacyAcquireShared.c)
 * Callees:
 *     ExAcquireFastResourceShared2 @ 0x140413034 (ExAcquireFastResourceShared2.c)
 *     ExIsFastResourceHeldExclusive2 @ 0x140413FE4 (ExIsFastResourceHeldExclusive2.c)
 *     ExpAllocateOwnerEntryForLegacyShim2 @ 0x140415640 (ExpAllocateOwnerEntryForLegacyShim2.c)
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
