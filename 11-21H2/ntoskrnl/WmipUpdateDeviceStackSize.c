/*
 * XREFs of WmipUpdateDeviceStackSize @ 0x1406C8550
 * Callers:
 *     WmipRegisterDevice @ 0x1406C82F8 (WmipRegisterDevice.c)
 *     WmipForwardWmiIrp @ 0x140783A9C (WmipForwardWmiIrp.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 */

LONG __fastcall WmipUpdateDeviceStackSize(CCHAR a1)
{
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  if ( WmipServiceDeviceObject->StackSize < a1 )
    WmipServiceDeviceObject->StackSize = a1;
  return KeReleaseMutex(&WmipSMMutex, 0);
}
