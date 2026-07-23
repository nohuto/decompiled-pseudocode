/*
 * XREFs of sub_1405E2D20 @ 0x1405E2D20
 * Callers:
 *     sub_140A01E60 @ 0x140A01E60 (sub_140A01E60.c)
 *     sub_140A48B0C @ 0x140A48B0C (sub_140A48B0C.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 */

LONG_PTR __fastcall sub_1405E2D20(PVOID Object)
{
  sub_1403606C4((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x6E457350u);
}
