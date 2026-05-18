/*
 * XREFs of sub_18008A814 @ 0x18008A814
 * Callers:
 *     sub_1800C7C90 @ 0x1800C7C90 (sub_1800C7C90.c)
 * Callees:
 *     sub_1800291A0 @ 0x1800291A0 (sub_1800291A0.c)
 */

_QWORD *__fastcall sub_18008A814(_QWORD *a1)
{
  sub_1800291A0((__int64)a1);
  *a1 = &Spectre::Engine::DeviceShaderPipeline::`vftable';
  a1[12] = 0LL;
  a1[13] = 0LL;
  a1[14] = 0LL;
  a1[15] = 0LL;
  a1[16] = 0LL;
  a1[17] = 0LL;
  a1[18] = 0LL;
  a1[19] = 0LL;
  a1[20] = 0LL;
  a1[21] = 0LL;
  return a1;
}
