/*
 * XREFs of sub_1800EB380 @ 0x1800EB380
 * Callers:
 *     sub_1800D89E4 @ 0x1800D89E4 (sub_1800D89E4.c)
 * Callees:
 *     sub_18009AB04 @ 0x18009AB04 (sub_18009AB04.c)
 */

_QWORD *__fastcall sub_1800EB380(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_18009AB04(a1);
  *a1 = &Spectre::Engine::D3D11::VertexLayoutD3D11::`vftable';
  result = a1;
  a1[18] = 0LL;
  return result;
}
