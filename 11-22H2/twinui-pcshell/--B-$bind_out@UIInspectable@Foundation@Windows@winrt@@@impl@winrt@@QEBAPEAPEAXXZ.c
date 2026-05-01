/*
 * XREFs of ??B?$bind_out@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@QEBAPEAPEAXXZ @ 0x1800AF4A0
 * Callers:
 *     ?CreateInstance@?$consume_Microsoft_UI_Xaml_IApplicationFactory@UIApplicationFactory@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@AEBUIInspectable@Foundation@Windows@3@AEAU4563@@Z @ 0x18002E16C (-CreateInstance@-$consume_Microsoft_UI_Xaml_IApplicationFactory@UIApplicationFactory@Xaml@UI@Mic.c)
 *     ?CreateInstance@?$consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSourceFactory@UIDesktopWindowXamlSourceFactory@Hosting@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@AEBUIInspectable@Foundation@Windows@3@AEAU4563@@Z @ 0x18004AC60 (-CreateInstance@-$consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSourceFactory@UIDesktopWin.c)
 *     ?CreateInstance@?$consume_Windows_UI_Xaml_IApplicationFactory@UIApplicationFactory@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUIInspectable@Foundation@Windows@3@AEAU4563@@Z @ 0x1800AF358 (-CreateInstance@-$consume_Windows_UI_Xaml_IApplicationFactory@UIApplicationFactory@Xaml@UI@Windo.c)
 *     ?CreateInstance@?$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSourceFactory@UIDesktopWindowXamlSourceFactory@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUIInspectable@Foundation@Windows@3@AEAU4563@@Z @ 0x1800AF3FC (-CreateInstance@-$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSourceFactory@UIDesktopWindo.c)
 *     ??R_lambda_801d211dba091c701284f95d6b93acb3_@@QEBA@AEBUIDockedStartControllerFactory@Implementation@StartScreen@UI@WindowsUdk@winrt@@@Z @ 0x1801E1394 (--R_lambda_801d211dba091c701284f95d6b93acb3_@@QEBA@AEBUIDockedStartControllerFactory@Implementat.c)
 *     ?CreateInstance@?$consume_Windows_UI_Xaml_Controls_IGridFactory@UIGridFactory@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUIInspectable@Foundation@Windows@3@AEAU4563@@Z @ 0x180659658 (-CreateInstance@-$consume_Windows_UI_Xaml_Controls_IGridFactory@UIGridFactory@Controls@Xaml@UI@W.c)
 *     ?CreateInstance@?$consume_Windows_UI_Xaml_Media_IAcrylicBrushFactory@UIAcrylicBrushFactory@Media@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUIInspectable@Foundation@Windows@3@AEAU4563@@Z @ 0x1806596D8 (-CreateInstance@-$consume_Windows_UI_Xaml_Media_IAcrylicBrushFactory@UIAcrylicBrushFactory@Media.c)
 *     ?CreateInstance@?$consume_Windows_UI_Xaml_Media_IThemeShadowFactory@UIThemeShadowFactory@Media@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUIInspectable@Foundation@Windows@3@AEAU4563@@Z @ 0x180659758 (-CreateInstance@-$consume_Windows_UI_Xaml_Media_IThemeShadowFactory@UIThemeShadowFactory@Media@X.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 */

__int64 __fastcall winrt::impl::bind_out<winrt::Windows::Foundation::IInspectable>::operator void * *(_QWORD *a1)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  winrt::Windows::Foundation::IUnknown::operator=(*a1, &v3);
  if ( v3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v3);
  return *a1;
}
