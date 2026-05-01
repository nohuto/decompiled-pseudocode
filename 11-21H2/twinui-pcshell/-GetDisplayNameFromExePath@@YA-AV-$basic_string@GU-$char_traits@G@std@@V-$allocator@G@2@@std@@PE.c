/*
 * XREFs of ?GetDisplayNameFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18056A14C
 * Callers:
 *     ?GetDisplayName@Win32AppStateManager@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180567F60 (-GetDisplayName@Win32AppStateManager@@UEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18010AACC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1AppInventoryData@@QEAA@XZ @ 0x180569C7C (--1AppInventoryData@@QEAA@XZ.c)
 *     ?GetAppInventoryData@@YA?AUAppInventoryData@@PEBG@Z @ 0x18056A014 (-GetAppInventoryData@@YA-AUAppInventoryData@@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall GetDisplayNameFromExePath(_QWORD *a1, LPCWSTR pszPath)
{
  unsigned __int64 v4; // rsi
  int (__fastcall *v5)(LPVOID, LPCWSTR, __int64 **, _QWORD); // r14
  __int64 v6; // rax
  unsigned __int64 v7; // r8
  _QWORD *v8; // rdx
  _QWORD *v9; // rdx
  LPWSTR FileNameW; // rax
  __int64 *v12; // [rsp+30h] [rbp-69h] BYREF
  _WORD *v13; // [rsp+38h] [rbp-61h] BYREF
  int v14; // [rsp+40h] [rbp-59h]
  LPVOID ppv[3]; // [rsp+48h] [rbp-51h] BYREF
  _QWORD v16[8]; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v17[4]; // [rsp+A0h] [rbp+7h] BYREF

  ppv[1] = a1;
  a1[2] = 0LL;
  a1[3] = 7LL;
  *(_WORD *)a1 = 0;
  v14 = 1;
  v12 = 0LL;
  ppv[0] = 0LL;
  v4 = -1LL;
  if ( CoCreateInstance(&CLSID_StartMenuCacheAndAppResolver, 0LL, 3u, &GUID_21cbc515_2dde_4d66_8292_ba34bd25094a, ppv) >= 0 )
  {
    v5 = *(int (__fastcall **)(LPVOID, LPCWSTR, __int64 **, _QWORD))(*(_QWORD *)ppv[0] + 72LL);
    v12 = 0LL;
    if ( v5(ppv[0], pszPath, &v12, 0LL) >= 0 )
    {
      v13 = 0LL;
      v6 = *v12;
      v13 = 0LL;
      if ( (*(int (__fastcall **)(__int64 *, _QWORD, _WORD **))(v6 + 40))(v12, 0LL, &v13) >= 0 )
      {
        v7 = -1LL;
        do
          ++v7;
        while ( v13[v7] );
        std::wstring::assign((char *)a1, v13, v7);
      }
      wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>((void **)&v13);
    }
  }
  if ( !a1[2] )
  {
    GetAppInventoryData((__int64)v16, (__int64)pszPath);
    if ( a1 != v17 )
    {
      v8 = v17;
      if ( v17[3] >= 8uLL )
        v8 = (_QWORD *)v17[0];
      std::wstring::assign((char *)a1, v8, v17[2]);
    }
    if ( !a1[2] && a1 != v16 )
    {
      v9 = v16;
      if ( v16[3] >= 8uLL )
        v9 = (_QWORD *)v16[0];
      std::wstring::assign((char *)a1, v9, v16[2]);
    }
    AppInventoryData::~AppInventoryData((AppInventoryData *)v16);
    if ( !a1[2] )
    {
      FileNameW = PathFindFileNameW(pszPath);
      do
        ++v4;
      while ( FileNameW[v4] );
      std::wstring::assign((char *)a1, FileNameW, v4);
    }
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v12);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)ppv);
  return a1;
}
