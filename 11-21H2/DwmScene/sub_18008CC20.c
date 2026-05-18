/*
 * XREFs of sub_18008CC20 @ 0x18008CC20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18008CBE4 @ 0x18008CBE4 (sub_18008CBE4.c)
 */

_QWORD *__fastcall sub_18008CC20(_QWORD *lpMem, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_18008CBE4(lpMem, a2);
  if ( (v2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
