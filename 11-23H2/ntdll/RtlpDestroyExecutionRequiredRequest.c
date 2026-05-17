/*
 * XREFs of RtlpDestroyExecutionRequiredRequest @ 0x1801197D0
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180001320 (RtlQueryProcessDebugInformation.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x180100668 (RtlpHeapPerformCrossProcessQuery.c)
 * Callees:
 *     NtPowerInformation @ 0x1800A1A80 (NtPowerInformation.c)
 */

NTSTATUS __fastcall RtlpDestroyExecutionRequiredRequest(HANDLE Handle)
{
  NtPowerInformation();
  return NtClose(Handle);
}
