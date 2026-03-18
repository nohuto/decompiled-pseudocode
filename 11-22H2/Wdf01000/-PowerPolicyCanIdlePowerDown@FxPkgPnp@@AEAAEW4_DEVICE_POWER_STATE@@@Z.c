/*
 * XREFs of ?PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z @ 0x1C007CF58
 * Callers:
 *     ?PowerPolTimerExpiredNoWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007C270 (-PowerPolTimerExpiredNoWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolTimerExpiredWakeCapablePowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007C4F0 (-PowerPolTimerExpiredWakeCapablePowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@.c)
 * Callees:
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C000134C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 *     ?PowerPolicyChildrenCanPowerUp@FxPkgPnp@@AEAAXXZ @ 0x1C007D1B4 (-PowerPolicyChildrenCanPowerUp@FxPkgPnp@@AEAAXXZ.c)
 *     ?PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@W4RequestDIrpReason@@@Z @ 0x1C007DCA0 (-PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestActi.c)
 */

char __fastcall FxPkgPnp::PowerPolicyCanIdlePowerDown(FxPkgPnp *this, _FX_DRIVER_GLOBALS *DxState)
{
  _DEVICE_POWER_STATE v3; // esi
  FxEnumerationInfo *m_EnumInfo; // rcx
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  char v6; // bl
  const void *_a1; // rax
  __int64 v8; // rdx
  int _a3; // r8d
  FxEnumerationInfo *v10; // rcx

  v3 = (int)DxState;
  m_EnumInfo = this->m_EnumInfo;
  if ( !m_EnumInfo )
  {
    v6 = 1;
LABEL_8:
    if ( FxPkgPnp::PowerPolicySendDevicePowerRequest(this, v3, NoRetry, RequestDxForIdleOut) < 0 )
    {
      FxPkgPnp::PowerPolicyChildrenCanPowerUp(this);
      return 0;
    }
    return v6;
  }
  FxWaitLockInternal::AcquireLock(&m_EnumInfo->m_PowerStateLock, DxState, 0LL);
  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner->m_ChildrenPoweredOnCount )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qid(
      this->m_Globals,
      4u,
      0xCu,
      0x34u,
      WPP_PowerPolicyStateMachine_cpp_Traceguids,
      _a1,
      *(_QWORD *)(v8 + 144),
      _a3);
    v6 = 0;
  }
  else
  {
    m_Owner->m_ChildrenCanPowerUp = 0;
    v6 = 1;
  }
  v10 = this->m_EnumInfo;
  v10->m_PowerStateLock.m_OwningThread = 0LL;
  KeSetEvent(&v10->m_PowerStateLock.m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
  if ( v6 )
    goto LABEL_8;
  return v6;
}
