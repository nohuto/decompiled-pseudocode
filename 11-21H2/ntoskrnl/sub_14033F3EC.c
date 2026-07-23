/*
 * XREFs of sub_14033F3EC @ 0x14033F3EC
 * Callers:
 *     sub_14033D860 @ 0x14033D860 (sub_14033D860.c)
 *     sub_14033EF50 @ 0x14033EF50 (sub_14033EF50.c)
 *     sub_140367190 @ 0x140367190 (sub_140367190.c)
 *     sub_1405A9744 @ 0x1405A9744 (sub_1405A9744.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_14033F3EC(__int64 a1, __int64 a2)
{
  return (a2 & 0x40) == 0 && (a1 & 0x40) != 0 || (a2 & 2) == 0 && (a1 & 2) != 0 || a2 < 0 && a1 >= 0;
}
