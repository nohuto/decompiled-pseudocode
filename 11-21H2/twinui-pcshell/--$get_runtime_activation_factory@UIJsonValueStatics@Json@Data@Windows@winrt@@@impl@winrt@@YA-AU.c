/*
 * XREFs of ??$get_runtime_activation_factory@UIJsonValueStatics@Json@Data@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x1801C2A28
 * Callers:
 *     ??$call@AEAV_lambda_ca425077811c26dd994b3d0531fe1de0_@@@?$factory_cache_entry@UJsonValue@Json@Data@Windows@winrt@@UIJsonValueStatics@2345@@impl@winrt@@QEAA?AUJsonValue@Json@Data@Windows@2@AEAV_lambda_ca425077811c26dd994b3d0531fe1de0_@@@Z @ 0x1801C252C (--$call@AEAV_lambda_ca425077811c26dd994b3d0531fe1de0_@@@-$factory_cache_entry@UJsonValue@Json@Da.c)
 * Callees:
 *     ??$load_runtime_function@P6AHPEAXAEBUguid@winrt@@PEAPEAX@_EP6AH012@_E@impl@winrt@@YAXPEBDAEAP6AHPEAXAEBUguid@1@PEAPEAX@_EP6AH123@_E@Z @ 0x180068DEC (--$load_runtime_function@P6AHPEAXAEBUguid@winrt@@PEAPEAX@_EP6AH012@_E@impl@winrt@@YAXPEBDAEAP6AH.c)
 *     ?as@IUnknown@Foundation@Windows@winrt@@QEBA?AUhresult@4@AEBUguid@4@PEAPEAX@Z @ 0x1800CDEAC (-as@IUnknown@Foundation@Windows@winrt@@QEBA-AUhresult@4@AEBUguid@4@PEAPEAX@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800E6350 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180174FA4 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     WINRT_IMPL_GetProcAddress @ 0x180189380 (WINRT_IMPL_GetProcAddress.c)
 *     LoadLibraryW_0 @ 0x18018A15A (LoadLibraryW_0.c)
 *     WINRT_IMPL_FreeLibrary @ 0x18018A166 (WINRT_IMPL_FreeLibrary.c)
 *     SetErrorInfo_0 @ 0x18018F68B (SetErrorInfo_0.c)
 *     GetErrorInfo_0 @ 0x18018F6A9 (GetErrorInfo_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?0Uhstring@winrt@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBUhstring@winrt@@AEBV?$allocator@G@1@@Z @ 0x180324340 (--$-0Uhstring@winrt@@$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBU.c)
 *     ?resize@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_KG@Z @ 0x18033D8E8 (-resize@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_KG@Z.c)
 *     ?rfind@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KG_K@Z @ 0x18033D948 (-rfind@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KG_K@Z.c)
 */

_DWORD *__fastcall winrt::impl::get_runtime_activation_factory<winrt::Windows::Data::Json::IJsonValueStatics>(
        _DWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  int v6; // ebx
  HMODULE LibraryW_0; // rax
  FARPROC ProcAddress; // rax
  __int64 v9; // rax
  const WCHAR *v10; // rcx
  HMODULE v11; // rdi
  FARPROC v12; // rax
  __int64 v14; // [rsp+20h] [rbp-40h] BYREF
  IErrorInfo *pperrinfo; // [rsp+28h] [rbp-38h] BYREF
  int v16; // [rsp+30h] [rbp-30h] BYREF
  LPCWSTR lpLibFileName[4]; // [rsp+38h] [rbp-28h] BYREF

  if ( winrt_activation_handler )
  {
    *a1 = winrt_activation_handler(*a2, &winrt::impl::guid_v<winrt::Windows::Data::Json::IJsonValueStatics>);
    return a1;
  }
  ___load_runtime_function_P6AHPEAXAEBUguid_winrt__PEAPEAX__EP6AH012__E_impl_winrt__YAXPEBDAEAP6AHPEAXAEBUguid_1_PEAPEAX__EP6AH123__E_Z(
    (__int64)a1,
    (FARPROC *)&`winrt::impl::get_runtime_activation_factory<winrt::Windows::Data::Json::IJsonValueStatics>'::`2'::handler);
  v6 = ((__int64 (__fastcall *)(_QWORD, void *, __int64))`winrt::impl::get_runtime_activation_factory<winrt::Windows::Data::Json::IJsonValueStatics>'::`2'::handler)(
         *a2,
         &winrt::impl::guid_v<winrt::Windows::Data::Json::IJsonValueStatics>,
         a3);
  if ( v6 == -2147221008 )
  {
    LibraryW_0 = LoadLibraryW_0(L"combase.dll");
    ProcAddress = WINRT_IMPL_GetProcAddress(LibraryW_0, "CoIncrementMTAUsage");
    if ( !ProcAddress )
    {
      *a1 = -2147221008;
      return a1;
    }
    ((void (__fastcall *)(__int64 *))ProcAddress)(&v14);
    v6 = ((__int64 (__fastcall *)(_QWORD, void *, __int64))`winrt::impl::get_runtime_activation_factory<winrt::Windows::Data::Json::IJsonValueStatics>'::`2'::handler)(
           *a2,
           &winrt::impl::guid_v<winrt::Windows::Data::Json::IJsonValueStatics>,
           a3);
  }
  if ( !v6 )
  {
    *a1 = 0;
    return a1;
  }
  pperrinfo = 0LL;
  GetErrorInfo_0(0, &pperrinfo);
  std::wstring::wstring(lpLibFileName, a2);
  while ( 1 )
  {
    do
    {
      v9 = std::wstring::rfind(lpLibFileName);
      if ( v9 == -1 )
      {
        SetErrorInfo_0(0, pperrinfo);
        *a1 = v6;
        goto LABEL_23;
      }
      std::wstring::resize(lpLibFileName, v9);
      std::wstring::append(lpLibFileName, L".dll", 4uLL);
      v10 = (const WCHAR *)lpLibFileName;
      if ( lpLibFileName[3] >= (LPCWSTR)8 )
        v10 = lpLibFileName[0];
      v11 = LoadLibraryW_0(v10);
      std::wstring::resize(lpLibFileName, lpLibFileName[2] - 2);
    }
    while ( !v11 );
    v12 = WINRT_IMPL_GetProcAddress(v11, "DllGetActivationFactory");
    if ( v12 )
      break;
LABEL_19:
    WINRT_IMPL_FreeLibrary(v11);
  }
  v14 = 0LL;
  if ( ((unsigned int (__fastcall *)(_QWORD, __int64 *))v12)(*a2, &v14)
    || *winrt::Windows::Foundation::IUnknown::as(
          &v14,
          &v16,
          (__int64)&winrt::impl::guid_v<winrt::Windows::Data::Json::IJsonValueStatics>,
          a3) )
  {
    if ( v14 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v14);
    goto LABEL_19;
  }
  *a1 = 0;
  if ( v14 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v14);
LABEL_23:
  std::wstring::~wstring((void **)lpLibFileName);
  if ( pperrinfo )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)&pperrinfo);
  return a1;
}
