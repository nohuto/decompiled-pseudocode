/*
 * XREFs of ?PnpEventHardwareAvailablePowerPolicyFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C00097C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::PnpEventHardwareAvailablePowerPolicyFailed(FxPkgPnp *This)
{
  This->m_PendingPnPIrp->IoStatus.Status = -1073741666;
  return 298LL;
}
