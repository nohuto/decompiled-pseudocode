/*
 * XREFs of imp_WdfDeviceInitAssignName @ 0x1C002EB50
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000153C (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C003BC2C (-AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfDeviceInitAssignName(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _UNICODE_STRING *DeviceName)
{
  int result; // eax
  FxString *v6; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  result = FxVerifierCheckIrqlLevel(DeviceInit->DriverGlobals, 0);
  if ( result >= 0 )
  {
    if ( DeviceName )
    {
      result = FxValidateUnicodeString(DeviceInit->DriverGlobals, DeviceName);
      if ( result >= 0 )
        return WDFDEVICE_INIT::AssignName(DeviceInit, DeviceInit->DriverGlobals, DeviceName);
    }
    else
    {
      v6 = DeviceInit->DeviceName;
      if ( v6 )
      {
        v6->Release(v6, 0LL, 232, "minkernel\\wdf\\framework\\shared\\core\\fxdeviceinitapi.cpp");
        DeviceInit->DeviceName = 0LL;
      }
      if ( DeviceInit->InitType == FxDeviceInitTypePdo )
        DeviceInit->Characteristics |= 0x80u;
      return 0;
    }
  }
  return result;
}
