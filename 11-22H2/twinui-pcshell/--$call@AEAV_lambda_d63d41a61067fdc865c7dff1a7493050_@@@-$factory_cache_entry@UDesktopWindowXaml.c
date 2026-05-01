/*
 * XREFs of ??$call@AEAV_lambda_d63d41a61067fdc865c7dff1a7493050_@@@?$factory_cache_entry@UDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@UIDesktopWindowXamlSourceFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_d63d41a61067fdc865c7dff1a7493050_@@@Z @ 0x1800AF1DC
 * Callers:
 *     ??0DesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x1800B1050 (--0DesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??$get_activation_factory@UIDesktopWindowXamlSourceFactory@Hosting@Xaml@UI@Windows@winrt@@@winrt@@YA?AUIDesktopWindowXamlSourceFactory@Hosting@Xaml@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x1800AF2EC (--$get_activation_factory@UIDesktopWindowXamlSourceFactory@Hosting@Xaml@UI@Windows@winrt@@@winrt.c)
 *     ?CreateInstance@?$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSourceFactory@UIDesktopWindowXamlSourceFactory@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUIInspectable@Foundation@Windows@3@AEAU4563@@Z @ 0x1800AF3FC (-CreateInstance@-$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSourceFactory@UIDesktopWindo.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>::call<_lambda_d63d41a61067fdc865c7dff1a7493050_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        _QWORD *a3)
{
  _QWORD v6[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v7[40]; // [rsp+38h] [rbp-28h] BYREF
  void (__fastcall ***v8)(_QWORD, __int64 *, __int64 *); // [rsp+70h] [rbp+10h] BYREF
  __int64 v9; // [rsp+88h] [rbp+28h] BYREF

  v8 = a1;
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v7,
    L"Windows.UI.Xaml.Hosting.DesktopWindowXamlSource",
    0x2FuLL);
  winrt::get_activation_factory<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>(&v8, v7);
  if ( v8 && (v9 = 0LL, (**v8)(v8, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v9), (v6[0] = v9) != 0LL) )
  {
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v6);
    v6[1] = &qword_18098E728;
    _InterlockedIncrement64(&qword_18098E728);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>,
            (signed __int64)v8,
            0LL) )
    {
      v8 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18098E730);
    }
    winrt::impl::consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSourceFactory<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>::CreateInstance(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>,
      a2,
      *a3,
      a3[1]);
    _InterlockedDecrement64(&qword_18098E728);
  }
  else
  {
    winrt::impl::consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSourceFactory<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>::CreateInstance(
      &v8,
      a2,
      *a3,
      a3[1]);
  }
  if ( v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  return a2;
}
