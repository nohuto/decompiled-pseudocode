/*
 * XREFs of RtlpLogHeapAffinityManagerEnable @ 0x1801182C4
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x18003D560 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpLocalInfoAllocFromCache @ 0x180119F50 (RtlpLocalInfoAllocFromCache.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapAffinityManagerEnable()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
