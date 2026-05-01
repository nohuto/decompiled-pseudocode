/*
 * XREFs of ?OnSearchAppVisibilityChanged@XamlLauncher@@UEAAX_N@Z @ 0x180028960
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____IInspectable___::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___IInspectable_____lambda_c7655bcd4a5932dfcce51b3c5828b6a0___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___IInspectable___::Invoke @ 0x1801AAB20 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1801AAB20.c)
 *     ?OnFindInStartVisibilityChanged@XamlLauncher@@UEAAX_N@Z @ 0x1801ABA70 (-OnFindInStartVisibilityChanged@XamlLauncher@@UEAAX_N@Z.c)
 * Callees:
 *     ?GetCortanaVisibleMonitor@XamlLauncher@@UEAAJPEAPEAUHMONITOR__@@@Z @ 0x18003B500 (-GetCortanaVisibleMonitor@XamlLauncher@@UEAAJPEAPEAUHMONITOR__@@@Z.c)
 *     _anonymous_namespace_::BoolToViewVisibility @ 0x180114E84 (_anonymous_namespace_--BoolToViewVisibility.c)
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x180117BE4 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TD@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180117C2C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TD@@@details@wil@@QEAAX_NW4ReportingKind@.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180117CC0 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAA_NXZ @ 0x1801A2354 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@_ea_1801A2354.c)
 *     ?ReportVisibilityForMonitor@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBAX_KAEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x1801ABB28 (-ReportVisibilityForMonitor@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoord.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall XamlLauncher::OnSearchAppVisibilityChanged(XamlLauncher *this, char a2)
{
  HMONITOR v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  HMONITOR v8; // r10
  __int64 v9; // r10
  __int64 v10; // rdx
  struct wil::details::IFunctorHost *v11; // r8
  char v12; // [rsp+20h] [rbp-19h] BYREF
  char *v13; // [rsp+28h] [rbp-11h]
  _QWORD v14[2]; // [rsp+30h] [rbp-9h] BYREF
  _QWORD v15[3]; // [rsp+40h] [rbp+7h] BYREF
  __int16 v16; // [rsp+58h] [rbp+1Fh]
  void **v17; // [rsp+60h] [rbp+27h] BYREF
  __int64 v18; // [rsp+68h] [rbp+2Fh] BYREF
  int v19; // [rsp+74h] [rbp+3Bh]
  _QWORD *v20; // [rsp+78h] [rbp+3Fh]
  int v21; // [rsp+80h] [rbp+47h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+5Fh]
  HMONITOR v23; // [rsp+A0h] [rbp+67h] BYREF
  int v24; // [rsp+A8h] [rbp+6Fh] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl) )
  {
    if ( a2 )
    {
      v23 = 0LL;
      XamlLauncher::GetCortanaVisibleMonitor((XamlLauncher *)((char *)this - 8), &v23);
      v8 = (HMONITOR)*((_QWORD *)this + 46);
      v4 = v23;
      if ( v8 && v23 != v8 )
      {
        v24 = anonymous_namespace_::BoolToViewVisibility(0LL, v23);
        winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator3<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::ReportVisibilityForMonitor(
          (char *)this + 320,
          v9,
          &v24);
        v4 = v23;
      }
      if ( v4 )
      {
        LOBYTE(v7) = a2;
        v24 = anonymous_namespace_::BoolToViewVisibility(v7, v4);
        winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator3<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::ReportVisibilityForMonitor(
          (char *)this + 320,
          v10,
          &v24);
        *((_QWORD *)this + 46) = v23;
      }
    }
    else
    {
      v4 = (HMONITOR)*((_QWORD *)this + 46);
      if ( v4 )
      {
        v24 = anonymous_namespace_::BoolToViewVisibility(0LL, v4);
        winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator3<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::ReportVisibilityForMonitor(
          (char *)this + 320,
          v6,
          &v24);
      }
    }
  }
  v12 = a2;
  v13 = (char *)this - 72;
  v15[0] = retaddr;
  v15[1] = "pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp";
  v15[2] = 0LL;
  v16 = 1164;
  LOBYTE(v5) = 3;
  LOBYTE(v4) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TD>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TD>::GetImpl'::`2'::impl,
    v4,
    v5);
  v14[0] = off_180657E80;
  v14[1] = &v12;
  v17 = &wil::details::FeatureFunctorHost::`vftable';
  wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)&v18);
  v20 = v15;
  v21 = 28777534;
  wil::details::RunFunctor((wil::details *)v14, (struct wil::details::IFunctor *)&v17, v11);
  if ( v18 )
    *(_DWORD *)(v18 + 16) = v19;
}
