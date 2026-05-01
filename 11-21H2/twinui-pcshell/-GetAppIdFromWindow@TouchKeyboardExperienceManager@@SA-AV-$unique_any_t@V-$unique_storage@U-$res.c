/*
 * XREFs of ?GetAppIdFromWindow@TouchKeyboardExperienceManager@@SA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUHWND__@@@Z @ 0x18008C3A8
 * Callers:
 *     ?HandleForegroundChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHWND__@@PEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18008B7B0 (-HandleForegroundChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHWND__@@PEAW4ShellRequest.c)
 *     ?RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ @ 0x1800B9828 (-RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800406B0 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x18008C708 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18008CC00 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180108390 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     CoCreateInstance_0 @ 0x180189A77 (CoCreateInstance_0.c)
 *     ?make_cotaskmem_string_nothrow@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBG_K@Z @ 0x180190370 (-make_cotaskmem_string_nothrow@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?close_reset@?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@SAXPEAG@Z @ 0x18022A5AE (-close_reset@-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constant@_K$0A@.c)
 */

// Hidden C++ exception states: #wind=5
HWND __fastcall TouchKeyboardExperienceManager::GetAppIdFromWindow(HWND a1, HWND hWnd)
{
  char *v4; // rbx
  unsigned __int16 **v5; // r8
  unsigned __int16 **v6; // r8
  HRESULT v7; // r14d
  DWORD ProcessId; // eax
  LPWSTR FileNameW; // rax
  HWND cotaskmem_string_nothrow; // rax
  _QWORD *v11; // r14
  __int64 v12; // r15
  HWND v14; // rax
  _QWORD *v15; // rbx
  void *v16; // [rsp+80h] [rbp+8h] BYREF
  DWORD dwProcessId; // [rsp+88h] [rbp+10h] BYREF
  LPCWSTR pszPath; // [rsp+90h] [rbp+18h] BYREF
  LPVOID ppv; // [rsp+98h] [rbp+20h] BYREF

  v16 = a1;
  *(_QWORD *)a1 = 0LL;
  if ( hWnd )
  {
    dwProcessId = 0;
    GetWindowThreadProcessId(hWnd, &dwProcessId);
    v4 = (char *)OpenProcess(0x1000u, 0, dwProcessId);
    if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      if ( *(_QWORD *)a1 )
        wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>::close_reset(*(LPVOID *)a1);
      *(_QWORD *)a1 = 0LL;
      if ( (int)CallerIdentity::GetImmersiveAppIdFromWindow(hWnd, a1, v5) < 0 )
      {
        pszPath = 0LL;
        if ( (int)CallerIdentity::GetProcessAppId(v4, &pszPath, v6) >= 0 )
          goto LABEL_27;
        ppv = 0LL;
        v7 = CoCreateInstance_0(
               &GUID_660b90c8_73a9_4b58_8cae_355b7f55341b,
               0LL,
               3u,
               &GUID_de25675a_72de_44b4_9373_05170450c140,
               &ppv);
        if ( v7 >= 0 )
        {
          ProcessId = GetProcessId(v4);
          v7 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, LPCWSTR *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)ppv + 48LL))(
                 ppv,
                 ProcessId,
                 &pszPath,
                 0LL,
                 0LL,
                 0LL);
        }
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
        if ( v7 >= 0 )
        {
LABEL_27:
          if ( pszPath )
          {
            FileNameW = PathFindFileNameW(pszPath);
            if ( FileNameW )
            {
              cotaskmem_string_nothrow = (HWND)wil::make_cotaskmem_string_nothrow(&ppv, FileNameW, -1LL);
              v11 = cotaskmem_string_nothrow;
              if ( a1 != cotaskmem_string_nothrow )
              {
                v12 = *(_QWORD *)cotaskmem_string_nothrow;
                if ( *(_QWORD *)a1 )
                  wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>::close_reset(*(LPVOID *)a1);
                *(_QWORD *)a1 = v12;
                *v11 = 0LL;
              }
              wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>(&ppv);
            }
          }
        }
        wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>((void **)&pszPath);
      }
    }
    if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v4);
  }
  if ( !*(_QWORD *)a1 )
  {
    v14 = (HWND)wil::make_cotaskmem_string_nothrow(&v16, &LocaleName, -1LL);
    v15 = v14;
    if ( a1 != v14 )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        a1,
        *(_QWORD *)v14);
      *v15 = 0LL;
    }
    wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>(&v16);
  }
  return a1;
}
