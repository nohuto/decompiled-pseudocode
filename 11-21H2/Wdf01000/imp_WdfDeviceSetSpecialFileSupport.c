/*
 * XREFs of imp_WdfDeviceSetSpecialFileSupport @ 0x1C002E0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0019824 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?_UsageToSpecialType@FxPkgPnp@@KA?AW4_WDF_SPECIAL_FILE_TYPE@@W4_DEVICE_USAGE_NOTIFICATION_TYPE@@@Z @ 0x1C001CB04 (-_UsageToSpecialType@FxPkgPnp@@KA-AW4_WDF_SPECIAL_FILE_TYPE@@W4_DEVICE_USAGE_NOTIFICATION_TYPE@@.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_D @ 0x1C005B340 (WPP_IFR_SF_D.c)
 */

void __fastcall imp_WdfDeviceSetSpecialFileSupport(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _DEVICE_USAGE_NOTIFICATION_TYPE FileType,
        unsigned __int8 Supported)
{
  unsigned int v7; // edx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  _FX_DRIVER_GLOBALS *v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  unsigned __int16 v12; // r9
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( (unsigned int)(FileType - 1) > 3 && FileType != DeviceUsageTypeGuestAssigned )
  {
    v12 = 16;
    v9 = pDevice->m_Globals;
LABEL_9:
    WPP_IFR_SF_qL(v9, 2u, 0x12u, v12, WPP_FxDeviceApiKm_cpp_Traceguids, Device, FileType);
    FxVerifierDbgBreakPoint(m_Globals);
    return;
  }
  if ( !_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(pDevice->m_Globals, v7, 0x1Du)
    && FileType > DeviceUsageTypeBoot )
  {
    v12 = 17;
    goto LABEL_9;
  }
  FxObjectHandleGetPtr(v9, (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  if ( (unsigned int)(FileType - 1) > 5 )
  {
    WPP_IFR_SF_D(
      pDevice->m_PkgPnp->m_Globals,
      (unsigned __int8)pDevice->m_PkgPnp,
      0xCu,
      0x23u,
      (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
      FileType);
  }
  else
  {
    v10 = FxPkgPnp::_UsageToSpecialType(FileType);
    *(_BYTE *)((unsigned int)(v10 - 1) + v11 + 273) = Supported;
  }
}
