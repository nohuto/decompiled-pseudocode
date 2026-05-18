/*
 * XREFs of sub_1800EFEC8 @ 0x1800EFEC8
 * Callers:
 *     sub_1800D86C4 @ 0x1800D86C4 (sub_1800D86C4.c)
 * Callees:
 *     sub_180099174 @ 0x180099174 (sub_180099174.c)
 */

_QWORD *__fastcall sub_1800EFEC8(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_180099174((__int64)a1);
  *a1 = &Spectre::Engine::D3D11::DomainShaderD3D11::`vftable';
  result = a1;
  a1[13] = 0LL;
  return result;
}
