/*
 * XREFs of sub_1800D7400 @ 0x1800D7400
 * Callers:
 *     sub_1800D7440 @ 0x1800D7440 (sub_1800D7440.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 */

__int64 __fastcall sub_1800D7400(_QWORD *a1)
{
  *a1 = &Spectre::Engine::D3D11::GeometryShaderD3D11::`vftable';
  sub_18000E72C(a1 + 13);
  return sub_18008A96C(a1);
}
