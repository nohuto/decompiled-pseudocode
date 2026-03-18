/*
 * XREFs of ?PowerRequiredDx@FxDevicePwrRequirementMachine@@CA?AW4FxDevicePwrRequirementStates@@PEAV1@@Z @ 0x1C0084810
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C007D66C (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 */

__int64 __fastcall FxDevicePwrRequirementMachine::PowerRequiredDx(FxDevicePwrRequirementMachine *This)
{
  FxPkgPnp::PowerPolicyProcessEvent(
    This->m_PoxInterface->m_PkgPnp,
    (FxPowerPolicyEvent)(_InterlockedCompareExchange(&This->m_PoxInterface->m_DirectedTransitionActive, 0, 0) != 0
                       ? PwrPolDevicePowerRequiredDirected
                       : PwrPolDevicePowerRequired),
    0);
  return 15LL;
}
