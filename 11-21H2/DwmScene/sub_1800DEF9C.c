/*
 * XREFs of sub_1800DEF9C @ 0x1800DEF9C
 * Callers:
 *     sub_180011690 @ 0x180011690 (sub_180011690.c)
 *     sub_1800DF0E0 @ 0x1800DF0E0 (sub_1800DF0E0.c)
 *     sub_1800DF1AC @ 0x1800DF1AC (sub_1800DF1AC.c)
 *     sub_1800DF470 @ 0x1800DF470 (sub_1800DF470.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180030FC8 @ 0x180030FC8 (sub_180030FC8.c)
 *     sub_1800DE9B0 @ 0x1800DE9B0 (sub_1800DE9B0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800DEF9C(_QWORD *a1)
{
  __int64 *v2; // rsi
  __int64 v3; // rcx
  char *v4; // rdi
  char *v5; // rcx
  __int64 v6; // rcx
  char *v7; // rdi
  char *v8; // rcx
  __int64 v9; // rcx
  char *v10; // rdi
  char *v11; // rcx
  __int64 v12; // rcx

  *a1 = &Spectre::Engine::D3D11::RenderOutputD3D11::`vftable';
  v2 = a1 + 210;
  v3 = a1[210];
  v4 = *(char **)(v3 + 8);
  if ( !v4[25] )
  {
    do
    {
      sub_180030FC8((__int64)v2, (__int64)v2, *((char **)v4 + 2));
      v5 = v4;
      v4 = *(char **)v4;
      sub_180010884(v5, 0x30uLL);
    }
    while ( !v4[25] );
    v3 = *v2;
  }
  sub_180010884((char *)v3, 0x30uLL);
  v6 = a1[208];
  v7 = *(char **)(v6 + 8);
  if ( !v7[25] )
  {
    do
    {
      sub_180030FC8((__int64)(a1 + 208), (__int64)(a1 + 208), *((char **)v7 + 2));
      v8 = v7;
      v7 = *(char **)v7;
      sub_180010884(v8, 0x30uLL);
    }
    while ( !v7[25] );
    v6 = a1[208];
  }
  sub_180010884((char *)v6, 0x30uLL);
  v9 = a1[206];
  v10 = *(char **)(v9 + 8);
  if ( !v10[25] )
  {
    do
    {
      sub_1800DE9B0((__int64)(a1 + 206), (__int64)(a1 + 206), *((char **)v10 + 2));
      v11 = v10;
      v10 = *(char **)v10;
      sub_180010884(v11, 0x48uLL);
    }
    while ( !v10[25] );
    v9 = a1[206];
  }
  sub_180010884((char *)v9, 0x48uLL);
  v12 = a1[63];
  if ( v12 )
  {
    a1[63] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return sub_18002D880((__int64)a1);
}
