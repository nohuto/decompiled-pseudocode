/*
 * XREFs of imp_WdfControlDeviceInitSetShutdownNotification @ 0x1C002EA70
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfControlDeviceInitSetShutdownNotification(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        void (__fastcall *Notification)(WDFDEVICE__ *),
        unsigned __int8 Flags)
{
  _FX_DRIVER_GLOBALS *v4; // rbx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v4 = DeviceInit->DriverGlobals;
  if ( !Notification )
    FxVerifierNullBugCheck(v4, retaddr);
  if ( DeviceInit->InitType != FxDeviceInitTypeControlDevice )
  {
    WPP_IFR_SF_(v4, 2u, 0x12u, 0x49u, WPP_FxDeviceInitApi_cpp_Traceguids);
LABEL_7:
    FxVerifierDbgBreakPoint(v4);
    return;
  }
  if ( (Flags & 0xFC) != 0 )
  {
    WPP_IFR_SF_D(v4, 2u, 0x12u, 0x4Au, WPP_FxDeviceInitApi_cpp_Traceguids, Flags);
    goto LABEL_7;
  }
  DeviceInit->Control.Flags |= Flags;
  DeviceInit->Control.ShutdownNotification = Notification;
}
