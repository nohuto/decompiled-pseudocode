/*
 * XREFs of IoSetShareAccess @ 0x140791710
 * Callers:
 *     DifIoSetShareAccessWrapper @ 0x1405E15C0 (DifIoSetShareAccessWrapper.c)
 * Callees:
 *     IoSetLinkShareAccess @ 0x140791D90 (IoSetLinkShareAccess.c)
 */

void __stdcall IoSetShareAccess(
        ACCESS_MASK DesiredAccess,
        ULONG DesiredShareAccess,
        PFILE_OBJECT FileObject,
        PSHARE_ACCESS ShareAccess)
{
  IoSetLinkShareAccess(DesiredAccess, DesiredShareAccess, (_DWORD)FileObject, (_DWORD)ShareAccess, 0LL, 0);
}
