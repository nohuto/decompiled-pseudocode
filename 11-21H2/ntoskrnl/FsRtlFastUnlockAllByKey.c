/*
 * XREFs of FsRtlFastUnlockAllByKey @ 0x140541A60
 * Callers:
 *     <none>
 * Callees:
 *     sub_14021D404 @ 0x14021D404 (sub_14021D404.c)
 */

NTSTATUS __stdcall FsRtlFastUnlockAllByKey(
        PFILE_LOCK FileLock,
        PFILE_OBJECT FileObject,
        PEPROCESS ProcessId,
        ULONG Key,
        PVOID Context)
{
  return sub_14021D404((__int64)FileLock, (_RTL_SPLAY_LINKS *)FileObject, ProcessId, Key, 1, (__int64)Context);
}
