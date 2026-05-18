/*
 * XREFs of sub_1800DEA94 @ 0x1800DEA94
 * Callers:
 *     sub_180011424 @ 0x180011424 (sub_180011424.c)
 *     sub_1800DEC80 @ 0x1800DEC80 (sub_1800DEC80.c)
 *     sub_1800DED28 @ 0x1800DED28 (sub_1800DED28.c)
 *     sub_1800DEDF0 @ 0x1800DEDF0 (sub_1800DEDF0.c)
 *     sub_1800DEE98 @ 0x1800DEE98 (sub_1800DEE98.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_18002D0B8 @ 0x18002D0B8 (sub_18002D0B8.c)
 *     sub_1800DEA74 @ 0x1800DEA74 (sub_1800DEA74.c)
 */

// Hidden C++ exception states: #wind=6
__int64 sub_1800DEA94(__int64 a1, _OWORD *a2, _QWORD *a3, ...)
{
  __int64 *v3; // rsi
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r8
  __int128 v19; // [rsp+20h] [rbp-40h] BYREF
  __int64 v20[2]; // [rsp+30h] [rbp-30h] BYREF
  _OWORD v21[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 *v22; // [rsp+A8h] [rbp+48h] BYREF
  _QWORD *v23; // [rsp+B0h] [rbp+50h]
  __int64 *v24; // [rsp+B8h] [rbp+58h] BYREF
  va_list va; // [rsp+B8h] [rbp+58h]
  va_list va1; // [rsp+C0h] [rbp+60h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v24 = va_arg(va1, __int64 *);
  v23 = a3;
  v3 = v24;
  v20[0] = *v24;
  v20[1] = v24[1];
  *v24 = 0LL;
  v3[1] = 0LL;
  v19 = 0LL;
  v6 = a3[1];
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    v6 = a3[1];
  }
  *(_QWORD *)&v19 = *a3;
  *((_QWORD *)&v19 + 1) = v6;
  v21[0] = *a2;
  v21[1] = a2[1];
  sub_18002D0B8(a1, (__int64)v21, &v19, v20);
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::RenderOutputD3D11::`vftable';
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_DWORD *)(a1 + 512) = 0;
  v7 = a1 + 520;
  v8 = 20LL;
  do
  {
    sub_1800DEA74(v7);
    v7 += 56LL;
    --v8;
  }
  while ( v8 );
  *(_QWORD *)(a1 + 1640) = 0LL;
  v22 = (__int64 *)(a1 + 1648);
  *(_QWORD *)(a1 + 1648) = 0LL;
  *(_QWORD *)(a1 + 1656) = 0LL;
  v22 = (__int64 *)sub_180011088(0x48uLL);
  sub_18001DE8C(v22, (__int64 *)&v22);
  sub_18001DE8C((__int64 *)(v9 + 8), (__int64 *)&v22);
  sub_18001DE8C((__int64 *)(v10 + 16), (__int64 *)&v22);
  *(_WORD *)(v11 + 24) = 257;
  *(_QWORD *)(a1 + 1648) = v11;
  v22 = (__int64 *)(a1 + 1664);
  *(_QWORD *)(a1 + 1664) = 0LL;
  *(_QWORD *)(a1 + 1672) = 0LL;
  v22 = (__int64 *)sub_180011088(0x30uLL);
  sub_18001DE8C(v22, (__int64 *)&v22);
  sub_18001DE8C((__int64 *)(v12 + 8), (__int64 *)&v22);
  sub_18001DE8C((__int64 *)(v13 + 16), (__int64 *)&v22);
  *(_WORD *)(v14 + 24) = 257;
  *(_QWORD *)(a1 + 1664) = v14;
  v22 = (__int64 *)(a1 + 1680);
  *(_QWORD *)(a1 + 1680) = 0LL;
  *(_QWORD *)(a1 + 1688) = 0LL;
  v24 = (__int64 *)sub_180011088(0x30uLL);
  sub_18001DE8C(v24, (__int64 *)va);
  sub_18001DE8C((__int64 *)(v15 + 8), (__int64 *)va);
  sub_18001DE8C((__int64 *)(v16 + 16), (__int64 *)va);
  *(_WORD *)(v17 + 24) = 257;
  *(_QWORD *)(a1 + 1680) = v17;
  sub_180010910((__int64)a3);
  sub_180010910((__int64)v3);
  return a1;
}
