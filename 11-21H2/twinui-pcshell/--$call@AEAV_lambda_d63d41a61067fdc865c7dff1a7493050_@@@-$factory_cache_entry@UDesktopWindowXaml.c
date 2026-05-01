/*
 * XREFs of ??$call@AEAV_lambda_d63d41a61067fdc865c7dff1a7493050_@@@?$factory_cache_entry@UDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@UIDesktopWindowXamlSourceFactory@23456@@impl@winrt@@QEAA?AUDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@2@AEAV_lambda_d63d41a61067fdc865c7dff1a7493050_@@@Z @ 0x1800668E4
 * Callers:
 *     ??0DesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x1800F3F24 (--0DesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??$get_activation_factory@UIDesktopWindowXamlSourceFactory@Hosting@Xaml@UI@Windows@winrt@@@winrt@@YA?AUIDesktopWindowXamlSourceFactory@Hosting@Xaml@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x180067A08 (--$get_activation_factory@UIDesktopWindowXamlSourceFactory@Hosting@Xaml@UI@Windows@winrt@@@winrt.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x180067B6C (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?CreateInstance@?$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSourceFactory@UIDesktopWindowXamlSourceFactory@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AUDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@3@AEBUIInspectable@Foundation@83@AEAU9Foundation@83@@Z @ 0x18006909C (-CreateInstance@-$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSourceFactory@UIDesktopWindo.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x18018F6EB (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>::call<_lambda_d63d41a61067fdc865c7dff1a7493050_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        _QWORD *a3)
{
  void (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 v6; // rax
  char v7; // r14
  bool v8; // zf
  _QWORD v10[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v11[32]; // [rsp+30h] [rbp-20h] BYREF
  void (__fastcall ***v12)(_QWORD, __int64 *, __int64 *); // [rsp+70h] [rbp+20h] BYREF
  __int64 v13; // [rsp+88h] [rbp+38h] BYREF

  v12 = a1;
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v11,
    L"Windows.UI.Xaml.Hosting.DesktopWindowXamlSource",
    0x2FuLL);
  winrt::get_activation_factory<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>(&v12, v11);
  v5 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v12;
  if ( v12 )
  {
    v13 = 0LL;
    (**v12)(v12, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v13);
    v6 = v13;
    v10[0] = v13;
    if ( v13 )
    {
      v7 = 1;
      goto LABEL_4;
    }
  }
  else
  {
    v6 = 0LL;
    v10[0] = 0LL;
  }
  v7 = 0;
LABEL_4:
  if ( v6 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v10);
  if ( v7 )
  {
    v10[1] = &qword_1807B43B8;
    _InterlockedIncrement64(&qword_1807B43B8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>,
            (signed __int64)v12,
            0LL) )
    {
      v12 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1807B43C0);
    }
    winrt::impl::consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSourceFactory<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>::CreateInstance(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>,
      a2,
      *a3,
      a3[1],
      v10[0]);
    _InterlockedDecrement64(&qword_1807B43B8);
    v8 = v12 == 0LL;
  }
  else
  {
    winrt::impl::consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSourceFactory<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>::CreateInstance(
      &v12,
      a2,
      *a3,
      a3[1],
      v10[0]);
    v8 = v5 == 0LL;
  }
  if ( !v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  return a2;
}
