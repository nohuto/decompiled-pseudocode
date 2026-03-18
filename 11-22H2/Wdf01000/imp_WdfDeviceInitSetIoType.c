/*
 * XREFs of imp_WdfDeviceInitSetIoType @ 0x1C002F830
 * Callers:
 *     <none>
 * Callees:
 *     ?AssignIoType@WDFDEVICE_INIT@@QEAAXPEAU_WDF_IO_TYPE_CONFIG@@@Z @ 0x1C003BF44 (-AssignIoType@WDFDEVICE_INIT@@QEAAXPEAU_WDF_IO_TYPE_CONFIG@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceInitSetIoType(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_DEVICE_IO_TYPE IoType)
{
  _WDF_IO_TYPE_CONFIG ioTypeConfig; // [rsp+20h] [rbp-18h] BYREF
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  ioTypeConfig.DirectTransferThreshold = 0;
  ioTypeConfig.Size = 16;
  ioTypeConfig.DeviceControlIoType = WdfDeviceIoBuffered;
  ioTypeConfig.ReadWriteIoType = IoType;
  WDFDEVICE_INIT::AssignIoType(DeviceInit, &ioTypeConfig);
}
