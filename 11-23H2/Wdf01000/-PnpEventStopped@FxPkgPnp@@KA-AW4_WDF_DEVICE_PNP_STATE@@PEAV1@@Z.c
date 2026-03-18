/*
 * XREFs of ?PnpEventStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006B510
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z @ 0x1C006B6BC (-PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z.c)
 *     ?PnpReleaseHardware@FxPkgPnp@@IEAAJXZ @ 0x1C006C2A4 (-PnpReleaseHardware@FxPkgPnp@@IEAAJXZ.c)
 *     ?NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ @ 0x1C00735DC (-NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventStopped(FxPkgPnp *This)
{
  unsigned __int8 v2; // dl
  unsigned int v3; // edi
  FxDeviceBase *m_DeviceBase; // rcx

  if ( FxPkgPnp::PnpReleaseHardware(This) < 0 )
  {
    m_DeviceBase = This->m_DeviceBase;
    This->m_InternalFailure = 1;
    IoInvalidateDeviceState(m_DeviceBase->m_PhysicalDevice.m_DeviceObject);
    v3 = 299;
  }
  else
  {
    FxPkgPnp::NotifyResourceobjectsToReleaseResources(This);
    v3 = 314;
  }
  FxPkgPnp::PnpFinishProcessingIrp(This, v2);
  return v3;
}
