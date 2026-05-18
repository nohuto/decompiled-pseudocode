/*
 * XREFs of sub_18000B9A0 @ 0x18000B9A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001C1C4 @ 0x18001C1C4 (sub_18001C1C4.c)
 */

_QWORD *__fastcall sub_18000B9A0(_QWORD *a1, char a2)
{
  *a1 = &type_info::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18001C1C4(a1);
  return a1;
}
