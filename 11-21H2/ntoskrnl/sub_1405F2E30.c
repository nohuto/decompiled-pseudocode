/*
 * XREFs of sub_1405F2E30 @ 0x1405F2E30
 * Callers:
 *     sub_1405F2C80 @ 0x1405F2C80 (sub_1405F2C80.c)
 *     sub_1405F2CDC @ 0x1405F2CDC (sub_1405F2CDC.c)
 * Callees:
 *     sub_14042B770 @ 0x14042B770 (sub_14042B770.c)
 *     sub_14042B780 @ 0x14042B780 (sub_14042B780.c)
 */

void sub_1405F2E30()
{
  if ( byte_140D04924 )
    sub_14042B770();
  else
    sub_14042B780();
}
