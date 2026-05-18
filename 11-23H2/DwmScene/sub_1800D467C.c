/*
 * XREFs of sub_1800D467C @ 0x1800D467C
 * Callers:
 *     sub_1800C7E10 @ 0x1800C7E10 (sub_1800C7E10.c)
 * Callees:
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_18008A7DC @ 0x18008A7DC (sub_18008A7DC.c)
 */

_QWORD *__fastcall sub_1800D467C(_QWORD *a1)
{
  _QWORD *result; // rax

  memset(a1, 0, 0x68uLL);
  sub_18008A7DC((__int64)a1);
  *a1 = &Spectre::Engine::D3D11::VertexShaderD3D11::`vftable';
  result = a1;
  a1[13] = 0LL;
  return result;
}
