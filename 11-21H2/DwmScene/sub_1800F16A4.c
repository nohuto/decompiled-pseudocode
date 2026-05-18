/*
 * XREFs of sub_1800F16A4 @ 0x1800F16A4
 * Callers:
 *     sub_1800D8820 @ 0x1800D8820 (sub_1800D8820.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_18002D0B8 @ 0x18002D0B8 (sub_18002D0B8.c)
 */

// Hidden C++ exception states: #wind=7
__int64 sub_1800F16A4(__int64 a1, _OWORD *a2, _QWORD *a3, ...)
{
  __int64 *v3; // r14
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v10[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-38h] BYREF
  _OWORD v12[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 *v13; // [rsp+B8h] [rbp+50h] BYREF
  va_list va; // [rsp+B8h] [rbp+50h]
  va_list va1; // [rsp+C0h] [rbp+58h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v13 = va_arg(va1, __int64 *);
  v3 = v13;
  v10[0] = *v13;
  v10[1] = v13[1];
  *v13 = 0LL;
  v3[1] = 0LL;
  v11[0] = *a3;
  v11[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v12[0] = *a2;
  v12[1] = a2[1];
  sub_18002D0B8(a1, (__int64)v12, v11, v10);
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic::`vftable';
  *(_BYTE *)(a1 + 504) = 0;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  *(_QWORD *)(a1 + 560) = 0LL;
  v13 = (__int64 *)sub_180011088(0x38uLL);
  sub_18001DE8C(v13, (__int64 *)va);
  sub_18001DE8C((__int64 *)(v6 + 8), (__int64 *)va);
  sub_18001DE8C((__int64 *)(v7 + 16), (__int64 *)va);
  *(_WORD *)(v8 + 24) = 257;
  *(_QWORD *)(a1 + 552) = v8;
  sub_180010910((__int64)a3);
  sub_180010910((__int64)v3);
  return a1;
}
