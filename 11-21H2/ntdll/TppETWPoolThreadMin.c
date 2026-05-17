/*
 * XREFs of TppETWPoolThreadMin @ 0x1801248D0
 * Callers:
 *     TpSetPoolMinThreads @ 0x180089830 (TpSetPoolMinThreads.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 */

__int64 TppETWPoolThreadMin()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
