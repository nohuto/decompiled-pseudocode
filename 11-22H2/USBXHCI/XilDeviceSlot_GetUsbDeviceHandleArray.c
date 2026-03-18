/*
 * XREFs of XilDeviceSlot_GetUsbDeviceHandleArray @ 0x1C0038110
 * Callers:
 *     UsbDevice_SetDeviceDisabled @ 0x1C000FD7C (UsbDevice_SetDeviceDisabled.c)
 *     Controller_InitiateRecovery @ 0x1C0033890 (Controller_InitiateRecovery.c)
 *     DeviceSlot_LocateDeviceByPortPath @ 0x1C0037BFC (DeviceSlot_LocateDeviceByPortPath.c)
 *     Controller_TelemetryAddControllerData @ 0x1C0078B30 (Controller_TelemetryAddControllerData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilDeviceSlot_GetUsbDeviceHandleArray(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 80) )
    return *(_QWORD *)(a1 + 24);
  else
    return *(_QWORD *)(a1 + 72);
}
