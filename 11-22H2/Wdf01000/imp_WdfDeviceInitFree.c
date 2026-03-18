/*
 * XREFs of imp_WdfDeviceInitFree @ 0x1C002EFD0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GWDFDEVICE_INIT@@QEAAPEAXI@Z @ 0x1C002E9A8 (--_GWDFDEVICE_INIT@@QEAAPEAXI@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceInitFree(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE_INIT *DeviceInit)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  if ( !DeviceInit->CreatedOnStack )
    WDFDEVICE_INIT::`scalar deleting destructor'(DeviceInit);
}
