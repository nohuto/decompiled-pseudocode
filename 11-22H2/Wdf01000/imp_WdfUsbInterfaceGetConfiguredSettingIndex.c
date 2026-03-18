/*
 * XREFs of imp_WdfUsbInterfaceGetConfiguredSettingIndex @ 0x1C0057B00
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetConfiguredSettingIndex@FxUsbInterface@@QEAAEXZ @ 0x1C005EF70 (-GetConfiguredSettingIndex@FxUsbInterface@@QEAAEXZ.c)
 */

unsigned __int8 __fastcall imp_WdfUsbInterfaceGetConfiguredSettingIndex(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBINTERFACE__ *UsbInterface)
{
  FxUsbInterface *pUsbInterface; // [rsp+30h] [rbp+8h] BYREF

  pUsbInterface = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)UsbInterface,
    0x1204u,
    (void **)&pUsbInterface);
  return FxUsbInterface::GetConfiguredSettingIndex(pUsbInterface);
}
