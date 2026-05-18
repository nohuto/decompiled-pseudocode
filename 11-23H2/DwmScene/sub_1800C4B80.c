/*
 * XREFs of sub_1800C4B80 @ 0x1800C4B80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800C4370 @ 0x1800C4370 (sub_1800C4370.c)
 */

_QWORD *__fastcall sub_1800C4B80(_QWORD *lpMem, char a2)
{
  sub_1800C4370(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
