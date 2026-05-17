/*
 * XREFs of RtlpLogHeapTagUpdateEvent @ 0x180117958
 * Callers:
 *     RtlpHpSetHeapTag @ 0x1800FFAFC (RtlpHpSetHeapTag.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapTagUpdateEvent()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
