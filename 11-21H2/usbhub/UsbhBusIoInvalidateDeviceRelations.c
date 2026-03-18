/*
 * XREFs of UsbhBusIoInvalidateDeviceRelations @ 0x1C0035F00
 * Callers:
 *     UsbhBusConnectPdo @ 0x1C001DE04 (UsbhBusConnectPdo.c)
 *     UsbhDeregisterPdo @ 0x1C0036B38 (UsbhDeregisterPdo.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C003B740 (UsbhFdoPower_PowerFailureEntry.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C002DB18 (WPP_RECORDER_SF_.c)
 */

void __fastcall UsbhBusIoInvalidateDeviceRelations(__int64 a1, __int64 a2)
{
  PDEVICE_OBJECT *v4; // rsi

  v4 = (PDEVICE_OBJECT *)FdoExt(a1);
  Log(a1, 16, 4812662, a1, a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_((__int64)WPP_GLOBAL_Control->DeviceExtension, 0, 1u, 0xAu, (__int64)"FKh&");
  IoInvalidateDeviceRelations(v4[149], BusRelations);
}
