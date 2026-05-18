/*
 * XREFs of sub_180025F60 @ 0x180025F60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 */

_QWORD *__fastcall sub_180025F60(_QWORD *a1, char a2)
{
  *a1 = &stdext::exception::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000B988(a1);
  return a1;
}
