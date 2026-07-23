/*
 * XREFs of sub_14069E2D0 @ 0x14069E2D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     sub_14069E454 @ 0x14069E454 (sub_14069E454.c)
 */

__int64 sub_14069E2D0()
{
  __int64 v0; // r10
  unsigned int v1; // r8d
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v3 = 0LL;
  sub_140347770((__int64)v3);
  sub_14069E454(v0, 0LL, 0LL, 0LL);
  sub_14022EA30(v3);
  return v1;
}
