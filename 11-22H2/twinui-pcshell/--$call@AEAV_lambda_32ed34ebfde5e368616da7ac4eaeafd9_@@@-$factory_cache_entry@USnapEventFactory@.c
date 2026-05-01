/*
 * XREFs of ??$call@AEAV_lambda_32ed34ebfde5e368616da7ac4eaeafd9_@@@?$factory_cache_entry@USnapEventFactory@SnapInternal@Shell@UI@WindowsUdk@winrt@@UISnapEventFactoryStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_32ed34ebfde5e368616da7ac4eaeafd9_@@@Z @ 0x180681EC4
 * Callers:
 *     ?TryGetHitTestResultForPoint@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUIInspectable@Foundation@67@AEBUPoint@967@@Z @ 0x180685830 (-TryGetHitTestResultForPoint@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Interna.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$get_activation_factory@UISnapEventFactoryStatics@SnapInternal@Shell@UI@WindowsUdk@winrt@@@winrt@@YA?AUISnapEventFactoryStatics@SnapInternal@Shell@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x1806821F4 (--$get_activation_factory@UISnapEventFactoryStatics@SnapInternal@Shell@UI@WindowsUdk@winrt@@@win.c)
 *     ?CreateWindowDraggingEventArgs@?$consume_WindowsUdk_UI_Shell_SnapInternal_ISnapEventFactoryStatics@UISnapEventFactoryStatics@SnapInternal@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUPoint@Foundation@Windows@3@@Z @ 0x180683430 (-CreateWindowDraggingEventArgs@-$consume_WindowsUdk_UI_Shell_SnapInternal_ISnapEventFactoryStati.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::SnapInternal::SnapEventFactory,winrt::WindowsUdk::UI::Shell::SnapInternal::ISnapEventFactoryStatics>::call<_lambda_32ed34ebfde5e368616da7ac4eaeafd9_ &>(
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
    L"WindowsUdk.UI.Shell.SnapInternal.SnapEventFactory",
    49);
  winrt::get_activation_factory<winrt::WindowsUdk::UI::Shell::SnapInternal::ISnapEventFactoryStatics>(&v10, v9);
  v5 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v10;
  if ( v10 && (v11 = 0LL, (**v10)(v10, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v11), (v8[0] = v11) != 0) )
  {
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v8);
    v8[1] = (__int64)&qword_180991F58;
    _InterlockedIncrement64(&qword_180991F58);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::SnapInternal::SnapEventFactory,winrt::WindowsUdk::UI::Shell::SnapInternal::ISnapEventFactoryStatics>,
            (signed __int64)v10,
            0LL) )
    {
      v10 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180991F60);
    }
    winrt::impl::consume_WindowsUdk_UI_Shell_SnapInternal_ISnapEventFactoryStatics<winrt::WindowsUdk::UI::Shell::SnapInternal::ISnapEventFactoryStatics>::CreateWindowDraggingEventArgs(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::SnapInternal::SnapEventFactory,winrt::WindowsUdk::UI::Shell::SnapInternal::ISnapEventFactoryStatics>,
      a2,
      *a3);
    _InterlockedDecrement64(&qword_180991F58);
    v6 = v10 == 0LL;
  }
  else
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_SnapInternal_ISnapEventFactoryStatics<winrt::WindowsUdk::UI::Shell::SnapInternal::ISnapEventFactoryStatics>::CreateWindowDraggingEventArgs(
      &v10,
      a2,
      *a3);
    v6 = v5 == 0LL;
  }
  if ( !v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  return a2;
}
