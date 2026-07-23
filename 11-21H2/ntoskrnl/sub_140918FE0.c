/*
 * XREFs of sub_140918FE0 @ 0x140918FE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     sub_140918E48 @ 0x140918E48 (sub_140918E48.c)
 */

__int64 sub_140918FE0()
{
  __int64 v1[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v1 = 0LL;
  sub_140347770((__int64)v1);
  dword_140D01824 = 0;
  if ( dword_140D01100 == 1 )
    sub_140918E48();
  return sub_14022EA30(v1);
}
