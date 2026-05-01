/*
 * XREFs of ?GetWallpaperImagePath@Utils@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@XZ @ 0x1807307A4
 * Callers:
 *     ?GetBackgroundImagePath@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@EEBA?AUhstring@6@XZ @ 0x180730760 (-GetBackgroundImagePath@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@EEB.c)
 *     ?Execute@SwitchConnectingState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180731880 (-Execute@SwitchConnectingState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$shared_pt.c)
 *     ?GetBackgroundImagePath@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@MEBA?AUhstring@6@XZ @ 0x180731D60 (-GetBackgroundImagePath@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@MEB.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18009658C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??B?$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ @ 0x1800D5B58 (--B-$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x1801C73EA (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     memcpy_0 @ 0x1801C934B (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
struct winrt::impl::hstring_header **__fastcall winrt::Windows::Internal::Shell::implementation::Utils::GetWallpaperImagePath(
        struct winrt::impl::hstring_header **a1)
{
  LPVOID v2; // rbx
  int (__fastcall *v3)(LPVOID, _QWORD, void **); // rdi
  void **v4; // rax
  unsigned int v5; // esi
  LPVOID v6; // rbx
  int (__fastcall *v7)(LPVOID, _QWORD, void **); // rdi
  void **v8; // rax
  HMONITOR v9; // rax
  LPVOID v10; // rbx
  int (__fastcall *v11)(LPVOID, LPVOID, void **); // rdi
  void **v12; // rax
  __int64 v13; // rcx
  const WCHAR *v14; // rax
  size_t v15; // rbx
  size_t v16; // rsi
  char *v17; // rax
  char *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  struct winrt::impl::hstring_header *v22; // rdx
  unsigned int v23; // r8d
  unsigned __int16 *v25; // [rsp+30h] [rbp-29h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-21h] BYREF
  LPVOID ppv; // [rsp+40h] [rbp-19h] BYREF
  unsigned int v28; // [rsp+48h] [rbp-11h] BYREF
  RECT rc; // [rsp+50h] [rbp-9h] BYREF
  struct tagMONITORINFO mi; // [rsp+60h] [rbp+7h] BYREF

  pv = a1;
  v25 = 0LL;
  ppv = 0LL;
  if ( CoCreateInstance(&CLSID_DesktopWallpaper, 0LL, 4u, &GUID_b92b56a9_8b55_4e14_9a89_0199bbb6f93b, &ppv) >= 0 )
  {
    v2 = ppv;
    v3 = *(int (__fastcall **)(LPVOID, _QWORD, void **))(*(_QWORD *)ppv + 32LL);
    v4 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put((void **)&v25);
    if ( v3(v2, 0LL, v4) >= 0 && !*v25 )
    {
      v28 = 0;
      if ( (*(int (__fastcall **)(LPVOID, unsigned int *))(*(_QWORD *)ppv + 48LL))(ppv, &v28) >= 0 )
      {
        v5 = 0;
        if ( v28 )
        {
          while ( 1 )
          {
            pv = 0LL;
            v6 = ppv;
            v7 = *(int (__fastcall **)(LPVOID, _QWORD, void **))(*(_QWORD *)ppv + 40LL);
            v8 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&pv);
            if ( v7(v6, v5, v8) >= 0 )
            {
              rc = 0LL;
              if ( !(*(unsigned int (__fastcall **)(LPVOID, LPVOID, RECT *))(*(_QWORD *)ppv + 56LL))(ppv, pv, &rc) )
              {
                v9 = MonitorFromRect(&rc, 1u);
                if ( v9 )
                {
                  memset(&mi, 0, sizeof(mi));
                  mi.cbSize = 40;
                  GetMonitorInfoW(v9, &mi);
                  if ( (mi.dwFlags & 1) != 0 )
                  {
                    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
                      (void **)&v25,
                      0LL);
                    v10 = ppv;
                    v11 = *(int (__fastcall **)(LPVOID, LPVOID, void **))(*(_QWORD *)ppv + 32LL);
                    v12 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put((void **)&v25);
                    if ( v11(v10, pv, v12) >= 0 )
                    {
                      if ( *v25 )
                        break;
                    }
                  }
                }
              }
            }
            if ( pv )
              CoTaskMemFree(pv);
            if ( ++v5 >= v28 )
              goto LABEL_18;
          }
          if ( pv )
            CoTaskMemFree(pv);
        }
      }
    }
  }
LABEL_18:
  if ( !wil::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>::operator bool(&v25) )
  {
    v13 = 0x7FFFFFFFLL;
    v14 = &LocaleName;
    do
    {
      if ( !*v14 )
        break;
      ++v14;
      --v13;
    }
    while ( v13 );
    v15 = 2 * (v14 - &LocaleName);
    v16 = v15 + 2;
    v17 = (char *)CoTaskMemAlloc(v15 + 2);
    v18 = v17;
    if ( v17 )
    {
      if ( v15 )
      {
        if ( v16 < v15 )
        {
          memset_0(v17, 0, v16);
          *(_DWORD *)_o__errno(v20, v19, v21) = 34;
          invalid_parameter_noinfo();
        }
        else
        {
          memcpy_0(v17, &LocaleName, v15);
        }
      }
      *(_WORD *)&v18[v15] = 0;
    }
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&v25,
      v18);
  }
  winrt::hstring::hstring((winrt::hstring *)&pv, v25);
  *a1 = winrt::impl::duplicate_hstring((winrt::impl *)pv, v22, v23);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&pv);
  if ( ppv )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&ppv);
  if ( v25 )
    CoTaskMemFree(v25);
  return a1;
}
