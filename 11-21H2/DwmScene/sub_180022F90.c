/*
 * XREFs of sub_180022F90 @ 0x180022F90
 * Callers:
 *     sub_180022AD4 @ 0x180022AD4 (sub_180022AD4.c)
 *     sub_180025B00 @ 0x180025B00 (sub_180025B00.c)
 *     sub_180097128 @ 0x180097128 (sub_180097128.c)
 *     sub_1800FD588 @ 0x1800FD588 (sub_1800FD588.c)
 *     sub_1800FD950 @ 0x1800FD950 (sub_1800FD950.c)
 *     sub_1800FDE78 @ 0x1800FDE78 (sub_1800FDE78.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180022F90(_QWORD *a1)
{
  a1[1] = "bad allocation";
  *a1 = &stdext::bad_alloc::`vftable';
  return a1;
}
