/*
 * XREFs of ?HandleQueryPnpDeviceStateCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C0077EF8
 * Callers:
 *     ?_PnpQueryPnpDeviceState@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0082DA0 (-_PnpQueryPnpDeviceState@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qqdq @ 0x1C0069EF8 (WPP_IFR_SF_qqdq.c)
 *     ?HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z @ 0x1C0072FFC (-HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z.c)
 */

void __fastcall FxPkgFdo::HandleQueryPnpDeviceStateCompletion(FxPkgFdo *this, FxIrp *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a3; // rax
  __int64 v6; // rdx
  unsigned int v7; // r8d
  _FX_DRIVER_GLOBALS *v8; // rcx

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x13u, WPP_fxpkgfdo_cpp_Traceguids);
  Irp->m_Irp->IoStatus.Information = (unsigned int)FxPkgPnp::HandleQueryPnpDeviceState(
                                                     this,
                                                     Irp->m_Irp->IoStatus.Information);
  _a3 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  WPP_IFR_SF_qqdq(
    this->m_Globals,
    v6,
    v7,
    0x14u,
    WPP_fxpkgfdo_cpp_Traceguids,
    _a3,
    *(const void **)(v6 + 144),
    v7,
    Irp->m_Irp);
  v8 = this->m_Globals;
  if ( v8->FxVerboseOn )
    WPP_IFR_SF_(v8, 5u, 0xCu, 0x15u, WPP_fxpkgfdo_cpp_Traceguids);
}
