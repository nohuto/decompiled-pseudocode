/*
 * XREFs of sub_18005D33C @ 0x18005D33C
 * Callers:
 *     sub_18006DE34 @ 0x18006DE34 (sub_18006DE34.c)
 * Callees:
 *     sub_18005D2CC @ 0x18005D2CC (sub_18005D2CC.c)
 */

void __fastcall sub_18005D33C(__int64 a1, float a2)
{
  if ( a2 != *(float *)(a1 + 340) )
  {
    *(float *)(a1 + 340) = a2;
    sub_18005D2CC(a1, 2);
  }
}
