/*
 * XREFs of sub_18009A184 @ 0x18009A184
 * Callers:
 *     sub_1800979FC @ 0x1800979FC (sub_1800979FC.c)
 *     sub_1800981EC @ 0x1800981EC (sub_1800981EC.c)
 * Callees:
 *     sub_18002B240 @ 0x18002B240 (sub_18002B240.c)
 */

_QWORD *__fastcall sub_18009A184(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_18002B240(a1);
  *a1 = &Spectre::Engine::DeviceArrayBuffer::`vftable';
  result = a1;
  a1[12] = 0LL;
  return result;
}
