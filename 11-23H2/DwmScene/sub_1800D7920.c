/*
 * XREFs of sub_1800D7920 @ 0x1800D7920
 * Callers:
 *     sub_1800C8090 @ 0x1800C8090 (sub_1800C8090.c)
 * Callees:
 *     sub_18008A7DC @ 0x18008A7DC (sub_18008A7DC.c)
 */

_QWORD *__fastcall sub_1800D7920(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_18008A7DC((__int64)a1);
  *a1 = &Spectre::Engine::D3D11::HullShaderD3D11::`vftable';
  result = a1;
  a1[13] = 0LL;
  return result;
}
