/*
 * XREFs of PopReleaseAwaymodeLock @ 0x140AA9018
 * Callers:
 *     PopPowerRequestCallbackAwayModeRequired @ 0x140981530 (PopPowerRequestCallbackAwayModeRequired.c)
 *     PopIssueActionRequest @ 0x140989CA4 (PopIssueActionRequest.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExReleasePushLockEx @ 0x140231190 (ExReleasePushLockEx.c)
 */

_QWORD *PopReleaseAwaymodeLock()
{
  if ( (struct _KTHREAD *)PopAwaymodeLockExclusiveThread == KeGetCurrentThread() )
    PopAwaymodeLockExclusiveThread = 0LL;
  ExReleasePushLockEx((__int64 *)&PopAwaymodeLock, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
