/*
 * XREFs of ZwQueryEaFile @ 0x14041E0E0
 * Callers:
 *     sub_1406243B0 @ 0x1406243B0 (sub_1406243B0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryEaFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        BOOLEAN ReturnSingleEntry,
        PVOID EaList,
        ULONG EaListLength,
        PULONG EaIndex,
        BOOLEAN RestartScan)
{
  _disable();
  __readeflags();
  return sub_140433F80(FileHandle, IoStatusBlock);
}
