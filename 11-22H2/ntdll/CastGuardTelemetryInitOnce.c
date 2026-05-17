/*
 * XREFs of CastGuardTelemetryInitOnce @ 0x1800DAE80
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18007F61C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 CastGuardTelemetryInitOnce()
{
  __int64 result; // rax

  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((__int64 *)&dword_18017E990);
  result = 1LL;
  CastGuardProvidersRegistered = 1;
  return result;
}
