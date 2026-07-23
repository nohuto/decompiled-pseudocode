/*
 * XREFs of sub_1405F4024 @ 0x1405F4024
 * Callers:
 *     sub_140722B40 @ 0x140722B40 (sub_140722B40.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1405F4024(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
