/*
 * XREFs of sub_140690600 @ 0x140690600
 * Callers:
 *     sub_140211F50 @ 0x140211F50 (sub_140211F50.c)
 *     sub_140690378 @ 0x140690378 (sub_140690378.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall sub_140690600(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x67655256u);
}
