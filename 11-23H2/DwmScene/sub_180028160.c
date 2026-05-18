/*
 * XREFs of sub_180028160 @ 0x180028160
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180028068 @ 0x180028068 (sub_180028068.c)
 */

_QWORD *__fastcall sub_180028160(_QWORD *lpMem, char a2)
{
  sub_180028068(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
