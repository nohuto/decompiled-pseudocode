/*
 * XREFs of RtlpLogHeapSubSegmentActivate @ 0x180117158
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x180029530 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18006CAE4 (RtlpLocalInfoAllocFromCache.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapSubSegmentActivate()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
