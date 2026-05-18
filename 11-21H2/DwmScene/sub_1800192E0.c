/*
 * XREFs of sub_1800192E0 @ 0x1800192E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

_DWORD *__fastcall sub_1800192E0(_DWORD *lpMem, char a2)
{
  sub_180010910((__int64)(lpMem + 4));
  lpMem[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
