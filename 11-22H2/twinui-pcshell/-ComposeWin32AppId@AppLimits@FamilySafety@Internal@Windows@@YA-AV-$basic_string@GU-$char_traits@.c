/*
 * XREFs of ?ComposeWin32AppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEBV56@1@Z @ 0x180627874
 * Callers:
 *     ?ComputeAppIdFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180627A6C (-ComputeAppIdFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG.c)
 * Callees:
 *     ?find_last_path_segment@wil@@YAPEBGPEBG@Z @ 0x1800A8DBC (-find_last_path_segment@wil@@YAPEBGPEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$str_printf@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGZZ @ 0x180489BC4 (--$str_printf@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@wil@@YA-AV-$basic_s.c)
 *     ?PercentEncodeAndToLower@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG@Z @ 0x1806280E8 (-PercentEncodeAndToLower@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$unique_any_t@V-$unique_.c)
 *     ?TrimWhitespaceAndLimit@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV56@_K@Z @ 0x180628224 (-TrimWhitespaceAndLimit@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_tr.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall Windows::Internal::FamilySafety::AppLimits::ComposeWin32AppId(
        _QWORD *a1,
        const WCHAR *a2,
        _QWORD *a3,
        __int64 a4)
{
  const unsigned __int16 *last_path_segment; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  _QWORD *v10; // rbx
  _QWORD *v11; // rbx
  LPVOID v13; // [rsp+20h] [rbp-49h] BYREF
  int v14; // [rsp+28h] [rbp-41h]
  LPVOID pv[2]; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v16[4]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v17[4]; // [rsp+60h] [rbp-9h] BYREF

  pv[1] = a1;
  *a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 7LL;
  *(_WORD *)a1 = 0;
  v14 = 1;
  last_path_segment = wil::find_last_path_segment(a2, a2);
  Windows::Internal::FamilySafety::AppLimits::PercentEncodeAndToLower(&v13, last_path_segment);
  Windows::Internal::FamilySafety::AppLimits::TrimWhitespaceAndLimit(v16, a4);
  if ( a3[2] )
  {
    if ( a3[3] >= 8uLL )
      a3 = (_QWORD *)*a3;
    v8 = wil::str_printf<std::wstring>(v17, (__int64)L"win32:%s_%s", v13, a3);
    goto LABEL_13;
  }
  if ( !v16[2] )
  {
    v8 = wil::str_printf<std::wstring>(v17, (__int64)L"win32:%s_", v13);
LABEL_13:
    v11 = v8;
    if ( a1 != v8 )
    {
      std::wstring::_Tidy_deallocate((__int64)a1);
      *(_OWORD *)a1 = *(_OWORD *)v11;
      *((_OWORD *)a1 + 1) = *((_OWORD *)v11 + 1);
      v11[2] = 0LL;
      *(_WORD *)v11 = 0;
      v11[3] = 7LL;
    }
    std::wstring::_Tidy_deallocate((__int64)v17);
    goto LABEL_16;
  }
  v9 = v16;
  if ( v16[3] >= 8uLL )
    v9 = (_QWORD *)v16[0];
  Windows::Internal::FamilySafety::AppLimits::PercentEncodeAndToLower(pv, v9);
  v10 = wil::str_printf<std::wstring>(v17, (__int64)L"win32:%s_!dev=%s", v13, pv[0]);
  if ( a1 != v10 )
  {
    std::wstring::_Tidy_deallocate((__int64)a1);
    *(_OWORD *)a1 = *(_OWORD *)v10;
    *((_OWORD *)a1 + 1) = *((_OWORD *)v10 + 1);
    v10[2] = 0LL;
    v10[3] = 7LL;
    *(_WORD *)v10 = 0;
  }
  std::wstring::_Tidy_deallocate((__int64)v17);
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
LABEL_16:
  std::wstring::_Tidy_deallocate((__int64)v16);
  if ( v13 )
    CoTaskMemFree(v13);
  return a1;
}
