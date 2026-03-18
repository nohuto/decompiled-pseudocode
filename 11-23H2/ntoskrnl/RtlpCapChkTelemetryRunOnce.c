/*
 * XREFs of RtlpCapChkTelemetryRunOnce @ 0x140865D40
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3270 (KeQueryPerformanceCounter.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140821DDC (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall RtlpCapChkTelemetryRunOnce(PRTL_RUN_ONCE RunOnce, PVOID Parameter, PVOID *Context)
{
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C042A0, 0LL, 0LL);
  KeQueryPerformanceCounter(&RtlpPerformanceCounterFrequency);
  return 1LL;
}
