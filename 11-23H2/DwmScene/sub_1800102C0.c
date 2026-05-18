/*
 * XREFs of sub_1800102C0 @ 0x1800102C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 */

_DWORD *__fastcall sub_1800102C0(_DWORD *a1, char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    sub_18000B988(a1);
  return a1;
}
