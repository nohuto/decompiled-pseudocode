/*
 * XREFs of FsRtlMdlReadCompleteDev @ 0x140244FB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406C14E4 @ 0x1406C14E4 (sub_1406C14E4.c)
 */

BOOLEAN __stdcall FsRtlMdlReadCompleteDev(PFILE_OBJECT FileObject, PMDL MdlChain, PDEVICE_OBJECT DeviceObject)
{
  sub_1406C14E4(FileObject, MdlChain, DeviceObject);
  return 1;
}
