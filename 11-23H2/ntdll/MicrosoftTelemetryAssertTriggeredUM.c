/*
 * XREFs of MicrosoftTelemetryAssertTriggeredUM @ 0x18007C600
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18007C61C (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 __fastcall MicrosoftTelemetryAssertTriggeredUM(_DWORD *a1)
{
  __int64 result; // rax

  if ( *a1 == 11 )
    return MicrosoftTelemetryAssertTriggeredWorker();
  return result;
}
