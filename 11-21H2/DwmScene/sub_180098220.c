/*
 * XREFs of sub_180098220 @ 0x180098220
 * Callers:
 *     sub_18004DB00 @ 0x18004DB00 (sub_18004DB00.c)
 * Callees:
 *     sub_1800969E4 @ 0x1800969E4 (sub_1800969E4.c)
 */

__int64 *__fastcall sub_180098220(__int64 *a1)
{
  sub_1800969E4(a1, 8, 6);
  *a1 = (__int64)&Spectre::Engine::IndexBuffer::`vftable';
  return a1;
}
