/*
 * XREFs of ZwQueryDirectoryFile @ 0x14041BE00
 * Callers:
 *     sub_140623F40 @ 0x140623F40 (sub_140623F40.c)
 *     sub_14080B4F0 @ 0x14080B4F0 (sub_14080B4F0.c)
 *     sub_140A1641C @ 0x140A1641C (sub_140A1641C.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryDirectoryFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass,
        BOOLEAN ReturnSingleEntry,
        PUNICODE_STRING FileName,
        BOOLEAN RestartScan)
{
  _disable();
  __readeflags();
  return sub_140433F80(FileHandle, Event);
}
