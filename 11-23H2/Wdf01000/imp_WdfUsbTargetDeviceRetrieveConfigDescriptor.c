/*
 * XREFs of imp_WdfUsbTargetDeviceRetrieveConfigDescriptor @ 0x1C0058EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?GetConfigDescriptor@FxUsbDevice@@QEAAJPEAXPEAG@Z @ 0x1C005D540 (-GetConfigDescriptor@FxUsbDevice@@QEAAJPEAXPEAG@Z.c)
 */

int __fastcall imp_WdfUsbTargetDeviceRetrieveConfigDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        void *ConfigDescriptor,
        unsigned __int16 *ConfigDescriptorLength)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int result; // eax
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]
  FxUsbDevice *pUsbDevice; // [rsp+30h] [rbp+8h] BYREF

  pUsbDevice = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice);
  m_Globals = pUsbDevice->m_Globals;
  if ( !ConfigDescriptorLength )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( result >= 0 )
    return FxUsbDevice::GetConfigDescriptor(pUsbDevice, ConfigDescriptor, ConfigDescriptorLength);
  return result;
}
