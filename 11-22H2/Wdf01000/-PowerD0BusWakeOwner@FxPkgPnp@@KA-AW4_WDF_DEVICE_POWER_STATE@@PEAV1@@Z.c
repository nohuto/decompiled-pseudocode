/*
 * XREFs of ?PowerD0BusWakeOwner@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006E100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::PowerD0BusWakeOwner(FxPkgPnp *This)
{
  if ( (This->m_DeviceBase->m_DeviceObject.m_DeviceObject->Flags & 0x2000) != 0 )
    return This->m_SharedPower.m_WaitWakeIrp != 0LL ? 773 : 873;
  else
    return 787LL;
}
