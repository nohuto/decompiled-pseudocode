/*
 * XREFs of sub_1800E1F18 @ 0x1800E1F18
 * Callers:
 *     sub_1800D8988 @ 0x1800D8988 (sub_1800D8988.c)
 * Callees:
 *     sub_180029AD8 @ 0x180029AD8 (sub_180029AD8.c)
 */

_QWORD *__fastcall sub_1800E1F18(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_180029AD8(a1);
  *a1 = &Spectre::Engine::D3D11::RenderTargetD3D11::`vftable';
  result = a1;
  a1[16] = 0LL;
  return result;
}
