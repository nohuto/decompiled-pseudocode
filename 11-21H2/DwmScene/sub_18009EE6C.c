/*
 * XREFs of sub_18009EE6C @ 0x18009EE6C
 * Callers:
 *     sub_18009ED14 @ 0x18009ED14 (sub_18009ED14.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall sub_18009EE6C(_OWORD *a1, _OWORD *a2, _OWORD *a3)
{
  while ( a1 != a2 )
    *a3++ = *a1++;
  return a3;
}
