/*
 * XREFs of sub_1800C4398 @ 0x1800C4398
 * Callers:
 *     sub_1800C4BC0 @ 0x1800C4BC0 (sub_1800C4BC0.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_180028004 @ 0x180028004 (sub_180028004.c)
 */

__int64 __fastcall sub_1800C4398(__int64 a1)
{
  int v2; // eax

  *(_QWORD *)a1 = &Spectre::Engine::D3D11::RenderDeviceD3D11::`vftable';
  v2 = sub_180026650(a1);
  sub_18001DB68(&stru_1801C84C8, 3, "RenderDeviceD3D11 destructor -- RenderDeviceID=%d", v2);
  sub_18001DB68(&stru_1801C84C8, 3, "-------------------------------------------------");
  sub_18000E72C((__int64 *)(a1 + 4640));
  sub_180013348(a1 + 4600);
  sub_18000E72C((__int64 *)(a1 + 4280));
  sub_18000E72C((__int64 *)(a1 + 4272));
  sub_18000E72C((__int64 *)(a1 + 4264));
  sub_18000E72C((__int64 *)(a1 + 4256));
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 4168));
  sub_180028004((void **)(a1 + 4152));
  sub_180028004((void **)(a1 + 4136));
  return sub_180025C20((_QWORD *)a1);
}
