/*
 * XREFs of sub_1800CFABC @ 0x1800CFABC
 * Callers:
 *     sub_1800C7B90 @ 0x1800C7B90 (sub_1800C7B90.c)
 * Callees:
 *     sub_18003906C @ 0x18003906C (sub_18003906C.c)
 */

_QWORD *__fastcall sub_1800CFABC(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_18003906C((__int64)a1);
  *a1 = &Spectre::Engine::D3D11::CommandListD3D11::`vftable';
  result = a1;
  a1[18] = 0LL;
  a1[19] = 0LL;
  return result;
}
