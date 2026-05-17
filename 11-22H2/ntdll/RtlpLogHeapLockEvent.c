/*
 * XREFs of RtlpLogHeapLockEvent @ 0x180117384
 * Callers:
 *     RtlLockHeap @ 0x18002A090 (RtlLockHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapLockEvent()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
