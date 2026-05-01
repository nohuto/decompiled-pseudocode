/*
 * XREFs of ??$as@UIGameBarWindowControl@GamingOverlay@Internal@Windows@@UGameBarWindowControlImpl@implementation@234winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIGameBarWindowControl@GamingOverlay@Internal@Windows@@@1@PEAUGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@1@@Z @ 0x1802D2E1C
 * Callers:
 *     ?GetWindow@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAUIGameBarWindowControl@GamingOverlay@Internal@Windows@@@Z @ 0x1803FFEA0 (-GetWindow@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAUIGameBarWindowControl@GamingOverlay@Int.c)
 * Callees:
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?query_interface@?$root_implements@URemoteDesktopStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18040B340 (-query_interface@-$root_implements@URemoteDesktopStateChangedEventArgs@implementation@Shell@Inte.c)
 */

_QWORD *__fastcall winrt::impl::as<Windows::Internal::GamingOverlay::IGameBarWindowControl,winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,0>(
        _QWORD *a1,
        __int64 a2)
{
  int v3; // eax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    v5 = 0LL;
    v3 = winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopStateChangedEventArgs,winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs>::query_interface(
           a2,
           &winrt::impl::guid_v<winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl>,
           &v5);
    if ( v3 < 0 )
      winrt::throw_hresult((unsigned int)v3);
    *a1 = v5;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
