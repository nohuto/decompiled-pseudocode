/*
 * XREFs of CastGuardTelemetryInitOnce @ 0x1800DAE80
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18007F61C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 __fastcall CastGuardTelemetryInitOnce(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  __int64 result; // rax

  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((char *)&dword_18017E990);
  result = 1LL;
  CastGuardProvidersRegistered = 1;
  return result;
}
