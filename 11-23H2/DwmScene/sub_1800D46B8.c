/*
 * XREFs of sub_1800D46B8 @ 0x1800D46B8
 * Callers:
 *     sub_1800D46F0 @ 0x1800D46F0 (sub_1800D46F0.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 */

__int64 __fastcall sub_1800D46B8(_QWORD *a1)
{
  *a1 = &Spectre::Engine::D3D11::VertexShaderD3D11::`vftable';
  sub_18000E72C(a1 + 13);
  return sub_18008AB08((__int64)a1);
}
