/*
 * XREFs of sub_18008C360 @ 0x18008C360
 * Callers:
 *     sub_180087388 @ 0x180087388 (sub_180087388.c)
 * Callees:
 *     sub_180028EE8 @ 0x180028EE8 (sub_180028EE8.c)
 */

__int64 __fastcall sub_18008C360(__int64 a1, int a2)
{
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  sub_180028EE8((__int64 *)(a1 + 144), (unsigned int *)&v5);
  return sub_1800295A0(a1, a2);
}
