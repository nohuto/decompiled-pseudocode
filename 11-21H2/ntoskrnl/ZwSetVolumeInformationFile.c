/*
 * XREFs of ZwSetVolumeInformationFile @ 0x14041EF00
 * Callers:
 *     sub_1406280E0 @ 0x1406280E0 (sub_1406280E0.c)
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
  return sub_140433F80(FileHandle, IoStatusBlock);
}
