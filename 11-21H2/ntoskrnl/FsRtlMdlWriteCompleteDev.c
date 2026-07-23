/*
 * XREFs of FsRtlMdlWriteCompleteDev @ 0x1406E1760
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402581E0 @ 0x1402581E0 (sub_1402581E0.c)
 */

BOOLEAN __stdcall FsRtlMdlWriteCompleteDev(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        PMDL MdlChain,
        PDEVICE_OBJECT DeviceObject)
{
  if ( (FileObject->Flags & 0x10) != 0 )
    return 0;
  sub_1402581E0((__int64)FileObject, (__int64 *)FileOffset, MdlChain, (int)DeviceObject);
  return 1;
}
