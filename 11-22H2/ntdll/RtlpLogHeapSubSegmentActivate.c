/*
 * XREFs of RtlpLogHeapSubSegmentActivate @ 0x180117544
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x18003D6C0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpLocalInfoAllocFromCache @ 0x180118AA0 (RtlpLocalInfoAllocFromCache.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapSubSegmentActivate()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
