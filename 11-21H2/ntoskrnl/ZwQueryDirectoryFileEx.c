/*
 * XREFs of ZwQueryDirectoryFileEx @ 0x14041E080
 * Callers:
 *     sub_140623DA0 @ 0x140623DA0 (sub_140623DA0.c)
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
  return sub_140433F80(FileHandle, Event);
}
