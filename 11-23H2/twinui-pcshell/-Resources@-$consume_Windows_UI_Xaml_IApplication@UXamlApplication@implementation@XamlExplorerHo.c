/*
 * XREFs of ?Resources@?$consume_Windows_UI_Xaml_IApplication@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180110770
 * Callers:
 *     ?OnLaunched@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXULaunchActivatedEventArgs@Activation@ApplicationModel@67@@Z @ 0x18010FBA4 (-OnLaunched@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXU.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Xaml_IApplication<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication>::Resources(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdi
  int v5; // eax
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h] BYREF

  v8 = 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    v9 = 0LL;
    (**(void (__fastcall ***)(__int64, void *, __int64 *))v3)(
      v3,
      &winrt::impl::guid_v<winrt::Windows::UI::Xaml::IApplication>,
      &v9);
    v3 = v9;
    v4 = v9;
  }
  else
  {
    v4 = 0LL;
  }
  v7 = v3;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 48LL))(v3, &v8);
  if ( v5 < 0 )
    winrt::throw_hresult((unsigned int)v5);
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
  *a2 = v8;
  return a2;
}
