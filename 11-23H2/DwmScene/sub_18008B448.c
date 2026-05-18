/*
 * XREFs of sub_18008B448 @ 0x18008B448
 * Callers:
 *     sub_180052D90 @ 0x180052D90 (sub_180052D90.c)
 *     sub_180052DE0 @ 0x180052DE0 (sub_180052DE0.c)
 *     sub_1800C4370 @ 0x1800C4370 (sub_1800C4370.c)
 *     sub_1800D374C @ 0x1800D374C (sub_1800D374C.c)
 * Callees:
 *     sub_1800888BC @ 0x1800888BC (sub_1800888BC.c)
 */

__int64 __fastcall sub_18008B448(_QWORD *a1)
{
  *a1 = &Spectre::Engine::DeviceArrayBuffer::`vftable';
  sub_1800888BC(a1 + 12);
  return sub_1800280AC((__int64)a1);
}
