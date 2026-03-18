/*
 * XREFs of IoQueryFileInformation @ 0x1406E9D00
 * Callers:
 *     <none>
 * Callees:
 *     IopQueryXxxInformation @ 0x14071E6BC (IopQueryXxxInformation.c)
 */

NTSTATUS __stdcall IoQueryFileInformation(
        PFILE_OBJECT FileObject,
        FILE_INFORMATION_CLASS FileInformationClass,
        ULONG Length,
        PVOID FileInformation,
        PULONG ReturnedLength)
{
  return IopQueryXxxInformation(FileObject, (__int64)FileInformation, (__int64)ReturnedLength, 1);
}
