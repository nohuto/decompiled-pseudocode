/*
 * XREFs of ?InvokeClient@FxPnpDeviceD0Entry@@MEAAJXZ @ 0x1C006CBC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qqLd @ 0x1C00581F8 (WPP_IFR_SF_qqLd.c)
 */

int (__fastcall *__fastcall FxPnpDeviceD0Entry::InvokeClient(
        FxPnpDeviceD0Entry *this))(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE)
{
  int (__fastcall *result)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE); // rax
  int v3; // eax
  unsigned int v4; // edi

  result = this->m_Method;
  if ( result )
  {
    v3 = result(this->m_Device, this->m_PreviousState);
    v4 = v3;
    if ( v3 < 0 )
      WPP_IFR_SF_qqLd(
        this->m_PkgPnp->m_Globals,
        (unsigned __int8)this->m_Device,
        0xCu,
        0xAu,
        WPP_PnpCallbacks_cpp_Traceguids,
        this->m_Device,
        this->m_PkgPnp->m_DeviceBase->m_DeviceObject.m_DeviceObject,
        this->m_PreviousState,
        v3);
    return (int (__fastcall *)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE))v4;
  }
  return result;
}
