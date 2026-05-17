/*
 * XREFs of TppETWCallbackDequeue @ 0x1801244E8
 * Callers:
 *     TppTimerpExecuteCallback @ 0x180020330 (TppTimerpExecuteCallback.c)
 *     TppSimplepExecuteCallback @ 0x180021330 (TppSimplepExecuteCallback.c)
 *     TppWorkpExecuteCallback @ 0x180069E70 (TppWorkpExecuteCallback.c)
 *     TppExecuteWaitTimerCallback @ 0x18008B8E0 (TppExecuteWaitTimerCallback.c)
 *     TppWorkUnposted @ 0x180123FE0 (TppWorkUnposted.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 */

__int64 TppETWCallbackDequeue()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
