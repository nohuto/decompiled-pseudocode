/*
 * XREFs of RtlpLogHeapFreeEvent @ 0x180116F14
 * Callers:
 *     RtlpFreeHeap @ 0x180025D30 (RtlpFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x180027850 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180027BF0 (RtlpFreeHeapInternal.c)
 *     RtlpHpSegReAlloc @ 0x18002E070 (RtlpHpSegReAlloc.c)
 *     RtlpHpSegFree @ 0x18002E414 (RtlpHpSegFree.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18006C404 (RtlpLowFragHeapFlushCaches.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapFreeEvent()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
