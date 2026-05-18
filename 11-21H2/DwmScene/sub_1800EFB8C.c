/*
 * XREFs of sub_1800EFB8C @ 0x1800EFB8C
 * Callers:
 *     sub_1800D86D0 @ 0x1800D86D0 (sub_1800D86D0.c)
 * Callees:
 *     sub_180099174 @ 0x180099174 (sub_180099174.c)
 */

_QWORD *__fastcall sub_1800EFB8C(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_180099174((__int64)a1);
  *a1 = &Spectre::Engine::D3D11::GeometryShaderD3D11::`vftable';
  result = a1;
  a1[13] = 0LL;
  return result;
}
