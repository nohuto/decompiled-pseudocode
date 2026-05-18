/*
 * XREFs of sub_180048FF0 @ 0x180048FF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180048C70 @ 0x180048C70 (sub_180048C70.c)
 */

_QWORD *__fastcall sub_180048FF0(_QWORD *lpMem, char a2)
{
  sub_180048C70(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
