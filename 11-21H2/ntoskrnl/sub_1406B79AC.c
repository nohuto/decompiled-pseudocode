/*
 * XREFs of sub_1406B79AC @ 0x1406B79AC
 * Callers:
 *     sub_1406B7804 @ 0x1406B7804 (sub_1406B7804.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406B79AC(void *a1)
{
  ExFreePoolWithTag(a1, 0x6B534C46u);
}
