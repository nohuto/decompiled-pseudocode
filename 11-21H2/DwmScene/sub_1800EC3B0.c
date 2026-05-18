/*
 * XREFs of sub_1800EC3B0 @ 0x1800EC3B0
 * Callers:
 *     sub_1800D8994 @ 0x1800D8994 (sub_1800D8994.c)
 * Callees:
 *     sub_18005BB68 @ 0x18005BB68 (sub_18005BB68.c)
 */

_QWORD *__fastcall sub_1800EC3B0(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_18005BB68(a1);
  *a1 = &Spectre::Engine::D3D11::SamplerD3D11::`vftable';
  result = a1;
  a1[23] = 0LL;
  return result;
}
