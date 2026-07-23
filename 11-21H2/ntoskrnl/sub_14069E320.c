/*
 * XREFs of sub_14069E320 @ 0x14069E320
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     sub_14069E454 @ 0x14069E454 (sub_14069E454.c)
 */

__int64 sub_14069E320()
{
  __int64 v0; // r8
  __int64 v1; // r9
  __int64 v2; // r10
  unsigned int v3; // r8d
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v5 = 0LL;
  sub_140347770((__int64)v5);
  LOBYTE(v0) = 1;
  sub_14069E454(v2, 0LL, v0, v1);
  sub_14022EA30(v5);
  return v3;
}
