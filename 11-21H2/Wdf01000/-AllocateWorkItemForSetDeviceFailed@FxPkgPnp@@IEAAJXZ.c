/*
 * XREFs of ?AllocateWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAJXZ @ 0x1C00298B0
 * Callers:
 *     ?QueryForReenumerationInterface@FxPkgPdo@@EEAAJXZ @ 0x1C00297F0 (-QueryForReenumerationInterface@FxPkgPdo@@EEAAJXZ.c)
 *     ?QueryForReenumerationInterface@FxPkgFdo@@EEAAJXZ @ 0x1C0029810 (-QueryForReenumerationInterface@FxPkgFdo@@EEAAJXZ.c)
 * Callees:
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C00199A0 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 */

__int64 __fastcall FxPkgPnp::AllocateWorkItemForSetDeviceFailed(FxPkgPnp *this)
{
  int _a1; // edi

  if ( this->m_SetDeviceFailedAttemptRestartWorkItem )
  {
    WPP_IFR_SF_(this->m_Globals, 4u, 0xCu, 0xAu, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids);
    return 0LL;
  }
  else
  {
    _a1 = FxSystemWorkItem::_Create(
            this->m_Globals,
            this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
            &this->m_SetDeviceFailedAttemptRestartWorkItem);
    if ( _a1 < 0 )
      WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0xBu, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, _a1);
    return (unsigned int)_a1;
  }
}
