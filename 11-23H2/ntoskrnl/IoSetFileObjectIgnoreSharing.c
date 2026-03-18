/*
 * XREFs of IoSetFileObjectIgnoreSharing @ 0x1408A4CB0
 * Callers:
 *     <none>
 * Callees:
 *     IopSetFileObjectExtensionFlag @ 0x140302B0C (IopSetFileObjectExtensionFlag.c)
 */

NTSTATUS __stdcall IoSetFileObjectIgnoreSharing(PFILE_OBJECT FileObject)
{
  return IopSetFileObjectExtensionFlag((__int64)FileObject, 1, 1);
}
