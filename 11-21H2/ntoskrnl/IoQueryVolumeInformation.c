/*
 * XREFs of IoQueryVolumeInformation @ 0x1406E8DF0
 * Callers:
 *     sub_14084AA8C @ 0x14084AA8C (sub_14084AA8C.c)
 * Callees:
 *     sub_14071E6BC @ 0x14071E6BC (sub_14071E6BC.c)
 */

NTSTATUS __stdcall IoQueryVolumeInformation(
        PFILE_OBJECT FileObject,
        FS_INFORMATION_CLASS FsInformationClass,
        ULONG Length,
        PVOID FsInformation,
        PULONG ReturnedLength)
{
  return sub_14071E6BC(FileObject, (__int64)FsInformation, (__int64)ReturnedLength, 0);
}
