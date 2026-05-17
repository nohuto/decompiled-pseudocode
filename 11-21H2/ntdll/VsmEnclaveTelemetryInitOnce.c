/*
 * XREFs of VsmEnclaveTelemetryInitOnce @ 0x1800DC710
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x1800853EC (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 VsmEnclaveTelemetryInitOnce()
{
  __int64 result; // rax

  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((__int64 *)&dword_180174930);
  result = 1LL;
  VSMEnclaveProvidersRegistered = 1;
  return result;
}
