/*
 * XREFs of sub_1406D98D8 @ 0x1406D98D8
 * Callers:
 *     sub_1406D97E0 @ 0x1406D97E0 (sub_1406D97E0.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406D98D8(__int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 56);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
