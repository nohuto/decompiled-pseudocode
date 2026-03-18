/*
 * XREFs of imp_WdfUsbTargetDeviceCreateWithParameters @ 0x1C0058760
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C0017C28 (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     FxUsbTargetDeviceCreate @ 0x1C0057F20 (FxUsbTargetDeviceCreate.c)
 */

__int64 __fastcall imp_WdfUsbTargetDeviceCreateWithParameters(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_USB_DEVICE_CREATE_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFUSBDEVICE__ **UsbDevice)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]
  FxDeviceBase *pDevice; // [rsp+50h] [rbp+8h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1030u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !Config )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( Config->Size == 8 )
    return FxUsbTargetDeviceCreate(m_Globals, pDevice, Config->USBDClientContractVersion, Attributes, UsbDevice);
  WPP_IFR_SF_DDd(
    m_Globals,
    (unsigned __int8)WPP_FxUsbDeviceAPI_cpp_Traceguids,
    0xEu,
    0xAu,
    WPP_FxUsbDeviceAPI_cpp_Traceguids,
    Config->Size,
    8,
    -1073741820);
  return 3221225476LL;
}
