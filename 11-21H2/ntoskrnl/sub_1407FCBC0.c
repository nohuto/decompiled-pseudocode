/*
 * XREFs of sub_1407FCBC0 @ 0x1407FCBC0
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     sub_140A70F90 @ 0x140A70F90 (sub_140A70F90.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall sub_1407FCBC0(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x6E457350u);
}
