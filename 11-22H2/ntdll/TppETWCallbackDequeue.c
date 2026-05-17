/*
 * XREFs of TppETWCallbackDequeue @ 0x180125F28
 * Callers:
 *     TppTimerpExecuteCallback @ 0x18004E9F0 (TppTimerpExecuteCallback.c)
 *     TppSimplepExecuteCallback @ 0x18004EAE0 (TppSimplepExecuteCallback.c)
 *     TppExecuteWaitTimerCallback @ 0x180050870 (TppExecuteWaitTimerCallback.c)
 *     TppWorkpExecuteCallback @ 0x180062860 (TppWorkpExecuteCallback.c)
 *     TppWorkUnposted @ 0x180125A20 (TppWorkUnposted.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 */

__int64 TppETWCallbackDequeue()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
