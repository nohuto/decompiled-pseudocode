/*
 * XREFs of PopFanSxEntry @ 0x14059961C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     PopFanUpdateStatistics @ 0x140997754 (PopFanUpdateStatistics.c)
 */

void PopFanSxEntry()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 i; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  for ( i = PopFans; (__int64 *)i != &PopFans; i = *(_QWORD *)i )
  {
    PopAcquireRwLockExclusive(i + 400);
    PopFanUpdateStatistics(i);
    *(_BYTE *)(i + 200) = 1;
    PopReleaseRwLock((__int64 *)(i + 400));
  }
  PopReleaseRwLock((__int64 *)&PopPolicyDeviceLock);
}
