/*
 * XREFs of sub_1800A56E4 @ 0x1800A56E4
 * Callers:
 *     sub_1800A4C74 @ 0x1800A4C74 (sub_1800A4C74.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall sub_1800A56E4(_OWORD *a1, _OWORD *a2, _OWORD *a3)
{
  while ( a1 != a2 )
    *a3++ = *a1++;
  return a3;
}
