/*
 * XREFs of RtlExtendMemoryBlockLookaside @ 0x180002670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlExtendMemoryBlockLookaside(PVOID MemoryBlockLookaside, ULONG Increment)
{
  return RtlExtendMemoryZone(*((_QWORD *)MemoryBlockLookaside + 2), Increment);
}
