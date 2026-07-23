/*
 * XREFs of sub_1406C29BC @ 0x1406C29BC
 * Callers:
 *     sub_140690378 @ 0x140690378 (sub_140690378.c)
 *     sub_14069061C @ 0x14069061C (sub_14069061C.c)
 *     sub_1407806B0 @ 0x1407806B0 (sub_1407806B0.c)
 *     sub_140780EF0 @ 0x140780EF0 (sub_140780EF0.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     sub_1406C29F4 @ 0x1406C29F4 (sub_1406C29F4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406C29BC(PVOID *P)
{
  sub_1406C29F4();
  ObDereferenceObjectDeferDeleteWithTag(P[5], 0x67655256u);
  ExFreePoolWithTag(P, 0x67655256u);
}
