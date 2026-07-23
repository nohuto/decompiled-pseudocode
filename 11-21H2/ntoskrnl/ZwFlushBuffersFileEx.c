/*
 * XREFs of ZwFlushBuffersFileEx @ 0x14041D4E0
 * Callers:
 *     sub_140620440 @ 0x140620440 (sub_140620440.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwFlushBuffersFileEx(
        HANDLE FileHandle,
        ULONG Flags,
        PVOID Parameters,
        ULONG ParametersSize,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return sub_140433F80(FileHandle, *(_QWORD *)&Flags);
}
