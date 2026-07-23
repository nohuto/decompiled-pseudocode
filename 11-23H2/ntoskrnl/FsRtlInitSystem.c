/*
 * XREFs of FsRtlInitSystem @ 0x140B68494
 * Callers:
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140207480 (ExInitializeResourceLite.c)
 *     FsFilterInit @ 0x1403A9640 (FsFilterInit.c)
 *     ExInitializePagedLookasideList @ 0x1407D6F10 (ExInitializePagedLookasideList.c)
 *     FsRtlInitializeTieringHeat @ 0x1408503E0 (FsRtlInitializeTieringHeat.c)
 *     FsRtlInitializeDedupChange @ 0x140850414 (FsRtlInitializeDedupChange.c)
 *     ExAllocatePoolWithTag @ 0x140AAEC80 (ExAllocatePoolWithTag.c)
 *     FsRtlInitializeWorkerThread @ 0x140B685CC (FsRtlInitializeWorkerThread.c)
 *     FsRtlInitializeSmssEvent @ 0x140B686B0 (FsRtlInitializeSmssEvent.c)
 *     FsRtlGetCompatibilityModeValue @ 0x140B687A8 (FsRtlGetCompatibilityModeValue.c)
 *     FsRtlInitializeLargeMcbs @ 0x140B688D0 (FsRtlInitializeLargeMcbs.c)
 *     FsRtlInitializeTunnels @ 0x140B68970 (FsRtlInitializeTunnels.c)
 *     FsRtlInitializeFileLocks @ 0x140B68A60 (FsRtlInitializeFileLocks.c)
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
  FsRtlInitializeDedupChange();
  return 1;
}
