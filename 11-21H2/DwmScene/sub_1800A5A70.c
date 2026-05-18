/*
 * XREFs of sub_1800A5A70 @ 0x1800A5A70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800A59B8 @ 0x1800A59B8 (sub_1800A59B8.c)
 */

_QWORD *__fastcall sub_1800A5A70(_QWORD *lpMem, char a2)
{
  sub_1800A59B8(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
