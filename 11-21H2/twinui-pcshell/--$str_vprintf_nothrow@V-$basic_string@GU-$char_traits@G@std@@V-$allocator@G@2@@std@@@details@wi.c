/*
 * XREFs of ??$str_vprintf_nothrow@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEAPEAD@Z @ 0x1803AF7D4
 * Callers:
 *     ??$str_printf@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGZZ @ 0x1803AF734 (--$str_printf@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@wil@@YA-AV-$basic_s.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _vscwprintf @ 0x180189044 (_vscwprintf.c)
 *     ?StringCchVPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGPEAD@Z @ 0x1803B1134 (-StringCchVPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGPEAD@Z.c)
 *     ?make@?$string_maker@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@QEAAJPEBG_K@Z @ 0x1803B15A4 (-make@-$string_maker@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wil@.c)
 */

__int64 __fastcall wil::details::str_vprintf_nothrow<std::wstring>(__int128 *a1, const wchar_t *a2, va_list *a3)
{
  __int64 v6; // r15
  int v7; // eax
  unsigned __int64 *v8; // r9
  unsigned int v9; // ebx
  __int64 v10; // rdx
  wchar_t *v11; // rcx
  __int128 v12; // xmm6
  __m128i v13; // xmm7
  STRSAFE_LPWSTR pszDest[2]; // [rsp+48h] [rbp-49h] BYREF
  __m128i si128; // [rsp+58h] [rbp-39h]
  __int128 v17; // [rsp+68h] [rbp-29h] BYREF
  __m128i v18; // [rsp+78h] [rbp-19h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v6 = vscwprintf(a2, *a3);
  LOWORD(pszDest[0]) = 0;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v7 = wil::details::string_maker<std::wstring>::make(pszDest, 0LL, v6);
  v9 = v7;
  if ( v7 < 0 )
  {
    v10 = 1775LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
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
    v10 = 1778LL;
    goto LABEL_7;
  }
  v12 = *(_OWORD *)pszDest;
  LOWORD(pszDest[0]) = 0;
  v13 = si128;
  v17 = v12;
  v18 = si128;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( a1 != &v17 )
  {
    std::wstring::_Tidy_deallocate((__int64)a1);
    *a1 = v12;
    v18.m128i_i64[0] = 0LL;
    a1[1] = (__int128)v13;
    v18.m128i_i64[1] = 7LL;
    LOWORD(v17) = 0;
  }
  std::wstring::_Tidy_deallocate((__int64)&v17);
  v9 = 0;
LABEL_11:
  std::wstring::_Tidy_deallocate((__int64)pszDest);
  return v9;
}
