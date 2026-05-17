/*
 * XREFs of TppETWPoolClose @ 0x180124758
 * Callers:
 *     TpReleasePool @ 0x180086DF0 (TpReleasePool.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 */

__int64 TppETWPoolClose()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
