/*
 * XREFs of ?TryGetTileIdForWindow@JointResize@@AEAA?AUTileId@StartScreen@UI@WindowsUdk@winrt@@PEAUHWND__@@@Z @ 0x1805E5090
 * Callers:
 *     JointResize::TagViewWithLogoAsync$_ResumeCoro$1 @ 0x180213B40 (JointResize--TagViewWithLogoAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18009658C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?GetProcessAppIdWithAppResolverFallback@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1800C28D0 (-GetProcessAppIdWithAppResolverFallback@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800C2AB0 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1800C4C10 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??$call@AEAV_lambda_9d50f3a9b66d1d5b1b80cf8522eae95d_@@@?$factory_cache_entry@UTileId@StartScreen@UI@WindowsUdk@winrt@@UITileIdStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_9d50f3a9b66d1d5b1b80cf8522eae95d_@@@Z @ 0x1805E0C08 (--$call@AEAV_lambda_9d50f3a9b66d1d5b1b80cf8522eae95d_@@@-$factory_cache_entry@UTileId@StartScree.c)
 *     ?FromAppResolverId@?$consume_WindowsUdk_UI_StartScreen_ITileIdStatics@UITileIdStatics@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1805E2D18 (-FromAppResolverId@-$consume_WindowsUdk_UI_StartScreen_ITileIdStatics@UITileIdStatics@StartScree.c)
 */

// Hidden C++ exception states: #wind=5 #try_helpers=1
_QWORD *__fastcall JointResize::TryGetTileIdForWindow(__int64 a1, _QWORD *a2, CallerIdentity *a3)
{
  _QWORD *v4; // rsi
  char *v5; // rax
  char *v6; // rbx
  void **v7; // rdx
  unsigned __int16 **v8; // r8
  void **v9; // rax
  unsigned __int16 **v10; // r8
  char *FileNameW; // rax
  const char *v12; // r9
  __int64 v13; // r8
  void (__fastcall ***v14)(_QWORD, __int64 *, __int64 *); // rcx
  LPVOID pv; // [rsp+20h] [rbp-78h] BYREF
  LPCWSTR pszPath; // [rsp+28h] [rbp-70h] BYREF
  __int64 v18; // [rsp+30h] [rbp-68h] BYREF
  void *v19; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v20[3]; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v21[7]; // [rsp+60h] [rbp-38h] BYREF
  DWORD dwProcessId; // [rsp+A0h] [rbp+8h] BYREF
  int v23; // [rsp+A4h] [rbp+Ch]
  _QWORD *v24; // [rsp+A8h] [rbp+10h]
  __int64 v25; // [rsp+B8h] [rbp+20h] BYREF

  v24 = a2;
  v23 = HIDWORD(a1);
  v4 = a2;
  pv = 0LL;
  dwProcessId = 0;
  pszPath = 0LL;
  GetWindowThreadProcessId((HWND)a3, &dwProcessId);
  v5 = (char *)OpenProcess(0x1000u, 0, dwProcessId);
  try
  {
    v6 = v5;
    v20[1] = v5;
    if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v7 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&pv);
      if ( (int)CallerIdentity::GetImmersiveAppIdFromWindow(a3, v7, v8) < 0 )
      {
        v9 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put((void **)&pszPath);
        if ( (int)CallerIdentity::GetProcessAppIdWithAppResolverFallback(v6, v9, v10) >= 0 )
        {
          if ( pszPath )
          {
            FileNameW = (char *)PathFindFileNameW(pszPath);
            if ( FileNameW )
            {
              wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
                &v19,
                FileNameW,
                0xFFFFFFFFFFFFFFFFuLL,
                v12);
              wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
                &pv,
                v19);
            }
          }
        }
      }
    }
    if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v6);
    if ( pszPath )
      CoTaskMemFree((LPVOID)pszPath);
  }
  catch ( ... )
  {
    v4 = v24;
  }
  if ( pv )
  {
    v18 = 0LL;
    v13 = -1LL;
    do
      ++v13;
    while ( *((_WORD *)pv + v13) );
    winrt::param::hstring::create_string_reference((winrt::param::hstring *)v21, (const unsigned __int16 *const)pv, v13);
    v20[0] = v21;
    v20[2] = &qword_1809912F8;
    _InterlockedIncrement64(&qword_1809912F8);
    if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::StartScreen::TileId,winrt::WindowsUdk::UI::StartScreen::ITileIdStatics> )
    {
      winrt::impl::consume_WindowsUdk_UI_StartScreen_ITileIdStatics<winrt::WindowsUdk::UI::StartScreen::ITileIdStatics>::FromAppResolverId(
        &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::StartScreen::TileId,winrt::WindowsUdk::UI::StartScreen::ITileIdStatics>,
        &v25,
        v21);
      _InterlockedDecrement64(&qword_1809912F8);
    }
    else
    {
      _InterlockedDecrement64(&qword_1809912F8);
      winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::StartScreen::TileId,winrt::WindowsUdk::UI::StartScreen::ITileIdStatics>::call<_lambda_9d50f3a9b66d1d5b1b80cf8522eae95d_ &>(
        v14,
        (__int64)&v25,
        v20);
    }
    winrt::Windows::Foundation::IUnknown::operator=(
      (winrt::Windows::Foundation::IUnknown *)&v18,
      (winrt::Windows::Foundation::IUnknown *)&v25);
    if ( v25 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v25);
    *v4 = v18;
    if ( pv )
      CoTaskMemFree(pv);
  }
  else
  {
    *v4 = 0LL;
  }
  return v4;
}
