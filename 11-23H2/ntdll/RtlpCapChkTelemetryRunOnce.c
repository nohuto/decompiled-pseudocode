/*
 * XREFs of RtlpCapChkTelemetryRunOnce @ 0x180088890
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18007FC8C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 RtlpCapChkTelemetryRunOnce()
{
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((__int64 *)&dword_1801813F8);
  RtlpPerformanceCounterFrequency = MEMORY[0x7FFE0300];
  return 1LL;
}
