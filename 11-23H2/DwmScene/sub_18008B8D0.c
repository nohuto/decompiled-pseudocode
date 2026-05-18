/*
 * XREFs of sub_18008B8D0 @ 0x18008B8D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18008B880 @ 0x18008B880 (sub_18008B880.c)
 */

_QWORD *__fastcall sub_18008B8D0(_QWORD *lpMem, char a2)
{
  sub_18008B880(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
