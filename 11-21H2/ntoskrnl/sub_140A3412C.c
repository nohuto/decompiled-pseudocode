/*
 * XREFs of sub_140A3412C @ 0x140A3412C
 * Callers:
 *     sub_140656BA8 @ 0x140656BA8 (sub_140656BA8.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140A3412C(void *a1)
{
  ExFreePoolWithTag(a1, 0x72634943u);
}
