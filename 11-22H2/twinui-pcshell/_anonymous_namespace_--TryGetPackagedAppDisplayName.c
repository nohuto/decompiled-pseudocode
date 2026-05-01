/*
 * XREFs of _anonymous_namespace_::TryGetPackagedAppDisplayName @ 0x1806A75BC
 * Callers:
 *     _anonymous_namespace_::TryGetRequestorDisplayInformation @ 0x1806A7FD4 (_anonymous_namespace_--TryGetRequestorDisplayInformation.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$call@AEAV_lambda_93cf3dd1a637ea07f09c92a2c241488e_@@@?$factory_cache_entry@UAppInfo@ApplicationModel@Windows@winrt@@UIAppInfoStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_93cf3dd1a637ea07f09c92a2c241488e_@@@Z @ 0x1803D3EDC (--$call@AEAV_lambda_93cf3dd1a637ea07f09c92a2c241488e_@@@-$factory_cache_entry@UAppInfo@Applicati.c)
 *     ??R_lambda_93cf3dd1a637ea07f09c92a2c241488e_@@QEBA@AEBUIAppInfoStatics@ApplicationModel@Windows@winrt@@@Z @ 0x1803D4E10 (--R_lambda_93cf3dd1a637ea07f09c92a2c241488e_@@QEBA@AEBUIAppInfoStatics@ApplicationModel@Windows@.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall anonymous_namespace_::TryGetPackagedAppDisplayName(_QWORD *a1, __int64 a2)
{
  void (__fastcall ***v3)(_QWORD, __int64 *, __int64 *); // rcx
  signed int v4; // eax
  __int64 v5; // rdi
  signed int v6; // eax
  __int64 v8; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v9[3]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v10[2]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v11[32]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v12; // [rsp+70h] [rbp-28h] BYREF
  __int64 v13; // [rsp+78h] [rbp-20h] BYREF

  v9[1] = a1;
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v11,
    *(const unsigned __int16 *const *)a2,
    *(_QWORD *)(a2 + 8));
  v9[0] = v11;
  v10[1] = &qword_180990AA8;
  _InterlockedIncrement64(&qword_180990AA8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::AppInfo,winrt::Windows::ApplicationModel::IAppInfoStatics> )
  {
    _lambda_93cf3dd1a637ea07f09c92a2c241488e_::operator()(
      v9,
      (__int64)&v8,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::AppInfo,winrt::Windows::ApplicationModel::IAppInfoStatics>);
    _InterlockedDecrement64(&qword_180990AA8);
  }
  else
  {
    _InterlockedDecrement64(&qword_180990AA8);
    winrt::impl::factory_cache_entry<winrt::Windows::ApplicationModel::AppInfo,winrt::Windows::ApplicationModel::IAppInfoStatics>::call<_lambda_93cf3dd1a637ea07f09c92a2c241488e_ &>(
      v3,
      (__int64)&v8,
      v9);
  }
  v12 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 64LL))(v8, &v12);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  v5 = v12;
  v10[0] = v12;
  v13 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 48LL))(v12, &v13);
  if ( v6 < 0 )
    winrt::throw_hresult(v6);
  *a1 = v13;
  if ( v5 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v10);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  return a1;
}
