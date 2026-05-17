/*
 * XREFs of RtlpLogHeapUnlockEvent @ 0x1801179D8
 * Callers:
 *     RtlUnlockHeap @ 0x180029F10 (RtlUnlockHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapUnlockEvent()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
