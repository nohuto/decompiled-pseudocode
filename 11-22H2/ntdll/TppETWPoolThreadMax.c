/*
 * XREFs of TppETWPoolThreadMax @ 0x180126290
 * Callers:
 *     TpSetPoolMaxThreads @ 0x1800808D0 (TpSetPoolMaxThreads.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 */

__int64 TppETWPoolThreadMax()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
