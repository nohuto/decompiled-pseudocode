/*
 * XREFs of IoDiscardDeferredLiveDumpData @ 0x14094C478
 * Callers:
 *     DbgkpWerCleanupContext @ 0x140883A04 (DbgkpWerCleanupContext.c)
 * Callees:
 *     IopLiveDumpTraceInterfaceEnd @ 0x14055B370 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x14055B574 (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpReleaseResources @ 0x14094F018 (IopLiveDumpReleaseResources.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoDiscardDeferredLiveDumpData(PVOID P)
{
  IopLiveDumpTraceInterfaceStart();
  IopLiveDumpTraceInterfaceEnd((__int64)P, 2LL, 0);
  IopLiveDumpReleaseResources(P);
  ExFreePoolWithTag(P, 0x706D644Cu);
  return 0LL;
}
