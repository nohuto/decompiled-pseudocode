/*
 * XREFs of sub_180010980 @ 0x180010980
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 */

_DWORD *__fastcall sub_180010980(_DWORD *a1, char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    sub_18000B998(a1);
  return a1;
}
