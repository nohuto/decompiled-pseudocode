/*
 * XREFs of imp_WdfCxDeviceInitAllocate @ 0x1C0036160
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     FxValiateCx @ 0x1C00360F4 (FxValiateCx.c)
 *     ?_AllocateCxDeviceInit@WDFCXDEVICE_INIT@@SAPEAU1@PEAUWDFDEVICE_INIT@@@Z @ 0x1C003FC1C (-_AllocateCxDeviceInit@WDFCXDEVICE_INIT@@SAPEAU1@PEAUWDFDEVICE_INIT@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

WDFCXDEVICE_INIT *__fastcall imp_WdfCxDeviceInitAllocate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit)
{
  _FX_DRIVER_GLOBALS *v2; // rdi
  _FX_DRIVER_GLOBALS *v4; // rbp
  WDFCXDEVICE_INIT *v5; // rbx
  WDFCXDEVICE_INIT *CxDeviceInit; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( !DeviceInit )
    FxVerifierNullBugCheck(v2, retaddr);
  v4 = DeviceInit->DriverGlobals;
  v5 = 0LL;
  if ( (int)FxValiateCx(DeviceInit->DriverGlobals, v2) >= 0 && (int)FxVerifierCheckIrqlLevel(v4, 0) >= 0 )
  {
    CxDeviceInit = WDFCXDEVICE_INIT::_AllocateCxDeviceInit(DeviceInit);
    v5 = CxDeviceInit;
    if ( CxDeviceInit )
    {
      CxDeviceInit->ClientDriverGlobals = v4;
      CxDeviceInit->CxDriverGlobals = v2;
    }
  }
  return v5;
}
