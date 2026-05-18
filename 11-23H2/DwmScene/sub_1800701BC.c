/*
 * XREFs of sub_1800701BC @ 0x1800701BC
 * Callers:
 *     sub_180070010 @ 0x180070010 (sub_180070010.c)
 * Callees:
 *     sub_180097690 @ 0x180097690 (sub_180097690.c)
 */

bool __fastcall sub_1800701BC(_QWORD *a1, __int64 a2)
{
  return sub_180097690(a2) == *a1;
}
