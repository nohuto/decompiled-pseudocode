/*
 * XREFs of ?PowerPolicyChildrenCanPowerUp@FxPkgPnp@@AEAAXXZ @ 0x1C007D1B4
 * Callers:
 *     ?PowerPolDevicePowerRequestFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007A9F0 (-PowerPolDevicePowerRequestFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStartingDecideS0Wake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007B700 (-PowerPolStartingDecideS0Wake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z @ 0x1C007CF58 (-PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z.c)
 * Callees:
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C000134C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ @ 0x1C007D5B4 (-PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ.c)
 */

void __fastcall FxPkgPnp::PowerPolicyChildrenCanPowerUp(FxPkgPnp *this, _FX_DRIVER_GLOBALS *a2)
{
  FxEnumerationInfo *m_EnumInfo; // rcx
  FxEnumerationInfo *v4; // rcx

  m_EnumInfo = this->m_EnumInfo;
  if ( m_EnumInfo )
  {
    if ( this->m_PowerPolicyMachine.m_Owner )
    {
      FxWaitLockInternal::AcquireLock(&m_EnumInfo->m_PowerStateLock, a2, 0LL);
      this->m_PowerPolicyMachine.m_Owner->m_ChildrenCanPowerUp = 1;
      v4 = this->m_EnumInfo;
      v4->m_PowerStateLock.m_OwningThread = 0LL;
      KeSetEvent(&v4->m_PowerStateLock.m_Event.m_Event, 0, 0);
      KeLeaveCriticalRegion();
      FxPkgPnp::PowerPolicyPostParentToD0ToChildren(this);
    }
  }
}
