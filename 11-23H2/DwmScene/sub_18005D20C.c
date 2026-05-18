/*
 * XREFs of sub_18005D20C @ 0x18005D20C
 * Callers:
 *     sub_18006D0BC @ 0x18006D0BC (sub_18006D0BC.c)
 *     sub_18006DE34 @ 0x18006DE34 (sub_18006DE34.c)
 *     sub_18008E410 @ 0x18008E410 (sub_18008E410.c)
 * Callees:
 *     sub_18005D2CC @ 0x18005D2CC (sub_18005D2CC.c)
 */

__int64 __fastcall sub_18005D20C(__int64 a1, float a2)
{
  __int64 result; // rax

  if ( a2 != *(float *)(a1 + 324) )
  {
    *(float *)(a1 + 324) = a2;
    return sub_18005D2CC(a1, 2LL);
  }
  return result;
}
