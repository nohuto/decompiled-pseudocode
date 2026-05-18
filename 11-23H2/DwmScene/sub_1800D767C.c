/*
 * XREFs of sub_1800D767C @ 0x1800D767C
 * Callers:
 *     sub_1800C7C10 @ 0x1800C7C10 (sub_1800C7C10.c)
 * Callees:
 *     sub_18008A7DC @ 0x18008A7DC (sub_18008A7DC.c)
 */

_QWORD *__fastcall sub_1800D767C(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_18008A7DC((__int64)a1);
  *a1 = &Spectre::Engine::D3D11::DomainShaderD3D11::`vftable';
  result = a1;
  a1[13] = 0LL;
  return result;
}
