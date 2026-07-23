/*
 * XREFs of sub_140580D80 @ 0x140580D80
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_14035EB3C @ 0x14035EB3C (sub_14035EB3C.c)
 *     sub_1407D80A4 @ 0x1407D80A4 (sub_1407D80A4.c)
 */

LONG_PTR __fastcall sub_140580D80(PVOID Object)
{
  sub_1407D80A4(Object, 3221225773LL);
  sub_14035EB3C((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x746C6644u);
}
