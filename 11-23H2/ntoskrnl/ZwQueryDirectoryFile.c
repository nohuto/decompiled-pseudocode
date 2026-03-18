/*
 * XREFs of ZwQueryDirectoryFile @ 0x14041B400
 * Callers:
 *     DifZwQueryDirectoryFileWrapper @ 0x1405F3CC0 (DifZwQueryDirectoryFileWrapper.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1408842D4 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     AslPathWildcardFindNext @ 0x140A55AAC (AslPathWildcardFindNext.c)
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
  return KiServiceInternal(FileHandle, Event);
}
