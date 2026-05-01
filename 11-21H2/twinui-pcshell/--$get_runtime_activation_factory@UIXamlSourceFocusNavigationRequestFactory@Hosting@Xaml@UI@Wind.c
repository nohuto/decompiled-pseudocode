/*
 * XREFs of ??$get_runtime_activation_factory@UIXamlSourceFocusNavigationRequestFactory@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x1804227A0
 * Callers:
 *     ??$get_activation_factory@UIXamlSourceFocusNavigationRequestFactory@Hosting@Xaml@UI@Windows@winrt@@@winrt@@YA?AUIXamlSourceFocusNavigationRequestFactory@Hosting@Xaml@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x18042275C (--$get_activation_factory@UIXamlSourceFocusNavigationRequestFactory@Hosting@Xaml@UI@Windows@winr.c)
 * Callees:
 *     ??$load_runtime_function@P6AHPEAXAEBUguid@winrt@@PEAPEAX@_EP6AH012@_E@impl@winrt@@YAXPEBDAEAP6AHPEAXAEBUguid@1@PEAPEAX@_EP6AH123@_E@Z @ 0x180068DEC (--$load_runtime_function@P6AHPEAXAEBUguid@winrt@@PEAPEAX@_EP6AH012@_E@impl@winrt@@YAXPEBDAEAP6AH.c)
 *     ?as@IUnknown@Foundation@Windows@winrt@@QEBA?AUhresult@4@AEBUguid@4@PEAPEAX@Z @ 0x1800CDEAC (-as@IUnknown@Foundation@Windows@winrt@@QEBA-AUhresult@4@AEBUguid@4@PEAPEAX@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     WINRT_IMPL_GetProcAddress @ 0x180189380 (WINRT_IMPL_GetProcAddress.c)
 *     LoadLibraryW_0 @ 0x18018A15A (LoadLibraryW_0.c)
 *     WINRT_IMPL_FreeLibrary @ 0x18018A166 (WINRT_IMPL_FreeLibrary.c)
 *     SetErrorInfo_0 @ 0x18018F68B (SetErrorInfo_0.c)
 *     GetErrorInfo_0 @ 0x18018F6A9 (GetErrorInfo_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x1804216DC (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 *     ??$?0Uhstring@winrt@@$0A@@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBUhstring@winrt@@AEBV?$allocator@_W@1@@Z @ 0x18042198C (--$-0Uhstring@winrt@@$0A@@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@A.c)
 *     ??$_Reallocate_grow_by@V_lambda_1dfe18491bcca09701d8ccb01d0b0af4_@@PEB_W_K@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAAEAV01@_KV_lambda_1dfe18491bcca09701d8ccb01d0b0af4_@@PEB_W_K@Z @ 0x180421A6C (--$_Reallocate_grow_by@V_lambda_1dfe18491bcca09701d8ccb01d0b0af4_@@PEB_W_K@-$basic_string@_WU-$c.c)
 */

