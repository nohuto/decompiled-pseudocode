/*
 * XREFs of ??$call@P6A_NAEBUIGameBarStatics@UI@Gaming@Windows@winrt@@@Z@?$factory_cache_entry@UGameBar@UI@Gaming@Windows@winrt@@UIGameBarStatics@2345@@impl@winrt@@QEAA_N$$QEAP6A_NAEBUIGameBarStatics@UI@Gaming@Windows@2@@Z@Z @ 0x1805DF818
 * Callers:
 *     ??$call_factory_cast@P6A_NAEBUIGameBarStatics@UI@Gaming@Windows@winrt@@@ZUGameBar@2345@U12345@V_lambda_c5531eb30e442e1349f82459eb3a7316_@@@impl@winrt@@YA_N$$QEAV_lambda_c5531eb30e442e1349f82459eb3a7316_@@@Z @ 0x1805DF960 (--$call_factory_cast@P6A_NAEBUIGameBarStatics@UI@Gaming@Windows@winrt@@@ZUGameBar@2345@U12345@V_.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x180067B6C (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x18018F6EB (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$get_activation_factory@UIGameBarStatics@UI@Gaming@Windows@winrt@@@winrt@@YA?AUIGameBarStatics@UI@Gaming@Windows@0@AEBUhstring@param@0@@Z @ 0x1805DF9FC (--$get_activation_factory@UIGameBarStatics@UI@Gaming@Windows@winrt@@@winrt@@YA-AUIGameBarStatics.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Gaming::UI::GameBar,winrt::Windows::Gaming::UI::IGameBarStatics>::call<bool (*)(winrt::Windows::Gaming::UI::IGameBarStatics const &)>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 (__fastcall **a2)(__int64 *))
{
  __int64 v3; // rax
  char v4; // bl
  char v5; // bl
  _BYTE v7[40]; // [rsp+28h] [rbp-28h] BYREF
  void (__fastcall ***v8)(_QWORD, __int64 *, __int64 *); // [rsp+70h] [rbp+20h] BYREF
  __int64 v9; // [rsp+80h] [rbp+30h] BYREF
  __int64 v10; // [rsp+88h] [rbp+38h] BYREF

  v8 = a1;
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v7, L"Windows.Gaming.UI.GameBar", 25LL);
  winrt::get_activation_factory<winrt::Windows::Gaming::UI::IGameBarStatics>(&v8, v7);
  if ( !v8 )
  {
    v3 = 0LL;
    v10 = 0LL;
LABEL_3:
    v4 = 0;
    goto LABEL_4;
  }
  v9 = 0LL;
  (**v8)(v8, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v9);
  v3 = v9;
  v10 = v9;
  if ( !v9 )
    goto LABEL_3;
  v4 = 1;
LABEL_4:
  if ( v3 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v10);
  if ( v4 )
  {
    _InterlockedIncrement64(&qword_1807B6EA8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Gaming::UI::GameBar,winrt::Windows::Gaming::UI::IGameBarStatics>,
            (signed __int64)v8,
            0LL) )
    {
      v8 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1807B6EB0);
    }
    v5 = (*a2)(&winrt::impl::factory_cache_entry_v<winrt::Windows::Gaming::UI::GameBar,winrt::Windows::Gaming::UI::IGameBarStatics>);
    _InterlockedDecrement64(&qword_1807B6EA8);
  }
  else
  {
    v5 = (*a2)((__int64 *)&v8);
  }
  if ( v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  return v5;
}
