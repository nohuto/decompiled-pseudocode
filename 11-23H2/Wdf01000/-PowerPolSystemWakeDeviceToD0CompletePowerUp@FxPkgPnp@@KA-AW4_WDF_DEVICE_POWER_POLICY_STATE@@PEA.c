/*
 * XREFs of ?PowerPolSystemWakeDeviceToD0CompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007BF00
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C006F604 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ @ 0x1C0083BBC (-DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ.c)
 *     ?SimulateDevicePowerRequired@FxPoxInterface@@QEAAXXZ @ 0x1C0083F0C (-SimulateDevicePowerRequired@FxPoxInterface@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSystemWakeDeviceToD0CompletePowerUp(FxPkgPnp *This)
{
  FxPoxInterface::SimulateDevicePowerRequired(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  FxPoxInterface::DeviceIsPoweredOn(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  FxPkgPnp::PowerProcessEvent(This, 0x800u, 0);
  return 1472LL;
}
