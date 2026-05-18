/*
 * XREFs of sub_180085A64 @ 0x180085A64
 * Callers:
 *     sub_180044B1C @ 0x180044B1C (sub_180044B1C.c)
 *     sub_180050854 @ 0x180050854 (sub_180050854.c)
 *     sub_180069D30 @ 0x180069D30 (sub_180069D30.c)
 *     sub_18006ADDC @ 0x18006ADDC (sub_18006ADDC.c)
 *     sub_18006BEB0 @ 0x18006BEB0 (sub_18006BEB0.c)
 *     sub_18007E000 @ 0x18007E000 (sub_18007E000.c)
 * Callees:
 *     sub_180082D18 @ 0x180082D18 (sub_180082D18.c)
 */

_QWORD *__fastcall sub_180085A64(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int16 v5; // ax

  v5 = sub_180082D18(*(_QWORD *)(a1 + 16), a2);
  return sub_180085A9C(a1, v5, a3);
}
