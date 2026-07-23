/*
 * XREFs of sub_14069E1D0 @ 0x14069E1D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     sub_14069E454 @ 0x14069E454 (sub_14069E454.c)
 */

__int64 sub_14069E1D0()
{
  unsigned int v0; // r10d
  __int64 v1; // r11
  unsigned int v2; // r8d
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v4 = 0LL;
  sub_140347770((__int64)v4);
  sub_14069E454(v1, v0, 0LL, 0LL);
  sub_14022EA30(v4);
  return v2;
}
