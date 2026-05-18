/*
 * XREFs of sub_18005D23C @ 0x18005D23C
 * Callers:
 *     sub_180067350 @ 0x180067350 (sub_180067350.c)
 *     sub_180068E68 @ 0x180068E68 (sub_180068E68.c)
 *     sub_18006D0BC @ 0x18006D0BC (sub_18006D0BC.c)
 *     sub_18006DE34 @ 0x18006DE34 (sub_18006DE34.c)
 * Callees:
 *     sub_18005D2CC @ 0x18005D2CC (sub_18005D2CC.c)
 */

__int64 __fastcall sub_18005D23C(__int64 a1, float a2)
{
  __int64 result; // rax

  if ( a2 != *(float *)(a1 + 328) )
  {
    *(float *)(a1 + 328) = a2;
    return sub_18005D2CC(a1, 2LL);
  }
  return result;
}
