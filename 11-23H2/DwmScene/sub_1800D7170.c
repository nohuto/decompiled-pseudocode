/*
 * XREFs of sub_1800D7170 @ 0x1800D7170
 * Callers:
 *     sub_1800D71B0 @ 0x1800D71B0 (sub_1800D71B0.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 */

__int64 __fastcall sub_1800D7170(_QWORD *a1)
{
  *a1 = &Spectre::Engine::D3D11::ConstantBufferD3D11::`vftable';
  sub_18000E72C(a1 + 15);
  return sub_18009BCA0(a1);
}
