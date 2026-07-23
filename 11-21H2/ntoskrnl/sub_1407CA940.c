/*
 * XREFs of sub_1407CA940 @ 0x1407CA940
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     sub_1407CABA0 @ 0x1407CABA0 (sub_1407CABA0.c)
 */

__int64 __fastcall sub_1407CA940(int a1)
{
  int v2; // r8d
  int v3; // r9d
  int v4; // r11d
  unsigned int v5; // r8d
  __int64 v7[3]; // [rsp+30h] [rbp-18h] BYREF

  *(_OWORD *)v7 = 0LL;
  sub_140347770((__int64)v7);
  sub_1407CABA0(a1, v4, v2, v3, 0LL, *((_BYTE *)KeGetCurrentThread() + 562));
  sub_14022EA30(v7);
  return v5;
}
