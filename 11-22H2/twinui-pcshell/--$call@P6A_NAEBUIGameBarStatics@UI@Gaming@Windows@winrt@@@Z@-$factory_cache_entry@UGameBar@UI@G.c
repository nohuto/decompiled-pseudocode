/*
 * XREFs of ??$call@P6A_NAEBUIGameBarStatics@UI@Gaming@Windows@winrt@@@Z@?$factory_cache_entry@UGameBar@UI@Gaming@Windows@winrt@@UIGameBarStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A_NAEBUIGameBarStatics@UI@Gaming@Windows@2@@Z@Z @ 0x1806FE8DC
 * Callers:
 *     ??$call_factory_cast@P6A_NAEBUIGameBarStatics@UI@Gaming@Windows@winrt@@@ZUGameBar@2345@U12345@V_lambda_c5531eb30e442e1349f82459eb3a7316_@@@impl@winrt@@YA?A_P$$QEAV_lambda_c5531eb30e442e1349f82459eb3a7316_@@@Z @ 0x1802EAFB8 (--$call_factory_cast@P6A_NAEBUIGameBarStatics@UI@Gaming@Windows@winrt@@@ZUGameBar@2345@U12345@V_.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$get_activation_factory@UIGameBarStatics@UI@Gaming@Windows@winrt@@@winrt@@YA?AUIGameBarStatics@UI@Gaming@Windows@0@AEBUhstring@param@0@@Z @ 0x1806FEA18 (--$get_activation_factory@UIGameBarStatics@UI@Gaming@Windows@winrt@@@winrt@@YA-AUIGameBarStatics.c)
 */

char __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Gaming::UI::GameBar,winrt::Windows::Gaming::UI::IGameBarStatics>::call<bool (*)(winrt::Windows::Gaming::UI::IGameBarStatics const &)>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 (__fastcall **a2)(__int64 *))
{
  char v3; // bl
  _BYTE v5[40]; // [rsp+28h] [rbp-28h] BYREF
  void (__fastcall ***v6)(_QWORD, __int64 *, __int64 *); // [rsp+60h] [rbp+10h] BYREF
  __int64 v7; // [rsp+70h] [rbp+20h] BYREF
  __int64 v8; // [rsp+78h] [rbp+28h] BYREF

  v6 = a1;
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v5, L"Windows.Gaming.UI.GameBar", 25);
  winrt::get_activation_factory<winrt::Windows::Gaming::UI::IGameBarStatics>(&v6, v5);
  if ( v6 && (v7 = 0LL, (**v6)(v6, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v7), (v8 = v7) != 0) )
  {
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v8);
    _InterlockedIncrement64(&qword_1809921A8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Gaming::UI::GameBar,winrt::Windows::Gaming::UI::IGameBarStatics>,
            (signed __int64)v6,
            0LL) )
    {
      v6 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1809921B0);
    }
    v3 = (*a2)(&winrt::impl::factory_cache_entry_v<winrt::Windows::Gaming::UI::GameBar,winrt::Windows::Gaming::UI::IGameBarStatics>);
    _InterlockedDecrement64(&qword_1809921A8);
  }
  else
  {
    v3 = (*a2)((__int64 *)&v6);
  }
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  return v3;
}
