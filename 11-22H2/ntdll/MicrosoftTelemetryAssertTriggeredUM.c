/*
 * XREFs of MicrosoftTelemetryAssertTriggeredUM @ 0x18007BF90
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18007BFAC (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 __fastcall MicrosoftTelemetryAssertTriggeredUM(_DWORD *a1)
{
  __int64 result; // rax

  if ( *a1 == 11 )
    return MicrosoftTelemetryAssertTriggeredWorker();
  return result;
}
