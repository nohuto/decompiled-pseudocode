/*
 * XREFs of RtlpHpSegPageRangeFree @ 0x1405B6FF0
 * Callers:
 *     RtlpHpSegAlloc @ 0x14024DC10 (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlpHpSegPageRangeShrink @ 0x14024E790 (RtlpHpSegPageRangeShrink.c)
 */

int __fastcall RtlpHpSegPageRangeFree(__int64 a1, __int64 a2, int a3)
{
  return RtlpHpSegPageRangeShrink(a1, a2, a3, a3);
}
