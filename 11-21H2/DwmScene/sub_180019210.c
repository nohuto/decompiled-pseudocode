/*
 * XREFs of sub_180019210 @ 0x180019210
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

LPVOID __fastcall sub_180019210(LPVOID lpMem, char a2)
{
  unsigned __int64 v4; // rdx

  v4 = *((_QWORD *)lpMem + 5);
  if ( v4 >= 0x10 )
    sub_180010884(*((char **)lpMem + 2), v4 + 1);
  *((_QWORD *)lpMem + 4) = 0LL;
  *((_QWORD *)lpMem + 5) = 15LL;
  *((_BYTE *)lpMem + 16) = 0;
  *(_QWORD *)lpMem = &stdext::exception::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
