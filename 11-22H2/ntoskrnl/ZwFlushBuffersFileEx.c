/*
 * XREFs of ZwFlushBuffersFileEx @ 0x14041C440
 * Callers:
 *     DifZwFlushBuffersFileExWrapper @ 0x1405F03A0 (DifZwFlushBuffersFileExWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFlushBuffersFileEx(
        HANDLE FileHandle,
        ULONG Flags,
        PVOID Parameters,
        ULONG ParametersSize,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
