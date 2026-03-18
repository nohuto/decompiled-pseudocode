/*
 * XREFs of CmSiRWLockReleaseExclusive @ 0x140747338
 * Callers:
 *     CmSiAcquireProcessLockedPagesCharge @ 0x140207D84 (CmSiAcquireProcessLockedPagesCharge.c)
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1402E9BBC (CmSiReleaseProcessLockedPagesCharge.c)
 *     CmSiSetProcessWorkingSetMaximum @ 0x1403741E8 (CmSiSetProcessWorkingSetMaximum.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AF568C (HvUnlockHiveFlusherExclusive.c)
 *     CmpDumpKeyToBuffer @ 0x140AF58F4 (CmpDumpKeyToBuffer.c)
 *     CmFcManagerStartRuntimePhase @ 0x140B37FF0 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 */

signed __int32 __fastcall CmSiRWLockReleaseExclusive(volatile signed __int64 *BugCheckParameter2)
{
  if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
}
