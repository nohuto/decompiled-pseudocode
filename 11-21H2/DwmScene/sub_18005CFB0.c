/*
 * XREFs of sub_18005CFB0 @ 0x18005CFB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18001D6B8 @ 0x18001D6B8 (sub_18001D6B8.c)
 */

_QWORD *__fastcall sub_18005CFB0(_QWORD *lpMem, char a2)
{
  void *v4; // rcx
  char *v5; // rcx

  v4 = (void *)lpMem[7];
  if ( v4 )
    sub_18001D6B8(v4);
  v5 = (char *)lpMem[3];
  if ( v5 )
  {
    sub_180010884(v5, (lpMem[5] - (_QWORD)v5) & 0xFFFFFFFFFFFFFFE0uLL);
    lpMem[3] = 0LL;
    lpMem[4] = 0LL;
    lpMem[5] = 0LL;
  }
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
