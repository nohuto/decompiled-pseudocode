/*
 * XREFs of IoRemoveShareAccess @ 0x140791CE0
 * Callers:
 *     DifIoRemoveShareAccessWrapper @ 0x1405E0FB0 (DifIoRemoveShareAccessWrapper.c)
 * Callees:
 *     IoRemoveLinkShareAccessEx @ 0x140791D00 (IoRemoveLinkShareAccessEx.c)
 */

void __stdcall IoRemoveShareAccess(PFILE_OBJECT FileObject, PSHARE_ACCESS ShareAccess)
{
  IoRemoveLinkShareAccessEx(FileObject, ShareAccess, 0LL, 0LL);
}
