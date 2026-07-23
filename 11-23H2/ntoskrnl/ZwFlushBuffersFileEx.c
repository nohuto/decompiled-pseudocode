/*
 * XREFs of ZwFlushBuffersFileEx @ 0x14041CE90
 * Callers:
 *     DifZwFlushBuffersFileExWrapper @ 0x1405F0880 (DifZwFlushBuffersFileExWrapper.c)
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
