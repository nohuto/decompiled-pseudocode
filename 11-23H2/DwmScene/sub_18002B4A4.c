/*
 * XREFs of sub_18002B4A4 @ 0x18002B4A4
 * Callers:
 *     sub_1800C8BC0 @ 0x1800C8BC0 (sub_1800C8BC0.c)
 *     sub_1800D8CB4 @ 0x1800D8CB4 (sub_1800D8CB4.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180015604 @ 0x180015604 (sub_180015604.c)
 *     sub_18002B1A4 @ 0x18002B1A4 (sub_18002B1A4.c)
 *     sub_18002B228 @ 0x18002B228 (sub_18002B228.c)
 *     sub_18002B29C @ 0x18002B29C (sub_18002B29C.c)
 *     sub_18002B310 @ 0x18002B310 (sub_18002B310.c)
 *     sub_18002B444 @ 0x18002B444 (sub_18002B444.c)
 *     sub_18002CA80 @ 0x18002CA80 (sub_18002CA80.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall sub_18002B4A4(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 *v10; // rcx
  char v11; // bl
  __int64 v12; // rcx
  __int64 v13; // rcx
  char v15; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+28h] [rbp-50h]
  __int64 v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+38h] [rbp-40h]

  v8 = sub_18001246C(&v17, a3);
  sub_18002B444((_QWORD *)a1, v8);
  *(_QWORD *)a1 = &Spectre::Engine::RenderOutput::`vftable';
  sub_180015604((_QWORD *)(a1 + 80), a3);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_BYTE *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 164) = 0LL;
  *(_QWORD *)(a1 + 172) = 0LL;
  *(_QWORD *)(a1 + 180) = 0LL;
  *(_DWORD *)(a1 + 188) = 0;
  *(_DWORD *)(a1 + 192) = 1065353216;
  *(_DWORD *)(a1 + 196) = 1065353216;
  *(_DWORD *)(a1 + 200) = 3;
  sub_18002B29C((_QWORD *)(a1 + 208));
  *(_WORD *)(a1 + 236) = 256;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_DWORD *)(a1 + 296) = 2;
  Mtx_init_in_situ((_Mtx_t)(a1 + 304), 2);
  if ( *(_DWORD *)(a2 + 24) == 1 )
  {
    v9 = *a4;
    v18 = a4[1];
    *a4 = 0LL;
    a4[1] = 0LL;
    v10 = &v17;
    v11 = 1;
  }
  else
  {
    v16 = 0LL;
    v10 = (__int64 *)&v15;
    v11 = 2;
    v9 = 0LL;
  }
  *(_QWORD *)(a1 + 384) = v9;
  *(_QWORD *)(a1 + 392) = v10[1];
  *v10 = 0LL;
  v10[1] = 0LL;
  if ( (v11 & 2) != 0 )
  {
    v11 &= ~2u;
    if ( v16 )
      sub_180010530(v16);
  }
  if ( (v11 & 1) != 0 && v18 )
    sub_180010530(v18);
  *(_BYTE *)(a1 + 400) = 0;
  *(_QWORD *)(a1 + 408) = 1LL;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  sub_18002B1A4((_QWORD *)(a1 + 440), *a3);
  sub_18002B228((_QWORD *)(a1 + 456));
  sub_18002B310((__int64 *)(a1 + 472));
  *(_QWORD *)(a1 + 480) = 1LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 272) = 0x8000000000000000uLL;
  *(_QWORD *)(a1 + 280) = 0x8000000000000000uLL;
  *(_QWORD *)(a1 + 288) = 0LL;
  sub_18002CA80(a1, 0LL, 21LL);
  sub_18002CA80(a1, 1LL, 21LL);
  sub_18002CA80(a1, 2LL, 16LL);
  v12 = a3[1];
  if ( v12 )
    sub_180010530(v12);
  v13 = a4[1];
  if ( v13 )
    sub_180010530(v13);
  return a1;
}
