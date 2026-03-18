/*
 * XREFs of CmSiRWLockReleaseExclusive @ 0x140747848
 * Callers:
 *     CmSiAcquireProcessLockedPagesCharge @ 0x140207D84 (CmSiAcquireProcessLockedPagesCharge.c)
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1402E9BBC (CmSiReleaseProcessLockedPagesCharge.c)
 *     CmSiSetProcessWorkingSetMaximum @ 0x14037483C (CmSiSetProcessWorkingSetMaximum.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AF668C (HvUnlockHiveFlusherExclusive.c)
 *     CmpDumpKeyToBuffer @ 0x140AF68F4 (CmpDumpKeyToBuffer.c)
 *     CmFcManagerStartRuntimePhase @ 0x140B3B6E8 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 */

signed __int32 __fastcall CmSiRWLockReleaseExclusive(volatile signed __int64 *BugCheckParameter2)
{
  if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
}
