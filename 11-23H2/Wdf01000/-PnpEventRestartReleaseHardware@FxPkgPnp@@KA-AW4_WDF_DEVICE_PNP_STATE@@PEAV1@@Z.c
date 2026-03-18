/*
 * XREFs of ?PnpEventRestartReleaseHardware@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006B3B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?PnpReleaseHardware@FxPkgPnp@@IEAAJXZ @ 0x1C006C2A4 (-PnpReleaseHardware@FxPkgPnp@@IEAAJXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventRestartReleaseHardware(FxPkgPnp *This)
{
  int v2; // edi
  FxDeviceBase *m_DeviceBase; // rcx
  __int64 result; // rax

  v2 = FxPkgPnp::PnpReleaseHardware(This);
  if ( v2 >= 0 )
    return This->PnpSendStartDeviceDownTheStackOverload(This) != 0 ? 307 : 314;
  m_DeviceBase = This->m_DeviceBase;
  This->m_InternalFailure = 1;
  IoInvalidateDeviceState(m_DeviceBase->m_PhysicalDevice.m_DeviceObject);
  result = 299LL;
  This->m_PendingPnPIrp->IoStatus.Status = v2;
  return result;
}