_DWORD *__fastcall winrt::impl::get_runtime_activation_factory<winrt::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>(
        _DWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  int v6; // edi
  HMODULE LibraryW_0; // rax
  FARPROC ProcAddress; // rax
  LPCWSTR *v9; // r8
  __int64 v10; // r9
  char *i; // rdx
  unsigned __int64 v12; // rdx
  LPCWSTR *v13; // rax
  unsigned __int64 v14; // rdx
  LPCWSTR *v15; // rax
  const WCHAR *v16; // rcx
  HMODULE v17; // rbx
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  LPCWSTR *v20; // rax
  FARPROC v21; // rax
  __int64 v23; // [rsp+30h] [rbp-40h] BYREF
  IErrorInfo *pperrinfo; // [rsp+38h] [rbp-38h] BYREF
  int v25; // [rsp+40h] [rbp-30h] BYREF
  LPCWSTR lpLibFileName[2]; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v27; // [rsp+58h] [rbp-18h]
  unsigned __int64 v28; // [rsp+60h] [rbp-10h]

  if ( winrt_activation_handler )
  {
    *a1 = winrt_activation_handler(
            *a2,
            &winrt::impl::guid_v<winrt::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>);
    return a1;
  }
  ___load_runtime_function_P6AHPEAXAEBUguid_winrt__PEAPEAX__EP6AH012__E_impl_winrt__YAXPEBDAEAP6AHPEAXAEBUguid_1_PEAPEAX__EP6AH123__E_Z(
    (__int64)a1,
    (FARPROC *)&`winrt::impl::get_runtime_activation_factory<winrt::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>'::`2'::handler);
  v6 = ((__int64 (__fastcall *)(_QWORD, void *, __int64))`winrt::impl::get_runtime_activation_factory<winrt::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>'::`2'::handler)(
         *a2,
         &winrt::impl::guid_v<winrt::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>,
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
    ((void (__fastcall *)(__int64 *))ProcAddress)(&v23);
    v6 = ((__int64 (__fastcall *)(_QWORD, void *, __int64))`winrt::impl::get_runtime_activation_factory<winrt::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>'::`2'::handler)(
           *a2,
           &winrt::impl::guid_v<winrt::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>,
           a3);
  }
  if ( !v6 )
  {
    *a1 = 0;
    return a1;
  }
  pperrinfo = 0LL;
  GetErrorInfo_0(0, &pperrinfo);
  std::wstring::wstring((char *)lpLibFileName, (__int64)a2);
  while ( 1 )
  {
    do
    {
      v9 = lpLibFileName;
      if ( v28 >= 8 )
        v9 = (LPCWSTR *)lpLibFileName[0];
      v10 = v27;
      if ( !v27 )
        goto LABEL_44;
      for ( i = (char *)v9 + 2 * v27 - 2; *(_WORD *)i != 46; i -= 2 )
      {
        if ( i == (char *)v9 )
          goto LABEL_44;
      }
      v12 = (i - (char *)v9) >> 1;
      if ( v12 == -1LL )
      {
LABEL_44:
        SetErrorInfo_0(0, pperrinfo);
        *a1 = v6;
        goto LABEL_45;
      }
      if ( v12 > v27 )
      {
        std::wstring::append((wchar_t *)lpLibFileName, v12 - v27, (__int64)v9);
      }
      else
      {
        v13 = lpLibFileName;
        if ( v28 >= 8 )
          v13 = (LPCWSTR *)lpLibFileName[0];
        v27 = v12;
        *((_WORD *)v13 + v12) = 0;
      }
      v14 = v27;
      if ( v28 - v27 < 4 )
      {
        std::wstring::_Reallocate_grow_by<_lambda_1dfe18491bcca09701d8ccb01d0b0af4_,wchar_t const *,unsigned __int64>(
          (void **)lpLibFileName,
          4uLL,
          (__int64)v9,
          v10,
          4LL);
      }
      else
      {
        v27 += 4LL;
        v15 = lpLibFileName;
        if ( v28 >= 8 )
          v15 = (LPCWSTR *)lpLibFileName[0];
        *(LPCWSTR *)((char *)v15 + 2 * v14) = (LPCWSTR)0x6C006C0064002ELL;
        *((_WORD *)v15 + v14 + 4) = 0;
      }
      v16 = (const WCHAR *)lpLibFileName;
      if ( v28 >= 8 )
        v16 = lpLibFileName[0];
      v17 = LoadLibraryW_0(v16);
      v19 = v27 - 4;
      if ( v27 < 4 )
      {
        std::wstring::append((wchar_t *)lpLibFileName, 0xFFFFFFFFFFFFFFFCuLL, v18);
      }
      else
      {
        v20 = lpLibFileName;
        if ( v28 >= 8 )
          v20 = (LPCWSTR *)lpLibFileName[0];
        v27 -= 4LL;
        *((_WORD *)v20 + v19) = 0;
      }
    }
    while ( !v17 );
    v21 = WINRT_IMPL_GetProcAddress(v17, "DllGetActivationFactory");
    if ( v21 )
      break;
LABEL_41:
    WINRT_IMPL_FreeLibrary(v17);
  }
  v23 = 0LL;
  if ( ((unsigned int (__fastcall *)(_QWORD, __int64 *))v21)(*a2, &v23)
    || *winrt::Windows::Foundation::IUnknown::as(
          &v23,
          &v25,
          (__int64)&winrt::impl::guid_v<winrt::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>,
          a3) )
  {
    if ( v23 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v23);
    goto LABEL_41;
  }
  *a1 = 0;
  if ( v23 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v23);
LABEL_45:
  if ( v28 >= 8 )
    std::_Deallocate<16,0>((void *)lpLibFileName[0], 2 * v28 + 2);
  LOWORD(lpLibFileName[0]) = 0;
  v28 = 7LL;
  v27 = 0LL;
  if ( pperrinfo )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)&pperrinfo);
  return a1;
}
