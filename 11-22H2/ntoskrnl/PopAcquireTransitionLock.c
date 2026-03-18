/*
 * XREFs of PopAcquireTransitionLock @ 0x140802E90
 * Callers:
 *     NtPowerInformation @ 0x140784430 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1407ED5EC (PopPowerInformationInternal.c)
 *     PoInitHiberServices @ 0x14080406C (PoInitHiberServices.c)
 *     PopNotifyPolicyDevice @ 0x14084DF30 (PopNotifyPolicyDevice.c)
 *     PopDirectedDripsSuspendDevices @ 0x140983EC4 (PopDirectedDripsSuspendDevices.c)
 *     PopWnfHibernatePolicyCallback @ 0x1409894C0 (PopWnfHibernatePolicyCallback.c)
 *     PopAcquireTransitionLockAfterSleep @ 0x140AA9120 (PopAcquireTransitionLockAfterSleep.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     PopDirectedDripsNotify @ 0x1408759B4 (PopDirectedDripsNotify.c)
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
