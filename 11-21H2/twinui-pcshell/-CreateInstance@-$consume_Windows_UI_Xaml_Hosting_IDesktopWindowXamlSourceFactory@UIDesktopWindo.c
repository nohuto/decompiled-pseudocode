/*
 * XREFs of ?CreateInstance@?$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSourceFactory@UIDesktopWindowXamlSourceFactory@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AUDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@3@AEBUIInspectable@Foundation@83@AEAU9Foundation@83@@Z @ 0x18006909C
 * Callers:
 *     ??$call@AEAV_lambda_d63d41a61067fdc865c7dff1a7493050_@@@?$factory_cache_entry@UDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@UIDesktopWindowXamlSourceFactory@23456@@impl@winrt@@QEAA?AUDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@2@AEAV_lambda_d63d41a61067fdc865c7dff1a7493050_@@@Z @ 0x1800668E4 (--$call@AEAV_lambda_d63d41a61067fdc865c7dff1a7493050_@@@-$factory_cache_entry@UDesktopWindowXaml.c)
 *     ??0DesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x1800F3F24 (--0DesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSourceFactory<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>::CreateInstance(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  __int64 v4; // rsi
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64, __int64 *); // rbp
  int v9; // eax
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v4 = *a1;
  v12 = 0LL;
  v11 = 0LL;
  v8 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v4 + 48LL);
  winrt::Windows::Foundation::IUnknown::operator=(a4, &v11);
  if ( v11 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
  v9 = v8(v4, *a3, a4, &v12);
  if ( v9 < 0 )
    winrt::throw_hresult((unsigned int)v9);
  *a2 = v12;
  return a2;
}
