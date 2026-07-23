/*
 * XREFs of PopAcquireTransitionLockAfterSleep @ 0x140AA8ED0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     PoPushPowerStateTransitionRecordWithCallback @ 0x14058F5F4 (PoPushPowerStateTransitionRecordWithCallback.c)
 *     PopAcquireTransitionLock @ 0x14080190C (PopAcquireTransitionLock.c)
 */

void PopAcquireTransitionLockAfterSleep()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopUnlockAfterSleepLock);
  PopWaitingForTransitionLock = 1;
  if ( qword_140C3CF48 )
    PopWaitingForTransitionLock = (int)PoPushPowerStateTransitionRecordWithCallback(
                                         KeGetCurrentThread()->ApcState.Process,
                                         qword_140C3CF48,
                                         0LL,
                                         0LL) >= 0;
  PopReleaseRwLock(&PopUnlockAfterSleepLock);
  PopAcquireTransitionLock(1);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopUnlockAfterSleepLock);
  PopWaitingForTransitionLock = 0;
  PopReleaseRwLock(&PopUnlockAfterSleepLock);
}
