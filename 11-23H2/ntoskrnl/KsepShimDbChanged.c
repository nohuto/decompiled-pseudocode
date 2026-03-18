/*
 * XREFs of KsepShimDbChanged @ 0x140373FD8
 * Callers:
 *     KseQueryDeviceData @ 0x140808000 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140976900 (KseQueryDeviceDataList.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 *     KsepShimDatabaseTime @ 0x1408082CC (KsepShimDatabaseTime.c)
 */

__int64 KsepShimDbChanged()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v1; // edi
  char v2; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&KsepShimDbLock, 0LL);
  v1 = 0;
  if ( (int)KsepShimDatabaseTime(L"\\SystemRoot\\AppPatch\\drvmain.sdb") >= 0 )
  {
    if ( qword_140C40C28 )
    {
      qword_140C40C28 = 0LL;
      v1 = 1;
    }
    else
    {
      qword_140C40C28 = 0LL;
    }
    if ( (int)KsepShimDatabaseTime(L"\\SystemRoot\\AppPatch\\drvpatch.sdb") >= 0 )
    {
      if ( qword_140C40C60 )
        v1 = 1;
      qword_140C40C60 = 0LL;
    }
  }
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
  KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v1;
}
