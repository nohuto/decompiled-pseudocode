/*
 * XREFs of WdipSemUpdate @ 0x1409DD93C
 * Callers:
 *     WdiUpdateSem @ 0x1405FB7E8 (WdiUpdateSem.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231190 (ExReleasePushLockEx.c)
 *     WdipSemCleanStart @ 0x14082FA50 (WdipSemCleanStart.c)
 *     WdipSemInitializeGlobalState @ 0x14083294C (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x1409DDBF0 (WdipSemShutdown.c)
 */

__int64 WdipSemUpdate()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v1; // ebx

  if ( !WdipSemInitialized )
    WdipSemInitializeGlobalState();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  if ( WdipSemEnabled )
    WdipSemShutdown();
  v1 = WdipSemCleanStart();
  ExReleasePushLockEx((__int64 *)&WdipSemPushLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v1;
}
