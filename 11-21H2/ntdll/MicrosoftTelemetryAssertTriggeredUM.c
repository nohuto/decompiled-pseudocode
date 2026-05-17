/*
 * XREFs of MicrosoftTelemetryAssertTriggeredUM @ 0x180002FE0
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x180002FFC (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 __fastcall MicrosoftTelemetryAssertTriggeredUM(_DWORD *a1)
{
  __int64 result; // rax

  if ( *a1 == 11 )
    return MicrosoftTelemetryAssertTriggeredWorker();
  return result;
}
