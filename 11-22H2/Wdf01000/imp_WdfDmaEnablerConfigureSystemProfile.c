/*
 * XREFs of imp_WdfDmaEnablerConfigureSystemProfile @ 0x1C0018530
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C0017C28 (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_dd @ 0x1C0017D64 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ?ConfigureSystemAdapter@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_SYSTEM_PROFILE_CONFIG@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C001AF70 (-ConfigureSystemAdapter@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_SYSTEM_PROFILE_CONFIG@@W4_WDF_DMA_DIRECT.c)
 */

int __fastcall imp_WdfDmaEnablerConfigureSystemProfile(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        _WDF_DMA_SYSTEM_PROFILE_CONFIG *ProfileConfig,
        unsigned int ConfigDirection)
{
  unsigned __int8 v6; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  int v8; // ebx
  FxDmaEnabler *pDmaEnabler; // [rsp+50h] [rbp+8h] BYREF

  pDmaEnabler = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaEnabler,
    0x1400u,
    (void **)&pDmaEnabler);
  m_Globals = pDmaEnabler->m_Globals;
  if ( !ProfileConfig )
  {
    v8 = -1073741811;
    WPP_IFR_SF_D(m_Globals, 2u, 0xFu, 0x15u, WPP_FxDmaEnablerAPI_cpp_Traceguids, 0xC000000D);
LABEL_7:
    FxVerifierDbgBreakPoint(m_Globals);
    return v8;
  }
  if ( ProfileConfig->Size != 32 )
  {
    v8 = -1073741820;
    WPP_IFR_SF_DDd(m_Globals, v6, 0xFu, 0x16u, WPP_FxDmaEnablerAPI_cpp_Traceguids, ProfileConfig->Size, 32, -1073741820);
    goto LABEL_7;
  }
  if ( !ProfileConfig->DmaDescriptor )
  {
    v8 = -1073741811;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0x17u, WPP_FxDmaEnablerAPI_cpp_Traceguids, ProfileConfig, -1073741811);
    goto LABEL_7;
  }
  if ( ConfigDirection > 1 )
  {
    v8 = -1073741811;
    WPP_IFR_SF_dd(m_Globals, 2u, 0xFu, 0x18u, WPP_FxDmaEnablerAPI_cpp_Traceguids, ConfigDirection, -1073741811);
    return v8;
  }
  return FxDmaEnabler::ConfigureSystemAdapter(pDmaEnabler, ProfileConfig, (_WDF_DMA_DIRECTION)ConfigDirection);
}
