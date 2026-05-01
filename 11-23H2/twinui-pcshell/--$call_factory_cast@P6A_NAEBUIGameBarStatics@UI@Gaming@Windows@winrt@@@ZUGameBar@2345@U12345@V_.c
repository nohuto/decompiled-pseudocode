/*
 * XREFs of ??$call_factory_cast@P6A_NAEBUIGameBarStatics@UI@Gaming@Windows@winrt@@@ZUGameBar@2345@U12345@V_lambda_c5531eb30e442e1349f82459eb3a7316_@@@impl@winrt@@YA?A_P$$QEAV_lambda_c5531eb30e442e1349f82459eb3a7316_@@@Z @ 0x1802EAFB8
 * Callers:
 *     ?CanShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x1802EB0D0 (-CanShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$call@P6A_NAEBUIGameBarStatics@UI@Gaming@Windows@winrt@@@Z@?$factory_cache_entry@UGameBar@UI@Gaming@Windows@winrt@@UIGameBarStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A_NAEBUIGameBarStatics@UI@Gaming@Windows@2@@Z@Z @ 0x1806FE8DC (--$call@P6A_NAEBUIGameBarStatics@UI@Gaming@Windows@winrt@@@Z@-$factory_cache_entry@UGameBar@UI@G.c)
 */

// Hidden C++ exception states: #wind=1
char winrt::impl::call_factory_cast<bool (*)(winrt::Windows::Gaming::UI::IGameBarStatics const &),winrt::Windows::Gaming::UI::GameBar,winrt::Windows::Gaming::UI::IGameBarStatics,_lambda_c5531eb30e442e1349f82459eb3a7316_>()
{
  int v0; // eax
  char v2; // [rsp+38h] [rbp+10h] BYREF
  __int64 (__fastcall *v3)(const struct winrt::Windows::Gaming::UI::IGameBarStatics *); // [rsp+40h] [rbp+18h] BYREF

  _InterlockedIncrement64(&qword_1809921A8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Gaming::UI::GameBar,winrt::Windows::Gaming::UI::IGameBarStatics> )
  {
    v2 = 0;
    v0 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::Windows::Gaming::UI::GameBar,winrt::Windows::Gaming::UI::IGameBarStatics>
                                                    + 80LL))(
           winrt::impl::factory_cache_entry_v<winrt::Windows::Gaming::UI::GameBar,winrt::Windows::Gaming::UI::IGameBarStatics>,
           &v2);
    if ( v0 < 0 )
      winrt::throw_hresult((unsigned int)v0);
    _InterlockedDecrement64(&qword_1809921A8);
    return v2;
  }
  else
  {
    _InterlockedDecrement64(&qword_1809921A8);
    v3 = _lambda_c5531eb30e442e1349f82459eb3a7316_::_lambda_invoker_cdecl_;
    return winrt::impl::factory_cache_entry<winrt::Windows::Gaming::UI::GameBar,winrt::Windows::Gaming::UI::IGameBarStatics>::call<bool (*)(winrt::Windows::Gaming::UI::IGameBarStatics const &)>(
             0LL,
             &v3);
  }
}
