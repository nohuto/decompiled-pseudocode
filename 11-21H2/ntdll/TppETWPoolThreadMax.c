/*
 * XREFs of TppETWPoolThreadMax @ 0x180124850
 * Callers:
 *     TpSetPoolMaxThreads @ 0x180074550 (TpSetPoolMaxThreads.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 */

__int64 TppETWPoolThreadMax()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
