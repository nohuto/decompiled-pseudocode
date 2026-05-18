/*
 * XREFs of sub_18007A150 @ 0x18007A150
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18007A04C @ 0x18007A04C (sub_18007A04C.c)
 */

_QWORD *__fastcall sub_18007A150(_QWORD *lpMem, char a2)
{
  sub_18007A04C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
