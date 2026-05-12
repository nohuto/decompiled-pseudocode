/*
 * XREFs of RaidIsDmaInitialized @ 0x1C008DE20
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C0033A68 (RaidAdapterCompleteInitialization.c)
 *     RaidInitializePerfOpts @ 0x1C003A044 (RaidInitializePerfOpts.c)
 *     StorPortGetUncachedExtension @ 0x1C00433F0 (StorPortGetUncachedExtension.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidIsDmaInitialized(_QWORD *a1)
{
  return a1 && *a1 != 0LL;
}
