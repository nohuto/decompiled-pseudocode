/*
 * XREFs of ?PowerPolStartedIdleCapable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007B570
 * Callers:
 *     <none>
 * Callees:
 *     ?EnableTimer@FxPowerIdleMachine@@QEAAXXZ @ 0x1C0077290 (-EnableTimer@FxPowerIdleMachine@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolStartedIdleCapable(FxPkgPnp *This)
{
  FxPowerIdleMachine::EnableTimer(&This->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine);
  return 1472LL;
}
