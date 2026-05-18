/*
 * XREFs of sub_180056630 @ 0x180056630
 * Callers:
 *     sub_180028910 @ 0x180028910 (sub_180028910.c)
 *     sub_18006FB40 @ 0x18006FB40 (sub_18006FB40.c)
 * Callees:
 *     sub_180054CC0 @ 0x180054CC0 (sub_180054CC0.c)
 *     sub_180056BB4 @ 0x180056BB4 (sub_180056BB4.c)
 */

__int64 __fastcall sub_180056630(__int64 a1, int a2)
{
  int v5; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    sub_180056BB4(a1 + 136, 0LL);
  v5 = a2;
  sub_180054CC0((__int64 *)(a1 + 112), (unsigned int *)&v5);
  return sub_1800295A0(a1, a2);
}
