/*
 * XREFs of ?StateCallback@FxPoxInterface@@CAXPEAXKK@Z @ 0x1C0084560
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 *     ?GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ @ 0x1C0083BF0 (-GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ.c)
 */

void __fastcall FxPoxInterface::StateCallback(FxPoxInterface *Context, unsigned int Component, unsigned int State)
{
  FxPkgPnp *m_PkgPnp; // rdx
  const void *_a1; // rax
  __int64 v8; // rdx
  _FX_DRIVER_GLOBALS *v9; // r10
  _POX_SETTINGS *PowerFrameworkSettings; // rax
  _POX_SETTINGS *v11; // rbx
  FxPkgPnp *v12; // r10
  const void *ObjectHandleUnchecked; // rax
  __int64 v14; // r10
  _FX_DRIVER_GLOBALS *v15; // r11

  m_PkgPnp = Context->m_PkgPnp;
  if ( m_PkgPnp->m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(m_PkgPnp->m_DeviceBase);
    WPP_IFR_SF_qq(v9, 5u, 0xCu, 0xAu, WPP_PoxInterfaceKm_cpp_Traceguids, _a1, *(const void **)(v8 + 144));
  }
  PowerFrameworkSettings = FxPoxInterface::GetPowerFrameworkSettings(Context);
  v11 = PowerFrameworkSettings;
  if ( PowerFrameworkSettings && PowerFrameworkSettings->ComponentIdleStateCallback )
  {
    v12 = Context->m_PkgPnp;
    if ( v12->m_Globals->FxVerboseOn )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(v12->m_DeviceBase);
      WPP_IFR_SF_qq(
        v15,
        5u,
        0xCu,
        0xBu,
        WPP_PoxInterfaceKm_cpp_Traceguids,
        ObjectHandleUnchecked,
        *(const void **)(v14 + 144));
    }
    v11->ComponentIdleStateCallback(v11->PoFxDeviceContext, Component, State);
  }
  else
  {
    PoFxCompleteIdleState(Context->m_PoHandle, Component);
  }
}
