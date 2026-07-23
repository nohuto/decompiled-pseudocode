/*
 * XREFs of sub_1409F5070 @ 0x1409F5070
 * Callers:
 *     sub_14078F198 @ 0x14078F198 (sub_14078F198.c)
 *     sub_14078FF9C @ 0x14078FF9C (sub_14078FF9C.c)
 *     sub_1409F45F0 @ 0x1409F45F0 (sub_1409F45F0.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409F5070(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[4];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
}
