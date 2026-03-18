/*
 * XREFs of ?PowerRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z @ 0x1C0010236
 * Callers:
 *     ?PowerRequiredCallback@FxPoxInterface@@CAXPEAX@Z @ 0x1C0010300 (-PowerRequiredCallback@FxPoxInterface@@CAXPEAX@Z.c)
 *     ?SimulateDevicePowerRequired@FxPoxInterface@@QEAAXXZ @ 0x1C0083F0C (-SimulateDevicePowerRequired@FxPoxInterface@@QEAAXXZ.c)
 * Callees:
 *     ?DprProcessEventFromPoxCallback@FxPoxInterface@@AEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C0010136 (-DprProcessEventFromPoxCallback@FxPoxInterface@@AEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C008485C (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 */

void __fastcall FxPoxInterface::PowerRequiredCallbackWorker(
        FxPoxInterface *this,
        unsigned __int8 InvokedFromPoxCallback)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  KIRQL v5; // al

  m_Owner = this->m_PkgPnp->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
    _InterlockedCompareExchange((volatile signed __int32 *)&m_Owner->m_DevicePowerIrpTracker.m_D0IrpReasonHint, 19, 5);
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_DevicePowerRequiredLock.m_Lock);
  this->m_DevicePowerRequired = 1;
  KeReleaseSpinLock(&this->m_DevicePowerRequiredLock.m_Lock, v5);
  if ( InvokedFromPoxCallback )
    FxPoxInterface::DprProcessEventFromPoxCallback(this, DprEventPoxRequiresPower);
  else
    FxDevicePwrRequirementMachine::ProcessEvent(this->m_DevicePowerRequirementMachine, DprEventPoxRequiresPower);
}
