/*
 * XREFs of sub_180072150 @ 0x180072150
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180071FB8 @ 0x180071FB8 (sub_180071FB8.c)
 */

_QWORD *__fastcall sub_180072150(_QWORD *lpMem, char a2)
{
  sub_180071FB8(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
