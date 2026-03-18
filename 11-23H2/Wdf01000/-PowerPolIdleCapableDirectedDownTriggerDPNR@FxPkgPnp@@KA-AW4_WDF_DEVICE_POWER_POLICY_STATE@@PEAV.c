/*
 * XREFs of ?PowerPolIdleCapableDirectedDownTriggerDPNR@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007AB10
 * Callers:
 *     <none>
 * Callees:
 *     ?SimulateDevicePowerNotRequired@FxPoxInterface@@QEAAXXZ @ 0x1C0083EE0 (-SimulateDevicePowerNotRequired@FxPoxInterface@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolIdleCapableDirectedDownTriggerDPNR(FxPkgPnp *This)
{
  FxPoxInterface::SimulateDevicePowerNotRequired(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  return 1472LL;
}
