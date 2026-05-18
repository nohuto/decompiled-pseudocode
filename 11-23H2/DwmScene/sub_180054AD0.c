/*
 * XREFs of sub_180054AD0 @ 0x180054AD0
 * Callers:
 *     sub_18006FB40 @ 0x18006FB40 (sub_18006FB40.c)
 * Callees:
 *     sub_180054CC0 @ 0x180054CC0 (sub_180054CC0.c)
 */

__int64 __fastcall sub_180054AD0(__int64 a1, int a2)
{
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  sub_180054CC0(a1 + 128, &v5);
  return sub_1800295A0(a1, a2);
}
