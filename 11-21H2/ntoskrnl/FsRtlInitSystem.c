/*
 * XREFs of FsRtlInitSystem @ 0x140B25C04
 * Callers:
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     FsFilterInit @ 0x1403D808C (FsFilterInit.c)
 *     ExInitializePagedLookasideList @ 0x1406DA090 (ExInitializePagedLookasideList.c)
 *     FsRtlInitializeTieringHeat @ 0x140855918 (FsRtlInitializeTieringHeat.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     FsRtlInitializeSmssEvent @ 0x140B25D38 (FsRtlInitializeSmssEvent.c)
 *     FsRtlInitializeWorkerThread @ 0x140B25E30 (FsRtlInitializeWorkerThread.c)
 *     FsRtlGetCompatibilityModeValue @ 0x140B25F14 (FsRtlGetCompatibilityModeValue.c)
 *     FsRtlInitializeLargeMcbs @ 0x140B2603C (FsRtlInitializeLargeMcbs.c)
 *     FsRtlInitializeFileLocks @ 0x140B260DC (FsRtlInitializeFileLocks.c)
 *     FsRtlInitializeTunnels @ 0x140B26258 (FsRtlInitializeTunnels.c)
 */

char FsRtlInitSystem()
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-18h] BYREF

  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  FsRtlPagingIoResources = (__int64)ExAllocatePoolWithTag((POOL_TYPE)1552, 0x680uLL, 0x74725346u);
  v0 = 16LL;
  v1 = 0LL;
  do
  {
    ExInitializeResourceLite((PERESOURCE)(v1 + FsRtlPagingIoResources));
    v1 += 104LL;
    --v0;
  }
  while ( v0 );
  FsRtlInitializeTunnels();
  FsRtlInitializeFileLocks();
  FsRtlInitializeLargeMcbs();
  ExInitializePagedLookasideList(&FsRtlEcpListLookaside, 0LL, 0LL, 0, 0x18uLL, 0x6C655346u, 0);
  FsRtlpUncSemaphore.Header.Type = 5;
  FsRtlpUncSemaphore.Header.WaitListHead.Blink = &FsRtlpUncSemaphore.Header.WaitListHead;
  FsRtlpUncSemaphore.Header.WaitListHead.Flink = &FsRtlpUncSemaphore.Header.WaitListHead;
  FsRtlpUncSemaphore.Header.Size = 8;
  ValueName.Buffer = L"Win95TruncatedExtensions";
  FsRtlpUncSemaphore.Header.SignalState = 1;
  FsRtlpUncSemaphore.Limit = 0x7FFFFFFF;
  *(_DWORD *)&ValueName.Length = 3276848;
  FsRtlGetCompatibilityModeValue(&ValueName);
  if ( (int)FsRtlInitializeWorkerThread() < 0 || (int)FsFilterInit() < 0 || (int)FsRtlInitializeSmssEvent() < 0 )
    return 0;
  FsRtlInitializeTieringHeat();
  return 1;
}
