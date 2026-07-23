/*
 * XREFs of FsRtlFreeFileLock @ 0x140259F70
 * Callers:
 *     <none>
 * Callees:
 *     sub_140203D50 @ 0x140203D50 (sub_140203D50.c)
 *     FsRtlUninitializeFileLock @ 0x140259FA0 (FsRtlUninitializeFileLock.c)
 */

void __stdcall FsRtlFreeFileLock(PFILE_LOCK FileLock)
{
  __int64 v2; // r8

  FsRtlUninitializeFileLock(FileLock);
  sub_140203D50((__int64)&stru_140CE2700, (_SLIST_ENTRY *)FileLock, v2);
}
