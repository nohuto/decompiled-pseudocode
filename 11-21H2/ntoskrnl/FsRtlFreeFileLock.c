/*
 * XREFs of FsRtlFreeFileLock @ 0x140259F70
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToPagedLookasideList @ 0x140203D50 (ExFreeToPagedLookasideList.c)
 *     FsRtlUninitializeFileLock @ 0x140259FA0 (FsRtlUninitializeFileLock.c)
 */

void __stdcall FsRtlFreeFileLock(PFILE_LOCK FileLock)
{
  FsRtlUninitializeFileLock(FileLock);
  ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)&FsRtlFileLockLookasideList, FileLock);
}
