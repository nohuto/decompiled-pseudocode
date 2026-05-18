/*
 * XREFs of sub_18000B9B0 @ 0x18000B9B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001D6B8 @ 0x18001D6B8 (sub_18001D6B8.c)
 */

_QWORD *__fastcall sub_18000B9B0(_QWORD *a1, char a2)
{
  *a1 = &type_info::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18001D6B8(a1);
  return a1;
}
