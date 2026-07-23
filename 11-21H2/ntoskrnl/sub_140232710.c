/*
 * XREFs of sub_140232710 @ 0x140232710
 * Callers:
 *     <none>
 * Callees:
 *     sub_140232788 @ 0x140232788 (sub_140232788.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1406A958C @ 0x1406A958C (sub_1406A958C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140232710(PVOID *P)
{
  PVOID v2; // rcx

  sub_140232788(CallbackObject, P, 0LL, 0LL);
  sub_1406A958C(P[7]);
  ObfDereferenceObjectWithTag(P[7], 0x746C6644u);
  v2 = P[6];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
}
