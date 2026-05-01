/*
 * XREFs of ??$str_vprintf_nothrow@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEAPEAD@Z @ 0x180489C68
 * Callers:
 *     ??$str_printf@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGZZ @ 0x180489BC4 (--$str_printf@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@wil@@YA-AV-$basic_s.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _vscwprintf @ 0x1801C7644 (_vscwprintf.c)
 *     ?make@?$string_maker@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@QEAAJPEBG_K@Z @ 0x1802D592A (-make@-$string_maker@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wil@.c)
 *     ?StringCchVPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGPEAD@Z @ 0x18048AB6C (-StringCchVPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGPEAD@Z.c)
 */

__int64 __fastcall wil::details::str_vprintf_nothrow<std::wstring>(__int128 *a1, const wchar_t *a2, va_list *a3)
{
  size_t v6; // r15
  int v7; // eax
  unsigned __int64 *v8; // r9
  unsigned int v9; // ebx
  __int64 v10; // rdx
  wchar_t *v11; // rcx
  __int128 v12; // xmm6
  __m128i v13; // xmm7
  __m128i v14; // xmm0
  STRSAFE_LPWSTR pszDest[2]; // [rsp+48h] [rbp-49h] BYREF
  __m128i si128; // [rsp+58h] [rbp-39h]
  __int128 v18; // [rsp+68h] [rbp-29h] BYREF
  __m128i v19; // [rsp+78h] [rbp-19h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v6 = vscwprintf(a2, *a3);
  pszDest[0] = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v7 = wil::details::string_maker<std::wstring>::make(pszDest, 0LL, v6);
  v9 = v7;
  if ( v7 < 0 )
  {
    v10 = 1789LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      (const char *)(unsigned int)v7);
    goto LABEL_11;
  }
  v11 = (wchar_t *)pszDest;
  if ( si128.m128i_i64[1] >= 8uLL )
    v11 = pszDest[0];
  v7 = StringCchVPrintfExW(v11, v6 + 1, 0LL, v8, 0x800u, a2, *a3);
  v9 = v7;
  if ( v7 < 0 )
  {
    v10 = 1792LL;
    goto LABEL_7;
  }
  v12 = *(_OWORD *)pszDest;
  LOWORD(pszDest[0]) = 0;
  v13 = si128;
  v18 = v12;
  v19 = si128;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( a1 != &v18 )
  {
    std::wstring::_Tidy_deallocate((__int64)a1);
    v14 = _mm_load_si128((const __m128i *)&_xmm);
    *a1 = v12;
    LOWORD(v18) = 0;
    v19 = v14;
    a1[1] = (__int128)v13;
  }
  std::wstring::_Tidy_deallocate((__int64)&v18);
  v9 = 0;
LABEL_11:
  std::wstring::_Tidy_deallocate((__int64)pszDest);
  return v9;
}
