/*
 * XREFs of sub_140460150 @ 0x140460150
 * Callers:
 *     sub_1404270A0 @ 0x1404270A0 (sub_1404270A0.c)
 *     sub_140427200 @ 0x140427200 (sub_140427200.c)
 * Callees:
 *     sub_14045FBE2 @ 0x14045FBE2 (sub_14045FBE2.c)
 */

void __fastcall sub_140460150(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // [rsp+30h] [rbp-18h] BYREF
  int v4; // [rsp+38h] [rbp-10h]
  int v5; // [rsp+3Ch] [rbp-Ch]

  v5 = 0;
  v3 = a1;
  v4 = a2;
  sub_14045FBE2(0xF43u, 0x20004000u, (__int64)&v3, 12, 0x400A02u, a3);
}
