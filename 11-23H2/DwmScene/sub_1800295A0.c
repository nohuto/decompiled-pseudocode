/*
 * XREFs of sub_1800295A0 @ 0x1800295A0
 * Callers:
 *     sub_180028910 @ 0x180028910 (sub_180028910.c)
 *     sub_180044320 @ 0x180044320 (sub_180044320.c)
 *     sub_1800487D0 @ 0x1800487D0 (sub_1800487D0.c)
 *     sub_180054AD0 @ 0x180054AD0 (sub_180054AD0.c)
 *     sub_180056630 @ 0x180056630 (sub_180056630.c)
 *     sub_18006FB40 @ 0x18006FB40 (sub_18006FB40.c)
 *     sub_180088600 @ 0x180088600 (sub_180088600.c)
 *     sub_180088BB0 @ 0x180088BB0 (sub_180088BB0.c)
 *     sub_18008AF60 @ 0x18008AF60 (sub_18008AF60.c)
 *     sub_18008C360 @ 0x18008C360 (sub_18008C360.c)
 * Callees:
 *     sub_1800298CC @ 0x1800298CC (sub_1800298CC.c)
 */

__int64 __fastcall sub_1800295A0(__int64 a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return sub_1800298CC(a1 + 80, &v3);
}
