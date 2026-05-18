/*
 * XREFs of sub_180028910 @ 0x180028910
 * Callers:
 *     <none>
 * Callees:
 *     sub_180028EE8 @ 0x180028EE8 (sub_180028EE8.c)
 *     sub_180056630 @ 0x180056630 (sub_180056630.c)
 */

__int64 __fastcall sub_180028910(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  sub_180028EE8(a1 + 120, &v7);
  v4 = *(_QWORD *)(a1 + 136);
  if ( v4 )
    sub_180056630(v4, a2);
  v5 = *(_QWORD *)(a1 + 152);
  if ( v5 )
    sub_180056630(v5, a2);
  return sub_1800295A0(a1, a2);
}
