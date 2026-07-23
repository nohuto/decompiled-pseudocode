/*
 * XREFs of sub_1406A5B90 @ 0x1406A5B90
 * Callers:
 *     sub_1406A5770 @ 0x1406A5770 (sub_1406A5770.c)
 *     sub_14084CD18 @ 0x14084CD18 (sub_14084CD18.c)
 *     sub_1409F8680 @ 0x1409F8680 (sub_1409F8680.c)
 *     sub_140B1CC84 @ 0x140B1CC84 (sub_140B1CC84.c)
 *     sub_140B2F684 @ 0x140B2F684 (sub_140B2F684.c)
 * Callees:
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     sub_1407CABA0 @ 0x1407CABA0 (sub_1407CABA0.c)
 */

__int64 sub_1406A5B90()
{
  int v0; // r8d
  int v1; // r10d
  int v2; // r11d
  unsigned int v3; // r8d
  __int64 v5[3]; // [rsp+30h] [rbp-18h] BYREF

  *(_OWORD *)v5 = 0LL;
  sub_140347770((__int64)v5);
  sub_1407CABA0(v2, v1, v0, 0, 0LL, *((_BYTE *)KeGetCurrentThread() + 562));
  sub_14022EA30(v5);
  return v3;
}
