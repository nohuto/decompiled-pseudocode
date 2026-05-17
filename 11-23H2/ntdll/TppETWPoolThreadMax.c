/*
 * XREFs of TppETWPoolThreadMax @ 0x180127740
 * Callers:
 *     TpSetPoolMaxThreads @ 0x180080F40 (TpSetPoolMaxThreads.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 */

__int64 TppETWPoolThreadMax()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
