/*
 * XREFs of ?GetAppIdFromWindow@TouchKeyboardExperienceManager@@SA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUHWND__@@@Z @ 0x1800C3C34
 * Callers:
 *     ?RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJAEBUITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@Z @ 0x1800AACDC (-RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJAEBUITapInvokeTelemetryDataPro.c)
 *     ?HandleForegroundChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJ_KPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1800C3440 (-HandleForegroundChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJ_KPEAW4ShellRequestType@Text@.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18009658C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?GetProcessAppIdWithAppResolverFallback@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1800C28D0 (-GetProcessAppIdWithAppResolverFallback@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800C2AB0 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1800C4C10 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ?make_cotaskmem_string_nothrow@wil@@YA@PEBG_K@Z @ 0x1801D6A04 (-make_cotaskmem_string_nothrow@wil@@YA@PEBG_K@Z.c)
 *     ?close_reset@?$close_invoke_helper@$00P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZPEAG@details@wil@@SAXPEAG@Z @ 0x1803A463C (-close_reset@-$close_invoke_helper@$00P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZPEAG@details@wil@@SAXPEA.c)
 */

// Hidden C++ exception states: #wind=3
void **__fastcall TouchKeyboardExperienceManager::GetAppIdFromWindow(void **a1, CallerIdentity *a2)
{
  char *v4; // rbx
  HWND v5; // rdx
  unsigned __int16 **v6; // r8
  void *v7; // rax
  unsigned __int16 **v8; // r8
  WCHAR *v9; // rcx
  char *FileNameW; // rax
  const char *v11; // r9
  void *v12; // rcx
  void **cotaskmem_string_nothrow; // rax
  void **v15; // rbx
  LPVOID pv; // [rsp+50h] [rbp+8h] BYREF
  DWORD dwProcessId; // [rsp+58h] [rbp+10h] BYREF
  LPCWSTR pszPath; // [rsp+60h] [rbp+18h] BYREF
  HANDLE v19; // [rsp+68h] [rbp+20h] BYREF

  pv = a1;
  *a1 = 0LL;
  if ( !a2 )
    goto LABEL_18;
  dwProcessId = 0;
  GetWindowThreadProcessId((HWND)a2, &dwProcessId);
  v4 = (char *)OpenProcess(0x1000u, 0, dwProcessId);
  v19 = v4;
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v5 = (HWND)wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(a1);
    if ( (int)CallerIdentity::GetImmersiveAppIdFromWindow(a2, v5, v6) < 0 )
    {
      pszPath = 0LL;
      v7 = (void *)wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&pszPath);
      if ( (int)CallerIdentity::GetProcessAppIdWithAppResolverFallback(v4, v7, v8) >= 0 )
      {
        v9 = (WCHAR *)pszPath;
        if ( !pszPath )
          goto LABEL_14;
        FileNameW = (char *)PathFindFileNameW(pszPath);
        if ( FileNameW )
        {
          wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
            &v19,
            FileNameW,
            0xFFFFFFFFFFFFFFFFuLL,
            v11);
          if ( a1 == &v19 )
          {
            v12 = v19;
          }
          else
          {
            if ( *a1 )
              wil::details::close_invoke_helper<1,void (*)(void *),&void CoTaskMemFree(void *),unsigned short *>::close_reset(*a1);
            *a1 = v19;
            v12 = 0LL;
          }
          if ( v12 )
            CoTaskMemFree(v12);
        }
      }
      v9 = (WCHAR *)pszPath;
LABEL_14:
      if ( v9 )
        CoTaskMemFree(v9);
    }
  }
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
LABEL_18:
  if ( !*a1 )
  {
    cotaskmem_string_nothrow = (void **)wil::make_cotaskmem_string_nothrow(
                                          (wil *)&pv,
                                          &LocaleName,
                                          0xFFFFFFFFFFFFFFFFuLL);
    v15 = cotaskmem_string_nothrow;
    if ( a1 != cotaskmem_string_nothrow )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        a1,
        *cotaskmem_string_nothrow);
      *v15 = 0LL;
    }
    if ( pv )
      CoTaskMemFree(pv);
  }
  return a1;
}
