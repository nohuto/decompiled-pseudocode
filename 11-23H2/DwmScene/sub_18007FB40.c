/*
 * XREFs of sub_18007FB40 @ 0x18007FB40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18007FB28 @ 0x18007FB28 (sub_18007FB28.c)
 */

_QWORD *__fastcall sub_18007FB40(_QWORD *lpMem, char a2)
{
  sub_18007FB28(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
