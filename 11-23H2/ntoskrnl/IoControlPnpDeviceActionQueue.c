/*
 * XREFs of IoControlPnpDeviceActionQueue @ 0x1403C405C
 * Callers:
 *     WmipRegistrationWorker @ 0x14086F300 (WmipRegistrationWorker.c)
 *     PopDiagDeviceRundownWorker @ 0x1408A5C60 (PopDiagDeviceRundownWorker.c)
 *     PopDirectedDripsInitializeBroadcast @ 0x1409838E8 (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     PnpLockDeviceActionQueue @ 0x1403C407C (PnpLockDeviceActionQueue.c)
 *     PnpUnlockDeviceActionQueue @ 0x1403C40F4 (PnpUnlockDeviceActionQueue.c)
 */

__int64 __fastcall IoControlPnpDeviceActionQueue(char a1)
{
  if ( a1 )
    return PnpLockDeviceActionQueue();
  else
    return PnpUnlockDeviceActionQueue();
}
