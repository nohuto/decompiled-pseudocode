/*
 * XREFs of sub_1800ED260 @ 0x1800ED260
 * Callers:
 *     sub_1800D872C @ 0x1800D872C (sub_1800D872C.c)
 * Callees:
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_180099174 @ 0x180099174 (sub_180099174.c)
 */

_QWORD *__fastcall sub_1800ED260(_QWORD *a1)
{
  _QWORD *result; // rax

  memset(a1, 0, 0x68uLL);
  sub_180099174((__int64)a1);
  *a1 = &Spectre::Engine::D3D11::PixelShaderD3D11::`vftable';
  result = a1;
  a1[13] = 0LL;
  return result;
}
