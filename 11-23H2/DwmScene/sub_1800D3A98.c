/*
 * XREFs of sub_1800D3A98 @ 0x1800D3A98
 * Callers:
 *     sub_1800C4C40 @ 0x1800C4C40 (sub_1800C4C40.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 */

__int64 __fastcall sub_1800D3A98(_QWORD *a1)
{
  *a1 = &Spectre::Engine::D3D11::VertexLayoutD3D11::`vftable';
  sub_18000E72C(a1 + 18);
  return sub_18008BE0C(a1);
}
