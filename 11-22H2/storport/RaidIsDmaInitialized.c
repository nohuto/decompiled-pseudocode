/*
 * XREFs of RaidIsDmaInitialized @ 0x1C00A84FC
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C00346D8 (RaidAdapterCompleteInitialization.c)
 *     RaidInitializePerfOpts @ 0x1C003B850 (RaidInitializePerfOpts.c)
 *     StorPortGetUncachedExtension @ 0x1C0045FE0 (StorPortGetUncachedExtension.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidIsDmaInitialized(_QWORD *a1)
{
  return a1 && *a1 != 0LL;
}
