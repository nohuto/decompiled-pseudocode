/*
 * XREFs of sub_18007A010 @ 0x18007A010
 * Callers:
 *     sub_18009B6C8 @ 0x18009B6C8 (sub_18009B6C8.c)
 *     sub_1800ED6DC @ 0x1800ED6DC (sub_1800ED6DC.c)
 * Callees:
 *     sub_18002B240 @ 0x18002B240 (sub_18002B240.c)
 */

_QWORD *__fastcall sub_18007A010(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_18002B240(a1);
  *a1 = &Spectre::Engine::DeviceDepthBuffer::`vftable';
  result = a1;
  a1[12] = 0LL;
  a1[13] = 0LL;
  return result;
}
