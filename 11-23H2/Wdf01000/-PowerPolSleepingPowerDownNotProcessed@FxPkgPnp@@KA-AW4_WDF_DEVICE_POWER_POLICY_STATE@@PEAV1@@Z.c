/*
 * XREFs of ?PowerPolSleepingPowerDownNotProcessed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007B070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::PowerPolSleepingPowerDownNotProcessed(FxPkgPnp *This)
{
  This->m_InternalFailure = 1;
  IoInvalidateDeviceState(This->m_DeviceBase->m_PhysicalDevice.m_DeviceObject);
  return 1295LL;
}
