/*
 * XREFs of RtlpLogHeapAffinityManagerEnable @ 0x180116E14
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x18003D6C0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpLocalInfoAllocFromCache @ 0x180118AA0 (RtlpLocalInfoAllocFromCache.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapAffinityManagerEnable()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
