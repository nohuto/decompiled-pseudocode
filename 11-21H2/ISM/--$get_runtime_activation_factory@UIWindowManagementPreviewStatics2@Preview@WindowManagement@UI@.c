/*
 * XREFs of ??$get_runtime_activation_factory@UIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x1800EF330
 * Callers:
 *     ??$get_activation_factory@UIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@winrt@@@winrt@@YA?AUIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x1800EF2EC (--$get_activation_factory@UIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800074C4 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     WINRT_IMPL_GetProcAddress @ 0x18004B1D5 (WINRT_IMPL_GetProcAddress.c)
 *     LoadLibraryW_0 @ 0x18004B30F (LoadLibraryW_0.c)
 *     WINRT_IMPL_FreeLibrary @ 0x18004B31B (WINRT_IMPL_FreeLibrary.c)
 *     GetErrorInfo_0 @ 0x18004C265 (GetErrorInfo_0.c)
 *     SetErrorInfo_0 @ 0x18004C27D (SetErrorInfo_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?0Uhstring@winrt@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBUhstring@winrt@@AEBV?$allocator@G@1@@Z @ 0x180080F94 (--$-0Uhstring@winrt@@$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBU.c)
 *     ??$load_runtime_function@P6AHPEAXAEBUguid@winrt@@PEAPEAX@_EP6AH012@_E@impl@winrt@@YAXPEBDAEAP6AHPEAXAEBUguid@1@PEAPEAX@_EP6AH123@_E@Z @ 0x1800813BC (--$load_runtime_function@P6AHPEAXAEBUguid@winrt@@PEAPEAX@_EP6AH012@_E@impl@winrt@@YAXPEBDAEAP6AH.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180082A64 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180082D48 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x180082DC0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ?as@?$com_ptr@Utype@?$abi@UIActivationFactory@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@QEBA?AUhresult@2@AEBUguid@2@PEAPEAX@Z @ 0x180082E2C (-as@-$com_ptr@Utype@-$abi@UIActivationFactory@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@QE.c)
 */

_DWORD *__fastcall winrt::impl::get_runtime_activation_factory<winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2>(
        _DWORD *a1,
        __int64 *a2,
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
    *a1 = winrt_activation_handler(
            *a2,
            &winrt::impl::guid_v<winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2>);
    return a1;
  }
  ___load_runtime_function_P6AHPEAXAEBUguid_winrt__PEAPEAX__EP6AH012__E_impl_winrt__YAXPEBDAEAP6AHPEAXAEBUguid_1_PEAPEAX__EP6AH123__E_Z(
    (__int64)a1,
    (FARPROC *)&`winrt::impl::get_runtime_activation_factory<winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2>'::`2'::handler);
  v6 = ((__int64 (__fastcall *)(__int64, void *, __int64))`winrt::impl::get_runtime_activation_factory<winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2>'::`2'::handler)(
         *a2,
         &winrt::impl::guid_v<winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2>,
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
    v6 = ((__int64 (__fastcall *)(__int64, void *, __int64))`winrt::impl::get_runtime_activation_factory<winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2>'::`2'::handler)(
           *a2,
           &winrt::impl::guid_v<winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2>,
           a3);
  }
  if ( !v6 )
  {
    *a1 = 0;
    return a1;
  }
  pperrinfo = 0LL;
  GetErrorInfo_0(0, &pperrinfo);
  std::wstring::wstring((__int64)lpLibFileName, a2);
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
        std::wstring::append(lpLibFileName, v11 - v23);
      }
      else
      {
        v12 = lpLibFileName;
        if ( v24 >= 8 )
          v12 = (LPCWSTR *)lpLibFileName[0];
        v23 = v11;
        *((_WORD *)v12 + v11) = 0;
      }
      std::wstring::append((void **)lpLibFileName, L".dll", 4uLL);
      v13 = (const WCHAR *)lpLibFileName;
      if ( v24 >= 8 )
        v13 = lpLibFileName[0];
      v14 = LoadLibraryW_0(v13);
      v15 = v23 - 4;
      if ( v23 < 4 )
      {
        std::wstring::append(lpLibFileName, 0xFFFFFFFFFFFFFFFCuLL);
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
  if ( ((unsigned int (__fastcall *)(__int64, __int64 *))v17)(*a2, &v19)
    || *winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IActivationFactory,void>::type>::as(
          &v19,
          &v21,
          (__int64)&winrt::impl::guid_v<winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2>,
          a3) )
  {
    if ( v19 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v19);
    goto LABEL_36;
  }
  *a1 = 0;
  if ( v19 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v19);
LABEL_40:
  std::wstring::_Tidy_deallocate((__int64)lpLibFileName);
  if ( pperrinfo )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&pperrinfo);
  return a1;
}
