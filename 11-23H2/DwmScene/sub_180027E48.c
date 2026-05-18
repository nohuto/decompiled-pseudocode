/*
 * XREFs of sub_180027E48 @ 0x180027E48
 * Callers:
 *     sub_1800CB660 @ 0x1800CB660 (sub_1800CB660.c)
 * Callees:
 *     sub_180029178 @ 0x180029178 (sub_180029178.c)
 */

_QWORD *__fastcall sub_180027E48(_QWORD *a1)
{
  sub_180029178(a1, 10LL, 3LL);
  *a1 = &Spectre::Engine::DeviceFrameBuffer::`vftable';
  a1[12] = 0LL;
  a1[13] = 0LL;
  a1[14] = 0LL;
  a1[15] = 0LL;
  return a1;
}
