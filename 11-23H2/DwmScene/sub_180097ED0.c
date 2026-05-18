/*
 * XREFs of sub_180097ED0 @ 0x180097ED0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180097DAC @ 0x180097DAC (sub_180097DAC.c)
 */

_QWORD *__fastcall sub_180097ED0(_QWORD *lpMem, char a2)
{
  sub_180097DAC(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
