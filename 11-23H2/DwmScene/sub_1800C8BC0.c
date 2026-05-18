/*
 * XREFs of sub_1800C8BC0 @ 0x1800C8BC0
 * Callers:
 *     sub_180010E24 @ 0x180010E24 (sub_180010E24.c)
 *     sub_1800C8CF4 @ 0x1800C8CF4 (sub_1800C8CF4.c)
 *     sub_1800C8DA8 @ 0x1800C8DA8 (sub_1800C8DA8.c)
 *     sub_1800C8E7C @ 0x1800C8E7C (sub_1800C8E7C.c)
 *     sub_1800C8F30 @ 0x1800C8F30 (sub_1800C8F30.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_1800294DC @ 0x1800294DC (sub_1800294DC.c)
 *     sub_18002B4A4 @ 0x18002B4A4 (sub_18002B4A4.c)
 *     sub_180030EEC @ 0x180030EEC (sub_180030EEC.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800C8BC0(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  __int64 *v7; // rax
  _OWORD *v8; // r10
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v13[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+30h] [rbp-30h] BYREF
  _OWORD v15[2]; // [rsp+40h] [rbp-20h] BYREF

  v13[0] = *a4;
  v13[1] = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  v7 = sub_18001246C(&v14, a3);
  v15[0] = *v8;
  v15[1] = v8[1];
  sub_18002B4A4(a1, (__int64)v15, v7, v13);
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::RenderOutputD3D11::`vftable';
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_DWORD *)(a1 + 512) = 0;
  sub_1800294DC(a1 + 520, 56LL, 20LL, sub_1800C8BA0);
  *(_DWORD *)(a1 + 1640) = 0;
  *(_DWORD *)(a1 + 1644) = 0;
  *(_QWORD *)(a1 + 1648) = 0LL;
  *(_QWORD *)(a1 + 1656) = 0LL;
  v9 = sub_18001C190();
  *(_QWORD *)v9 = v9;
  *(_QWORD *)(v9 + 8) = v9;
  *(_QWORD *)(v9 + 16) = v9;
  *(_WORD *)(v9 + 24) = 257;
  *(_QWORD *)(a1 + 1648) = v9;
  sub_180030EEC((__int64 *)(a1 + 1664));
  sub_180030EEC((__int64 *)(a1 + 1680));
  v10 = a3[1];
  if ( v10 )
    sub_180010530(v10);
  v11 = a4[1];
  if ( v11 )
    sub_180010530(v11);
  return a1;
}
