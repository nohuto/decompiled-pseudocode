/*
 * XREFs of sub_18002BE2C @ 0x18002BE2C
 * Callers:
 *     sub_18002BCE8 @ 0x18002BCE8 (sub_18002BCE8.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall sub_18002BE2C(_OWORD *a1, _OWORD *a2, _OWORD *a3)
{
  while ( a1 != a2 )
    *a3++ = *a1++;
  return a3;
}
