/*
 * XREFs of sub_1800CB660 @ 0x1800CB660
 * Callers:
 *     sub_1800C82D0 @ 0x1800C82D0 (sub_1800C82D0.c)
 * Callees:
 *     sub_180027E48 @ 0x180027E48 (sub_180027E48.c)
 */

_QWORD *__fastcall sub_1800CB660(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_180027E48(a1);
  *a1 = &Spectre::Engine::D3D11::RenderTargetD3D11::`vftable';
  result = a1;
  a1[16] = 0LL;
  return result;
}
