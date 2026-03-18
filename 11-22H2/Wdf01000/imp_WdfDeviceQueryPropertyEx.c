/*
 * XREFs of imp_WdfDeviceQueryPropertyEx @ 0x1C0033030
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C0017C28 (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ?_QueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@K3PEAK5@Z @ 0x1C003D170 (-_QueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropert.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfDeviceQueryPropertyEx(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_PROPERTY_DATA *DeviceProperty,
        unsigned int BufferLength,
        void *PropertyBuffer,
        unsigned int *RequiredSize,
        unsigned int *Type)
{
  unsigned __int8 v9; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int v11; // edi
  unsigned __int16 v13; // r9
  FxPropertyType _a1; // [rsp+20h] [rbp-38h]
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxDevice *pDevice; // [rsp+60h] [rbp+8h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !DeviceProperty )
    FxVerifierNullBugCheck(pDevice->m_Globals, retaddr);
  if ( DeviceProperty->Size != 24 )
  {
    v11 = -1073741820;
    WPP_IFR_SF_DDd(m_Globals, v9, 0xCu, 0x36u, WPP_FxDeviceApi_cpp_Traceguids, DeviceProperty->Size, 24, -1073741820);
    return v11;
  }
  v11 = FxVerifierCheckIrqlLevel(pDevice->m_Globals, 1u);
  if ( v11 < 0 )
  {
    FxVerifierDbgBreakPoint(m_Globals);
    return v11;
  }
  if ( !RequiredSize )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( !Type )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( BufferLength )
  {
    if ( !PropertyBuffer )
    {
      v13 = 55;
LABEL_15:
      v11 = -1073741811;
      WPP_IFR_SF_D(m_Globals, 2u, 0x12u, v13, WPP_FxDeviceApi_cpp_Traceguids, 0xC000000D);
      return v11;
    }
  }
  else if ( PropertyBuffer )
  {
    v13 = 56;
    goto LABEL_15;
  }
  return FxDevice::_QueryPropertyEx(
           m_Globals,
           0LL,
           pDevice,
           DeviceProperty,
           _a1,
           BufferLength,
           PropertyBuffer,
           RequiredSize,
           Type);
}
