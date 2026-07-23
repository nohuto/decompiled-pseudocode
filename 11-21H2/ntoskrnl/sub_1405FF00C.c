/*
 * XREFs of sub_1405FF00C @ 0x1405FF00C
 * Callers:
 *     sub_140A8AAE0 @ 0x140A8AAE0 (sub_140A8AAE0.c)
 *     sub_140A8AB50 @ 0x140A8AB50 (sub_140A8AB50.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1405FF00C(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x44566656u);
}
