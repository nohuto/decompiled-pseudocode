/*
 * XREFs of ??0DelayedTileActivationCallSite@@QEAA@PEAUIUnknown@@PEAUHWND__@@W4IAM_DESKTOP_SWITCH_OPTION@@V?$optional@_N@std@@V?$optional@H@5@_N@Z @ 0x1804E6ED8
 * Callers:
 *     ??$Make@VDelayedTileActivationCallSite@@PEAUIPropertySet@Collections@Foundation@Windows@@AEAPEAUHWND__@@AEAW4IAM_DESKTOP_SWITCH_OPTION@@AEAV?$optional@_N@std@@AEAV?$optional@H@9@AEA_N@Details@WRL@Microsoft@@YA?AV?$ComPtr@VDelayedTileActivationCallSite@@@12@$$QEAPEAUIPropertySet@Collections@Foundation@Windows@@AEAPEAUHWND__@@AEAW4IAM_DESKTOP_SWITCH_OPTION@@AEAV?$optional@_N@std@@AEAV?$optional@H@std@@AEA_N@Z @ 0x1804E6904 (--$Make@VDelayedTileActivationCallSite@@PEAUIPropertySet@Collections@Foundation@Windows@@AEAPEAU.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCopyToViewValueSetBase@@UIOleWindow@@UIShouldSwitchToDesktop@@UIAppActivationUIInfo@@@WRL@Microsoft@@QEAA@XZ @ 0x1804E6C08 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCopyToViewValueSetBase@@UIOleWindow@@.c)
 *     ?SetIterable@CopyToViewValueSetBase@@QEAAXPEAUIUnknown@@@Z @ 0x1804E8AC4 (-SetIterable@CopyToViewValueSetBase@@QEAAXPEAUIUnknown@@@Z.c)
 */

DelayedTileActivationCallSite *__fastcall DelayedTileActivationCallSite::DelayedTileActivationCallSite(
        DelayedTileActivationCallSite *this,
        struct IUnknown *a2,
        __int64 a3,
        int a4,
        __int16 a5,
        __int64 a6,
        char a7)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CopyToViewValueSetBase,IOleWindow,IShouldSwitchToDesktop,IAppActivationUIInfo>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CopyToViewValueSetBase,IOleWindow,IShouldSwitchToDesktop,IAppActivationUIInfo>((__int64)this);
  *((_QWORD *)this + 14) = a3;
  *(_QWORD *)this = &DelayedTileActivationCallSite::`vftable'{for `IObjectWithSite'};
  *((_DWORD *)this + 30) = a4;
  *((_QWORD *)this + 1) = &DelayedTileActivationCallSite::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider,IUpdateViewValueSet,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CopyToViewValueSetBase,IOleWindow,IShouldSwitchToDesktop,IAppActivationUIInfo>::`vftable'{for `IUpdateViewValueSet'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CopyToViewValueSetBase,IOleWindow,IShouldSwitchToDesktop,IAppActivationUIInfo>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 10) = &DelayedTileActivationCallSite::`vftable';
  *((_QWORD *)this + 11) = &DelayedTileActivationCallSite::`vftable'{for `IShouldSwitchToDesktop'};
  *((_QWORD *)this + 12) = &DelayedTileActivationCallSite::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAppActivationUIInfo>'};
  *((_WORD *)this + 62) = a5;
  *((_QWORD *)this + 16) = a6;
  *((_BYTE *)this + 136) = a7;
  CopyToViewValueSetBase::SetIterable(this, a2);
  return this;
}
