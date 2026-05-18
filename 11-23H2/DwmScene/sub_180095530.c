/*
 * XREFs of sub_180095530 @ 0x180095530
 * Callers:
 *     sub_180094888 @ 0x180094888 (sub_180094888.c)
 *     sub_180094C48 @ 0x180094C48 (sub_180094C48.c)
 *     sub_180094CE4 @ 0x180094CE4 (sub_180094CE4.c)
 *     sub_180094D80 @ 0x180094D80 (sub_180094D80.c)
 *     sub_180094E38 @ 0x180094E38 (sub_180094E38.c)
 *     sub_1800953B8 @ 0x1800953B8 (sub_1800953B8.c)
 *     sub_180095424 @ 0x180095424 (sub_180095424.c)
 *     sub_180095490 @ 0x180095490 (sub_180095490.c)
 *     sub_1800954E0 @ 0x1800954E0 (sub_1800954E0.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall sub_180095530(_OWORD *a1, _OWORD *a2, _OWORD *a3)
{
  while ( a1 != a2 )
    *a3++ = *a1++;
  return a3;
}
