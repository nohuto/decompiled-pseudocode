/*
 * XREFs of ?CreateInstance@?$consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSourceFactory@UIDesktopWindowXamlSourceFactory@Hosting@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@AEBUIInspectable@Foundation@Windows@3@AEAU4563@@Z @ 0x18004AC60
 * Callers:
 *     ??$call@AEAV_lambda_9da9a377ea2426f3d5421a6be20021de_@@@?$factory_cache_entry@UDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@UIDesktopWindowXamlSourceFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_9da9a377ea2426f3d5421a6be20021de_@@@Z @ 0x18004A114 (--$call@AEAV_lambda_9da9a377ea2426f3d5421a6be20021de_@@@-$factory_cache_entry@UDesktopWindowXaml.c)
 *     ??0DesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@QEAA@XZ @ 0x18004A9F8 (--0DesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??B?$bind_out@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@QEBAPEAPEAXXZ @ 0x1800AF4A0 (--B-$bind_out@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@QEBAPEAPEAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSourceFactory<winrt::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>::CreateInstance(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v5; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64, __int64 *); // rbx
  __int64 v8; // rax
  int v9; // eax
  _QWORD *result; // rax
  _QWORD *v11; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF

  v11 = a2;
  v5 = *a1;
  v12 = 0LL;
  v11 = a4;
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v5 + 48LL);
  v8 = winrt::impl::bind_out<winrt::Windows::Foundation::IInspectable>::operator void * *(&v11);
  v9 = v7(v5, *a3, v8, &v12);
  if ( v9 < 0 )
    winrt::throw_hresult((unsigned int)v9);
  result = a2;
  *a2 = v12;
  return result;
}
