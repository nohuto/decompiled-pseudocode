/*
 * XREFs of ?PowerPolCheckPowerPageable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007A8E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::PowerPolCheckPowerPageable(FxPkgPnp *This)
{
  return (This->m_DeviceBase->m_DeviceObject.m_DeviceObject->Flags & 0x2000) != 0 ? 1297 : 34074;
}
