/*
 * XREFs of ?TryGetProcessExePathAndAppId@@YA?AU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@I@Z @ 0x180628344
 * Callers:
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x180626BD0 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ??$QueryFullProcessImageNameW@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YAJPEAXKAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@@Z @ 0x180085CFC (--$QueryFullProcessImageNameW@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1800C5230 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?AumidToAppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180622E64 (-AumidToAppId@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_traits@G@std.c)
 */

// Hidden C++ exception states: #wind=5
_OWORD *__fastcall TryGetProcessExePathAndAppId(_OWORD *a1, DWORD a2)
{
  __m128i si128; // xmm6
  __m128i v4; // xmm7
  __int64 v5; // rdx
  char *v6; // rdi
  int v7; // eax
  void *v8; // rbx
  unsigned __int64 v9; // r8
  void **v10; // rax
  unsigned __int16 **v11; // r8
  __int64 v12; // rsi
  LPVOID pv; // [rsp+28h] [rbp-89h] BYREF
  LPVOID Src[4]; // [rsp+38h] [rbp-79h] BYREF
  __int128 v16; // [rsp+58h] [rbp-59h] BYREF
  __m128i v17; // [rsp+68h] [rbp-49h]
  __int128 v18; // [rsp+78h] [rbp-39h] BYREF
  __m128i v19; // [rsp+88h] [rbp-29h] BYREF
  _BYTE v20[32]; // [rsp+98h] [rbp-19h] BYREF

  Src[0] = a1;
  *(_QWORD *)&v18 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v19 = si128;
  *(_QWORD *)&v16 = 0LL;
  v4 = si128;
  v17 = si128;
  v6 = (char *)OpenProcess(0x1000u, 0, a2);
  Src[3] = v6;
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    Src[0] = 0LL;
    v7 = wil::QueryFullProcessImageNameW<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
           (__int64)v6,
           v5,
           (__int64)Src);
    v8 = Src[0];
    if ( v7 >= 0 && Src[0] )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( *((_WORD *)Src[0] + v9) );
      std::wstring::assign((char *)&v18, Src[0], v9);
      si128 = _mm_loadu_si128(&v19);
    }
    pv = 0LL;
    v10 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&pv);
    if ( (int)CallerIdentity::GetProcessAppId(v6, (unsigned int **)v10, v11) >= 0 )
    {
      v12 = Windows::Internal::FamilySafety::AppLimits::AumidToAppId((__int64)v20, (wchar_t *)pv);
      if ( &v16 != (__int128 *)v12 )
      {
        std::wstring::_Tidy_deallocate((__int64)&v16);
        v16 = *(_OWORD *)v12;
        v4 = *(__m128i *)(v12 + 16);
        *(_QWORD *)(v12 + 16) = 0LL;
        *(_QWORD *)(v12 + 24) = 7LL;
        *(_WORD *)v12 = 0;
      }
      std::wstring::_Tidy_deallocate((__int64)v20);
    }
    if ( pv )
      CoTaskMemFree(pv);
    if ( v8 )
      CoTaskMemFree(v8);
  }
  *a1 = v18;
  a1[1] = si128;
  v19 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v18) = 0;
  a1[2] = v16;
  a1[3] = v4;
  v17 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v16) = 0;
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v6);
  std::wstring::_Tidy_deallocate((__int64)&v16);
  std::wstring::_Tidy_deallocate((__int64)&v18);
  return a1;
}
