/*
 * XREFs of sub_180088DC8 @ 0x180088DC8
 * Callers:
 *     sub_180088A5C @ 0x180088A5C (sub_180088A5C.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall sub_180088DC8(_OWORD *a1, _OWORD *a2, _OWORD *a3)
{
  while ( a1 != a2 )
    *a3++ = *a1++;
  return a3;
}
