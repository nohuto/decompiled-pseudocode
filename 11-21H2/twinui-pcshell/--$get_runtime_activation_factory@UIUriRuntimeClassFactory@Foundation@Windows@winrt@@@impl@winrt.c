/*
 * XREFs of ??$get_runtime_activation_factory@UIUriRuntimeClassFactory@Foundation@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x18038DD58
 * Callers:
 *     ??$get_activation_factory@UIUriRuntimeClassFactory@Foundation@Windows@winrt@@@winrt@@YA?AUIUriRuntimeClassFactory@Foundation@Windows@0@AEBUhstring@param@0@@Z @ 0x18038DA40 (--$get_activation_factory@UIUriRuntimeClassFactory@Foundation@Windows@winrt@@@winrt@@YA-AUIUriRu.c)
 * Callees:
 *     ??$load_runtime_function@P6AHPEAXAEBUguid@winrt@@PEAPEAX@_EP6AH012@_E@impl@winrt@@YAXPEBDAEAP6AHPEAXAEBUguid@1@PEAPEAX@_EP6AH123@_E@Z @ 0x180068DEC (--$load_runtime_function@P6AHPEAXAEBUguid@winrt@@PEAPEAX@_EP6AH012@_E@impl@winrt@@YAXPEBDAEAP6AH.c)
 *     ?as@IUnknown@Foundation@Windows@winrt@@QEBA?AUhresult@4@AEBUguid@4@PEAPEAX@Z @ 0x1800CDEAC (-as@IUnknown@Foundation@Windows@winrt@@QEBA-AUhresult@4@AEBUguid@4@PEAPEAX@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
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
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x18033CC7C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 */

_DWORD *__fastcall winrt::impl::get_runtime_activation_factory<winrt::Windows::Foundation::IUriRuntimeClassFactory>(
        _DWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  int v6; // edi
  HMODULE LibraryW_0; // rax
  FARPROC ProcAddress; // rax
  LPCWSTR *v9; // r8
  char *i; // rdx
  unsigned __int64 v11; // rdx
  LPCWSTR *v12; // rax
  const WCHAR *v13; // rcx
  HMODULE v14; // rbx
  unsigned __int64 v15; // rdx
  LPCWSTR *v16; // rax
  FARPROC v17; // rax
  __int64 v19; // [rsp+20h] [rbp-40h] BYREF
  IErrorInfo *pperrinfo; // [rsp+28h] [rbp-38h] BYREF
  int v21; // [rsp+30h] [rbp-30h] BYREF
  LPCWSTR lpLibFileName[2]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-18h]
  unsigned __int64 v24; // [rsp+50h] [rbp-10h]

  if ( winrt_activation_handler )
  {
    *a1 = winrt_activation_handler(*a2, &winrt::impl::guid_v<winrt::Windows::Foundation::IUriRuntimeClassFactory>);
    return a1;
  }
  ___load_runtime_function_P6AHPEAXAEBUguid_winrt__PEAPEAX__EP6AH012__E_impl_winrt__YAXPEBDAEAP6AHPEAXAEBUguid_1_PEAPEAX__EP6AH123__E_Z(
    (__int64)a1,
    (FARPROC *)&`winrt::impl::get_runtime_activation_factory<winrt::Windows::Foundation::IUriRuntimeClassFactory>'::`2'::handler);
  v6 = ((__int64 (__fastcall *)(_QWORD, void *, __int64))`winrt::impl::get_runtime_activation_factory<winrt::Windows::Foundation::IUriRuntimeClassFactory>'::`2'::handler)(
         *a2,
         &winrt::impl::guid_v<winrt::Windows::Foundation::IUriRuntimeClassFactory>,
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
    ((void (__fastcall *)(__int64 *))ProcAddress)(&v19);
    v6 = ((__int64 (__fastcall *)(_QWORD, void *, __int64))`winrt::impl::get_runtime_activation_factory<winrt::Windows::Foundation::IUriRuntimeClassFactory>'::`2'::handler)(
           *a2,
           &winrt::impl::guid_v<winrt::Windows::Foundation::IUriRuntimeClassFactory>,
           a3);
  }
  if ( !v6 )
  {
    *a1 = 0;
    return a1;
  }
  pperrinfo = 0LL;
  GetErrorInfo_0(0, &pperrinfo);
  std::wstring::wstring((__int64)lpLibFileName, (__int64)a2);
  while ( 1 )
  {
    do
    {
      v9 = lpLibFileName;
      if ( v24 >= 8 )
        v9 = (LPCWSTR *)lpLibFileName[0];
      if ( !v23 )
        goto LABEL_39;
      for ( i = (char *)v9 + 2 * v23 - 2; *(_WORD *)i != 46; i -= 2 )
      {
        if ( i == (char *)v9 )
          goto LABEL_39;
      }
      v11 = (i - (char *)v9) >> 1;
      if ( v11 == -1LL )
      {
LABEL_39:
        SetErrorInfo_0(0, pperrinfo);
        *a1 = v6;
        goto LABEL_40;
      }
      if ( v11 > v23 )
      {
        std::wstring::append((wchar_t *)lpLibFileName, v11 - v23, 0);
      }
      else
      {
        v12 = lpLibFileName;
        if ( v24 >= 8 )
          v12 = (LPCWSTR *)lpLibFileName[0];
        v23 = v11;
        *((_WORD *)v12 + v11) = 0;
      }
      std::wstring::append(lpLibFileName, L".dll", 4uLL);
      v13 = (const WCHAR *)lpLibFileName;
      if ( v24 >= 8 )
        v13 = lpLibFileName[0];
      v14 = LoadLibraryW_0(v13);
      v15 = v23 - 4;
      if ( v23 < 4 )
      {
        std::wstring::append((wchar_t *)lpLibFileName, 0xFFFFFFFFFFFFFFFCuLL, 0);
      }
      else
      {
        v16 = lpLibFileName;
        if ( v24 >= 8 )
          v16 = (LPCWSTR *)lpLibFileName[0];
        v23 -= 4LL;
        *((_WORD *)v16 + v15) = 0;
      }
    }
    while ( !v14 );
    v17 = WINRT_IMPL_GetProcAddress(v14, "DllGetActivationFactory");
    if ( v17 )
      break;
LABEL_36:
    WINRT_IMPL_FreeLibrary(v14);
  }
  v19 = 0LL;
  if ( ((unsigned int (__fastcall *)(_QWORD, __int64 *))v17)(*a2, &v19)
    || *winrt::Windows::Foundation::IUnknown::as(
          &v19,
          &v21,
          (__int64)&winrt::impl::guid_v<winrt::Windows::Foundation::IUriRuntimeClassFactory>,
          a3) )
  {
    if ( v19 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v19);
    goto LABEL_36;
  }
  *a1 = 0;
  if ( v19 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v19);
LABEL_40:
  std::wstring::_Tidy_deallocate((__int64)lpLibFileName);
  if ( pperrinfo )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)&pperrinfo);
  return a1;
}
