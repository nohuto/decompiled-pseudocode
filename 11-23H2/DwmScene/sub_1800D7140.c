/*
 * XREFs of sub_1800D7140 @ 0x1800D7140
 * Callers:
 *     sub_1800C7F90 @ 0x1800C7F90 (sub_1800C7F90.c)
 * Callees:
 *     sub_18008B6F8 @ 0x18008B6F8 (sub_18008B6F8.c)
 */

_QWORD *__fastcall sub_1800D7140(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_18008B6F8((__int64)a1);
  *a1 = &Spectre::Engine::D3D11::ConstantBufferD3D11::`vftable';
  result = a1;
  a1[15] = 0LL;
  return result;
}
