/*
 * XREFs of sub_1406596A0 @ 0x1406596A0
 * Callers:
 *     sub_140419D6C @ 0x140419D6C (sub_140419D6C.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_140419D3C @ 0x140419D3C (sub_140419D3C.c)
 *     sub_140419ED8 @ 0x140419ED8 (sub_140419ED8.c)
 *     sub_14065859C @ 0x14065859C (sub_14065859C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406596A0(PVOID **P)
{
  PVOID *v2; // rcx
  PVOID *v3; // rax

  sub_140419D3C();
  v2 = *P;
  if ( (*P)[1] != P || (v3 = P[1], *v3 != P) )
    __fastfail(3u);
  *v3 = v2;
  v2[1] = v3;
  sub_140419ED8();
  sub_14065859C((__int64)P[4][3]);
  ObfDereferenceObjectWithTag(P[4], 0x63537350u);
  ExFreePoolWithTag(P, 0x63537350u);
}
