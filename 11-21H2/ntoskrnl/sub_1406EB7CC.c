/*
 * XREFs of sub_1406EB7CC @ 0x1406EB7CC
 * Callers:
 *     sub_140674BE4 @ 0x140674BE4 (sub_140674BE4.c)
 *     sub_1407A50BC @ 0x1407A50BC (sub_1407A50BC.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406EB7CC(void *a1)
{
  ExFreePoolWithTag(a1, 0x54456F50u);
}
