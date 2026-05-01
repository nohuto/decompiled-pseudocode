/*
 * XREFs of ??$call@AEAV_lambda_7591f65f5143d61a379239d524023c94_@@@?$factory_cache_entry@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@UIWindowTabDataModelStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_7591f65f5143d61a379239d524023c94_@@@Z @ 0x180034574
 * Callers:
 *     ?UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x180032F5C (-UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z.c)
 * Callees:
 *     ??R_lambda_7591f65f5143d61a379239d524023c94_@@QEBA@AEBUIWindowTabDataModelStatics@Shell@UI@Internal@Windows@winrt@@@Z @ 0x180034680 (--R_lambda_7591f65f5143d61a379239d524023c94_@@QEBA@AEBUIWindowTabDataModelStatics@Shell@UI@Inter.c)
 *     ??$get_activation_factory@UIWindowTabDataModelStatics@Shell@UI@Internal@Windows@winrt@@@winrt@@YA?AUIWindowTabDataModelStatics@Shell@UI@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x1800346B0 (--$get_activation_factory@UIWindowTabDataModelStatics@Shell@UI@Internal@Windows@winrt@@@winrt@@Y.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Internal::UI::Shell::WindowTabDataModel,winrt::Windows::Internal::UI::Shell::IWindowTabDataModelStatics>::call<_lambda_7591f65f5143d61a379239d524023c94_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        __int64 a3)
{
  void (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rbx
  bool v6; // zf
  _QWORD v8[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v9[40]; // [rsp+38h] [rbp-28h] BYREF
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 *); // [rsp+80h] [rbp+20h] BYREF
  __int64 v11; // [rsp+98h] [rbp+38h] BYREF

  v10 = a1;
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v9,
    L"Windows.Internal.UI.Shell.WindowTabDataModel",
    0x2CuLL);
  winrt::get_activation_factory<winrt::Windows::Internal::UI::Shell::IWindowTabDataModelStatics>(&v10, v9);
  v5 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v10;
  if ( v10 && (v11 = 0LL, (**v10)(v10, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v11), (v8[0] = v11) != 0LL) )
  {
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v8);
    v8[1] = &qword_18098E5B8;
    _InterlockedIncrement64(&qword_18098E5B8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::UI::Shell::WindowTabDataModel,winrt::Windows::Internal::UI::Shell::IWindowTabDataModelStatics>,
            (signed __int64)v10,
            0LL) )
    {
      v10 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18098E5C0);
    }
    _lambda_7591f65f5143d61a379239d524023c94_::operator()(
      a3,
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::UI::Shell::WindowTabDataModel,winrt::Windows::Internal::UI::Shell::IWindowTabDataModelStatics>);
    _InterlockedDecrement64(&qword_18098E5B8);
    v6 = v10 == 0LL;
  }
  else
  {
    _lambda_7591f65f5143d61a379239d524023c94_::operator()(a3, a2, &v10);
    v6 = v5 == 0LL;
  }
  if ( !v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  return a2;
}
