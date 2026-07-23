/*
 * XREFs of IoQueryFileInformation @ 0x1406E9D00
 * Callers:
 *     <none>
 * Callees:
 *     sub_14071E6BC @ 0x14071E6BC (sub_14071E6BC.c)
 */

NTSTATUS __stdcall IoQueryFileInformation(
        PFILE_OBJECT FileObject,
        FILE_INFORMATION_CLASS FileInformationClass,
        ULONG Length,
        PVOID FileInformation,
        PULONG ReturnedLength)
{
  return sub_14071E6BC(FileObject, (__int64)FileInformation, (__int64)ReturnedLength, 1);
}
