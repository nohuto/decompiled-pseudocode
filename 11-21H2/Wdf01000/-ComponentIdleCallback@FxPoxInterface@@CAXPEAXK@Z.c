/*
 * XREFs of ?ComponentIdleCallback@FxPoxInterface@@CAXPEAXK@Z @ 0x1C001CCD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     ?GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ @ 0x1C001CD74 (-GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxPoxInterface::ComponentIdleCallback(FxPoxInterface *Context, unsigned int Component)
{
  FxPkgPnp *m_PkgPnp; // rdx
  _POX_SETTINGS *PowerFrameworkSettings; // rax
  _POX_SETTINGS *v6; // rdi
  void (__fastcall *ComponentIdleConditionCallback)(void *, unsigned int); // rax
  FxPkgPnp *v8; // r10
  const void *_a1; // rax
  __int64 v10; // rdx
  _FX_DRIVER_GLOBALS *v11; // r10
  const void *ObjectHandleUnchecked; // rax
  __int64 v13; // r10
  _FX_DRIVER_GLOBALS *v14; // r11

  m_PkgPnp = Context->m_PkgPnp;
  if ( m_PkgPnp->m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(m_PkgPnp->m_DeviceBase);
    WPP_IFR_SF_qq(v11, 5u, 0xCu, 0xEu, WPP_PoxInterfaceKm_cpp_Traceguids, _a1, *(const void **)(v10 + 144));
  }
  PowerFrameworkSettings = FxPoxInterface::GetPowerFrameworkSettings(Context);
  v6 = PowerFrameworkSettings;
  if ( PowerFrameworkSettings
    && (ComponentIdleConditionCallback = PowerFrameworkSettings->ComponentIdleConditionCallback) != 0LL )
  {
    v8 = Context->m_PkgPnp;
    if ( v8->m_Globals->FxVerboseOn )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(v8->m_DeviceBase);
      WPP_IFR_SF_qq(
        v14,
        5u,
        0xCu,
        0xFu,
        WPP_PoxInterfaceKm_cpp_Traceguids,
        ObjectHandleUnchecked,
        *(const void **)(v13 + 144));
      v6->ComponentIdleConditionCallback(v6->PoFxDeviceContext, Component);
    }
    else
    {
      ComponentIdleConditionCallback(v6->PoFxDeviceContext, Component);
    }
  }
  else
  {
    PoFxCompleteIdleCondition(Context->m_PoHandle, Component);
  }
}
