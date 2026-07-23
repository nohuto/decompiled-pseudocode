/*
 * XREFs of FsRtlOplockKeysEqual @ 0x140542440
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402A6AB0 @ 0x1402A6AB0 (sub_1402A6AB0.c)
 */

BOOLEAN __stdcall FsRtlOplockKeysEqual(PFILE_OBJECT Fo1, PFILE_OBJECT Fo2)
{
  return sub_1402A6AB0((__int64)Fo1, (__int64)Fo2, 0);
}
