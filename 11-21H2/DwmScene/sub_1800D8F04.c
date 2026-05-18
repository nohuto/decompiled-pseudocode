/*
 * XREFs of sub_1800D8F04 @ 0x1800D8F04
 * Callers:
 *     sub_180016778 @ 0x180016778 (sub_180016778.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 *     sub_180027068 @ 0x180027068 (sub_180027068.c)
 *     sub_180028544 @ 0x180028544 (sub_180028544.c)
 *     sub_180059BB8 @ 0x180059BB8 (sub_180059BB8.c)
 *     sub_1800DC2D0 @ 0x1800DC2D0 (sub_1800DC2D0.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall sub_1800D8F04(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r8
  _QWORD v15[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v16; // [rsp+78h] [rbp+48h] BYREF

  v15[0] = *a3;
  v15[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  sub_180027068(a1, a2, v15);
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::RenderDeviceD3D11::`vftable';
  v16 = (__int64 *)(a1 + 4136);
  *(_QWORD *)(a1 + 4136) = 0LL;
  *(_QWORD *)(a1 + 4144) = 0LL;
  v16 = (__int64 *)sub_180011088(0x28uLL);
  sub_18001DE8C(v16, (__int64 *)&v16);
  sub_18001DE8C((__int64 *)(v5 + 8), (__int64 *)&v16);
  sub_18001DE8C((__int64 *)(v6 + 16), (__int64 *)&v16);
  *(_WORD *)(v7 + 24) = 257;
  *(_QWORD *)(a1 + 4136) = v7;
  v16 = (__int64 *)(a1 + 4152);
  *(_QWORD *)(a1 + 4152) = 0LL;
  *(_QWORD *)(a1 + 4160) = 0LL;
  v16 = (__int64 *)sub_180011088(0x28uLL);
  sub_18001DE8C(v16, (__int64 *)&v16);
  sub_18001DE8C((__int64 *)(v8 + 8), (__int64 *)&v16);
  sub_18001DE8C((__int64 *)(v9 + 16), (__int64 *)&v16);
  *(_WORD *)(v10 + 24) = 257;
  *(_QWORD *)(a1 + 4152) = v10;
  Mtx_init_in_situ((_Mtx_t)(a1 + 4168), 2);
  *(_QWORD *)(a1 + 4248) = 6LL;
  *(_QWORD *)(a1 + 4256) = 0LL;
  *(_QWORD *)(a1 + 4264) = 0LL;
  *(_QWORD *)(a1 + 4272) = 0LL;
  *(_QWORD *)(a1 + 4280) = 0LL;
  *(_QWORD *)(a1 + 4616) = 0LL;
  *(_QWORD *)(a1 + 4624) = 7LL;
  *(_WORD *)(a1 + 4600) = 0;
  *(_QWORD *)(a1 + 4640) = 0LL;
  sub_18001F2B4(&stru_1801EA4C8, 3, "-------------------------------------------------");
  v11 = sub_180028544(a1);
  sub_18001F2B4(&stru_1801EA4C8, 3, "RenderDeviceD3D11 constructor -- RenderDeviceID=%d", v11);
  sub_180059BB8((__int64 *)(a1 + 112), L"RenderDeviceD3D11", v12);
  sub_180059BB8((__int64 *)(a1 + 80), L"<detached>", v13);
  *(_QWORD *)(a1 + 4288) = 0LL;
  sub_1800DC2D0(a1);
  sub_180010910((__int64)a3);
  return a1;
}
