/*
 * XREFs of sub_1800EC79C @ 0x1800EC79C
 * Callers:
 *     sub_1800D897C @ 0x1800D897C (sub_1800D897C.c)
 * Callees:
 *     sub_18002B268 @ 0x18002B268 (sub_18002B268.c)
 */

_QWORD *__fastcall sub_1800EC79C(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_18002B268((__int64)a1);
  *a1 = &Spectre::Engine::D3D11::RenderStateD3D11::`vftable';
  result = a1;
  a1[12] = 0LL;
  a1[13] = 0LL;
  a1[14] = 0LL;
  a1[15] = 0LL;
  a1[16] = 0LL;
  return result;
}
