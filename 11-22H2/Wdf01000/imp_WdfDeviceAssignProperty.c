/*
 * XREFs of imp_WdfDeviceAssignProperty @ 0x1C0031F10
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C0017C28 (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ?AssignProperty@FxDevice@@QEAAJPEAXW4FxPropertyType@@KK0@Z @ 0x1C003C218 (-AssignProperty@FxDevice@@QEAAJPEAXW4FxPropertyType@@KK0@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfDeviceAssignProperty(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_PROPERTY_DATA *DeviceProperty,
        unsigned int Type,
        unsigned int BufferLength,
        void *PropertyBuffer)
{
  unsigned __int8 v8; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int v10; // edi
  FxPropertyType v12; // r8d
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !DeviceProperty )
    FxVerifierNullBugCheck(pDevice->m_Globals, retaddr);
  if ( DeviceProperty->Size != 24 )
  {
    v10 = -1073741820;
    WPP_IFR_SF_DDd(m_Globals, v8, 0xCu, 0x3Au, WPP_FxDeviceApi_cpp_Traceguids, DeviceProperty->Size, 24, -1073741820);
    return v10;
  }
  v10 = FxVerifierCheckIrqlLevel(pDevice->m_Globals, 1u);
  if ( v10 < 0 )
  {
    FxVerifierDbgBreakPoint(m_Globals);
    return v10;
  }
  if ( !BufferLength && PropertyBuffer )
  {
    v10 = -1073741811;
    WPP_IFR_SF_D(m_Globals, 2u, 0x12u, 0x3Bu, WPP_FxDeviceApi_cpp_Traceguids, 0xC000000D);
    return v10;
  }
  return FxDevice::AssignProperty(pDevice, DeviceProperty, v12, Type, BufferLength, PropertyBuffer);
}
