/*
 * XREFs of RtlpDestroyExecutionRequiredRequest @ 0x180118320
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180001320 (RtlQueryProcessDebugInformation.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800FF258 (RtlpHeapPerformCrossProcessQuery.c)
 * Callees:
 *     NtPowerInformation @ 0x18009F9C0 (NtPowerInformation.c)
 */

NTSTATUS __fastcall RtlpDestroyExecutionRequiredRequest(HANDLE Handle)
{
  NtPowerInformation();
  return NtClose(Handle);
}
