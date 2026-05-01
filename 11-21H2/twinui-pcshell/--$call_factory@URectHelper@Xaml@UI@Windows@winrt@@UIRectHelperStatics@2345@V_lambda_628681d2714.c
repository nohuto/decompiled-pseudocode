/*
 * XREFs of ??$call_factory@URectHelper@Xaml@UI@Windows@winrt@@UIRectHelperStatics@2345@V_lambda_628681d27142a38a5eac87ccb28ad64e_@@@impl@winrt@@YA?AURect@Foundation@Windows@1@$$QEAV_lambda_628681d27142a38a5eac87ccb28ad64e_@@@Z @ 0x1805B3034
 * Callers:
 *     ?SnapWindow@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAX_KAEBURect@Foundation@67@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@7@@Z @ 0x1805B4898 (-SnapWindow@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$call@AEAV_lambda_628681d27142a38a5eac87ccb28ad64e_@@@?$factory_cache_entry@URectHelper@Xaml@UI@Windows@winrt@@UIRectHelperStatics@2345@@impl@winrt@@QEAA?AURect@Foundation@Windows@2@AEAV_lambda_628681d27142a38a5eac87ccb28ad64e_@@@Z @ 0x1805B2E44 (--$call@AEAV_lambda_628681d27142a38a5eac87ccb28ad64e_@@@-$factory_cache_entry@URectHelper@Xaml@U.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall winrt::impl::call_factory<winrt::Windows::UI::Xaml::RectHelper,winrt::Windows::UI::Xaml::IRectHelperStatics,_lambda_628681d27142a38a5eac87ccb28ad64e_>(
        __int64 *a1,
        __int128 **a2)
{
  __int128 *v3; // r8
  __int128 *v4; // rdx
  __int64 v5; // rax
  signed int v6; // eax
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  __int128 v9; // [rsp+40h] [rbp-18h] BYREF

  _InterlockedIncrement64(&qword_1807B6628);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::RectHelper,winrt::Windows::UI::Xaml::IRectHelperStatics> )
  {
    v3 = a2[1];
    v4 = *a2;
    *(_OWORD *)a1 = 0LL;
    v5 = *(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::RectHelper,winrt::Windows::UI::Xaml::IRectHelperStatics>;
    v8 = *v3;
    v9 = *v4;
    v6 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int128 *, __int64 *))(v5 + 152))(
           winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::RectHelper,winrt::Windows::UI::Xaml::IRectHelperStatics>,
           &v9,
           &v8,
           a1);
    if ( v6 < 0 )
      winrt::throw_hresult(v6);
    _InterlockedDecrement64(&qword_1807B6628);
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B6628);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::RectHelper,winrt::Windows::UI::Xaml::IRectHelperStatics>::call<_lambda_628681d27142a38a5eac87ccb28ad64e_ &>(
      a1,
      a1,
      a2);
  }
  return a1;
}
