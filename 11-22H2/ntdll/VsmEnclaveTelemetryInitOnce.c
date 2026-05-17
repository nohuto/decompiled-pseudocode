/*
 * XREFs of VsmEnclaveTelemetryInitOnce @ 0x1800DCC30
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18007F61C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 VsmEnclaveTelemetryInitOnce()
{
  __int64 result; // rax

  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((__int64 *)&dword_18017E958);
  result = 1LL;
  VSMEnclaveProvidersRegistered = 1;
  return result;
}
