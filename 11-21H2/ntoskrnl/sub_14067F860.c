/*
 * XREFs of sub_14067F860 @ 0x14067F860
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     sub_14067F8D0 @ 0x14067F8D0 (sub_14067F8D0.c)
 */

__int64 sub_14067F860()
{
  unsigned int v0; // r9d
  __int64 v1; // r8
  __int64 v2; // r10
  unsigned int v3; // r8d
  __int64 v5[3]; // [rsp+40h] [rbp-18h] BYREF

  *(_OWORD *)v5 = 0LL;
  sub_140347770((__int64)v5);
  sub_14067F8D0(v2, v0, v1);
  sub_14022EA30(v5);
  return v3;
}
