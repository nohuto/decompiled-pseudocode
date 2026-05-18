/*
 * XREFs of sub_1800D8CB4 @ 0x1800D8CB4
 * Callers:
 *     sub_1800C3D9C @ 0x1800C3D9C (sub_1800C3D9C.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18002B4A4 @ 0x18002B4A4 (sub_18002B4A4.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800D8CB4(__int64 a1, _OWORD *a2, __int64 *a3, __int64 *a4)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12[2]; // [rsp+30h] [rbp-38h] BYREF
  _OWORD v13[2]; // [rsp+40h] [rbp-28h] BYREF

  v11[0] = *a4;
  v11[1] = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  v12[0] = *a3;
  v12[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v13[0] = *a2;
  v13[1] = a2[1];
  sub_18002B4A4(a1, (__int64)v13, v12, v11);
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic::`vftable';
  *(_BYTE *)(a1 + 504) = 0;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  *(_QWORD *)(a1 + 560) = 0LL;
  v7 = sub_18001090C(0x38uLL);
  *(_QWORD *)v7 = v7;
  *(_QWORD *)(v7 + 8) = v7;
  *(_QWORD *)(v7 + 16) = v7;
  *(_WORD *)(v7 + 24) = 257;
  *(_QWORD *)(a1 + 552) = v7;
  v8 = a3[1];
  if ( v8 )
    sub_180010530(v8);
  v9 = a4[1];
  if ( v9 )
    sub_180010530(v9);
  return a1;
}
