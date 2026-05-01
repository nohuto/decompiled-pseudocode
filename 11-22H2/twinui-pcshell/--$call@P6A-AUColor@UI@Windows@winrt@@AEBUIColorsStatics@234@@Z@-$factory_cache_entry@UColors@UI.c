/*
 * XREFs of ??$call@P6A?AUColor@UI@Windows@winrt@@AEBUIColorsStatics@234@@Z@?$factory_cache_entry@UColors@UI@Windows@winrt@@UIColorsStatics@234@@impl@winrt@@QEAA?A_P$$QEAP6A?AUColor@UI@Windows@2@AEBUIColorsStatics@452@@Z@Z @ 0x1806E5C08
 * Callers:
 *     ??$call_factory_cast@P6A?AUColor@UI@Windows@winrt@@AEBUIColorsStatics@234@@ZUColors@234@U5234@V_lambda_d7b00691c3c9723fe1824ae9cb58901d_@@@impl@winrt@@YA?A_P$$QEAV_lambda_d7b00691c3c9723fe1824ae9cb58901d_@@@Z @ 0x1806E5D50 (--$call_factory_cast@P6A-AUColor@UI@Windows@winrt@@AEBUIColorsStatics@234@@ZUColors@234@U5234@V_.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$get_activation_factory@UIColorsStatics@UI@Windows@winrt@@@winrt@@YA?AUIColorsStatics@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x1806E5DF4 (--$get_activation_factory@UIColorsStatics@UI@Windows@winrt@@@winrt@@YA-AUIColorsStatics@UI@Windo.c)
 */

// Hidden C++ exception states: #wind=2
_DWORD *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::UI::Colors,winrt::Windows::UI::IColorsStatics>::call<winrt::Windows::UI::Color (*)(winrt::Windows::UI::IColorsStatics const &)>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        _DWORD *a2,
        __int64 (__fastcall **a3)(__int64 *))
{
  __int64 v6[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v7[32]; // [rsp+30h] [rbp-20h] BYREF
  void (__fastcall ***v8)(_QWORD, __int64 *, __int64 *); // [rsp+60h] [rbp+10h] BYREF
  __int64 v9; // [rsp+78h] [rbp+28h] BYREF

  v8 = a1;
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v7, L"Windows.UI.Colors", 17);
  winrt::get_activation_factory<winrt::Windows::UI::IColorsStatics>(&v8, v7);
  if ( v8 && (v9 = 0LL, (**v8)(v8, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v9), (v6[0] = v9) != 0) )
  {
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v6);
    v6[1] = (__int64)&qword_180990E18;
    _InterlockedIncrement64(&qword_180990E18);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Colors,winrt::Windows::UI::IColorsStatics>,
            (signed __int64)v8,
            0LL) )
    {
      v8 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180990E20);
    }
    *a2 = (*a3)(&winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Colors,winrt::Windows::UI::IColorsStatics>);
    _InterlockedDecrement64(&qword_180990E18);
  }
  else
  {
    *a2 = (*a3)((__int64 *)&v8);
  }
  if ( v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  return a2;
}
