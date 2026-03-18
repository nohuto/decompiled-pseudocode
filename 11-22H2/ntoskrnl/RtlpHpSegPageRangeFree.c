/*
 * XREFs of RtlpHpSegPageRangeFree @ 0x1405B6B10
 * Callers:
 *     RtlpHpSegAlloc @ 0x14024DB20 (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlpHpSegPageRangeShrink @ 0x14024E6A0 (RtlpHpSegPageRangeShrink.c)
 */

int __fastcall RtlpHpSegPageRangeFree(__int64 a1, __int64 a2, int a3)
{
  return RtlpHpSegPageRangeShrink(a1, a2, a3, a3);
}
