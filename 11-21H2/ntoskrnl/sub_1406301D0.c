/*
 * XREFs of sub_1406301D0 @ 0x1406301D0
 * Callers:
 *     sub_140222E70 @ 0x140222E70 (sub_140222E70.c)
 * Callees:
 *     sub_14045FBE2 @ 0x14045FBE2 (sub_14045FBE2.c)
 */

void __fastcall sub_1406301D0(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // [rsp+30h] [rbp-18h] BYREF
  int v4; // [rsp+38h] [rbp-10h]

  v4 = a2;
  v3 = a3;
  sub_14045FBE2(0xF71u, 0x40400000u, (__int64)&v3, 12, 0x400A02u, a1);
}
