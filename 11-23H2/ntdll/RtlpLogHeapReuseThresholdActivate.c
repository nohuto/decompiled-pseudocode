/*
 * XREFs of RtlpLogHeapReuseThresholdActivate @ 0x18011895C
 * Callers:
 *     RtlpIsSubSegmentReuseThresholdExceeded @ 0x180063448 (RtlpIsSubSegmentReuseThresholdExceeded.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapReuseThresholdActivate()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
