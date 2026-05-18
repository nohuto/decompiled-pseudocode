/*
 * XREFs of sub_1800FEB1C @ 0x1800FEB1C
 * Callers:
 *     sub_1800FD588 @ 0x1800FD588 (sub_1800FD588.c)
 *     sub_1800FD950 @ 0x1800FD950 (sub_1800FD950.c)
 *     sub_1800FDE78 @ 0x1800FDE78 (sub_1800FDE78.c)
 * Callees:
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 */

char __fastcall sub_1800FEB1C(unsigned int a1, const char *a2)
{
  if ( a1 > 0x4000000 )
  {
    sub_18001F2B4(&stru_1801EA648, 3, "%s cannot process more than %u vertices (requested: %u)", a2, 0x4000000, a1);
    return 0;
  }
  if ( !a1 )
  {
    sub_18001F2B4(&stru_1801EA648, 3, "%s cannot process zero vertices", a2);
    return 0;
  }
  return 1;
}
