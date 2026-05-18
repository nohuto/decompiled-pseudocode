/*
 * XREFs of sub_18009EB40 @ 0x18009EB40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18009EAF8 @ 0x18009EAF8 (sub_18009EAF8.c)
 */

_QWORD *__fastcall sub_18009EB40(_QWORD *lpMem, char a2)
{
  sub_18009EAF8(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
