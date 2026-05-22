/*
 * XREFs of ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1800489E0
 * Callers:
 *     ??$get_activation_factory@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@YA?AUIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x180048948 (--$get_activation_factory@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@win.c)
 *     ??$get_activation_factory@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@YA?AUIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x180048994 (--$get_activation_factory@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@wi.c)
 *     ??$get_activation_factory@UIThreadPoolStatics@Threading@System@Windows@winrt@@@winrt@@YA?AUIThreadPoolStatics@Threading@System@Windows@0@AEBUhstring@param@0@@Z @ 0x1800E2E8C (--$get_activation_factory@UIThreadPoolStatics@Threading@System@Windows@winrt@@@winrt@@YA-AUIThre.c)
 *     ??$get_activation_factory@UIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@winrt@@@winrt@@YA?AUIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x18010872C (--$get_activation_factory@UIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001B4FC (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180047E38 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     WINRT_IMPL_GetProcAddress @ 0x180056FD1 (WINRT_IMPL_GetProcAddress.c)
 *     LoadLibraryW_0 @ 0x1800571BA (LoadLibraryW_0.c)
 *     WINRT_IMPL_FreeLibrary @ 0x1800571C6 (WINRT_IMPL_FreeLibrary.c)
 *     GetErrorInfo_0 @ 0x180058179 (GetErrorInfo_0.c)
 *     SetErrorInfo_0 @ 0x180058191 (SetErrorInfo_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180099AF0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180099DD4 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x180099E4C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 */

_DWORD *__fastcall winrt::impl::get_runtime_activation_factory_impl<0>(_DWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  FARPROC ProcAddress; // rax
  HMODULE LibraryW_0; // rax
  int v10; // edi
  HMODULE v12; // rax
  FARPROC v13; // rax
  __int64 v14; // rax
  WCHAR *v15; // rdx
  unsigned __int64 v16; // r8
  LPCWSTR *v17; // r8
  char *i; // rdx
  unsigned __int64 v19; // rdx
  LPCWSTR *v20; // rax
  const WCHAR *v21; // rcx
  HMODULE v22; // rbx
  unsigned __int64 v23; // rdx
  LPCWSTR *v24; // rax
  FARPROC v25; // rax
  unsigned int (__fastcall ***v26)(_QWORD, __int64, __int64); // [rsp+20h] [rbp-48h] BYREF
  IErrorInfo *pperrinfo; // [rsp+28h] [rbp-40h] BYREF
  LPCWSTR lpLibFileName[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v29; // [rsp+40h] [rbp-28h]
  unsigned __int64 v30; // [rsp+48h] [rbp-20h]

  if ( winrt_activation_handler )
  {
    *a1 = winrt_activation_handler(*a2, a3, a4);
    return a1;
  }
  ProcAddress = (FARPROC)`winrt::impl::get_runtime_activation_factory_impl<0>'::`2'::handler;
  if ( !`winrt::impl::get_runtime_activation_factory_impl<0>'::`2'::handler )
  {
    LibraryW_0 = LoadLibraryW_0(L"combase.dll");
    ProcAddress = WINRT_IMPL_GetProcAddress(LibraryW_0, "RoGetActivationFactory");
    if ( !ProcAddress )
      ProcAddress = (FARPROC)winrt::impl::fallback_RoGetActivationFactory;
    `winrt::impl::get_runtime_activation_factory_impl<0>'::`2'::handler = (__int64)ProcAddress;
  }
  v10 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64))ProcAddress)(*a2, a3, a4);
  if ( v10 == -2147221008 )
  {
    v12 = LoadLibraryW_0(L"combase.dll");
    v13 = WINRT_IMPL_GetProcAddress(v12, "CoIncrementMTAUsage");
    if ( !v13 )
    {
      *a1 = -2147221008;
      return a1;
    }
    ((void (__fastcall *)(unsigned int (__fastcall ****)(_QWORD, __int64, __int64)))v13)(&v26);
    v10 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64))`winrt::impl::get_runtime_activation_factory_impl<0>'::`2'::handler)(
            *a2,
            a3,
            a4);
  }
  if ( !v10 )
  {
    *a1 = 0;
    return a1;
  }
  pperrinfo = 0LL;
  GetErrorInfo_0(0, &pperrinfo);
  lpLibFileName[0] = 0LL;
  v29 = 0LL;
  v30 = 7LL;
  v14 = *a2;
  if ( *a2 )
  {
    v15 = *(WCHAR **)(v14 + 16);
    v16 = *(unsigned int *)(v14 + 4);
  }
  else
  {
    v15 = (WCHAR *)&Src;
    v16 = 0LL;
  }
  std::wstring::assign((void **)lpLibFileName, v15, v16);
  while ( 1 )
  {
    do
    {
      v17 = lpLibFileName;
      if ( v30 >= 8 )
        v17 = (LPCWSTR *)lpLibFileName[0];
      if ( !v29 )
        goto LABEL_47;
      for ( i = (char *)v17 + 2 * v29 - 2; *(_WORD *)i != 46; i -= 2 )
      {
        if ( i == (char *)v17 )
          goto LABEL_47;
      }
      v19 = (i - (char *)v17) >> 1;
      if ( v19 == -1LL )
      {
LABEL_47:
        SetErrorInfo_0(0, pperrinfo);
        *a1 = v10;
        goto LABEL_48;
      }
      if ( v19 > v29 )
      {
        std::wstring::append(lpLibFileName, v19 - v29);
      }
      else
      {
        v20 = lpLibFileName;
        if ( v30 >= 8 )
          v20 = (LPCWSTR *)lpLibFileName[0];
        v29 = v19;
        *((_WORD *)v20 + v19) = 0;
      }
      std::wstring::append(lpLibFileName);
      v21 = (const WCHAR *)lpLibFileName;
      if ( v30 >= 8 )
        v21 = lpLibFileName[0];
      v22 = LoadLibraryW_0(v21);
      v23 = v29 - 4;
      if ( v29 < 4 )
      {
        std::wstring::append(lpLibFileName, -4LL);
      }
      else
      {
        v24 = lpLibFileName;
        if ( v30 >= 8 )
          v24 = (LPCWSTR *)lpLibFileName[0];
        v29 -= 4LL;
        *((_WORD *)v24 + v23) = 0;
      }
    }
    while ( !v22 );
    v25 = WINRT_IMPL_GetProcAddress(v22, "DllGetActivationFactory");
    if ( v25 )
      break;
LABEL_46:
    WINRT_IMPL_FreeLibrary(v22);
  }
  v26 = 0LL;
  if ( ((unsigned int (__fastcall *)(_QWORD, unsigned int (__fastcall ****)(_QWORD, __int64, __int64)))v25)(*a2, &v26)
    || (**v26)(v26, a3, a4) )
  {
    if ( v26 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v26);
    goto LABEL_46;
  }
  *a1 = 0;
  if ( v26 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v26);
LABEL_48:
  std::wstring::_Tidy_deallocate(lpLibFileName);
  if ( pperrinfo )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&pperrinfo);
  return a1;
}
