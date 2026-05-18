/*
 * XREFs of sub_180017C9C @ 0x180017C9C
 * Callers:
 *     sub_180017CC8 @ 0x180017CC8 (sub_180017CC8.c)
 *     sub_180050870 @ 0x180050870 (sub_180050870.c)
 *     sub_18007E900 @ 0x18007E900 (sub_18007E900.c)
 *     sub_18007F430 @ 0x18007F430 (sub_18007F430.c)
 *     sub_18007F820 @ 0x18007F820 (sub_18007F820.c)
 *     sub_1800808B0 @ 0x1800808B0 (sub_1800808B0.c)
 *     sub_18009AA00 @ 0x18009AA00 (sub_18009AA00.c)
 * Callees:
 *     sub_180016C68 @ 0x180016C68 (sub_180016C68.c)
 */

_QWORD *__fastcall sub_180017C9C(_QWORD *a1, __int64 a2)
{
  if ( a1 != (_QWORD *)a2 )
    sub_180016C68(a1, *(void **)a2, *(_QWORD *)(a2 + 8));
  return a1;
}
