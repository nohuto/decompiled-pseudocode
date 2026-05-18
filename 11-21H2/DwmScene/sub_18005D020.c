/*
 * XREFs of sub_18005D020 @ 0x18005D020
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

_QWORD *__fastcall sub_18005D020(_QWORD *lpMem, char a2)
{
  char *v4; // rcx

  v4 = (char *)lpMem[3];
  if ( v4 )
  {
    sub_180010884(v4, (lpMem[5] - (_QWORD)v4) & 0xFFFFFFFFFFFFFFE0uLL);
    lpMem[3] = 0LL;
    lpMem[4] = 0LL;
    lpMem[5] = 0LL;
  }
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
