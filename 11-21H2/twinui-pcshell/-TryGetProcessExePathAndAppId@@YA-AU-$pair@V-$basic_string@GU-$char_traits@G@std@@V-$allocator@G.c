/*
 * XREFs of ?TryGetProcessExePathAndAppId@@YA?AU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@I@Z @ 0x18056A5D8
 * Callers:
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x180569010 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18008CC00 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180107578 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??$QueryFullProcessImageNameW@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YAJPEAXKAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@@Z @ 0x1801076DC (--$QueryFullProcessImageNameW@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18010AACC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?AumidToAppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1805655C4 (-AumidToAppId@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_traits@G@std.c)
 */

// Hidden C++ exception states: #wind=5
_OWORD *__fastcall TryGetProcessExePathAndAppId(_OWORD *a1, DWORD a2)
{
  __int64 v3; // rdx
  char *v4; // rbx
  unsigned __int16 **v5; // r8
  unsigned __int64 v6; // r8
  __int64 v7; // rbx
  const unsigned __int16 *v9; // [rsp+20h] [rbp-49h] BYREF
  _WORD *v10; // [rsp+28h] [rbp-41h] BYREF
  void *v11; // [rsp+30h] [rbp-39h] BYREF
  __int128 v12; // [rsp+40h] [rbp-29h] BYREF
  __int128 v13; // [rsp+50h] [rbp-19h]
  __int128 v14; // [rsp+60h] [rbp-9h] BYREF
  __int128 v15; // [rsp+70h] [rbp+7h]
  _BYTE v16[32]; // [rsp+80h] [rbp+17h] BYREF

  *(_QWORD *)&v15 = 0LL;
  *((_QWORD *)&v15 + 1) = 7LL;
  LOWORD(v14) = 0;
  *(_QWORD *)&v13 = 0LL;
  *((_QWORD *)&v13 + 1) = 7LL;
  LOWORD(v12) = 0;
  v4 = (char *)OpenProcess(0x1000u, 0, a2);
  v11 = v4;
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v10 = 0LL;
    if ( (int)wil::QueryFullProcessImageNameW<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
                (__int64)v4,
                v3,
                (__int64)&v10) >= 0
      && v10 )
    {
      v6 = -1LL;
      do
        ++v6;
      while ( v10[v6] );
      std::wstring::assign((char *)&v14, v10, v6);
    }
    v9 = 0LL;
    if ( (int)CallerIdentity::GetProcessAppId(v4, (unsigned int **)&v9, v5) >= 0 )
    {
      v7 = Windows::Internal::FamilySafety::AppLimits::AumidToAppId((__int64)v16, v9);
      if ( &v12 != (__int128 *)v7 )
      {
        std::wstring::_Tidy_deallocate((__int64)&v12);
        v12 = *(_OWORD *)v7;
        v13 = *(_OWORD *)(v7 + 16);
        *(_QWORD *)(v7 + 16) = 0LL;
        *(_QWORD *)(v7 + 24) = 7LL;
        *(_WORD *)v7 = 0;
      }
      std::wstring::_Tidy_deallocate((__int64)v16);
    }
    wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>((void **)&v9);
    wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>((void **)&v10);
  }
  *a1 = v14;
  a1[1] = v15;
  *(_QWORD *)&v15 = 0LL;
  *((_QWORD *)&v15 + 1) = 7LL;
  LOWORD(v14) = 0;
  a1[2] = v12;
  a1[3] = v13;
  *(_QWORD *)&v13 = 0LL;
  *((_QWORD *)&v13 + 1) = 7LL;
  LOWORD(v12) = 0;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v11);
  std::wstring::_Tidy_deallocate((__int64)&v12);
  std::wstring::_Tidy_deallocate((__int64)&v14);
  return a1;
}
