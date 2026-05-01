/*
 * XREFs of ?GetDisplayNameFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180627D7C
 * Callers:
 *     ?GetDisplayName@Win32AppStateManager@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180625900 (-GetDisplayName@Win32AppStateManager@@UEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1AppInventoryData@@QEAA@XZ @ 0x180627844 (--1AppInventoryData@@QEAA@XZ.c)
 *     ?GetAppInventoryData@@YA?AUAppInventoryData@@PEBG@Z @ 0x180627C28 (-GetAppInventoryData@@YA-AUAppInventoryData@@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=6
void **__fastcall GetDisplayNameFromExePath(void **a1, LPCWSTR pszPath)
{
  unsigned __int64 v4; // r14
  int (__fastcall *v5)(LPVOID, LPCWSTR, __int64 *, _QWORD); // rdi
  __int64 v6; // rbx
  int (__fastcall *v7)(__int64, _QWORD, void **); // rdi
  void **v8; // rax
  unsigned __int64 v9; // r8
  void **v10; // rdx
  void **v11; // rdx
  LPWSTR FileNameW; // rax
  __int64 v14; // [rsp+30h] [rbp-69h] BYREF
  int v15; // [rsp+38h] [rbp-61h]
  LPVOID pv; // [rsp+40h] [rbp-59h] BYREF
  LPVOID ppv[3]; // [rsp+48h] [rbp-51h] BYREF
  void *v18[8]; // [rsp+60h] [rbp-39h] BYREF
  void *Src[4]; // [rsp+A0h] [rbp+7h] BYREF

  ppv[1] = a1;
  *a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = (void *)7;
  *(_WORD *)a1 = 0;
  v15 = 1;
  v14 = 0LL;
  ppv[0] = 0LL;
  v4 = -1LL;
  if ( CoCreateInstance(&CLSID_StartMenuCacheAndAppResolver, 0LL, 3u, &GUID_21cbc515_2dde_4d66_8292_ba34bd25094a, ppv) >= 0 )
  {
    v5 = *(int (__fastcall **)(LPVOID, LPCWSTR, __int64 *, _QWORD))(*(_QWORD *)ppv[0] + 72LL);
    v14 = 0LL;
    if ( v5(ppv[0], pszPath, &v14, 0LL) >= 0 )
    {
      pv = 0LL;
      v6 = v14;
      v7 = *(int (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)v14 + 40LL);
      v8 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&pv);
      if ( v7(v6, 0LL, v8) >= 0 )
      {
        v9 = -1LL;
        do
          ++v9;
        while ( *((_WORD *)pv + v9) );
        std::wstring::assign((char *)a1, pv, v9);
      }
      if ( pv )
        CoTaskMemFree(pv);
    }
  }
  if ( !a1[2] )
  {
    GetAppInventoryData((__int64)v18, (__int64)pszPath);
    if ( a1 != Src )
    {
      v10 = Src;
      if ( Src[3] >= (void *)8 )
        v10 = (void **)Src[0];
      std::wstring::assign((char *)a1, v10, (unsigned __int64)Src[2]);
    }
    if ( !a1[2] && a1 != v18 )
    {
      v11 = v18;
      if ( v18[3] >= (void *)8 )
        v11 = (void **)v18[0];
      std::wstring::assign((char *)a1, v11, (unsigned __int64)v18[2]);
    }
    AppInventoryData::~AppInventoryData((AppInventoryData *)v18);
    if ( !a1[2] )
    {
      FileNameW = PathFindFileNameW(pszPath);
      do
        ++v4;
      while ( FileNameW[v4] );
      std::wstring::assign((char *)a1, FileNameW, v4);
    }
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)ppv);
  return a1;
}
