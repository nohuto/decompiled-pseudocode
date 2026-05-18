/*
 * XREFs of sub_18005D050 @ 0x18005D050
 * Callers:
 *     sub_18005D90C @ 0x18005D90C (sub_18005D90C.c)
 *     sub_18006D0BC @ 0x18006D0BC (sub_18006D0BC.c)
 * Callees:
 *     sub_18005D2CC @ 0x18005D2CC (sub_18005D2CC.c)
 */

__int64 __fastcall sub_18005D050(__int64 a1, float a2)
{
  __int64 result; // rax

  if ( a2 != *(float *)(a1 + 332) )
  {
    *(float *)(a1 + 332) = a2;
    return sub_18005D2CC(a1, 2LL);
  }
  return result;
}
