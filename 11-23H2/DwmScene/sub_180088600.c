/*
 * XREFs of sub_180088600 @ 0x180088600
 * Callers:
 *     sub_180087388 @ 0x180087388 (sub_180087388.c)
 *     sub_1800883E0 @ 0x1800883E0 (sub_1800883E0.c)
 * Callees:
 *     sub_180028EE8 @ 0x180028EE8 (sub_180028EE8.c)
 */

__int64 __fastcall sub_180088600(__int64 a1, int a2)
{
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  sub_180028EE8((__int64 *)(a1 + 128), (unsigned int *)&v5);
  return sub_1800295A0(a1, a2);
}
