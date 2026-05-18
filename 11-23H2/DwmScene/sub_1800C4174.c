/*
 * XREFs of sub_1800C4174 @ 0x1800C4174
 * Callers:
 *     sub_180015AE0 @ 0x180015AE0 (sub_180015AE0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 *     sub_18001E768 @ 0x18001E768 (sub_18001E768.c)
 *     sub_180025598 @ 0x180025598 (sub_180025598.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_180029054 @ 0x180029054 (sub_180029054.c)
 *     sub_1800C6BF0 @ 0x1800C6BF0 (sub_1800C6BF0.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall sub_1800C4174(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v12[0] = *a3;
  v12[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  sub_180025598(a1, a2, v12);
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::RenderDeviceD3D11::`vftable';
  *(_QWORD *)(a1 + 4136) = 0LL;
  *(_QWORD *)(a1 + 4144) = 0LL;
  v5 = sub_180029054(1uLL);
  v6 = sub_18001090C(v5);
  *(_QWORD *)v6 = v6;
  *(_QWORD *)(v6 + 8) = v6;
  *(_QWORD *)(v6 + 16) = v6;
  *(_WORD *)(v6 + 24) = 257;
  *(_QWORD *)(a1 + 4136) = v6;
  *(_QWORD *)(a1 + 4152) = 0LL;
  *(_QWORD *)(a1 + 4160) = 0LL;
  v7 = sub_180029054(1uLL);
  v8 = sub_18001090C(v7);
  *(_QWORD *)v8 = v8;
  *(_QWORD *)(v8 + 8) = v8;
  *(_QWORD *)(v8 + 16) = v8;
  *(_WORD *)(v8 + 24) = 257;
  *(_QWORD *)(a1 + 4152) = v8;
  Mtx_init_in_situ((_Mtx_t)(a1 + 4168), 2);
  *(_QWORD *)(a1 + 4248) = 6LL;
  *(_QWORD *)(a1 + 4256) = 0LL;
  *(_QWORD *)(a1 + 4264) = 0LL;
  *(_QWORD *)(a1 + 4272) = 0LL;
  *(_QWORD *)(a1 + 4280) = 0LL;
  *(_QWORD *)(a1 + 4600) = 0LL;
  *(_QWORD *)(a1 + 4616) = 0LL;
  *(_QWORD *)(a1 + 4624) = 7LL;
  *(_WORD *)(a1 + 4600) = 0;
  *(_QWORD *)(a1 + 4640) = 0LL;
  sub_18001DB68(&stru_1801C84C8, 3, "-------------------------------------------------");
  v9 = sub_180026650(a1);
  sub_18001DB68(&stru_1801C84C8, 3, "RenderDeviceD3D11 constructor -- RenderDeviceID=%d", v9);
  sub_18001E768((char *)(a1 + 112), L"RenderDeviceD3D11", 0x11uLL);
  sub_18001E768((char *)(a1 + 80), L"<detached>", 0xAuLL);
  *(_QWORD *)(a1 + 4288) = 0LL;
  sub_1800C6BF0(a1);
  v10 = a3[1];
  if ( v10 )
    sub_180010530(v10);
  return a1;
}
