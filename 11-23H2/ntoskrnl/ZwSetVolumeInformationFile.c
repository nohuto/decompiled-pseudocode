/*
 * XREFs of ZwSetVolumeInformationFile @ 0x14041E580
 * Callers:
 *     DifZwSetVolumeInformationFileWrapper @ 0x1405F7D30 (DifZwSetVolumeInformationFileWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FS_INFORMATION_CLASS FsInformationClass)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, IoStatusBlock);
}
