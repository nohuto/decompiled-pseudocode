/*
 * XREFs of sub_1800EC0F0 @ 0x1800EC0F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800EC0A0 @ 0x1800EC0A0 (sub_1800EC0A0.c)
 */

_QWORD *__fastcall sub_1800EC0F0(_QWORD *lpMem, char a2)
{
  sub_1800EC0A0(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
