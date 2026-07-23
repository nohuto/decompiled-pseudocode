/*
 * XREFs of RtlFreeMemoryBlockLookaside @ 0x18012F150
 * Callers:
 *     <none>
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1800A2BC0 (RtlpInterlockedPushEntrySList.c)
 */

NTSTATUS __cdecl RtlFreeMemoryBlockLookaside(PVOID MemoryBlockLookaside, PVOID Block)
{
  RtlpInterlockedPushEntrySList(*((__int128 **)Block - 2), (_QWORD *)Block - 6);
  return 0;
}
