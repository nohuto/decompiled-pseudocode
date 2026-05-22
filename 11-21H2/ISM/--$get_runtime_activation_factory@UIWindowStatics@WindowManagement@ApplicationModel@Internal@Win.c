/*
 * XREFs of ??$get_runtime_activation_factory@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x18003F70C
 * Callers:
 *     ??$call@P6A?AUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEBUIWindowStatics@23456@@Z@?$factory_cache_entry@UWindowInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIWindowStatics@23456@@impl@winrt@@QEAA?AUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@2@$$QEAP6A?AU345672@AEBUIWindowStatics@45672@@Z@Z @ 0x18003F434 (--$call@P6A-AUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEBUIWindo.c)
 *     ??$get_activation_factory@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@YA?AUIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x180081378 (--$get_activation_factory@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@win.c)
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
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180082A64 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180082D48 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x180082DC0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ?as@?$com_ptr@Utype@?$abi@UIActivationFactory@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@QEBA?AUhresult@2@AEBUguid@2@PEAPEAX@Z @ 0x180082E2C (-as@-$com_ptr@Utype@-$abi@UIActivationFactory@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@QE.c)
 */

_DWORD *__fastcall winrt::impl::get_runtime_activation_factory<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>(
        _DWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  FARPROC ProcAddress; // rax
  HMODULE LibraryW_0; // rax
  int v8; // edi
  HMODULE v10; // rax
  FARPROC v11; // rax
  LPCWSTR *v12; // r8
  char *i; // rdx
  unsigned __int64 v14; // rdx
  LPCWSTR *v15; // rax
  const WCHAR *v16; // rcx
  HMODULE v17; // rbx
  unsigned __int64 v18; // rdx
  LPCWSTR *v19; // rax
  FARPROC v20; // rax
  __int64 v21; // [rsp+20h] [rbp-40h] BYREF
  IErrorInfo *pperrinfo; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v23[8]; // [rsp+30h] [rbp-30h] BYREF
  LPCWSTR lpLibFileName[2]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-18h]
  unsigned __int64 v26; // [rsp+50h] [rbp-10h]

  if ( winrt_activation_handler )
  {
    *a1 = winrt_activation_handler(
            *a2,
            &winrt::impl::guid_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>);
    return a1;
  }
  ProcAddress = (FARPROC)`winrt::impl::get_runtime_activation_factory<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>'::`2'::handler;
  if ( !`winrt::impl::get_runtime_activation_factory<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>'::`2'::handler )
  {
    LibraryW_0 = LoadLibraryW_0(L"combase.dll");
    ProcAddress = WINRT_IMPL_GetProcAddress(LibraryW_0, "RoGetActivationFactory");
    if ( !ProcAddress )
      ProcAddress = (FARPROC)winrt::impl::fallback_RoGetActivationFactory;
    `winrt::impl::get_runtime_activation_factory<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>'::`2'::handler = (__int64)ProcAddress;
  }
  v8 = ((__int64 (__fastcall *)(_QWORD, void *, __int64))ProcAddress)(
         *a2,
         &winrt::impl::guid_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>,
         a3);
  if ( v8 == -2147221008 )
  {
    v10 = LoadLibraryW_0(L"combase.dll");
    v11 = WINRT_IMPL_GetProcAddress(v10, "CoIncrementMTAUsage");
    if ( !v11 )
    {
      *a1 = -2147221008;
      return a1;
    }
    ((void (__fastcall *)(__int64 *))v11)(&v21);
    v8 = ((__int64 (__fastcall *)(_QWORD, void *, __int64))`winrt::impl::get_runtime_activation_factory<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>'::`2'::handler)(
           *a2,
           &winrt::impl::guid_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>,
           a3);
  }
  if ( !v8 )
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
      v12 = lpLibFileName;
      if ( v26 >= 8 )
        v12 = (LPCWSTR *)lpLibFileName[0];
      if ( !v25 )
        goto LABEL_44;
      for ( i = (char *)v12 + 2 * v25 - 2; *(_WORD *)i != 46; i -= 2 )
      {
        if ( i == (char *)v12 )
          goto LABEL_44;
      }
      v14 = (i - (char *)v12) >> 1;
      if ( v14 == -1LL )
      {
LABEL_44:
        SetErrorInfo_0(0, pperrinfo);
        *a1 = v8;
        goto LABEL_45;
      }
      if ( v14 > v25 )
      {
        std::wstring::append(lpLibFileName, v14 - v25);
      }
      else
      {
        v15 = lpLibFileName;
        if ( v26 >= 8 )
          v15 = (LPCWSTR *)lpLibFileName[0];
        v25 = v14;
        *((_WORD *)v15 + v14) = 0;
      }
      std::wstring::append(lpLibFileName);
      v16 = (const WCHAR *)lpLibFileName;
      if ( v26 >= 8 )
        v16 = lpLibFileName[0];
      v17 = LoadLibraryW_0(v16);
      v18 = v25 - 4;
      if ( v25 < 4 )
      {
        std::wstring::append(lpLibFileName, -4LL);
      }
      else
      {
        v19 = lpLibFileName;
        if ( v26 >= 8 )
          v19 = (LPCWSTR *)lpLibFileName[0];
        v25 -= 4LL;
        *((_WORD *)v19 + v18) = 0;
      }
    }
    while ( !v17 );
    v20 = WINRT_IMPL_GetProcAddress(v17, "DllGetActivationFactory");
    if ( v20 )
      break;
LABEL_43:
    WINRT_IMPL_FreeLibrary(v17);
  }
  v21 = 0LL;
  if ( ((unsigned int (__fastcall *)(_QWORD, __int64 *))v20)(*a2, &v21)
    || *(_DWORD *)winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IActivationFactory,void>::type>::as(
                    &v21,
                    v23,
                    &winrt::impl::guid_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>,
                    a3) )
  {
    if ( v21 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v21);
    goto LABEL_43;
  }
  *a1 = 0;
  if ( v21 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v21);
LABEL_45:
  std::wstring::_Tidy_deallocate(lpLibFileName);
  if ( pperrinfo )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&pperrinfo);
  return a1;
}
