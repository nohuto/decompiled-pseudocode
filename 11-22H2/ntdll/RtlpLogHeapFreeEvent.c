/*
 * XREFs of RtlpLogHeapFreeEvent @ 0x180117300
 * Callers:
 *     RtlpFreeHeap @ 0x1800397E0 (RtlpFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x18003B350 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x18003BD50 (RtlpFreeHeapInternal.c)
 *     RtlpHpSegReAlloc @ 0x180043970 (RtlpHpSegReAlloc.c)
 *     RtlpHpSegFree @ 0x180043E44 (RtlpHpSegFree.c)
 *     RtlpLowFragHeapFlushCaches @ 0x1801192A4 (RtlpLowFragHeapFlushCaches.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapFreeEvent()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
