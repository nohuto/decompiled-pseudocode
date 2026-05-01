/*
 * XREFs of ?InitializeForCurrentThread@?$consume_Windows_UI_Xaml_Hosting_IWindowsXamlManagerStatics@UIWindowsXamlManagerStatics@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AUWindowsXamlManager@Hosting@Xaml@UI@Windows@3@XZ @ 0x180176498
 * Callers:
 *     ?EnsureXamlCoreForThreadIfNeeded@CMultitaskingViewManager@@AEAAXXZ @ 0x180052A50 (-EnsureXamlCoreForThreadIfNeeded@CMultitaskingViewManager@@AEAAXXZ.c)
 *     ??0XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMetadataProvider@Markup@Xaml@UI@Windows@@PEAUIPrivilegedPresentationOperations@@@Z @ 0x180064220 (--0XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMetadataProvid.c)
 *     ?_lambda_invoker_cdecl_@_lambda_55039be7b7b77d56f41928124535a284_@@CA?AUWindowsXamlManager@Hosting@Xaml@UI@Windows@winrt@@AEBUIWindowsXamlManagerStatics@34567@@Z @ 0x180176470 (-_lambda_invoker_cdecl_@_lambda_55039be7b7b77d56f41928124535a284_@@CA-AUWindowsXamlManager@Hosti.c)
 *     ?XamlExplorerHostThreadProc@SnapFlyoutHost@@AEAAKXZ @ 0x1805B11AC (-XamlExplorerHostThreadProc@SnapFlyoutHost@@AEAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Xaml_Hosting_IWindowsXamlManagerStatics<winrt::Windows::UI::Xaml::Hosting::IWindowsXamlManagerStatics>::InitializeForCurrentThread(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  int v4; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 48LL))(v2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  *a2 = v6;
  return a2;
}
