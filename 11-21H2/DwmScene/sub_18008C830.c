/*
 * XREFs of sub_18008C830 @ 0x18008C830
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18008C810 @ 0x18008C810 (sub_18008C810.c)
 */

_QWORD *__fastcall sub_18008C830(_QWORD *lpMem, char a2)
{
  sub_18008C810(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
