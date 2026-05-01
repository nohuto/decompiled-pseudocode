/*
 * XREFs of ?ComposeWin32AppIdForJavaApp@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEBV?$basic_string_view@GU?$char_traits@G@std@@@2@@Z @ 0x18056A7DC
 * Callers:
 *     ?GetAppIdForSpecialCategoryApp@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGI@Z @ 0x180569F14 (-GetAppIdForSpecialCategoryApp@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?find_last_path_segment@wil@@YAPEBGPEBG@Z @ 0x180175F44 (-find_last_path_segment@wil@@YAPEBGPEBG@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$str_printf@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGZZ @ 0x1803AF734 (--$str_printf@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@wil@@YA-AV-$basic_s.c)
 *     ?PercentEncodeAndToLower@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG@Z @ 0x18056A49C (-PercentEncodeAndToLower@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$unique_any_t@V-$unique_.c)
 *     ?GetCertSignerHashFromExe@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18056B008 (-GetCertSignerHashFromExe@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEB.c)
 */

// Hidden C++ exception states: #wind=3
_OWORD *__fastcall ComposeWin32AppIdForJavaApp(_OWORD *a1, const WCHAR *a2, _QWORD *a3)
{
  const unsigned __int16 *last_path_segment; // rax
  __int64 v6; // r8
  const char *v7; // r9
  __int128 *v8; // rax
  _QWORD *v9; // r9
  __int128 *v10; // rdi
  __int128 v11; // xmm1
  void *v13; // [rsp+30h] [rbp-39h] BYREF
  __int128 v14; // [rsp+38h] [rbp-31h] BYREF
  __int128 v15; // [rsp+48h] [rbp-21h]
  _QWORD v16[4]; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v17[32]; // [rsp+78h] [rbp+Fh] BYREF

  v13 = a1;
  *(_QWORD *)&v15 = 0LL;
  *((_QWORD *)&v15 + 1) = 7LL;
  LOWORD(v14) = 0;
  if ( a3[1] )
  {
    last_path_segment = wil::find_last_path_segment(a2, a2);
    Windows::Internal::FamilySafety::AppLimits::PercentEncodeAndToLower(
      (__int16 **)&v13,
      (__int64)last_path_segment,
      v6,
      v7);
    GetCertSignerHashFromExe(v16);
    if ( v16[2] )
    {
      v9 = v16;
      if ( v16[3] >= 8uLL )
        v9 = (_QWORD *)v16[0];
      v8 = (__int128 *)wil::str_printf<std::wstring>((__int64)v17, (__int64)L"win32:%s_%s!java=%s", v13, v9, *a3);
    }
    else
    {
      v8 = (__int128 *)wil::str_printf<std::wstring>((__int64)v17, (__int64)L"win32:%s_!java=%s", v13, *a3);
    }
    v10 = v8;
    if ( &v14 != v8 )
    {
      std::wstring::_Tidy_deallocate((__int64)&v14);
      v11 = v10[1];
      v14 = *v10;
      *(_WORD *)v10 = 0;
      *((_QWORD *)v10 + 3) = 7LL;
      *((_QWORD *)v10 + 2) = 0LL;
      v15 = v11;
    }
    std::wstring::_Tidy_deallocate((__int64)v17);
    *a1 = v14;
    a1[1] = v15;
    *(_QWORD *)&v15 = 0LL;
    *((_QWORD *)&v15 + 1) = 7LL;
    LOWORD(v14) = 0;
    std::wstring::_Tidy_deallocate((__int64)v16);
    wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>(&v13);
  }
  else
  {
    *((_QWORD *)a1 + 2) = 0LL;
    *((_QWORD *)a1 + 3) = 7LL;
    *(_WORD *)a1 = 0;
  }
  std::wstring::_Tidy_deallocate((__int64)&v14);
  return a1;
}
