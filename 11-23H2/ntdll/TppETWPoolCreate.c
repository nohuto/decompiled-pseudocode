/*
 * XREFs of TppETWPoolCreate @ 0x1801276C4
 * Callers:
 *     TpAllocPoolInternal @ 0x18004C010 (TpAllocPoolInternal.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 */

__int64 TppETWPoolCreate()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
