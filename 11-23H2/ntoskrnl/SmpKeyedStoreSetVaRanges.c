/*
 * XREFs of SmpKeyedStoreSetVaRanges @ 0x140342CD8
 * Callers:
 *     SmStoreSetProcessVaRanges @ 0x1407B750C (SmStoreSetProcessVaRanges.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     SmpKeyedStoreEntryGet @ 0x140344D74 (SmpKeyedStoreEntryGet.c)
 */

__int64 __fastcall SmpKeyedStoreSetVaRanges(volatile signed __int64 *BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // esi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)BugCheckParameter2, 0LL);
  v3 = SmpKeyedStoreEntryGet((ULONG_PTR)BugCheckParameter2) != 0 ? 0xFFFFFE96 : 0;
  if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
  return v3 - 1073741275;
}
