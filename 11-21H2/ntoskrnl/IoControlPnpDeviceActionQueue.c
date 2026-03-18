/*
 * XREFs of IoControlPnpDeviceActionQueue @ 0x140253DB4
 * Callers:
 *     WmipRegistrationWorker @ 0x1406DAF30 (WmipRegistrationWorker.c)
 *     PopDirectedDripsInitializeBroadcast @ 0x14098BDD4 (PopDirectedDripsInitializeBroadcast.c)
 *     PopDiagDeviceRundownWorker @ 0x140990BB0 (PopDiagDeviceRundownWorker.c)
 * Callees:
 *     PnpUnlockDeviceActionQueue @ 0x140253DD4 (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x140253E78 (PnpLockDeviceActionQueue.c)
 */

__int64 __fastcall IoControlPnpDeviceActionQueue(char a1)
{
  if ( a1 )
    return PnpLockDeviceActionQueue();
  else
    return PnpUnlockDeviceActionQueue();
}
