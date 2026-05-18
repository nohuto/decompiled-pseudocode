/*
 * XREFs of sub_1800D5A00 @ 0x1800D5A00
 * Callers:
 *     sub_1800D5CD0 @ 0x1800D5CD0 (sub_1800D5CD0.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 */

__int64 __fastcall sub_1800D5A00(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11[3]; // [rsp+20h] [rbp-18h] BYREF

  *a1 = &Spectre::Engine::D3D11::DepthBufferD3D11::`vftable';
  sub_18000E72C(a1 + 14);
  sub_18000E72C(a1 + 15);
  *(_OWORD *)v11 = 0LL;
  sub_180011020(a1 + 12, v11);
  if ( v11[1] )
    sub_180010530(v11[1]);
  v2 = a1[31];
  if ( v2 )
    sub_180010530(v2);
  v3 = a1[29];
  if ( v3 )
    sub_180010530(v3);
  v4 = a1[27];
  if ( v4 )
    sub_180010530(v4);
  v5 = a1[25];
  if ( v5 )
    sub_180010530(v5);
  v6 = a1[23];
  if ( v6 )
    sub_180010530(v6);
  v7 = a1[21];
  if ( v7 )
    sub_180010530(v7);
  v8 = a1[19];
  if ( v8 )
    sub_180010530(v8);
  v9 = a1[17];
  if ( v9 )
    sub_180010530(v9);
  sub_18000E72C(a1 + 15);
  sub_18000E72C(a1 + 14);
  return sub_18006F220(a1);
}
