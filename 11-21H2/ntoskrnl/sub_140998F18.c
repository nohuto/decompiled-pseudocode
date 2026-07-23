/*
 * XREFs of sub_140998F18 @ 0x140998F18
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlLockBootStatusData @ 0x1406D6540 (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x1406D6AD0 (RtlUnlockBootStatusData.c)
 *     sub_1406D6C24 @ 0x1406D6C24 (sub_1406D6C24.c)
 *     sub_1409BABB4 @ 0x1409BABB4 (sub_1409BABB4.c)
 */

__int64 sub_140998F18()
{
  KPROCESSOR_MODE v0; // bp
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v2; // esi
  HANDLE FileHandle; // [rsp+30h] [rbp+8h] BYREF

  FileHandle = 0LL;
  v0 = *((_BYTE *)KeGetCurrentThread() + 562);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1F610, 0LL);
  v2 = RtlLockBootStatusData(&FileHandle);
  if ( v2 >= 0 )
  {
    if ( !v0 || (v2 = sub_1406D6C24(FileHandle, v0, 1u), v2 >= 0) )
      v2 = sub_1409BABB4(FileHandle);
  }
  if ( FileHandle )
    RtlUnlockBootStatusData(FileHandle);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C1F610, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C1F610);
  sub_1402AFC00((ULONG_PTR)&qword_140C1F610);
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
