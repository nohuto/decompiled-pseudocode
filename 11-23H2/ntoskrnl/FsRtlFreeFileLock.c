/*
 * XREFs of FsRtlFreeFileLock @ 0x14036B140
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1402B6B70 (ExFreeToNPagedLookasideList.c)
 *     FsRtlUninitializeFileLock @ 0x14036B170 (FsRtlUninitializeFileLock.c)
 */

void __stdcall FsRtlFreeFileLock(PFILE_LOCK FileLock)
{
  FsRtlUninitializeFileLock(FileLock);
  ExFreeToNPagedLookasideList(&FsRtlFileLockLookasideList, FileLock);
}
