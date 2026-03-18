/*
 * XREFs of PopFanReportBootStartDevices @ 0x140B6AF50
 * Callers:
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopSqmFanEnumeration @ 0x140857288 (PopSqmFanEnumeration.c)
 */

void PopFanReportBootStartDevices()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *i; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  for ( i = (__int64 *)PopFans; i != &PopFans; i = (__int64 *)*i )
    PopSqmFanEnumeration();
  PopReleaseRwLock((__int64 *)&PopPolicyDeviceLock);
}
