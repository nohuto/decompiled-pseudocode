/*
 * XREFs of ?ComposeWin32AppIdForJavaApp@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEBV?$basic_string_view@GU?$char_traits@G@std@@@2@@Z @ 0x180628AF8
 * Callers:
 *     ?GetAppIdForSpecialCategoryApp@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGI@Z @ 0x180627B20 (-GetAppIdForSpecialCategoryApp@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std.c)
 * Callees:
 *     ?find_last_path_segment@wil@@YAPEBGPEBG@Z @ 0x1800A8DBC (-find_last_path_segment@wil@@YAPEBGPEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$str_printf@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGZZ @ 0x180489BC4 (--$str_printf@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@wil@@YA-AV-$basic_s.c)
 *     ?GetCertSignerHashFromExe@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180621F8C (-GetCertSignerHashFromExe@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEB.c)
 *     ?PercentEncodeAndToLower@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG@Z @ 0x1806280E8 (-PercentEncodeAndToLower@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$unique_any_t@V-$unique_.c)
 */

// Hidden C++ exception states: #wind=3
__m128i *__fastcall ComposeWin32AppIdForJavaApp(__m128i *a1, const WCHAR *a2, _QWORD *a3)
{
  __m128i si128; // xmm6
  const unsigned __int16 *last_path_segment; // rax
  __int64 v8; // r8
  __m128i *v9; // rax
  _QWORD *v10; // r9
  __m128i *v11; // rdi
  LPVOID pv; // [rsp+38h] [rbp-59h] BYREF
  __m128i v14; // [rsp+48h] [rbp-49h] BYREF
  __m128i v15; // [rsp+58h] [rbp-39h]
  _QWORD v16[4]; // [rsp+68h] [rbp-29h] BYREF
  _QWORD v17[4]; // [rsp+88h] [rbp-9h] BYREF

  pv = a1;
  v14.m128i_i64[0] = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v15 = si128;
  if ( a3[1] )
  {
    last_path_segment = wil::find_last_path_segment(a2, a2);
    Windows::Internal::FamilySafety::AppLimits::PercentEncodeAndToLower((__int16 **)&pv, (__int64)last_path_segment);
    GetCertSignerHashFromExe(v16, (__int64)a2, v8);
    if ( v16[2] )
    {
      v10 = v16;
      if ( v16[3] >= 8uLL )
        v10 = (_QWORD *)v16[0];
      v9 = (__m128i *)wil::str_printf<std::wstring>(v17, (__int64)L"win32:%s_%s!java=%s", pv, v10, *a3);
    }
    else
    {
      v9 = (__m128i *)wil::str_printf<std::wstring>(v17, (__int64)L"win32:%s_!java=%s", pv, *a3);
    }
    v11 = v9;
    if ( &v14 != v9 )
    {
      std::wstring::_Tidy_deallocate((__int64)&v14);
      si128 = v11[1];
      v14 = *v11;
      v11->m128i_i16[0] = 0;
      v11[1].m128i_i64[1] = 7LL;
      v11[1].m128i_i64[0] = 0LL;
    }
    std::wstring::_Tidy_deallocate((__int64)v17);
    *a1 = v14;
    a1[1] = si128;
    v15 = _mm_load_si128((const __m128i *)&_xmm);
    v14.m128i_i16[0] = 0;
    std::wstring::_Tidy_deallocate((__int64)v16);
    if ( pv )
      CoTaskMemFree(pv);
  }
  else
  {
    a1->m128i_i64[0] = 0LL;
    a1[1].m128i_i64[0] = 0LL;
    a1[1].m128i_i64[1] = 7LL;
    a1->m128i_i16[0] = 0;
  }
  std::wstring::_Tidy_deallocate((__int64)&v14);
  return a1;
}
