/*
 * XREFs of sub_140B12AA0 @ 0x140B12AA0
 * Callers:
 *     sub_140B110B4 @ 0x140B110B4 (sub_140B110B4.c)
 *     sub_140B12AA0 @ 0x140B12AA0 (sub_140B12AA0.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140B12AA0 @ 0x140B12AA0 (sub_140B12AA0.c)
 */

void __fastcall sub_140B12AA0(_QWORD *a1)
{
  if ( *a1 )
    sub_140B12AA0();
  if ( a1[2] )
    sub_140B12AA0();
  if ( a1[1] )
    sub_140B12AA0();
  ExFreePoolWithTag(a1, 0);
}
