/*
 * XREFs of imp_WdfDeviceWdmAssignPowerFrameworkSettings @ 0x1C0033980
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     memset @ 0x1C000AC00 (memset.c)
 *     memmove @ 0x1C000B140 (memmove.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qddd @ 0x1C0019200 (WPP_IFR_SF_qddd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z @ 0x1C0071908 (-AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z.c)
 */

int __fastcall imp_WdfDeviceWdmAssignPowerFrameworkSettings(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_POWER_FRAMEWORK_SETTINGS *PowerFrameworkSettings)
{
  unsigned __int8 v6; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxPkgPnp *m_PkgPnp; // r14
  int v9; // ebx
  unsigned __int16 v10; // r9
  size_t _a4; // rsi
  _PO_FX_COMPONENT_V1 *Component; // rax
  _WDF_POWER_FRAMEWORK_SETTINGS pofxSettings; // [rsp+50h] [rbp-88h] BYREF
  void *retaddr; // [rsp+D8h] [rbp+0h]
  FxDevice *pDevice; // [rsp+E0h] [rbp+8h] BYREF

  pDevice = 0LL;
  memset(&pofxSettings, 0, sizeof(pofxSettings));
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !PowerFrameworkSettings )
    FxVerifierNullBugCheck(pDevice->m_Globals, retaddr);
  m_PkgPnp = pDevice->m_PkgPnp;
  if ( !m_PkgPnp->m_PowerPolicyMachine.m_Owner )
  {
    v9 = -1073741808;
    v10 = 70;
LABEL_18:
    WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, v10, WPP_FxDeviceApi_cpp_Traceguids, Device, v9);
    goto LABEL_19;
  }
  _a4 = PowerFrameworkSettings->Size;
  if ( (_DWORD)_a4 != 88 )
  {
    if ( (_DWORD)_a4 != 72 )
    {
      v9 = -1073741820;
      WPP_IFR_SF_qddd(
        pDevice->m_Globals,
        v6,
        0x12u,
        0x47u,
        WPP_FxDeviceApi_cpp_Traceguids,
        Device,
        88,
        _a4,
        -1073741820);
LABEL_19:
      FxVerifierDbgBreakPoint(m_Globals);
      return v9;
    }
    memset(&pofxSettings, 0, sizeof(pofxSettings));
    memmove(&pofxSettings, PowerFrameworkSettings, _a4);
    pofxSettings.PoFxDeviceFlags = 0LL;
    pofxSettings.DirectedPoFxEnabled = WdfFalse;
    pofxSettings.Size = 88;
    if ( unk_1C009FF62 || *(_DWORD *)(*(_QWORD *)&DriverGlobals[-3].DriverName[8] + 20LL) >= 0x1Fu )
      pofxSettings.DirectedPoFxEnabled = WdfTrue;
    PowerFrameworkSettings = &pofxSettings;
  }
  Component = PowerFrameworkSettings->Component;
  if ( Component )
  {
    if ( !Component->IdleStateCount )
    {
      v10 = 73;
LABEL_17:
      v9 = -1073741811;
      goto LABEL_18;
    }
    if ( !Component->IdleStates )
    {
      v10 = 74;
      goto LABEL_17;
    }
  }
  return FxPkgPnp::AssignPowerFrameworkSettings(m_PkgPnp, PowerFrameworkSettings);
}
