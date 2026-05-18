/*
 * XREFs of sub_180085458 @ 0x180085458
 * Callers:
 *     sub_1800446B0 @ 0x1800446B0 (sub_1800446B0.c)
 *     sub_180050788 @ 0x180050788 (sub_180050788.c)
 *     sub_18006AC60 @ 0x18006AC60 (sub_18006AC60.c)
 * Callees:
 *     sub_180082D18 @ 0x180082D18 (sub_180082D18.c)
 */

_QWORD *__fastcall sub_180085458(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int16 v5; // ax

  v5 = sub_180082D18(*(_QWORD *)(a1 + 16), a2);
  return sub_180085490(a1, v5, a3);
}
