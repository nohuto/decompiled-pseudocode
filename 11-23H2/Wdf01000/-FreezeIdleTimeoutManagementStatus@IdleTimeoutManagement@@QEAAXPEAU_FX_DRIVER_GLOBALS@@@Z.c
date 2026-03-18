/*
 * XREFs of ?FreezeIdleTimeoutManagementStatus@IdleTimeoutManagement@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C007A474
 * Callers:
 *     ?PowerPolStartingPoweredUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007B820 (-PowerPolStartingPoweredUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 */

void __fastcall IdleTimeoutManagement::FreezeIdleTimeoutManagementStatus(
        IdleTimeoutManagement *this,
        _FX_DRIVER_GLOBALS *DriverGlobals)
{
  volatile int m_IdleTimeoutStatus; // r8d
  int v4; // ebx
  void (__fastcall *ComponentIdleConditionCallback)(void *, unsigned int); // rbp
  const void **v6; // rdi
  const void *_a1; // rax
  const void *ObjectHandleUnchecked; // rax

  m_IdleTimeoutStatus = this->m_IdleTimeoutStatus;
  v4 = this->m_IdleTimeoutStatus | 1;
  ComponentIdleConditionCallback = this[-2].m_PoxSettings[1].ComponentIdleConditionCallback;
  v6 = (const void **)((char *)ComponentIdleConditionCallback + 144);
  if ( _InterlockedExchange(&this->m_IdleTimeoutStatus, v4) != m_IdleTimeoutStatus )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)ComponentIdleConditionCallback);
    WPP_IFR_SF_qq(DriverGlobals, 3u, 0xCu, 0xCu, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1, *v6);
    FxVerifierDbgBreakPoint(DriverGlobals);
  }
  if ( (v4 & 4) != 0 && (v4 & 2) == 0 )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)ComponentIdleConditionCallback);
    WPP_IFR_SF_qq(DriverGlobals, 3u, 0xCu, 0xDu, WPP_PowerPolicyStateMachine_cpp_Traceguids, ObjectHandleUnchecked, *v6);
    FxVerifierDbgBreakPoint(DriverGlobals);
  }
}
