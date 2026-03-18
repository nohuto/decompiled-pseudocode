/*
 * XREFs of ?ComponentActiveCallback@FxPoxInterface@@CAXPEAXK@Z @ 0x1C0083F40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 *     ?GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ @ 0x1C0083BF0 (-GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ.c)
 */

void __fastcall FxPoxInterface::ComponentActiveCallback(FxPoxInterface *Context, unsigned int Component)
{
  FxPkgPnp *m_PkgPnp; // rdx
  const void *_a1; // rax
  __int64 v6; // rdx
  _FX_DRIVER_GLOBALS *v7; // r10
  _POX_SETTINGS *PowerFrameworkSettings; // rax
  _POX_SETTINGS *v9; // rbx
  FxPkgPnp *v10; // r10
  const void *ObjectHandleUnchecked; // rax
  __int64 v12; // r10
  _FX_DRIVER_GLOBALS *v13; // r11

  m_PkgPnp = Context->m_PkgPnp;
  if ( m_PkgPnp->m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(m_PkgPnp->m_DeviceBase);
    WPP_IFR_SF_qq(v7, 5u, 0xCu, 0xCu, WPP_PoxInterfaceKm_cpp_Traceguids, _a1, *(const void **)(v6 + 144));
  }
  PowerFrameworkSettings = FxPoxInterface::GetPowerFrameworkSettings(Context);
  v9 = PowerFrameworkSettings;
  if ( PowerFrameworkSettings && PowerFrameworkSettings->ComponentActiveConditionCallback )
  {
    v10 = Context->m_PkgPnp;
    if ( v10->m_Globals->FxVerboseOn )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(v10->m_DeviceBase);
      WPP_IFR_SF_qq(
        v13,
        5u,
        0xCu,
        0xDu,
        WPP_PoxInterfaceKm_cpp_Traceguids,
        ObjectHandleUnchecked,
        *(const void **)(v12 + 144));
    }
    v9->ComponentActiveConditionCallback(v9->PoFxDeviceContext, Component);
  }
}
