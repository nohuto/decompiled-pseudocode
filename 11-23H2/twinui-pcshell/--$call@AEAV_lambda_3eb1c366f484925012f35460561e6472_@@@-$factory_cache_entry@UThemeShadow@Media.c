/*
 * XREFs of ??$call@AEAV_lambda_3eb1c366f484925012f35460561e6472_@@@?$factory_cache_entry@UThemeShadow@Media@Xaml@UI@Windows@winrt@@UIThemeShadowFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_3eb1c366f484925012f35460561e6472_@@@Z @ 0x180657C94
 * Callers:
 *     ??0ThemeShadow@Media@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180658B98 (--0ThemeShadow@Media@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$get_activation_factory@UIThemeShadowFactory@Media@Xaml@UI@Windows@winrt@@@winrt@@YA?AUIThemeShadowFactory@Media@Xaml@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x1806587E4 (--$get_activation_factory@UIThemeShadowFactory@Media@Xaml@UI@Windows@winrt@@@winrt@@YA-AUIThemeS.c)
 *     ?CreateInstance@?$consume_Windows_UI_Xaml_Media_IThemeShadowFactory@UIThemeShadowFactory@Media@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUIInspectable@Foundation@Windows@3@AEAU4563@@Z @ 0x180659758 (-CreateInstance@-$consume_Windows_UI_Xaml_Media_IThemeShadowFactory@UIThemeShadowFactory@Media@X.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Media::ThemeShadow,winrt::Windows::UI::Xaml::Media::IThemeShadowFactory>::call<_lambda_3eb1c366f484925012f35460561e6472_ &>(
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
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v9, L"Windows.UI.Xaml.Media.ThemeShadow", 33);
  winrt::get_activation_factory<winrt::Windows::UI::Xaml::Media::IThemeShadowFactory>(&v10, v9);
  v5 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v10;
  if ( v10 && (v11 = 0LL, (**v10)(v10, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v11), (v8[0] = v11) != 0) )
  {
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v8);
    v8[1] = (__int64)&qword_180991D78;
    _InterlockedIncrement64(&qword_180991D78);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Media::ThemeShadow,winrt::Windows::UI::Xaml::Media::IThemeShadowFactory>,
            (signed __int64)v10,
            0LL) )
    {
      v10 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180991D80);
    }
    winrt::impl::consume_Windows_UI_Xaml_Media_IThemeShadowFactory<winrt::Windows::UI::Xaml::Media::IThemeShadowFactory>::CreateInstance(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Media::ThemeShadow,winrt::Windows::UI::Xaml::Media::IThemeShadowFactory>,
      a2,
      *a3,
      a3[1]);
    _InterlockedDecrement64(&qword_180991D78);
    v6 = v10 == 0LL;
  }
  else
  {
    winrt::impl::consume_Windows_UI_Xaml_Media_IThemeShadowFactory<winrt::Windows::UI::Xaml::Media::IThemeShadowFactory>::CreateInstance(
      &v10,
      a2,
      *a3,
      a3[1]);
    v6 = v5 == 0LL;
  }
  if ( !v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  return a2;
}
