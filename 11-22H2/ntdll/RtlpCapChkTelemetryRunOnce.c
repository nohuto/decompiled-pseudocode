/*
 * XREFs of RtlpCapChkTelemetryRunOnce @ 0x180088090
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18007F61C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 RtlpCapChkTelemetryRunOnce()
{
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((__int64 *)&dword_18017E320);
  RtlpPerformanceCounterFrequency = MEMORY[0x7FFE0300];
  return 1LL;
}
