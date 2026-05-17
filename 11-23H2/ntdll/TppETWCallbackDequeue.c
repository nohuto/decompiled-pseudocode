/*
 * XREFs of TppETWCallbackDequeue @ 0x1801273D8
 * Callers:
 *     TppTimerpExecuteCallback @ 0x18004E890 (TppTimerpExecuteCallback.c)
 *     TppSimplepExecuteCallback @ 0x18004E980 (TppSimplepExecuteCallback.c)
 *     TppExecuteWaitTimerCallback @ 0x180050710 (TppExecuteWaitTimerCallback.c)
 *     TppWorkpExecuteCallback @ 0x1800627F0 (TppWorkpExecuteCallback.c)
 *     TppWorkUnposted @ 0x180126ED0 (TppWorkUnposted.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 */

__int64 TppETWCallbackDequeue()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
