/*
 * XREFs of RtlDereferenceAtomTable @ 0x14036F000
 * Callers:
 *     SepDereferenceLowBoxNumberEntry @ 0x1407EF49C (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     RtlDestroyAtomTable @ 0x14069EB40 (RtlDestroyAtomTable.c)
 */

NTSTATUS __fastcall RtlDereferenceAtomTable(void *a1)
{
  return RtlDestroyAtomTable(a1);
}
