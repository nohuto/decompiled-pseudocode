/*
 * XREFs of sub_18005BE80 @ 0x18005BE80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18005BCD0 @ 0x18005BCD0 (sub_18005BCD0.c)
 */

_QWORD *__fastcall sub_18005BE80(_QWORD *lpMem, char a2)
{
  sub_18005BCD0(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
