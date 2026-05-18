/*
 * XREFs of sub_1800D3A40 @ 0x1800D3A40
 * Callers:
 *     sub_1800C8110 @ 0x1800C8110 (sub_1800C8110.c)
 * Callees:
 *     sub_18008BD24 @ 0x18008BD24 (sub_18008BD24.c)
 */

_QWORD *__fastcall sub_1800D3A40(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_18008BD24(a1);
  *a1 = &Spectre::Engine::D3D11::VertexLayoutD3D11::`vftable';
  result = a1;
  a1[18] = 0LL;
  return result;
}
