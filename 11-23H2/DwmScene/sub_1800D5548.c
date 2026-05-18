/*
 * XREFs of sub_1800D5548 @ 0x1800D5548
 * Callers:
 *     sub_1800D5580 @ 0x1800D5580 (sub_1800D5580.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 */

__int64 __fastcall sub_1800D5548(_QWORD *a1)
{
  *a1 = &Spectre::Engine::D3D11::PixelShaderD3D11::`vftable';
  sub_18000E72C(a1 + 13);
  return sub_18008A99C(a1);
}
