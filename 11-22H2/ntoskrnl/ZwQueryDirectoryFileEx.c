/*
 * XREFs of ZwQueryDirectoryFileEx @ 0x14041D000
 * Callers:
 *     DifZwQueryDirectoryFileExWrapper @ 0x1405F3BB0 (DifZwQueryDirectoryFileExWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryDirectoryFileEx(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass,
        ULONG QueryFlags,
        PUNICODE_STRING FileName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
