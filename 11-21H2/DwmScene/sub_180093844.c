/*
 * XREFs of sub_180093844 @ 0x180093844
 * Callers:
 *     sub_18008A6B0 @ 0x18008A6B0 (sub_18008A6B0.c)
 *     sub_18008DE00 @ 0x18008DE00 (sub_18008DE00.c)
 * Callees:
 *     sub_1800904EC @ 0x1800904EC (sub_1800904EC.c)
 */

__int64 __fastcall sub_180093844(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int16 v5; // ax

  v5 = sub_1800904EC(*(_QWORD *)(a1 + 16), a2);
  return sub_18009387C(a1, v5, a3);
}
