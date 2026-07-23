/*
 * XREFs of IoUpdateShareAccess @ 0x1407FCAE0
 * Callers:
 *     sub_1406114D0 @ 0x1406114D0 (sub_1406114D0.c)
 * Callees:
 *     IoUpdateLinkShareAccessEx @ 0x1406B45F0 (IoUpdateLinkShareAccessEx.c)
 */

void __stdcall IoUpdateShareAccess(PFILE_OBJECT FileObject, PSHARE_ACCESS ShareAccess)
{
  IoUpdateLinkShareAccessEx((__int64)FileObject, ShareAccess, 0LL, 0);
}
