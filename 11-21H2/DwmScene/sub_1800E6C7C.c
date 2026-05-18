/*
 * XREFs of sub_1800E6C7C @ 0x1800E6C7C
 * Callers:
 *     sub_1800D8694 @ 0x1800D8694 (sub_1800D8694.c)
 * Callees:
 *     sub_18003D138 @ 0x18003D138 (sub_18003D138.c)
 */

_QWORD *__fastcall sub_1800E6C7C(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_18003D138((__int64)a1);
  *a1 = &Spectre::Engine::D3D11::CommandListD3D11::`vftable';
  result = a1;
  a1[18] = 0LL;
  a1[19] = 0LL;
  return result;
}
