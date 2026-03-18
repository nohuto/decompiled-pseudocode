/*
 * XREFs of Device_IsSecureDevice @ 0x1C001A478
 * Callers:
 *     Controller_CreateWdfDevice @ 0x1C006EFBC (Controller_CreateWdfDevice.c)
 *     Controller_WdfEvtDeviceAdd @ 0x1C006FA60 (Controller_WdfEvtDeviceAdd.c)
 *     Controller_Create @ 0x1C00712C4 (Controller_Create.c)
 * Callees:
 *     <none>
 */

bool __fastcall Device_IsSecureDevice(__int64 a1)
{
  return (*(_DWORD *)(a1 + 28) & 0x100000) != 0;
}
