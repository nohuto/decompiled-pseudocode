/*
 * XREFs of ?OnSearchActivated@?$IApplicationOverridesT@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@Xaml@UI@Windows@winrt@@QEBA@AEBUSearchActivatedEventArgs@Activation@ApplicationModel@45@@Z @ 0x1804F652C
 * Callers:
 *     ?OnSearchActivated@?$produce@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIApplicationOverrides@Xaml@UI@67@@impl@winrt@@UEAAHPEAX@Z @ 0x1804F65E0 (-OnSearchActivated@-$produce@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Win.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

void __fastcall winrt::Windows::UI::Xaml::IApplicationOverridesT<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication>::OnSearchActivated(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rcx
  signed int v4; // eax
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    v6 = 0LL;
    (**(void (__fastcall ***)(__int64, void *, __int64 *))v3)(
      v3,
      &winrt::impl::guid_v<winrt::Windows::UI::Xaml::IApplicationOverrides>,
      &v6);
    v3 = v6;
    v5 = v6;
  }
  else
  {
    v5 = 0LL;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, *a2);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v5);
}
