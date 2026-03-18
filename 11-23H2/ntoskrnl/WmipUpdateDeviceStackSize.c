/*
 * XREFs of WmipUpdateDeviceStackSize @ 0x14086C1CC
 * Callers:
 *     WmipForwardWmiIrp @ 0x1406C7480 (WmipForwardWmiIrp.c)
 *     WmipRegisterDevice @ 0x14086BF88 (WmipRegisterDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402AFF70 (KeReleaseMutex.c)
 */

LONG __fastcall WmipUpdateDeviceStackSize(CCHAR a1)
{
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  if ( WmipServiceDeviceObject->StackSize < a1 )
    WmipServiceDeviceObject->StackSize = a1;
  return KeReleaseMutex(&WmipSMMutex, 0);
}
