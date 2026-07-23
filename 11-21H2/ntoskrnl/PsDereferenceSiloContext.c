/*
 * XREFs of PsDereferenceSiloContext @ 0x140251C40
 * Callers:
 *     sub_1406686C8 @ 0x1406686C8 (sub_1406686C8.c)
 *     sub_14071E230 @ 0x14071E230 (sub_14071E230.c)
 *     ObReferenceObjectByName @ 0x14071EEC0 (ObReferenceObjectByName.c)
 *     sub_140734160 @ 0x140734160 (sub_140734160.c)
 *     sub_1407A3190 @ 0x1407A3190 (sub_1407A3190.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 *     sub_1409ABAC0 @ 0x1409ABAC0 (sub_1409ABAC0.c)
 *     sub_1409AC7F8 @ 0x1409AC7F8 (sub_1409AC7F8.c)
 *     sub_140A34510 @ 0x140A34510 (sub_140A34510.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsDereferenceSiloContext(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x746C6644u);
}
