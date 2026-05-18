/*
 * XREFs of sub_1800FB050 @ 0x1800FB050
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18001E060 @ 0x18001E060 (sub_18001E060.c)
 */

char *__fastcall sub_1800FB050(char *lpMem, char a2)
{
  char **v2; // rbx

  v2 = (char **)(lpMem + 96);
  sub_18001E060((__int64)(lpMem + 96), (__int64)(lpMem + 96), *(char **)(*((_QWORD *)lpMem + 12) + 8LL));
  sub_180010884(*v2, 0x68uLL);
  _Mtx_destroy_in_situ((_Mtx_t)(lpMem + 8));
  *(_QWORD *)lpMem = &Spectre::Utils::ICancellationToken::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
