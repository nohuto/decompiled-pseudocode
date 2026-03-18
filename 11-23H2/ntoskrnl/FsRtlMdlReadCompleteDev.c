/*
 * XREFs of FsRtlMdlReadCompleteDev @ 0x1403551A0
 * Callers:
 *     <none>
 * Callees:
 *     CcMdlReadComplete2 @ 0x1407C386C (CcMdlReadComplete2.c)
 */

BOOLEAN __stdcall FsRtlMdlReadCompleteDev(PFILE_OBJECT FileObject, PMDL MdlChain, PDEVICE_OBJECT DeviceObject)
{
  CcMdlReadComplete2(FileObject, MdlChain, DeviceObject);
  return 1;
}
