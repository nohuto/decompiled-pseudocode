/*
 * XREFs of ??$call@AEAV_lambda_a2f7f7f06ceca043d5386b16a3f42495_@@@?$factory_cache_entry@UMenuItem@UI@WindowsUdk@winrt@@UIMenuItemStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_a2f7f7f06ceca043d5386b16a3f42495_@@@Z @ 0x1806CA3B4
 * Callers:
 *     ?CreateContainer@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@0AEBUFontIconInfo@234@AEBU?$vector@UMenuItem@UI@WindowsUdk@winrt@@@64@@Z @ 0x1806CCDBC (-CreateContainer@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@0AEBUFontIconInfo@234@AEBU.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$get_activation_factory@UIMenuItemStatics@UI@WindowsUdk@winrt@@@winrt@@YA?AUIMenuItemStatics@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x1806CA75C (--$get_activation_factory@UIMenuItemStatics@UI@WindowsUdk@winrt@@@winrt@@YA-AUIMenuItemStatics@U.c)
 *     ??R_lambda_a2f7f7f06ceca043d5386b16a3f42495_@@QEBA@AEBUIMenuItemStatics@UI@WindowsUdk@winrt@@@Z @ 0x1806CC098 (--R_lambda_a2f7f7f06ceca043d5386b16a3f42495_@@QEBA@AEBUIMenuItemStatics@UI@WindowsUdk@winrt@@@Z.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::MenuItem,winrt::WindowsUdk::UI::IMenuItemStatics>::call<_lambda_a2f7f7f06ceca043d5386b16a3f42495_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        __int64 a3)
{
  void (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rbx
  bool v6; // zf
  __int64 v8[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v9[40]; // [rsp+38h] [rbp-28h] BYREF
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 *); // [rsp+80h] [rbp+20h] BYREF
  __int64 v11; // [rsp+98h] [rbp+38h] BYREF

  v10 = a1;
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v9, L"WindowsUdk.UI.MenuItem", 22);
  winrt::get_activation_factory<winrt::WindowsUdk::UI::IMenuItemStatics>(&v10, v9);
  v5 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v10;
  if ( v10 && (v11 = 0LL, (**v10)(v10, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v11), (v8[0] = v11) != 0) )
  {
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v8);
    v8[1] = (__int64)&qword_180991258;
    _InterlockedIncrement64(&qword_180991258);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::MenuItem,winrt::WindowsUdk::UI::IMenuItemStatics>,
            (signed __int64)v10,
            0LL) )
    {
      v10 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180991260);
    }
    _lambda_a2f7f7f06ceca043d5386b16a3f42495_::operator()(
      a3,
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::MenuItem,winrt::WindowsUdk::UI::IMenuItemStatics>);
    _InterlockedDecrement64(&qword_180991258);
    v6 = v10 == 0LL;
  }
  else
  {
    _lambda_a2f7f7f06ceca043d5386b16a3f42495_::operator()(a3, a2, &v10);
    v6 = v5 == 0LL;
  }
  if ( !v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  return a2;
}
