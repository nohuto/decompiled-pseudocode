/*
 * XREFs of ?PowerPolTimerExpiredNoWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007C270
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z @ 0x1C007CF58 (-PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z.c)
 *     ?NotifyDevicePowerDown@FxPoxInterface@@QEAAJXZ @ 0x1C0083E10 (-NotifyDevicePowerDown@FxPoxInterface@@QEAAJXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredNoWake(FxPkgPnp *This)
{
  int v2; // eax
  FxPowerPolicyOwnerSettings *m_Owner; // r8

  v2 = FxPoxInterface::NotifyDevicePowerDown(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  m_Owner = This->m_PowerPolicyMachine.m_Owner;
  if ( v2 >= 0 )
    return FxPkgPnp::PowerPolicyCanIdlePowerDown(This, m_Owner->m_IdleSettings.DxState) != 0 ? 1472 : 1416;
  _InterlockedCompareExchange(&m_Owner->m_PoxInterface.m_DirectedTransitionActive, 0, 0);
  return 1426LL;
}
