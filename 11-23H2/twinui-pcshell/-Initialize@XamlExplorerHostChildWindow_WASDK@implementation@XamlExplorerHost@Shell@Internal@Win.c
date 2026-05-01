/*
 * XREFs of ?Initialize@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXV?$optional@PEAUHWND__@@@std@@@Z @ 0x18004A7A0
 * Callers:
 *     ??0XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@_KAEBUhstring@6@@Z @ 0x18004A534 (--0XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winr.c)
 *     ??0XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@_K0AEBUhstring@6@@Z @ 0x1804F87B0 (--0XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal_ea_1804F87B0.c)
 * Callees:
 *     ?SiteBridge@?$consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@XZ @ 0x18004A8CC (-SiteBridge@-$consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSour.c)
 *     ?WindowId@?$consume_Microsoft_UI_Content_IDesktopSiteBridge@UDesktopChildSiteBridge@Content@UI@Microsoft@winrt@@@impl@winrt@@QEBA@XZ @ 0x18004A940 (-WindowId@-$consume_Microsoft_UI_Content_IDesktopSiteBridge@UDesktopChildSiteBridge@Content@UI@M.c)
 *     ??0DesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@QEAA@XZ @ 0x18004A9F8 (--0DesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@QEAA@XZ.c)
 *     ?Initialize@?$consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@AEBUWindowId@UI@Microsoft@3@@Z @ 0x18004AAE4 (-Initialize@-$consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSour.c)
 *     winrt::Microsoft::UI::EnsureInteropImplLoaded @ 0x18004AB20 (winrt--Microsoft--UI--EnsureInteropImplLoaded.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
BOOL __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK::Initialize(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rax
  _QWORD *v7; // rbx
  int v8; // eax
  _BYTE v10[8]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v11; // [rsp+48h] [rbp-18h] BYREF
  __int64 v12; // [rsp+50h] [rbp-10h] BYREF

  v4 = winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource::DesktopWindowXamlSource((winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource *)&v12);
  winrt::Windows::Foundation::IUnknown::operator=(a1 + 40, v4);
  if ( v12 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  winrt::Microsoft::UI::EnsureInteropImplLoaded();
  v5 = winrt::Microsoft::UI::s_impl(*(_QWORD *)(a1 + 80), &v12);
  if ( v5 < 0 )
    winrt::throw_hresult((unsigned int)v5);
  winrt::impl::consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource<winrt::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSource>::Initialize(
    a1 + 40,
    &v12);
  v6 = winrt::impl::consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource<winrt::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSource>::SiteBridge(
         a1 + 40,
         &v12);
  v7 = (_QWORD *)winrt::impl::consume_Microsoft_UI_Content_IDesktopSiteBridge<winrt::Microsoft::UI::Content::DesktopChildSiteBridge>::WindowId(
                   v6,
                   v10);
  winrt::Microsoft::UI::EnsureInteropImplLoaded();
  v8 = ((__int64 (__fastcall *)(_QWORD, __int64 *))qword_18098D6A8)(*v7, &v11);
  if ( v8 < 0 )
    winrt::throw_hresult((unsigned int)v8);
  *(_QWORD *)(a1 + 64) = v11;
  if ( v12 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  if ( *(_BYTE *)(a2 + 8) )
    SetWindowPos(*(HWND *)(a1 + 64), *(HWND *)a2, 0, 0, 0, 0, 0x213u);
  return ShowWindow(*(HWND *)(a1 + 64), 8);
}
