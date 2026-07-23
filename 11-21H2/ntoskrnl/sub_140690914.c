/*
 * XREFs of sub_140690914 @ 0x140690914
 * Callers:
 *     sub_140690378 @ 0x140690378 (sub_140690378.c)
 * Callees:
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     sub_140690978 @ 0x140690978 (sub_140690978.c)
 *     sub_140690C50 @ 0x140690C50 (sub_140690C50.c)
 */

__int64 sub_140690914()
{
  __int64 v0; // r8
  int v1; // eax
  __int64 v2; // rdx
  unsigned int v3; // r8d
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  *(_OWORD *)v5 = 0LL;
  v6 = 0LL;
  sub_140347770((__int64)v5);
  v1 = sub_140690C50(v0, &v6);
  if ( v1 >= 0 )
    sub_140690978(v6, v2, (unsigned int)v1);
  sub_14022EA30(v5);
  return v3;
}
