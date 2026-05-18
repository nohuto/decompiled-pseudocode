/*
 * XREFs of sub_180029AD8 @ 0x180029AD8
 * Callers:
 *     sub_1800E1F18 @ 0x1800E1F18 (sub_1800E1F18.c)
 * Callees:
 *     sub_18002B240 @ 0x18002B240 (sub_18002B240.c)
 */

_QWORD *__fastcall sub_180029AD8(_QWORD *a1)
{
  sub_18002B240(a1, 10LL, 3LL);
  *a1 = &Spectre::Engine::DeviceFrameBuffer::`vftable';
  a1[12] = 0LL;
  a1[13] = 0LL;
  a1[14] = 0LL;
  a1[15] = 0LL;
  return a1;
}
