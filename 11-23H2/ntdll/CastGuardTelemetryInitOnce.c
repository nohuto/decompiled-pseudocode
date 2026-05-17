/*
 * XREFs of CastGuardTelemetryInitOnce @ 0x1800DA830
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18007FC8C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 CastGuardTelemetryInitOnce()
{
  __int64 result; // rax

  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((__int64 *)&dword_1801819A8);
  result = 1LL;
  CastGuardProvidersRegistered = 1;
  return result;
}
