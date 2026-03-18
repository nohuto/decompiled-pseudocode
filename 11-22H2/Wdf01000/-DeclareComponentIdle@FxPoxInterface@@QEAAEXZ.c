/*
 * XREFs of ?DeclareComponentIdle@FxPoxInterface@@QEAAEXZ @ 0x1C0083B74
 * Callers:
 *     ?PowerPolIdleCapableDeviceIdle@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007AAD0 (-PowerPolIdleCapableDeviceIdle@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolIdleCapableTimerNotExpiredDirectedDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007AB70 (-PowerPolIdleCapableTimerNotExpiredDirectedDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@.c)
 *     ?PowerPolWakeCapableDeviceIdle@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007CCF0 (-PowerPolWakeCapableDeviceIdle@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolWakeCapableTimerNotExpiredDirectedDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007CD30 (-PowerPolWakeCapableTimerNotExpiredDirectedDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall FxPoxInterface::DeclareComponentIdle(FxPoxInterface *this)
{
  char v1; // bl

  v1 = 0;
  if ( (this->m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) == 0 )
    return 1;
  PoFxIdleComponent(this->m_PoHandle, 0LL, 0LL);
  return v1;
}
