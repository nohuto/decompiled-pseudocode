/*
 * XREFs of sub_1406FACF8 @ 0x1406FACF8
 * Callers:
 *     sub_14027C6DC @ 0x14027C6DC (sub_14027C6DC.c)
 *     sub_1406B85C8 @ 0x1406B85C8 (sub_1406B85C8.c)
 *     sub_1406FA590 @ 0x1406FA590 (sub_1406FA590.c)
 *     sub_1406FA730 @ 0x1406FA730 (sub_1406FA730.c)
 *     sub_1407BCB30 @ 0x1407BCB30 (sub_1407BCB30.c)
 *     sub_1407BD420 @ 0x1407BD420 (sub_1407BD420.c)
 * Callees:
 *     sub_140283DF0 @ 0x140283DF0 (sub_140283DF0.c)
 *     sub_1406FAD90 @ 0x1406FAD90 (sub_1406FAD90.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406FACF8(__int64 a1)
{
  __int64 v1; // rbx
  void **v3; // rdi
  void ***v4; // rbx
  void **v5; // rax
  __int64 v6; // rsi

  v1 = *(_QWORD *)(a1 + 8);
  sub_1406FAD90(a1);
  if ( (*(_DWORD *)(v1 + 56) & 0x20) == 0 )
  {
    v3 = (void **)(a1 + 24);
    while ( 1 )
    {
      v4 = (void ***)*v3;
      if ( *v3 == v3 )
        break;
      if ( v4[1] != v3 || (v5 = *v4, (*v4)[1] != v4) )
        __fastfail(3u);
      *v3 = v5;
      v6 = 0LL;
      for ( v5[1] = v3; (unsigned int)v6 < *((_DWORD *)v4 + 4); v6 = (unsigned int)(v6 + 1) )
        sub_140283DF0((__int64 *)v4[v6 + 3]);
      ExFreePoolWithTag(v4, 0);
    }
  }
}
