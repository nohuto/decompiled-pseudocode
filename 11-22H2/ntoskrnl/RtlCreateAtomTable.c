/*
 * XREFs of RtlCreateAtomTable @ 0x1407B05C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateAtomTableEx @ 0x140339C30 (RtlCreateAtomTableEx.c)
 */

NTSTATUS __cdecl RtlCreateAtomTable(ULONG NumberOfBuckets, PVOID *AtomTableHandle)
{
  return RtlCreateAtomTableEx(NumberOfBuckets, 0, AtomTableHandle);
}
