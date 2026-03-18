/*
 * XREFs of ?PowerPolWakeCapableTimerNotExpiredDirectedDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007CD30
 * Callers:
 *     <none>
 * Callees:
 *     ?DeclareComponentIdle@FxPoxInterface@@QEAAEXZ @ 0x1C0083B74 (-DeclareComponentIdle@FxPoxInterface@@QEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolWakeCapableTimerNotExpiredDirectedDown(FxPkgPnp *This)
{
  FxPoxInterface::DeclareComponentIdle(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  return 1442LL;
}
