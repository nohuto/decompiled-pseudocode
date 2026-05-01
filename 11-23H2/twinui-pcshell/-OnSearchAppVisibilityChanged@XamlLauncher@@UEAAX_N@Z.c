/*
 * XREFs of ?OnSearchAppVisibilityChanged@XamlLauncher@@UEAAX_N@Z @ 0x180057B70
 * Callers:
 *     ?OnFindInStartVisibilityChanged@XamlLauncher@@UEAAX_N@Z @ 0x1800F4850 (-OnFindInStartVisibilityChanged@XamlLauncher@@UEAAX_N@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____IInspectable___::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___IInspectable_____lambda_c7655bcd4a5932dfcce51b3c5828b6a0___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___IInspectable___::Invoke @ 0x1801AB6E0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1801AB6E0.c)
 * Callees:
 *     ?GetCortanaVisibleMonitor@XamlLauncher@@UEAAJPEAPEAUHMONITOR__@@@Z @ 0x180059B70 (-GetCortanaVisibleMonitor@XamlLauncher@@UEAAJPEAPEAUHMONITOR__@@@Z.c)
 *     ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x1800D6384 (-ReportVisibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@She.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801AB2A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_N.c)
 *     ?ReportVisibilityForMonitor@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_KAEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x180501AE8 (-ReportVisibilityForMonitor@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoord.c)
 */

void __fastcall XamlLauncher::OnSearchAppVisibilityChanged(XamlLauncher *this, __int64 a2)
{
  int v2; // edi
  __int64 v4; // rdx
  HMONITOR v5; // rax
  HMONITOR v6; // rdx
  HMONITOR v7; // [rsp+30h] [rbp+10h] BYREF
  int v8; // [rsp+38h] [rbp+18h] BYREF

  v2 = (unsigned __int8)a2;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl,
    a2);
  if ( (_BYTE)v2 )
  {
    v7 = 0LL;
    XamlLauncher::GetCortanaVisibleMonitor((XamlLauncher *)((char *)this - 8), &v7);
    v5 = (HMONITOR)*((_QWORD *)this + 52);
    v6 = v7;
    if ( v5 && v7 != v5 )
    {
      v8 = 1;
      winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator3<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::ReportVisibilityForMonitor(
        (char *)this + 368,
        v5,
        &v8);
      v6 = v7;
    }
    if ( v6 )
    {
      v8 = v2 ^ 1;
      winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator3<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::ReportVisibilityForMonitor(
        (char *)this + 368,
        v6,
        &v8);
      *((_QWORD *)this + 52) = v7;
    }
  }
  else
  {
    v4 = *((_QWORD *)this + 52);
    if ( v4 )
    {
      v8 = 1;
      winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator3<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::ReportVisibilityForMonitor(
        (char *)this + 368,
        v4,
        &v8);
    }
  }
  v8 = v2 ^ 1;
  winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ReportVisibility(
    (char *)this + 368,
    &v8);
}
