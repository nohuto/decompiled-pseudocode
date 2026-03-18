/*
 * XREFs of ?DirectedPowerUpFailedComplete@FxDevicePwrRequirementMachine@@CA?AW4FxDevicePwrRequirementStates@@PEAV1@@Z @ 0x1C0009AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxDevicePwrRequirementMachine::DirectedPowerUpFailedComplete(FxDevicePwrRequirementMachine *This)
{
  _InterlockedExchange(&This->m_PoxInterface->m_DirectedTransitionActive, 0);
  return 6LL;
}
