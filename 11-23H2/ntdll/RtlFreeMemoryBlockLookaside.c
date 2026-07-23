/*
 * XREFs of RtlFreeMemoryBlockLookaside @ 0x180131150
 * Callers:
 *     <none>
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1800A4C80 (RtlpInterlockedPushEntrySList.c)
 */

NTSTATUS __cdecl RtlFreeMemoryBlockLookaside(PVOID MemoryBlockLookaside, PVOID Block)
{
  RtlpInterlockedPushEntrySList(*((__int128 **)Block - 2), (_QWORD *)Block - 6);
  return 0;
}
