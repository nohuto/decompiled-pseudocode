/*
 * XREFs of ??$get_runtime_activation_factory_impl@$00@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1800B3F98
 * Callers:
 *     ??$get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@winrt@@YA?AUIActivationFactory@Foundation@Windows@0@AEBUhstring@param@0@@Z @ 0x1800B3F4C (--$get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@winrt@@YA-AUIActivation.c)
 *     _anonymous_namespace_::TryGetAUMIDFromAppExtensionCatalog @ 0x180133BE8 (_anonymous_namespace_--TryGetAUMIDFromAppExtensionCatalog.c)
 * Callees:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180090D28 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??$load_runtime_function@P6AHPEAXAEBUguid@winrt@@PEAPEAX@_EP6AH012@_E@impl@winrt@@YAXPEBGPEBDAEAP6AHPEAXAEBUguid@1@PEAPEAX@_EP6AH234@_E@Z @ 0x1800B4040 (--$load_runtime_function@P6AHPEAXAEBUguid@winrt@@PEAPEAX@_EP6AH012@_E@impl@winrt@@YAXPEBGPEBDAEA.c)
 *     ??$?0Uhstring@winrt@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBUhstring@winrt@@AEBV?$allocator@G@1@@Z @ 0x1800B53B8 (--$-0Uhstring@winrt@@$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBU.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     WINRT_IMPL_GetProcAddress @ 0x1801C798C (WINRT_IMPL_GetProcAddress.c)
 *     WINRT_IMPL_FreeLibrary @ 0x1801C8157 (WINRT_IMPL_FreeLibrary.c)
 *     LoadLibraryW_0 @ 0x1801C8394 (LoadLibraryW_0.c)
 *     SetErrorInfo_0 @ 0x1801CEF83 (SetErrorInfo_0.c)
 *     GetErrorInfo_0 @ 0x1801CEFA1 (GetErrorInfo_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x1802CED4A (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 */

_DWORD *__fastcall winrt::impl::get_runtime_activation_factory_impl<1>(_DWORD *a1, _QWORD *a2, __int64 a3, __int64 *a4)
{
  int v8; // edi
  HMODULE LibraryW_0; // rax
  FARPROC ProcAddress; // rax
  LPCWSTR *v12; // r8
  char *i; // rdx
  unsigned __int64 v14; // rdx
  LPCWSTR *v15; // rax
  const WCHAR *v16; // rcx
  HMODULE v17; // rbx
  unsigned __int64 v18; // rdx
  LPCWSTR *v19; // rax
  FARPROC v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  IErrorInfo *pperrinfo; // [rsp+20h] [rbp-40h] BYREF
  __int64 v24; // [rsp+28h] [rbp-38h] BYREF
  LPCWSTR lpLibFileName[2]; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v26; // [rsp+40h] [rbp-20h]
  unsigned __int64 v27; // [rsp+48h] [rbp-18h]

  if ( winrt_activation_handler )
  {
    *a1 = winrt_activation_handler(*a2, a3, a4);
  }
  else
  {
    ___load_runtime_function_P6AHPEAXAEBUguid_winrt__PEAPEAX__EP6AH012__E_impl_winrt__YAXPEBGPEBDAEAP6AHPEAXAEBUguid_1_PEAPEAX__EP6AH234__E_Z(
      a1,
      a2,
      &`winrt::impl::get_runtime_activation_factory_impl<1>'::`2'::handler);
    v8 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64 *))`winrt::impl::get_runtime_activation_factory_impl<1>'::`2'::handler)(
           *a2,
           a3,
           a4);
    if ( v8 == -2147221008 )
    {
      LibraryW_0 = LoadLibraryW_0(L"combase.dll");
      ProcAddress = WINRT_IMPL_GetProcAddress(LibraryW_0, "CoIncrementMTAUsage");
      if ( !ProcAddress )
      {
        *a1 = -2147221008;
        return a1;
      }
      ((void (__fastcall *)(__int64 *))ProcAddress)(&v24);
      v8 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64 *))`winrt::impl::get_runtime_activation_factory_impl<1>'::`2'::handler)(
             *a2,
             a3,
             a4);
    }
    if ( v8 )
    {
      pperrinfo = 0LL;
      GetErrorInfo_0(0, &pperrinfo);
      std::wstring::wstring(lpLibFileName, a2);
      while ( 1 )
      {
        v12 = lpLibFileName;
        if ( v27 >= 8 )
          v12 = (LPCWSTR *)lpLibFileName[0];
        if ( !v26 )
          break;
        for ( i = (char *)v12 + 2 * v26 - 2; *(_WORD *)i != 46; i -= 2 )
        {
          if ( i == (char *)v12 )
            goto LABEL_38;
        }
        v14 = (i - (char *)v12) >> 1;
        if ( v14 == -1LL )
          break;
        if ( v14 > v26 )
        {
          std::wstring::append(lpLibFileName, v14 - v26, 0LL);
        }
        else
        {
          v15 = lpLibFileName;
          if ( v27 >= 8 )
            v15 = (LPCWSTR *)lpLibFileName[0];
          v26 = v14;
          *((_WORD *)v15 + v14) = 0;
        }
        std::wstring::append(lpLibFileName, L".dll", 4uLL);
        v16 = (const WCHAR *)lpLibFileName;
        if ( v27 >= 8 )
          v16 = lpLibFileName[0];
        v17 = LoadLibraryW_0(v16);
        v18 = v26 - 4;
        if ( v26 < 4 )
        {
          std::wstring::append(lpLibFileName, -4LL, 0LL);
        }
        else
        {
          v19 = lpLibFileName;
          if ( v27 >= 8 )
            v19 = (LPCWSTR *)lpLibFileName[0];
          v26 -= 4LL;
          *((_WORD *)v19 + v18) = 0;
        }
        if ( v17 )
        {
          v20 = WINRT_IMPL_GetProcAddress(v17, "DllGetActivationFactory");
          if ( v20 )
          {
            v24 = 0LL;
            if ( !((unsigned int (__fastcall *)(_QWORD, __int64 *))v20)(*a2, &v24) )
            {
              v22 = v24;
              v24 = 0LL;
              *a4 = v22;
              *a1 = 0;
              goto LABEL_39;
            }
            if ( v24 )
              winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v24);
          }
          WINRT_IMPL_FreeLibrary(v17);
        }
      }
LABEL_38:
      SetErrorInfo_0(0, pperrinfo);
      *a1 = v8;
LABEL_39:
      std::wstring::_Tidy_deallocate(lpLibFileName, v21);
      if ( pperrinfo )
        winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)&pperrinfo);
    }
    else
    {
      *a1 = 0;
    }
  }
  return a1;
}
