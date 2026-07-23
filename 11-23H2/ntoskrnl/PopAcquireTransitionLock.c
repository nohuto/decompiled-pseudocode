/*
 * XREFs of PopAcquireTransitionLock @ 0x14080190C
 * Callers:
 *     NtPowerInformation @ 0x140784110 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1407ED33C (PopPowerInformationInternal.c)
 *     PoInitHiberServices @ 0x140801DB8 (PoInitHiberServices.c)
 *     PopNotifyPolicyDevice @ 0x14084CFD0 (PopNotifyPolicyDevice.c)
 *     PopDirectedDripsSuspendDevices @ 0x140984014 (PopDirectedDripsSuspendDevices.c)
 *     PopWnfHibernatePolicyCallback @ 0x140989610 (PopWnfHibernatePolicyCallback.c)
 *     PopAcquireTransitionLockAfterSleep @ 0x140AA8ED0 (PopAcquireTransitionLockAfterSleep.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     PopDirectedDripsNotify @ 0x140875724 (PopDirectedDripsNotify.c)
 */

int __fastcall PopAcquireTransitionLock(int a1)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( a1 != 7 )
    PopDirectedDripsNotify(8LL, 0LL);
  LODWORD(CurrentThread) = KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
  PopTransitionLockAcquireReason = a1;
  if ( a1 != 1 )
  {
    CurrentThread = KeGetCurrentThread();
    PopTransitionLockOwnerThread = (__int64)CurrentThread;
  }
  return (int)CurrentThread;
}
