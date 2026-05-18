/*
 * XREFs of sub_180097BA0 @ 0x180097BA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180097B40 @ 0x180097B40 (sub_180097B40.c)
 */

_QWORD *__fastcall sub_180097BA0(_QWORD *lpMem, char a2)
{
  sub_180097B40(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
