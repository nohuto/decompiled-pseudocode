/*
 * XREFs of ?InvokeCompanionCallback@FxPnpDeviceD0Exit@@MEAAJPEAVFxCompanionTarget@@@Z @ 0x1C008E0C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPnpDeviceD0Exit::InvokeCompanionCallback(
        FxPnpDeviceD0Exit *this,
        FxCompanionTarget *CompanionTarget)
{
  int _a3; // eax
  unsigned int v4; // ebx

  _a3 = CompanionTarget->m_RdDeviceCompanion->SendD0Exit(CompanionTarget->m_RdDeviceCompanion, this->m_TargetState);
  v4 = _a3;
  if ( _a3 < 0 )
    WPP_IFR_SF_qqd(
      this->m_PkgPnp->m_Globals,
      2u,
      0xCu,
      0xBu,
      WPP_PnPCallbacksKm_cpp_Traceguids,
      this->m_Device,
      this->m_PkgPnp->m_DeviceBase->m_DeviceObject.m_DeviceObject,
      _a3);
  return v4;
}
