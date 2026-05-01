/*
 * XREFs of ??$get_runtime_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x180068504
 * Callers:
 *     ??$call@P6A?AUUISettings@ViewManagement@UI@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@Z@?$factory_cache_entry@UUISettings@ViewManagement@UI@Windows@winrt@@UIActivationFactory@Foundation@45@@impl@winrt@@QEAA?AUUISettings@ViewManagement@UI@Windows@2@$$QEAP6A?AU34562@AEBUIActivationFactory@Foundation@62@@Z@Z @ 0x180054B04 (--$call@P6A-AUUISettings@ViewManagement@UI@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@.c)
 *     _anonymous_namespace_::TryGetAUMIDFromAppExtensionCatalog @ 0x1800664B8 (_anonymous_namespace_--TryGetAUMIDFromAppExtensionCatalog.c)
 *     ??$get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@winrt@@YA?AUIActivationFactory@Foundation@Windows@0@AEBUhstring@param@0@@Z @ 0x1800684C0 (--$get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@winrt@@YA-AUIActivation.c)
 * Callees:
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

_DWORD *__fastcall winrt::impl::get_runtime_activation_factory<winrt::Windows::Foundation::IActivationFactory>(
        _DWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  FARPROC ProcAddress; // rax
  int v7; // edi
  HMODULE LibraryW_0; // rax
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
  __int64 v21; // rax
  IErrorInfo *pperrinfo; // [rsp+20h] [rbp-40h] BYREF
  __int64 v23; // [rsp+28h] [rbp-38h] BYREF
  LPCWSTR lpLibFileName[2]; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v25; // [rsp+40h] [rbp-20h]
  unsigned __int64 v26; // [rsp+48h] [rbp-18h]

  if ( winrt_activation_handler )
  {
    *a1 = winrt_activation_handler(*a2, &winrt::impl::guid_v<winrt::Windows::Foundation::IActivationFactory>);
  }
  else
  {
    ProcAddress = (FARPROC)`winrt::impl::get_runtime_activation_factory<winrt::Windows::Foundation::IActivationFactory>'::`2'::handler;
    if ( !`winrt::impl::get_runtime_activation_factory<winrt::Windows::Foundation::IActivationFactory>'::`2'::handler )
    {
      LibraryW_0 = LoadLibraryW_0(L"combase.dll");
      ProcAddress = WINRT_IMPL_GetProcAddress(LibraryW_0, "RoGetActivationFactory");
      if ( !ProcAddress )
        ProcAddress = (FARPROC)winrt::impl::fallback_RoGetActivationFactory;
      `winrt::impl::get_runtime_activation_factory<winrt::Windows::Foundation::IActivationFactory>'::`2'::handler = (__int64)ProcAddress;
    }
    v7 = ((__int64 (__fastcall *)(_QWORD, void *, _QWORD *))ProcAddress)(
           *a2,
           &winrt::impl::guid_v<winrt::Windows::Foundation::IActivationFactory>,
           a3);
    if ( v7 == -2147221008 )
    {
      v10 = LoadLibraryW_0(L"combase.dll");
      v11 = WINRT_IMPL_GetProcAddress(v10, "CoIncrementMTAUsage");
      if ( !v11 )
      {
        *a1 = -2147221008;
        return a1;
      }
      ((void (__fastcall *)(__int64 *))v11)(&v23);
      v7 = ((__int64 (__fastcall *)(_QWORD, void *, _QWORD *))`winrt::impl::get_runtime_activation_factory<winrt::Windows::Foundation::IActivationFactory>'::`2'::handler)(
             *a2,
             &winrt::impl::guid_v<winrt::Windows::Foundation::IActivationFactory>,
             a3);
    }
    if ( v7 )
    {
      pperrinfo = 0LL;
      GetErrorInfo_0(0, &pperrinfo);
      std::wstring::wstring(lpLibFileName, a2);
      while ( 1 )
      {
        v12 = lpLibFileName;
        if ( v26 >= 8 )
          v12 = (LPCWSTR *)lpLibFileName[0];
        if ( !v25 )
          break;
        for ( i = (char *)v12 + 2 * v25 - 2; *(_WORD *)i != 46; i -= 2 )
        {
          if ( i == (char *)v12 )
            goto LABEL_42;
        }
        v14 = (i - (char *)v12) >> 1;
        if ( v14 == -1LL )
          break;
        if ( v14 > v25 )
        {
          std::wstring::append(lpLibFileName, v14 - v25, 0LL);
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
          std::wstring::append(lpLibFileName, -4LL, 0LL);
        }
        else
        {
          v19 = lpLibFileName;
          if ( v26 >= 8 )
            v19 = (LPCWSTR *)lpLibFileName[0];
          v25 -= 4LL;
          *((_WORD *)v19 + v18) = 0;
        }
        if ( v17 )
        {
          v20 = WINRT_IMPL_GetProcAddress(v17, "DllGetActivationFactory");
          if ( v20 )
          {
            v23 = 0LL;
            if ( !((unsigned int (__fastcall *)(_QWORD, __int64 *))v20)(*a2, &v23) )
            {
              v21 = v23;
              v23 = 0LL;
              *a3 = v21;
              *a1 = 0;
              goto LABEL_43;
            }
            if ( v23 )
              winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v23);
          }
          WINRT_IMPL_FreeLibrary(v17);
        }
      }
LABEL_42:
      SetErrorInfo_0(0, pperrinfo);
      *a1 = v7;
LABEL_43:
      std::wstring::_Tidy_deallocate(lpLibFileName);
      if ( pperrinfo )
        winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&pperrinfo);
    }
    else
    {
      *a1 = 0;
    }
  }
  return a1;
}
