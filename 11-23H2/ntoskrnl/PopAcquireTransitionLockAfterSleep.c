/*
 * XREFs of PopAcquireTransitionLockAfterSleep @ 0x140AA9060
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     PoPushPowerStateTransitionRecordWithCallback @ 0x14058F104 (PoPushPowerStateTransitionRecordWithCallback.c)
 *     PopAcquireTransitionLock @ 0x14080163C (PopAcquireTransitionLock.c)
 */

void PopAcquireTransitionLockAfterSleep()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopUnlockAfterSleepLock);
  PopWaitingForTransitionLock = 1;
  if ( qword_140C3D288 )
    PopWaitingForTransitionLock = (int)PoPushPowerStateTransitionRecordWithCallback(
                                         KeGetCurrentThread()->ApcState.Process,
                                         qword_140C3D288,
                                         0LL,
                                         0LL) >= 0;
  PopReleaseRwLock(&PopUnlockAfterSleepLock);
  PopAcquireTransitionLock(1);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopUnlockAfterSleepLock);
  PopWaitingForTransitionLock = 0;
  PopReleaseRwLock(&PopUnlockAfterSleepLock);
}
