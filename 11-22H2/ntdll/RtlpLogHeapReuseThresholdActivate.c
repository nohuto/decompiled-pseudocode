/*
 * XREFs of RtlpLogHeapReuseThresholdActivate @ 0x1801174AC
 * Callers:
 *     RtlpIsSubSegmentReuseThresholdExceeded @ 0x180063578 (RtlpIsSubSegmentReuseThresholdExceeded.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapReuseThresholdActivate()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
