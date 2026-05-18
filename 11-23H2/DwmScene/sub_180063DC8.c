/*
 * XREFs of sub_180063DC8 @ 0x180063DC8
 * Callers:
 *     sub_18001568C @ 0x18001568C (sub_18001568C.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180031048 @ 0x180031048 (sub_180031048.c)
 *     sub_180063D98 @ 0x180063D98 (sub_180063D98.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180063DC8(__int64 a1, int a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  _QWORD v12[2]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v14[2]; // [rsp+50h] [rbp-10h] BYREF

  v13[0] = *a5;
  v13[1] = a5[1];
  *a5 = 0LL;
  a5[1] = 0LL;
  v14[0] = *a4;
  v14[1] = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  v12[0] = *a3;
  v12[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  sub_180031048(a1, a2, v12, v14, v13);
  *(_QWORD *)a1 = &Spectre::Engine::ViewerEngine::`vftable';
  *(_WORD *)(a1 + 1457) = 0;
  *(_QWORD *)(a1 + 1460) = 1065353216LL;
  *(_BYTE *)(a1 + 1468) = 0;
  *(_OWORD *)(a1 + 1472) = xmmword_180106A80;
  sub_180063D98(a1 + 1488);
  Mtx_init_in_situ((_Mtx_t)(a1 + 1552), 2);
  v8 = a3[1];
  if ( v8 )
    sub_180010530(v8);
  v9 = a4[1];
  if ( v9 )
    sub_180010530(v9);
  v10 = a5[1];
  if ( v10 )
    sub_180010530(v10);
  return a1;
}
