/*
 * XREFs of sub_1800D374C @ 0x1800D374C
 * Callers:
 *     sub_1800C4C00 @ 0x1800C4C00 (sub_1800C4C00.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 */

__int64 __fastcall sub_1800D374C(_QWORD *a1)
{
  *a1 = &Spectre::Engine::D3D11::VertexBufferD3D11::`vftable';
  sub_18000E72C(a1 + 13);
  *a1 = &Spectre::Engine::DeviceVertexBuffer::`vftable';
  return sub_18008B448(a1);
}
