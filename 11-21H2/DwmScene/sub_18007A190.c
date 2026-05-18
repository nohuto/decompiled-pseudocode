/*
 * XREFs of sub_18007A190 @ 0x18007A190
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18007A0EC @ 0x18007A0EC (sub_18007A0EC.c)
 */

_QWORD *__fastcall sub_18007A190(_QWORD *lpMem, char a2)
{
  sub_18007A0EC(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
