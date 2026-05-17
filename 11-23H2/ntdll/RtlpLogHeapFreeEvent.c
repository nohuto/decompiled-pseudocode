/*
 * XREFs of RtlpLogHeapFreeEvent @ 0x1801187B0
 * Callers:
 *     RtlpFreeHeap @ 0x180039680 (RtlpFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x18003B1F0 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x18003BBF0 (RtlpFreeHeapInternal.c)
 *     RtlpHpSegReAlloc @ 0x180043810 (RtlpHpSegReAlloc.c)
 *     RtlpHpSegFree @ 0x180043CE4 (RtlpHpSegFree.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18011A754 (RtlpLowFragHeapFlushCaches.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapFreeEvent()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
