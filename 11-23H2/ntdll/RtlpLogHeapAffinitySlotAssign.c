/*
 * XREFs of RtlpLogHeapAffinitySlotAssign @ 0x180118350
 * Callers:
 *     RtlpSetSegmentInfo @ 0x180081E48 (RtlpSetSegmentInfo.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapAffinitySlotAssign()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
