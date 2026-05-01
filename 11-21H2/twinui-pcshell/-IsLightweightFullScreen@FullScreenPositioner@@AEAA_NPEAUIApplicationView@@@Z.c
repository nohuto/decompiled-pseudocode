/*
 * XREFs of ?IsLightweightFullScreen@FullScreenPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x18031FE5C
 * Callers:
 *     ?SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ @ 0x1800759D4 (-SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ.c)
 *     ?FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18031F380 (-FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x180320184 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$GetAsInt32@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAJ@Z @ 0x18031DA2C (--$GetAsInt32@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropert.c)
 *     ??$GetBoolean@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEA_N@Z @ 0x18031DAC8 (--$GetBoolean@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropert.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FullScreenLightweightDefault@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803206D8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FullScreenLightweightDefault@@@details@wi.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationView@@@Z @ 0x1805EFA6C (-GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationVie.c)
 */

// Hidden C++ exception states: #wind=4
bool __fastcall FullScreenPositioner::IsLightweightFullScreen(FullScreenPositioner *this, struct IApplicationView *a2)
{
  bool v2; // si
  struct IImmersiveApplication *ApplicationFromView; // rbx
  int (__fastcall *v4)(struct IImmersiveApplication *, _QWORD, GUID *, __int64 *); // rdi
  __int64 v6; // [rsp+30h] [rbp-30h] BYREF
  struct IImmersiveApplication *v7; // [rsp+38h] [rbp-28h] BYREF
  __int128 v8; // [rsp+40h] [rbp-20h] BYREF
  int v9; // [rsp+50h] [rbp-10h]
  bool v10; // [rsp+80h] [rbp+20h] BYREF
  LONG v11; // [rsp+90h] [rbp+30h] BYREF
  __int64 v12; // [rsp+98h] [rbp+38h] BYREF

  v2 = 0;
  v10 = 0;
  if ( !*((_BYTE *)this + 424) )
  {
    ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(a2, a2);
    v7 = ApplicationFromView;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v7);
    v12 = 0LL;
    if ( ApplicationFromView )
    {
      v4 = *(int (__fastcall **)(struct IImmersiveApplication *, _QWORD, GUID *, __int64 *))(*(_QWORD *)ApplicationFromView
                                                                                           + 48LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
      if ( v4(ApplicationFromView, 0LL, &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99, &v12) >= 0 )
      {
        v6 = v12;
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        v8 = PKEY_ImmersiveApplication_FullScreenSystemOverlayMode;
        v9 = 11;
        if ( (int)CPropertyStoreHelperBase<IPropertyStore>::GetAsInt32<_tagpropertykey>(&v6, &v8, &v11) < 0 || !v11 )
        {
          v8 = PKEY_ImmersiveApplication_LightweightFullScreenModeAllowed;
          v9 = 13;
          if ( (int)CPropertyStoreHelperBase<IPropertyStore>::GetBoolean<_tagpropertykey>(&v6, &v8, &v10) >= 0 )
          {
            v2 = v10;
          }
          else
          {
            wil::details::FeatureImpl<__WilFeatureTraits_Feature_FullScreenLightweightDefault>::ReportUsage(
              &`wil::Feature<__WilFeatureTraits_Feature_FullScreenLightweightDefault>::GetImpl'::`2'::impl,
              0LL);
            v2 = 0;
          }
        }
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v7);
  }
  return v2;
}
