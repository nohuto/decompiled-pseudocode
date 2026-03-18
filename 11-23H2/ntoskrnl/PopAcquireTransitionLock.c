/*
 * XREFs of PopAcquireTransitionLock @ 0x14080163C
 * Callers:
 *     NtPowerInformation @ 0x140783F20 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1407ED06C (PopPowerInformationInternal.c)
 *     PoInitHiberServices @ 0x140801AE8 (PoInitHiberServices.c)
 *     PopNotifyPolicyDevice @ 0x14084CCD0 (PopNotifyPolicyDevice.c)
 *     PopDirectedDripsSuspendDevices @ 0x140983E14 (PopDirectedDripsSuspendDevices.c)
 *     PopWnfHibernatePolicyCallback @ 0x140989410 (PopWnfHibernatePolicyCallback.c)
 *     PopAcquireTransitionLockAfterSleep @ 0x140AA9060 (PopAcquireTransitionLockAfterSleep.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     PopDirectedDripsNotify @ 0x1408754E4 (PopDirectedDripsNotify.c)
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
