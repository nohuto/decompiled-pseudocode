/*
 * XREFs of sub_1800AFB80 @ 0x1800AFB80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800AFAEC @ 0x1800AFAEC (sub_1800AFAEC.c)
 */

_QWORD *__fastcall sub_1800AFB80(_QWORD *lpMem, char a2)
{
  sub_1800AFAEC(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
