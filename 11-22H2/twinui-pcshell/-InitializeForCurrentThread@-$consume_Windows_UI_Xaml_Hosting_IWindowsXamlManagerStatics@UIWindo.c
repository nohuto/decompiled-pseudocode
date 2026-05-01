/*
 * XREFs of ?InitializeForCurrentThread@?$consume_Windows_UI_Xaml_Hosting_IWindowsXamlManagerStatics@UIWindowsXamlManagerStatics@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18006FE48
 * Callers:
 *     ?EnsureXamlCoreForThreadIfNeeded@CMultitaskingViewManager@@AEAAJXZ @ 0x18004B7E4 (-EnsureXamlCoreForThreadIfNeeded@CMultitaskingViewManager@@AEAAJXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_55039be7b7b77d56f41928124535a284_@@CA@AEBUIWindowsXamlManagerStatics@Hosting@Xaml@UI@Windows@winrt@@@Z @ 0x18006FE20 (-_lambda_invoker_cdecl_@_lambda_55039be7b7b77d56f41928124535a284_@@CA@AEBUIWindowsXamlManagerSta.c)
 *     ?XamlHostThreadProc@TouchEdgeGripperHost@@AEAAKXZ @ 0x180656FC8 (-XamlHostThreadProc@TouchEdgeGripperHost@@AEAAKXZ.c)
 *     ?CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z @ 0x1806E6F40 (-CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Xaml_Hosting_IWindowsXamlManagerStatics<winrt::Windows::UI::Xaml::Hosting::IWindowsXamlManagerStatics>::InitializeForCurrentThread(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  int v4; // eax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 48LL))(v2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  *a2 = v6;
  return a2;
}
