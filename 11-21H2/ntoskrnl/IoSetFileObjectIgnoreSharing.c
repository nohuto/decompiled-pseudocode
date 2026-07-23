/*
 * XREFs of IoSetFileObjectIgnoreSharing @ 0x140881730
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402A34C8 @ 0x1402A34C8 (sub_1402A34C8.c)
 */

NTSTATUS __stdcall IoSetFileObjectIgnoreSharing(PFILE_OBJECT FileObject)
{
  return sub_1402A34C8((__int64)FileObject, 1, 1);
}
