/*
 * XREFs of sub_18007F7E0 @ 0x18007F7E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18007F7BC @ 0x18007F7BC (sub_18007F7BC.c)
 */

_QWORD *__fastcall sub_18007F7E0(_QWORD *lpMem, char a2)
{
  sub_18007F7BC(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
