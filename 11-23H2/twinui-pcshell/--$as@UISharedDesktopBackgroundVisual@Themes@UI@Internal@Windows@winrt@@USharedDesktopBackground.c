/*
 * XREFs of ??$as@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualHost@@$0A@@impl@winrt@@YA?AUISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@1@PEAUSharedDesktopBackgroundVisualHost@@@Z @ 0x1806E0B18
 * Callers:
 *     ?GetSharedBackgroundVisualHostFromSinkId@?$produce@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UIThemeCoordinator@34567@@impl@winrt@@UEAAH_KPEAPEAX@Z @ 0x1806E2820 (-GetSharedBackgroundVisualHostFromSinkId@-$produce@UThemeCoordinator@implementation@Themes@UI@In.c)
 * Callees:
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?query_interface@?$root_implements@URemoteDesktopStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18040B340 (-query_interface@-$root_implements@URemoteDesktopStateChangedEventArgs@implementation@Shell@Inte.c)
 */

_QWORD *__fastcall winrt::impl::as<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,SharedDesktopBackgroundVisualHost,0>(
        _QWORD *a1,
        volatile signed __int64 *a2)
{
  signed int v3; // eax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    v5 = 0LL;
    v3 = winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopStateChangedEventArgs,winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs>::query_interface(
           a2,
           winrt::impl::guid_v<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual>,
           &v5);
    if ( v3 < 0 )
      winrt::throw_hresult(v3);
    *a1 = v5;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
