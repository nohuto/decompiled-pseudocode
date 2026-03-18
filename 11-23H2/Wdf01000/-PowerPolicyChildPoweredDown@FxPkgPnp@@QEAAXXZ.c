/*
 * XREFs of ?PowerPolicyChildPoweredDown@FxPkgPnp@@QEAAXXZ @ 0x1C008082C
 * Callers:
 *     ?PowerParentPowerDereference@FxPkgPdo@@EEAAXXZ @ 0x1C00806F0 (-PowerParentPowerDereference@FxPkgPdo@@EEAAXXZ.c)
 * Callees:
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C000134C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z @ 0x1C00088EC (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z.c)
 */

void __fastcall FxPkgPnp::PowerPolicyChildPoweredDown(FxPkgPnp *this, _FX_DRIVER_GLOBALS *a2)
{
  FxEnumerationInfo *m_EnumInfo; // rcx

  if ( this->m_PowerPolicyMachine.m_Owner )
  {
    FxWaitLockInternal::AcquireLock(&this->m_EnumInfo->m_PowerStateLock, a2, 0LL);
    --this->m_PowerPolicyMachine.m_Owner->m_ChildrenPoweredOnCount;
    m_EnumInfo = this->m_EnumInfo;
    m_EnumInfo->m_PowerStateLock.m_OwningThread = 0LL;
    KeSetEvent(&m_EnumInfo->m_PowerStateLock.m_Event.m_Event, 0, 0);
    KeLeaveCriticalRegion();
    FxPowerIdleMachine::IoDecrement(&this->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine, 0LL, 0, 0LL);
  }
}
