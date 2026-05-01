/*
 * XREFs of ??$call@AEAV_lambda_9385b473f465738bc2d277d457f6f118_@@@?$factory_cache_entry@UAcrylicBrush@Media@Xaml@UI@Windows@winrt@@UIAcrylicBrushFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_9385b473f465738bc2d277d457f6f118_@@@Z @ 0x180657DD4
 * Callers:
 *     ??0AcrylicBrush@Media@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180658990 (--0AcrylicBrush@Media@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$get_activation_factory@UIAcrylicBrushFactory@Media@Xaml@UI@Windows@winrt@@@winrt@@YA?AUIAcrylicBrushFactory@Media@Xaml@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x1806586B4 (--$get_activation_factory@UIAcrylicBrushFactory@Media@Xaml@UI@Windows@winrt@@@winrt@@YA-AUIAcryl.c)
 *     ?CreateInstance@?$consume_Windows_UI_Xaml_Media_IAcrylicBrushFactory@UIAcrylicBrushFactory@Media@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUIInspectable@Foundation@Windows@3@AEAU4563@@Z @ 0x1806596D8 (-CreateInstance@-$consume_Windows_UI_Xaml_Media_IAcrylicBrushFactory@UIAcrylicBrushFactory@Media.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Media::AcrylicBrush,winrt::Windows::UI::Xaml::Media::IAcrylicBrushFactory>::call<_lambda_9385b473f465738bc2d277d457f6f118_ &>(
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
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v9, L"Windows.UI.Xaml.Media.AcrylicBrush", 34);
  winrt::get_activation_factory<winrt::Windows::UI::Xaml::Media::IAcrylicBrushFactory>(&v10, v9);
  v5 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v10;
  if ( v10 && (v11 = 0LL, (**v10)(v10, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v11), (v8[0] = v11) != 0) )
  {
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v8);
    v8[1] = (__int64)&qword_180991D38;
    _InterlockedIncrement64(&qword_180991D38);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Media::AcrylicBrush,winrt::Windows::UI::Xaml::Media::IAcrylicBrushFactory>,
            (signed __int64)v10,
            0LL) )
    {
      v10 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180991D40);
    }
    winrt::impl::consume_Windows_UI_Xaml_Media_IAcrylicBrushFactory<winrt::Windows::UI::Xaml::Media::IAcrylicBrushFactory>::CreateInstance(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Media::AcrylicBrush,winrt::Windows::UI::Xaml::Media::IAcrylicBrushFactory>,
      a2,
      *a3,
      a3[1]);
    _InterlockedDecrement64(&qword_180991D38);
    v6 = v10 == 0LL;
  }
  else
  {
    winrt::impl::consume_Windows_UI_Xaml_Media_IAcrylicBrushFactory<winrt::Windows::UI::Xaml::Media::IAcrylicBrushFactory>::CreateInstance(
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
