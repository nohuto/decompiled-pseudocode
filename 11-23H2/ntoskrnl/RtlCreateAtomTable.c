/*
 * XREFs of RtlCreateAtomTable @ 0x1407B0200
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateAtomTableEx @ 0x14033A060 (RtlCreateAtomTableEx.c)
 */

NTSTATUS __cdecl RtlCreateAtomTable(ULONG NumberOfBuckets, PVOID *AtomTableHandle)
{
  return RtlCreateAtomTableEx(NumberOfBuckets, 0, AtomTableHandle);
}
