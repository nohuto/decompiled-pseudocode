/*
 * XREFs of sub_1800997B0 @ 0x1800997B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180099468 @ 0x180099468 (sub_180099468.c)
 */

_QWORD *__fastcall sub_1800997B0(_QWORD *lpMem, char a2)
{
  sub_180099468(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
