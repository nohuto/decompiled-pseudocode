/*
 * XREFs of ?SignalGamepadConnect@GamingOverlayExperienceManager@@AEAAXUhstring@winrt@@0@Z @ 0x180407698
 * Callers:
 *     ?OnUINavigationControllerAdded@GamingOverlayExperienceManager@@AEAAXUIInspectable@Foundation@Windows@winrt@@AEBUUINavigationController@Input@Gaming@45@@Z @ 0x180403670 (-OnUINavigationControllerAdded@GamingOverlayExperienceManager@@AEAAXUIInspectable@Foundation@Win.c)
 * Callees:
 *     ?to_hstring@winrt@@YA?AUhstring@1@AEBUguid@1@@Z @ 0x180045DE4 (-to_hstring@winrt@@YA-AUhstring@1@AEBUguid@1@@Z.c)
 *     ??Hwinrt@@YA?AUhstring@0@PEBGAEBU10@@Z @ 0x180060E5C (--Hwinrt@@YA-AUhstring@0@PEBGAEBU10@@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180090D28 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800B25FC (--0hstring@param@winrt@@QEAA@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@Z.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1800B5528 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?CreateUri@?$consume_Windows_Foundation_IUriRuntimeClassFactory@UIUriRuntimeClassFactory@Foundation@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1802D2F38 (-CreateUri@-$consume_Windows_Foundation_IUriRuntimeClassFactory@UIUriRuntimeClassFactory@Foundat.c)
 *     ??$GamepadConnect@AEAUguid@winrt@@@GamingOverlayTelemetry@@SAXAEAUguid@winrt@@@Z @ 0x1803F3DDC (--$GamepadConnect@AEAUguid@winrt@@@GamingOverlayTelemetry@@SAXAEAUguid@winrt@@@Z.c)
 *     ??$call@AEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@?$factory_cache_entry@UUri@Foundation@Windows@winrt@@UIUriRuntimeClassFactory@234@@impl@winrt@@QEAA?A_PAEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@Z @ 0x1803F6FA4 (--$call@AEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@-$factory_cache_entry@UUri@Foundation@Wi.c)
 *     ??$call@AEAV_lambda_25f685323ecfdadefb1917e024cec3b1_@@@?$factory_cache_entry@ULauncher@System@Windows@winrt@@UILauncherStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_25f685323ecfdadefb1917e024cec3b1_@@@Z @ 0x1803F70DC (--$call@AEAV_lambda_25f685323ecfdadefb1917e024cec3b1_@@@-$factory_cache_entry@ULauncher@System@W.c)
 *     ??$call_factory_cast@P6A?AUguid@winrt@@AEBUIGuidHelperStatics@Foundation@Windows@2@@ZUGuidHelper@452@U3452@V_lambda_ea5e3329626312b463edf2c9eea0dadc_@@@impl@winrt@@YA?A_P$$QEAV_lambda_ea5e3329626312b463edf2c9eea0dadc_@@@Z @ 0x1803F75D8 (--$call_factory_cast@P6A-AUguid@winrt@@AEBUIGuidHelperStatics@Foundation@Windows@2@@ZUGuidHelper.c)
 *     ?LaunchUriAsync@?$consume_Windows_System_ILauncherStatics@UILauncherStatics@System@Windows@winrt@@@impl@winrt@@QEBA@AEBUUri@Foundation@Windows@3@@Z @ 0x180401F3C (-LaunchUriAsync@-$consume_Windows_System_ILauncherStatics@UILauncherStatics@System@Windows@winrt.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall GamingOverlayExperienceManager::SignalGamepadConnect(__int64 a1, void *a2, void *a3)
{
  __int64 *v5; // rax
  __int64 *v6; // rax
  __int64 *v7; // rax
  void (__fastcall ***v8)(_QWORD, __int64 *, __int64 *); // rcx
  void (__fastcall ***v9)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v10; // [rsp+20h] [rbp-89h] BYREF
  __int64 v11; // [rsp+28h] [rbp-81h] BYREF
  volatile signed __int32 *v12; // [rsp+30h] [rbp-79h] BYREF
  volatile signed __int32 *v13; // [rsp+38h] [rbp-71h] BYREF
  volatile signed __int32 *v14; // [rsp+40h] [rbp-69h] BYREF
  _QWORD *v15; // [rsp+48h] [rbp-61h] BYREF
  __int64 *v16; // [rsp+50h] [rbp-59h] BYREF
  const void *v17[2]; // [rsp+58h] [rbp-51h] BYREF
  const void *v18[2]; // [rsp+68h] [rbp-41h] BYREF
  const void *v19[6]; // [rsp+78h] [rbp-31h] BYREF
  _QWORD v20[4]; // [rsp+A8h] [rbp-1h] BYREF
  unsigned __int16 Src[16]; // [rsp+C8h] [rbp+1Fh] BYREF
  __int128 v22; // [rsp+E8h] [rbp+3Fh] BYREF

  v19[2] = a2;
  v19[3] = a3;
  std::wstring::wstring(Src, L"ms-gamebar://gamepadConnect");
  winrt::impl::call_factory_cast<winrt::guid (*)(winrt::Windows::Foundation::IGuidHelperStatics const &),winrt::Windows::Foundation::GuidHelper,winrt::Windows::Foundation::IGuidHelperStatics,_lambda_ea5e3329626312b463edf2c9eea0dadc_>((void (__fastcall ***)(_QWORD, __int64 *, __int64 *))&v22);
  std::wstring::append(Src, L"?CorrelationId=", 0xFuLL);
  v5 = (__int64 *)winrt::to_hstring((winrt::hstring *)&v12, (unsigned int *)&v22);
  winrt::hstring::operator std::basic_string_view<unsigned short>(v5, v17);
  std::wstring::append(Src, v17[0], (unsigned __int64)v17[1]);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v12);
  v6 = (__int64 *)winrt::operator+((__int64)&v13, (__int64)L"&VID=", (__int64)a2);
  winrt::hstring::operator std::basic_string_view<unsigned short>(v6, v18);
  std::wstring::append(Src, v18[0], (unsigned __int64)v18[1]);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v13);
  v7 = (__int64 *)winrt::operator+((__int64)&v14, (__int64)L"&PID=", (__int64)a3);
  winrt::hstring::operator std::basic_string_view<unsigned short>(v7, v19);
  std::wstring::append(Src, v19[0], (unsigned __int64)v19[1]);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v14);
  winrt::param::hstring::hstring((winrt::param::hstring *)v20, Src);
  v15 = v20;
  v19[4] = &qword_180990828;
  _InterlockedIncrement64(&qword_180990828);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory> )
  {
    winrt::impl::consume_Windows_Foundation_IUriRuntimeClassFactory<winrt::Windows::Foundation::IUriRuntimeClassFactory>::CreateUri(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory>,
      &v10,
      v20);
    _InterlockedDecrement64(&qword_180990828);
  }
  else
  {
    _InterlockedDecrement64(&qword_180990828);
    winrt::impl::factory_cache_entry<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory>::call<_lambda_0a61d549bec6c444b35123f4c9509ca7_ &>(
      v8,
      &v10,
      &v15);
  }
  v16 = &v10;
  v19[5] = &qword_180990CC8;
  _InterlockedIncrement64(&qword_180990CC8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::System::Launcher,winrt::Windows::System::ILauncherStatics> )
  {
    winrt::impl::consume_Windows_System_ILauncherStatics<winrt::Windows::System::ILauncherStatics>::LaunchUriAsync(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::System::Launcher,winrt::Windows::System::ILauncherStatics>,
      &v11,
      &v10);
    _InterlockedDecrement64(&qword_180990CC8);
  }
  else
  {
    _InterlockedDecrement64(&qword_180990CC8);
    winrt::impl::factory_cache_entry<winrt::Windows::System::Launcher,winrt::Windows::System::ILauncherStatics>::call<_lambda_25f685323ecfdadefb1917e024cec3b1_ &>(
      v9,
      (__int64)&v11,
      &v16);
  }
  if ( v10 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  GamingOverlayTelemetry::GamepadConnect<winrt::guid &>(&v22);
  if ( v11 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
  std::wstring::_Tidy_deallocate((__int64)Src);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a2);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a3);
}
