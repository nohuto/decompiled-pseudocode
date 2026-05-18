/*
 * XREFs of sub_180094030 @ 0x180094030
 * Callers:
 *     sub_180093E70 @ 0x180093E70 (sub_180093E70.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall sub_180094030(_OWORD *a1, _OWORD *a2, _OWORD *a3)
{
  while ( a1 != a2 )
    *a3++ = *a1++;
  return a3;
}
