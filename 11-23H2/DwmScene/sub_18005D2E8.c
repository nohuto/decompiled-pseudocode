/*
 * XREFs of sub_18005D2E8 @ 0x18005D2E8
 * Callers:
 *     sub_18006D0BC @ 0x18006D0BC (sub_18006D0BC.c)
 *     sub_18006DE34 @ 0x18006DE34 (sub_18006DE34.c)
 *     sub_18008E410 @ 0x18008E410 (sub_18008E410.c)
 * Callees:
 *     sub_18005D2CC @ 0x18005D2CC (sub_18005D2CC.c)
 */

void __fastcall sub_18005D2E8(__int64 a1, float a2)
{
  if ( a2 != *(float *)(a1 + 320) )
  {
    *(float *)(a1 + 320) = a2;
    sub_18005D2CC(a1, 2);
  }
}
