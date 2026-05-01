/*
 * XREFs of ??$call@P6A?AUDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@AEBUIActivationFactory@Foundation@Windows@5@@Z@?$factory_cache_entry@UDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@UIActivationFactory@Foundation@Windows@5@@impl@winrt@@QEAA?AUDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@2@$$QEAP6A?AU34562@AEBUIActivationFactory@Foundation@Windows@2@@Z@Z @ 0x1801D0514
 * Callers:
 *     ??0DesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@QEAA@XZ @ 0x1801D063C (--0DesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??$get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@winrt@@YA?AUIActivationFactory@Foundation@Windows@0@AEBUhstring@param@0@@Z @ 0x1800684C0 (--$get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@winrt@@YA-AUIActivation.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIAgileObject@impl@winrt@@@3@XZ @ 0x1800FB0DC (--$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$com_ptr@UIAgile.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800FC56C (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x18018F6EB (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting,winrt::Windows::Foundation::IActivationFactory>::call<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        void (__fastcall **a3)(__int64, __int64 *))
{
  __int64 v5; // rsi
  _QWORD v7[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v8[40]; // [rsp+38h] [rbp-28h] BYREF
  void (__fastcall ***v9)(_QWORD, __int64 *, __int64 *); // [rsp+80h] [rbp+20h] BYREF
  __int64 v10; // [rsp+98h] [rbp+38h] BYREF

  v9 = a1;
  v7[0] = L"SystemSettings.Desktop.Taskbar.DesktopTaskbarDaSetting";
  v7[1] = 54LL;
  winrt::param::hstring::hstring((winrt::param::hstring *)v8, (__int64)v7);
  winrt::get_activation_factory<winrt::Windows::Foundation::IActivationFactory>(&v9, (__int64)v8);
  v5 = *winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(&v9, &v10);
  if ( v10 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v10);
  if ( v5 )
  {
    _InterlockedIncrement64(&qword_1807B47E8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting,winrt::Windows::Foundation::IActivationFactory>,
            (signed __int64)v9,
            0LL) )
    {
      v9 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1807B47F0);
    }
    (*a3)(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting,winrt::Windows::Foundation::IActivationFactory>);
    _InterlockedDecrement64(&qword_1807B47E8);
  }
  else
  {
    (*a3)(a2, (__int64 *)&v9);
  }
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v9);
  return a2;
}
