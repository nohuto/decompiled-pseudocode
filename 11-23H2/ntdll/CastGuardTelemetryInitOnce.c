/*
 * XREFs of CastGuardTelemetryInitOnce @ 0x1800DA830
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18007FC8C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 __fastcall CastGuardTelemetryInitOnce(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  __int64 result; // rax

  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((char *)&dword_1801819A8);
  result = 1LL;
  CastGuardProvidersRegistered = 1;
  return result;
}
