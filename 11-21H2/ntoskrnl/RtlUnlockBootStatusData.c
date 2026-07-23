/*
 * XREFs of RtlUnlockBootStatusData @ 0x1406D6AD0
 * Callers:
 *     sub_1406D5F3C @ 0x1406D5F3C (sub_1406D5F3C.c)
 *     sub_1406D6228 @ 0x1406D6228 (sub_1406D6228.c)
 *     sub_1408285B0 @ 0x1408285B0 (sub_1408285B0.c)
 *     sub_140998CC4 @ 0x140998CC4 (sub_140998CC4.c)
 *     sub_140998F18 @ 0x140998F18 (sub_140998F18.c)
 *     sub_140998FF4 @ 0x140998FF4 (sub_140998FF4.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwFsControlFile @ 0x14041BE80 (ZwFsControlFile.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl RtlUnlockBootStatusData(HANDLE FileHandle)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // eax
  char v4; // si
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF
  __int16 InputBuffer; // [rsp+78h] [rbp+10h] BYREF

  IoStatusBlock = 0LL;
  InputBuffer = 0;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140CE2148, 0LL);
  if ( !dword_140C1BC24 )
    goto LABEL_9;
  v3 = dword_140C1BC24 - 1;
  v4 = 0;
  --dword_140C1BC24;
  if ( !byte_140C1BC29 )
    goto LABEL_7;
  if ( !FileHandle )
  {
    FileHandle = ::FileHandle;
LABEL_6:
    dword_140C1BC24 = 0;
    v4 = 1;
    ::FileHandle = 0LL;
    byte_140C1BC29 = 0;
    byte_140C1BC40 = 0;
LABEL_7:
    if ( !FileHandle )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( !byte_140C1BC40 && !v3 )
    goto LABEL_6;
LABEL_8:
  ZwFsControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x9C040u, &InputBuffer, 2u, 0LL, 0);
  if ( v4 )
  {
    if ( qword_140C1BC38 )
    {
      ExFreePoolWithTag(qword_140C1BC38, 0);
      qword_140C1BC38 = 0LL;
    }
    ZwClose(FileHandle);
  }
LABEL_9:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140CE2148, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140CE2148);
  sub_1402AFC00((ULONG_PTR)&qword_140CE2148);
  KeLeaveCriticalRegion();
  return result;
}
