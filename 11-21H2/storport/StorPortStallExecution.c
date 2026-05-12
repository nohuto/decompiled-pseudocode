/*
 * XREFs of StorPortStallExecution @ 0x1C0018B10
 * Callers:
 *     StorPortStallExecutionVrfy @ 0x1C00957C0 (StorPortStallExecutionVrfy.c)
 * Callees:
 *     <none>
 */

void __fastcall StorPortStallExecution(ULONG a1)
{
  KeStallExecutionProcessor(a1);
}
