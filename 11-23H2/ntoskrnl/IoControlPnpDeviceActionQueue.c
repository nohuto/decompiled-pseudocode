/*
 * XREFs of IoControlPnpDeviceActionQueue @ 0x1403C3E7C
 * Callers:
 *     WmipRegistrationWorker @ 0x14086F0C0 (WmipRegistrationWorker.c)
 *     PopDiagDeviceRundownWorker @ 0x1408A5A10 (PopDiagDeviceRundownWorker.c)
 *     PopDirectedDripsInitializeBroadcast @ 0x1409836E8 (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     PnpLockDeviceActionQueue @ 0x1403C3E9C (PnpLockDeviceActionQueue.c)
 *     PnpUnlockDeviceActionQueue @ 0x1403C3F14 (PnpUnlockDeviceActionQueue.c)
 */

__int64 __fastcall IoControlPnpDeviceActionQueue(char a1)
{
  if ( a1 )
    return PnpLockDeviceActionQueue();
  else
    return PnpUnlockDeviceActionQueue();
}
