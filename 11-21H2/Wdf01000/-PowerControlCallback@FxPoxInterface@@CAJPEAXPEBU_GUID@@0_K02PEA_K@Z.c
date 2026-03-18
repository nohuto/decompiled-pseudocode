/*
 * XREFs of ?PowerControlCallback@FxPoxInterface@@CAJPEAXPEBU_GUID@@0_K02PEA_K@Z @ 0x1C008EF30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     ?GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ @ 0x1C001CD74 (-GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPoxInterface::PowerControlCallback(
        FxPoxInterface *Context,
        const _GUID *PowerControlCode,
        void *InBuffer,
        unsigned __int64 InBufferSize,
        void *OutBuffer,
        unsigned __int64 OutBufferSize,
        unsigned __int64 *BytesReturned)
{
  FxPkgPnp *m_PkgPnp; // rdx
  const void *_a1; // rax
  __int64 v13; // rdx
  _FX_DRIVER_GLOBALS *v14; // r10
  _POX_SETTINGS *PowerFrameworkSettings; // rax
  unsigned int _a3; // ebx
  FxPkgPnp *v17; // r10
  const void *ObjectHandleUnchecked; // rax
  __int64 v19; // r10
  _FX_DRIVER_GLOBALS *v20; // r11

  m_PkgPnp = Context->m_PkgPnp;
  if ( m_PkgPnp->m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(m_PkgPnp->m_DeviceBase);
    WPP_IFR_SF_qq(v14, 5u, 0xCu, 0x10u, WPP_PoxInterfaceKm_cpp_Traceguids, _a1, *(const void **)(v13 + 144));
  }
  PowerFrameworkSettings = FxPoxInterface::GetPowerFrameworkSettings(Context);
  _a3 = PowerFrameworkSettings->PowerControlCallback(
          PowerFrameworkSettings->PoFxDeviceContext,
          PowerControlCode,
          InBuffer,
          InBufferSize,
          OutBuffer,
          OutBufferSize,
          BytesReturned);
  v17 = Context->m_PkgPnp;
  if ( v17->m_Globals->FxVerboseOn )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(v17->m_DeviceBase);
    WPP_IFR_SF_qqd(
      v20,
      5u,
      0xCu,
      0x11u,
      WPP_PoxInterfaceKm_cpp_Traceguids,
      ObjectHandleUnchecked,
      *(const void **)(v19 + 144),
      _a3);
  }
  return _a3;
}
