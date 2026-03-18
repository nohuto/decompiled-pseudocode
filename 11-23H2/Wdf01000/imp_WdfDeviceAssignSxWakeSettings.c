/*
 * XREFs of imp_WdfDeviceAssignSxWakeSettings @ 0x1C00321D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_DDd @ 0x1C0017C28 (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z @ 0x1C0074DA4 (-PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z.c)
 */

int __fastcall imp_WdfDeviceAssignSxWakeSettings(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS *Settings)
{
  unsigned __int8 IndicateChildWakeOnParentWake; // di
  unsigned __int8 v6; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  FxPkgPnp *m_PkgPnp; // r11
  int v9; // ebx
  unsigned int Size; // ecx
  unsigned __int8 ArmForWakeIfChildrenAreArmedForWake; // r8
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF

  IndicateChildWakeOnParentWake = 0;
  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !Settings )
    FxVerifierNullBugCheck(pDevice->m_Globals, retaddr);
  m_PkgPnp = pDevice->m_PkgPnp;
  if ( !m_PkgPnp->m_PowerPolicyMachine.m_Owner )
  {
    v9 = -1073741808;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, 0x11u, WPP_FxDeviceApi_cpp_Traceguids, Device, -1073741808);
    return v9;
  }
  Size = Settings->Size;
  if ( ((Settings->Size - 16) & 0xFFFFFFFB) != 0 )
  {
    v9 = -1073741820;
    WPP_IFR_SF_DDd(m_Globals, v6, 0x12u, 0x12u, WPP_FxDeviceApi_cpp_Traceguids, 20, Size, -1073741820);
    return v9;
  }
  if ( (unsigned int)(Settings->DxState - 2) > 3
    || (unsigned int)(Settings->UserControlOfWakeSettings - 1) > 1
    || Settings->Enabled > (unsigned int)WdfUseDefault )
  {
    v9 = -1073741811;
    WPP_IFR_SF_D(m_Globals, 2u, 0x12u, 0x13u, WPP_FxDeviceApi_cpp_Traceguids, 0xC000000D);
    return v9;
  }
  if ( Size <= 0x10 )
  {
    ArmForWakeIfChildrenAreArmedForWake = 0;
  }
  else
  {
    ArmForWakeIfChildrenAreArmedForWake = Settings->ArmForWakeIfChildrenAreArmedForWake;
    IndicateChildWakeOnParentWake = Settings->IndicateChildWakeOnParentWake;
  }
  return FxPkgPnp::PowerPolicySetSxWakeSettings(
           m_PkgPnp,
           Settings,
           ArmForWakeIfChildrenAreArmedForWake,
           IndicateChildWakeOnParentWake);
}
