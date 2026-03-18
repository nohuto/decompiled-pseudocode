/*
 * XREFs of IoCheckShareAccess @ 0x1407E1BA0
 * Callers:
 *     DifIoCheckShareAccessWrapper @ 0x1405DDAC0 (DifIoCheckShareAccessWrapper.c)
 * Callees:
 *     IoCheckLinkShareAccess @ 0x140766070 (IoCheckLinkShareAccess.c)
 */

NTSTATUS __stdcall IoCheckShareAccess(
        ACCESS_MASK DesiredAccess,
        ULONG DesiredShareAccess,
        PFILE_OBJECT FileObject,
        PSHARE_ACCESS ShareAccess,
        BOOLEAN Update)
{
  return IoCheckLinkShareAccess(DesiredAccess, DesiredShareAccess, (__int64)FileObject, ShareAccess, 0LL, Update != 0);
}
