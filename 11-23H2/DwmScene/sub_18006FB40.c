/*
 * XREFs of sub_18006FB40 @ 0x18006FB40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180028EE8 @ 0x180028EE8 (sub_180028EE8.c)
 *     sub_180054AD0 @ 0x180054AD0 (sub_180054AD0.c)
 *     sub_180056630 @ 0x180056630 (sub_180056630.c)
 */

__int64 __fastcall sub_18006FB40(__int64 a1, int a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rcx
  int v8; // [rsp+38h] [rbp+10h] BYREF

  sub_180056630(*(_QWORD *)(a1 + 112), a2);
  v4 = (__int64 *)(a1 + 192);
  v5 = 4LL;
  do
  {
    v6 = *(v4 - 8);
    if ( v6 )
      sub_180056630(v6, a2);
    if ( *v4 )
      sub_180054AD0(*v4, a2);
    v4 += 2;
    --v5;
  }
  while ( v5 );
  v8 = a2;
  sub_180028EE8((__int64 *)(a1 + 256), (unsigned int *)&v8);
  return sub_1800295A0(a1, a2);
}
