/*
 * XREFs of ?HighContrastAdjustment@?$consume_Microsoft_UI_Xaml_IApplication@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBW4ApplicationHighContrastAdjustment@Xaml@UI@Microsoft@3@@Z @ 0x180048B9C
 * Callers:
 *     ?OnLaunched@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXULaunchActivatedEventArgs@Xaml@UI@Microsoft@8@@Z @ 0x180048694 (-OnLaunched@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@w.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

void __fastcall winrt::impl::consume_Microsoft_UI_Xaml_IApplication<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK>::HighContrastAdjustment(
        __int64 a1,
        unsigned int *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    v7 = 0LL;
    (**(void (__fastcall ***)(__int64, void *, __int64 *))v3)(
      v3,
      &winrt::impl::guid_v<winrt::Microsoft::UI::Xaml::IApplication>,
      &v7);
    v3 = v7;
    v4 = v7;
  }
  else
  {
    v4 = 0LL;
  }
  v6 = v3;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 112LL))(v3, *a2);
  if ( v5 < 0 )
    winrt::throw_hresult((unsigned int)v5);
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
}
