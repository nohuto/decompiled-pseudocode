/*
 * XREFs of ?CloseSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z @ 0x1804BC1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x180053F84 (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A8480 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800CB14C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAAX_NW4Rep.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?WindowTabHostTabClosedViaAltTab@WindowTabHostTelemetry@@SAXXZ @ 0x1804BCC6C (-WindowTabHostTabClosedViaAltTab@WindowTabHostTelemetry@@SAXXZ.c)
 *     ?WindowTabHostWindowClosedViaAltTab@WindowTabHostTelemetry@@SAXXZ @ 0x1804BCD9C (-WindowTabHostWindowClosedViaAltTab@WindowTabHostTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CMultitaskingViewControllerBase::CloseSwitchItem(
        CMultitaskingViewControllerBase *this,
        __int64 (__fastcall ***a2)(struct ISwitchItem *, GUID *, __int64 *))
{
  __int64 (__fastcall *v4)(struct ISwitchItem *, GUID *, __int64 *); // rbx
  int v5; // eax
  __int64 v6; // r9
  __int64 v7; // r9
  void (__fastcall *v8)(struct ISwitchItem *, GUID *, __int64 *); // rbx
  struct IApplicationView *v9; // rdx
  HWND WindowForView; // rax
  __int64 v11; // rbx
  __int64 (__fastcall ****v12)(_QWORD, GUID *, __int64); // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v14; // [rsp+58h] [rbp+28h] BYREF
  __int64 v15; // [rsp+60h] [rbp+30h] BYREF
  ApplicationViewHelpers *v16; // [rsp+68h] [rbp+38h] BYREF

  v15 = 0LL;
  v4 = **a2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
  v5 = v4((struct ISwitchItem *)a2, &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb, &v15);
  if ( v5 >= 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShell>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetImpl'::`2'::impl,
      0,
      3u,
      v6);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowTabHost>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_WindowTabHost>::GetImpl'::`2'::impl,
      1u,
      3u,
      v7);
    if ( *((_QWORD *)this + 10) )
    {
      v14 = 0LL;
      v8 = (void (__fastcall *)(struct ISwitchItem *, GUID *, __int64 *))**a2;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
      v8((struct ISwitchItem *)a2, &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb, &v14);
      (*(void (__fastcall **)(__int64, ApplicationViewHelpers **))(*(_QWORD *)v14 + 24LL))(v14, &v16);
      WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(
                              (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v16,
                              v9);
      if ( GetPropW(WindowForView, (LPCWSTR)0xA920) )
        WindowTabHostTelemetry::WindowTabHostTabClosedViaAltTab();
      else
        WindowTabHostTelemetry::WindowTabHostWindowClosedViaAltTab();
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v16);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
    }
    v11 = *((_QWORD *)this + 5);
    v12 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64))(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 24LL))(
                                                                v15,
                                                                &v14);
    ApplicationViewHelpers::CloseView(*v12, v11, 7LL, 8, 3);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v14);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x97,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
}
