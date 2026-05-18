/*
 * XREFs of sub_1800D492C @ 0x1800D492C
 * Callers:
 *     sub_1800C81B0 @ 0x1800C81B0 (sub_1800C81B0.c)
 * Callees:
 *     sub_180054464 @ 0x180054464 (sub_180054464.c)
 */

_QWORD *__fastcall sub_1800D492C(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_180054464(a1);
  *a1 = &Spectre::Engine::D3D11::SamplerD3D11::`vftable';
  result = a1;
  a1[23] = 0LL;
  return result;
}
