/*
 * XREFs of sub_18007BFF0 @ 0x18007BFF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18007BF60 @ 0x18007BF60 (sub_18007BF60.c)
 */

_QWORD *__fastcall sub_18007BFF0(_QWORD *lpMem, char a2)
{
  sub_18007BF60(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
