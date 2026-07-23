/*
 * XREFs of sub_1406EB7B0 @ 0x1406EB7B0
 * Callers:
 *     sub_140654B84 @ 0x140654B84 (sub_140654B84.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406EB7B0(_RTL_AVL_TABLE *a1, PVOID a2)
{
  ExFreePoolWithTag(a2, 0);
}
