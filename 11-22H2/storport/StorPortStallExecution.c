/*
 * XREFs of StorPortStallExecution @ 0x1C000F610
 * Callers:
 *     StorPortStallExecutionVrfy @ 0x1C00B1750 (StorPortStallExecutionVrfy.c)
 * Callees:
 *     <none>
 */

void __fastcall StorPortStallExecution(ULONG a1)
{
  KeStallExecutionProcessor(a1);
}
