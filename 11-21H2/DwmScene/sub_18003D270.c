/*
 * XREFs of sub_18003D270 @ 0x18003D270
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18003D188 @ 0x18003D188 (sub_18003D188.c)
 */

_QWORD *__fastcall sub_18003D270(_QWORD *lpMem, char a2)
{
  sub_18003D188(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
