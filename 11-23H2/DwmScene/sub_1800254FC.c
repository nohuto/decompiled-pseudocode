/*
 * XREFs of sub_1800254FC @ 0x1800254FC
 * Callers:
 *     sub_180029EA4 @ 0x180029EA4 (sub_180029EA4.c)
 *     sub_18003AF30 @ 0x18003AF30 (sub_18003AF30.c)
 *     sub_180047B2C @ 0x180047B2C (sub_180047B2C.c)
 *     sub_18004ACD4 @ 0x18004ACD4 (sub_18004ACD4.c)
 *     sub_18008A884 @ 0x18008A884 (sub_18008A884.c)
 * Callees:
 *     sub_180017890 @ 0x180017890 (sub_180017890.c)
 */

_QWORD *__fastcall sub_1800254FC(_QWORD *a1, __int64 a2)
{
  sub_180017890((__int64)a1, a2);
  *a1 = &Spectre::Engine::EngineException::`vftable';
  return a1;
}
