/*
 * XREFs of RtlCreateAtomTable @ 0x1406A6270
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateAtomTableEx @ 0x14022EB30 (RtlCreateAtomTableEx.c)
 */

NTSTATUS __cdecl RtlCreateAtomTable(ULONG NumberOfBuckets, PVOID *AtomTableHandle)
{
  return RtlCreateAtomTableEx(NumberOfBuckets, 0, AtomTableHandle);
}
