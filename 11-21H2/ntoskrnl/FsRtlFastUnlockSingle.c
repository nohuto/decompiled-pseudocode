/*
 * XREFs of FsRtlFastUnlockSingle @ 0x14021DDD0
 * Callers:
 *     FsRtlProcessFileLock @ 0x14021D0B0 (FsRtlProcessFileLock.c)
 * Callees:
 *     sub_14021DEB4 @ 0x14021DEB4 (sub_14021DEB4.c)
 *     sub_14021E048 @ 0x14021E048 (sub_14021E048.c)
 */

NTSTATUS __stdcall FsRtlFastUnlockSingle(
        PFILE_LOCK FileLock,
        PFILE_OBJECT FileObject,
        LARGE_INTEGER *FileOffset,
        PLARGE_INTEGER Length,
        PEPROCESS ProcessId,
        ULONG Key,
        PVOID Context,
        BOOLEAN AlreadySynchronized)
{
  PVOID LockInformation; // r10
  int v9; // ebx
  int v10; // edi
  int v11; // ebp

  LockInformation = FileLock->LockInformation;
  v9 = (int)Length;
  v10 = (int)FileOffset;
  v11 = (int)FileObject;
  if ( !LockInformation )
    return -1073741698;
  if ( (unsigned __int64)(Length->QuadPart + FileOffset->QuadPart - 1) < FileOffset->QuadPart && Length->QuadPart )
    return -1073741407;
  if ( (unsigned int)sub_14021DEB4(
                       (_DWORD)LockInformation,
                       (_DWORD)FileObject,
                       (_DWORD)FileOffset,
                       (_DWORD)Length,
                       (__int64)ProcessId,
                       Key,
                       (__int64)Context,
                       0,
                       1) )
    return sub_14021E048(FileLock->LockInformation, v11, v10, v9, (__int64)ProcessId, Key, (__int64)Context, 0, 1);
  return 0;
}
