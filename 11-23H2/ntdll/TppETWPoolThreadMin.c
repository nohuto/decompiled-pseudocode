/*
 * XREFs of TppETWPoolThreadMin @ 0x1801277C0
 * Callers:
 *     TpSetPoolMinThreads @ 0x180085B80 (TpSetPoolMinThreads.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 */

__int64 TppETWPoolThreadMin()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
