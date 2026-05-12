/*
 * XREFs of StorPortStallExecution @ 0x1C000FFA0
 * Callers:
 *     sub_1C00B2750 @ 0x1C00B2750 (sub_1C00B2750.c)
 * Callees:
 *     <none>
 */

void __fastcall StorPortStallExecution(ULONG a1)
{
  KeStallExecutionProcessor(a1);
}
