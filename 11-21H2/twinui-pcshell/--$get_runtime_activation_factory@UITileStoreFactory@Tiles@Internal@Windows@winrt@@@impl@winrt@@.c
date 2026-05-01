/*
 * XREFs of ??$get_runtime_activation_factory@UITileStoreFactory@Tiles@Internal@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x1800689E4
 * Callers:
 *     ??$get_activation_factory@UITileStoreFactory@Tiles@Internal@Windows@winrt@@@winrt@@YA?AUITileStoreFactory@Tiles@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x180067EAC (--$get_activation_factory@UITileStoreFactory@Tiles@Internal@Windows@winrt@@@winrt@@YA-AUITileSto.c)
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

_DWORD *__fastcall winrt::impl::get_runtime_activation_factory<winrt::Windows::Internal::Tiles::ITileStoreFactory>(
        _DWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  int v6; // edi
  HMODULE LibraryW_0; // rax
  FARPROC ProcAddress; // rax
  LPCWSTR *v10; // r8
  char *i; // rdx
  unsigned __int64 v12; // rdx
  LPCWSTR *v13; // rax
  const WCHAR *v14; // rcx
  HMODULE v15; // rbx
  unsigned __int64 v16; // rdx
  LPCWSTR *v17; // rax
  FARPROC v18; // rax
  __int64 v19; // [rsp+20h] [rbp-40h] BYREF
  IErrorInfo *pperrinfo; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v21[8]; // [rsp+30h] [rbp-30h] BYREF
  LPCWSTR lpLibFileName[2]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-18h]
  unsigned __int64 v24; // [rsp+50h] [rbp-10h]

  if ( winrt_activation_handler )
  {
    *a1 = winrt_activation_handler(*a2, &winrt::impl::guid_v<winrt::Windows::Internal::Tiles::ITileStoreFactory>);
    return a1;
  }
  ___load_runtime_function_P6AHPEAXAEBUguid_winrt__PEAPEAX__EP6AH012__E_impl_winrt__YAXPEBDAEAP6AHPEAXAEBUguid_1_PEAPEAX__EP6AH123__E_Z(
    a1,
    &`winrt::impl::get_runtime_activation_factory<winrt::Windows::Internal::Tiles::ITileStoreFactory>'::`2'::handler);
  v6 = ((__int64 (__fastcall *)(_QWORD, void *, __int64))`winrt::impl::get_runtime_activation_factory<winrt::Windows::Internal::Tiles::ITileStoreFactory>'::`2'::handler)(
         *a2,
         &winrt::impl::guid_v<winrt::Windows::Internal::Tiles::ITileStoreFactory>,
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
    v6 = ((__int64 (__fastcall *)(_QWORD, void *, __int64))`winrt::impl::get_runtime_activation_factory<winrt::Windows::Internal::Tiles::ITileStoreFactory>'::`2'::handler)(
           *a2,
           &winrt::impl::guid_v<winrt::Windows::Internal::Tiles::ITileStoreFactory>,
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
      v10 = lpLibFileName;
      if ( v24 >= 8 )
        v10 = (LPCWSTR *)lpLibFileName[0];
      if ( !v23 )
        goto LABEL_40;
      for ( i = (char *)v10 + 2 * v23 - 2; *(_WORD *)i != 46; i -= 2 )
      {
        if ( i == (char *)v10 )
          goto LABEL_40;
      }
      v12 = (i - (char *)v10) >> 1;
      if ( v12 == -1LL )
      {
LABEL_40:
        SetErrorInfo_0(0, pperrinfo);
        *a1 = v6;
        goto LABEL_41;
      }
      if ( v12 > v23 )
      {
        std::wstring::append(lpLibFileName, v12 - v23, 0LL);
      }
      else
      {
        v13 = lpLibFileName;
        if ( v24 >= 8 )
          v13 = (LPCWSTR *)lpLibFileName[0];
        v23 = v12;
        *((_WORD *)v13 + v12) = 0;
      }
      std::wstring::append(lpLibFileName);
      v14 = (const WCHAR *)lpLibFileName;
      if ( v24 >= 8 )
        v14 = lpLibFileName[0];
      v15 = LoadLibraryW_0(v14);
      v16 = v23 - 4;
      if ( v23 < 4 )
      {
        std::wstring::append(lpLibFileName, -4LL, 0LL);
      }
      else
      {
        v17 = lpLibFileName;
        if ( v24 >= 8 )
          v17 = (LPCWSTR *)lpLibFileName[0];
        v23 -= 4LL;
        *((_WORD *)v17 + v16) = 0;
      }
    }
    while ( !v15 );
    v18 = WINRT_IMPL_GetProcAddress(v15, "DllGetActivationFactory");
    if ( v18 )
      break;
LABEL_39:
    WINRT_IMPL_FreeLibrary(v15);
  }
  v19 = 0LL;
  if ( ((unsigned int (__fastcall *)(_QWORD, __int64 *))v18)(*a2, &v19)
    || *(_DWORD *)winrt::Windows::Foundation::IUnknown::as(
                    &v19,
                    v21,
                    &winrt::impl::guid_v<winrt::Windows::Internal::Tiles::ITileStoreFactory>,
                    a3) )
  {
    if ( v19 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v19);
    goto LABEL_39;
  }
  *a1 = 0;
  if ( v19 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v19);
LABEL_41:
  std::wstring::_Tidy_deallocate(lpLibFileName);
  if ( pperrinfo )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&pperrinfo);
  return a1;
}
