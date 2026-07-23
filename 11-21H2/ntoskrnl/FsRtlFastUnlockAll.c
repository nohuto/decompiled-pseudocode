/*
 * XREFs of FsRtlFastUnlockAll @ 0x14021D3E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14021D404 @ 0x14021D404 (sub_14021D404.c)
 */

NTSTATUS __stdcall FsRtlFastUnlockAll(PFILE_LOCK FileLock, PFILE_OBJECT FileObject, PEPROCESS ProcessId, PVOID Context)
{
  return sub_14021D404((_DWORD)FileLock, (_DWORD)FileObject, (_DWORD)ProcessId, 0, 0, (__int64)Context);
}
