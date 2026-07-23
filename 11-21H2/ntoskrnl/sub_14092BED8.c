/*
 * XREFs of sub_14092BED8 @ 0x14092BED8
 * Callers:
 *     sub_140540798 @ 0x140540798 (sub_140540798.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14092BED8(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x57676244u);
}
