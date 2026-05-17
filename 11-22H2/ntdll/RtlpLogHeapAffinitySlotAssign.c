/*
 * XREFs of RtlpLogHeapAffinitySlotAssign @ 0x180116EA0
 * Callers:
 *     RtlpSetSegmentInfo @ 0x1800817D8 (RtlpSetSegmentInfo.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapAffinitySlotAssign()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
