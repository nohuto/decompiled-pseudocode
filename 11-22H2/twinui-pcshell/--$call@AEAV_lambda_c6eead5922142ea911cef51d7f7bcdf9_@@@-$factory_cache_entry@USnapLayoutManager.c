/*
 * XREFs of ??$call@AEAV_lambda_c6eead5922142ea911cef51d7f7bcdf9_@@@?$factory_cache_entry@USnapLayoutManager@Shell@UI@WindowsUdk@winrt@@UISnapLayoutManagerStatics2@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_c6eead5922142ea911cef51d7f7bcdf9_@@@Z @ 0x18068D8D8
 * Callers:
 *     ?TryLoadSnapLayoutPickerExtension@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AUSnapLayoutPickerExtension@4UI@WindowsUdk@7@IPEAUHWND__@@PEAUHMONITOR__@@AEBURect@Foundation@67@W4SnapControlType@34567@W4InputDeviceKind@49WindowsUdk@7@@Z @ 0x1806920E8 (-TryLoadSnapLayoutPickerExtension@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$get_activation_factory@UISnapLayoutManagerStatics2@Shell@UI@WindowsUdk@winrt@@@winrt@@YA?AUISnapLayoutManagerStatics2@Shell@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x18068E168 (--$get_activation_factory@UISnapLayoutManagerStatics2@Shell@UI@WindowsUdk@winrt@@@winrt@@YA-AUIS.c)
 *     ?CreateForWorkAreaRect@?$consume_WindowsUdk_UI_Shell_ISnapLayoutManagerStatics2@UISnapLayoutManagerStatics2@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x18068EDC8 (-CreateForWorkAreaRect@-$consume_WindowsUdk_UI_Shell_ISnapLayoutManagerStatics2@UISnapLayoutMana.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::SnapLayoutManager,winrt::WindowsUdk::UI::Shell::ISnapLayoutManagerStatics2>::call<_lambda_c6eead5922142ea911cef51d7f7bcdf9_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        _QWORD *a3)
{
  void (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rbx
  bool v6; // zf
  __int64 v8[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v9[40]; // [rsp+38h] [rbp-28h] BYREF
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 *); // [rsp+80h] [rbp+20h] BYREF
  __int64 v11; // [rsp+98h] [rbp+38h] BYREF

  v10 = a1;
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v9,
    L"WindowsUdk.UI.Shell.SnapLayoutManager",
    37);
  winrt::get_activation_factory<winrt::WindowsUdk::UI::Shell::ISnapLayoutManagerStatics2>(&v10, v9);
  v5 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v10;
  if ( v10 && (v11 = 0LL, (**v10)(v10, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v11), (v8[0] = v11) != 0) )
  {
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v8);
    v8[1] = (__int64)&qword_180991298;
    _InterlockedIncrement64(&qword_180991298);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::SnapLayoutManager,winrt::WindowsUdk::UI::Shell::ISnapLayoutManagerStatics2>,
            (signed __int64)v10,
            0LL) )
    {
      v10 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1809912A0);
    }
    winrt::impl::consume_WindowsUdk_UI_Shell_ISnapLayoutManagerStatics2<winrt::WindowsUdk::UI::Shell::ISnapLayoutManagerStatics2>::CreateForWorkAreaRect(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::SnapLayoutManager,winrt::WindowsUdk::UI::Shell::ISnapLayoutManagerStatics2>,
      a2,
      *a3);
    _InterlockedDecrement64(&qword_180991298);
    v6 = v10 == 0LL;
  }
  else
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_ISnapLayoutManagerStatics2<winrt::WindowsUdk::UI::Shell::ISnapLayoutManagerStatics2>::CreateForWorkAreaRect(
      &v10,
      a2,
      *a3);
    v6 = v5 == 0LL;
  }
  if ( !v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  return a2;
}
