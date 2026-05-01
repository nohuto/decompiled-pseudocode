/*
 * XREFs of ??$str_build_nothrow@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAPEBG_K@Z @ 0x180489868
 * Callers:
 *     ??$str_concat@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBGAEAY0BA@$$CBGAEAPEBG@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBGAEAY0BA@$$CBG0@Z @ 0x180489A14 (--$str_concat@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBGAEAY0BA@$$CBG.c)
 *     ??$str_concat@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBGAEAY0BF@$$CBGAEAPEBG@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBGAEAY0BF@$$CBG0@Z @ 0x180489AEC (--$str_concat@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBGAEAY0BF@$$CBG.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?StringCchCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x1802D56E8 (-StringCchCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z.c)
 *     ?make@?$string_maker@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@QEAAJPEBG_K@Z @ 0x1802D592A (-make@-$string_maker@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wil@.c)
 */

__int64 __fastcall wil::details::str_build_nothrow<std::wstring>(__int128 *a1, STRSAFE_PCNZWCH *a2)
{
  STRSAFE_PCNZWCH *v2; // r14
  size_t v3; // rsi
  STRSAFE_PCNZWCH *v4; // rdi
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  wchar_t *v10; // rcx
  wchar_t *v11; // rsi
  __int128 v12; // xmm6
  __m128i v13; // xmm7
  __m128i v14; // xmm0
  STRSAFE_LPWSTR pszDest; // [rsp+38h] [rbp-39h] BYREF
  __int128 v17; // [rsp+40h] [rbp-31h] BYREF
  __m128i si128; // [rsp+50h] [rbp-21h]
  __int128 v19; // [rsp+60h] [rbp-11h] BYREF
  __m128i v20; // [rsp+70h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v2 = a2 + 4;
  v3 = 0LL;
  v4 = a2;
  while ( a2 != v2 )
  {
    if ( *a2 )
    {
      v6 = -1LL;
      do
        ++v6;
      while ( (*a2)[v6] );
    }
    else
    {
      v6 = 0LL;
    }
    v3 += v6;
    ++a2;
  }
  *(_QWORD *)&v17 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v7 = wil::details::string_maker<std::wstring>::make(&v17, 0LL, v3);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v10 = (wchar_t *)&v17;
    if ( si128.m128i_i64[1] >= 8uLL )
      v10 = (wchar_t *)v17;
    pszDest = v10;
    v11 = &v10[v3];
    while ( v4 != v2 )
    {
      if ( *v4 )
      {
        v7 = StringCchCopyExW(v10, v11 + 1 - v10, *v4, &pszDest, 0LL, 0x100u);
        v8 = v7;
        if ( v7 < 0 )
        {
          v9 = 1733LL;
          goto LABEL_24;
        }
        v10 = pszDest;
      }
      ++v4;
    }
    v12 = v17;
    LOWORD(v17) = 0;
    v13 = si128;
    v19 = v12;
    v20 = si128;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    if ( a1 != &v19 )
    {
      std::wstring::_Tidy_deallocate((__int64)a1);
      v14 = _mm_load_si128((const __m128i *)&_xmm);
      *a1 = v12;
      LOWORD(v19) = 0;
      v20 = v14;
      a1[1] = (__int128)v13;
    }
    std::wstring::_Tidy_deallocate((__int64)&v19);
    v8 = 0;
  }
  else
  {
    v9 = 1725LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      (const char *)(unsigned int)v7);
  }
  std::wstring::_Tidy_deallocate((__int64)&v17);
  return v8;
}
