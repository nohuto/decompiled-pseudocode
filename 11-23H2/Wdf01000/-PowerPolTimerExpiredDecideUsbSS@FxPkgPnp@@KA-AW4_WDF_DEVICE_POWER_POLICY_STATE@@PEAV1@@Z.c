/*
 * XREFs of ?PowerPolTimerExpiredDecideUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007C1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyDevicePowerDown@FxPoxInterface@@QEAAJXZ @ 0x1C0083E10 (-NotifyDevicePowerDown@FxPoxInterface@@QEAAJXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredDecideUsbSS(FxPkgPnp *This)
{
  bool v2; // di
  __int64 result; // rax

  v2 = _InterlockedCompareExchange(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface.m_DirectedTransitionActive, 0, 0) != 0;
  if ( FxPoxInterface::NotifyDevicePowerDown(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface) < 0 )
    return 1413LL;
  if ( !This->m_PowerPolicyMachine.m_Owner->m_IdleSettings.UsbSSCapable )
    return 1331LL;
  result = 1447LL;
  if ( !v2 )
    return 1333LL;
  return result;
}
