/*
 * XREFs of ??$str_build_nothrow@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAPEBG_K@Z @ 0x1803AF3E0
 * Callers:
 *     ??$str_concat@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBGAEAY0BA@$$CBGAEAPEBG@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBGAEAY0BA@$$CBG0@Z @ 0x1803AF58C (--$str_concat@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBGAEAY0BA@$$CBG.c)
 *     ??$str_concat@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBGAEAY0BF@$$CBGAEAPEBG@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBGAEAY0BF@$$CBG0@Z @ 0x1803AF660 (--$str_concat@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBGAEAY0BF@$$CBG.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?StringCchCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x1803B0F6C (-StringCchCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z.c)
 *     ?make@?$string_maker@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@QEAAJPEBG_K@Z @ 0x1803B15A4 (-make@-$string_maker@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wil@.c)
 */

__int64 __fastcall wil::details::str_build_nothrow<std::wstring>(__int128 *a1, STRSAFE_PCNZWCH *a2)
{
  STRSAFE_PCNZWCH *v2; // r15
  __int64 v3; // rsi
  STRSAFE_PCNZWCH *v4; // rdi
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  wchar_t *v10; // rcx
  wchar_t *v11; // rsi
  __int128 v12; // xmm6
  __m128i v13; // xmm7
  STRSAFE_LPWSTR pszDest; // [rsp+38h] [rbp-39h] BYREF
  __int128 v16; // [rsp+40h] [rbp-31h] BYREF
  __m128i si128; // [rsp+50h] [rbp-21h]
  __int128 v18; // [rsp+60h] [rbp-11h] BYREF
  __m128i v19; // [rsp+70h] [rbp-1h]
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
  LOWORD(v16) = 0;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v7 = wil::details::string_maker<std::wstring>::make(&v16, 0LL, v3);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v10 = (wchar_t *)&v16;
    if ( si128.m128i_i64[1] >= 8uLL )
      v10 = (wchar_t *)v16;
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
          v9 = 1719LL;
          goto LABEL_24;
        }
        v10 = pszDest;
      }
      ++v4;
    }
    v12 = v16;
    LOWORD(v16) = 0;
    v13 = si128;
    v18 = v12;
    v19 = si128;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    if ( a1 != &v18 )
    {
      std::wstring::_Tidy_deallocate((__int64)a1);
      *a1 = v12;
      v19.m128i_i64[0] = 0LL;
      a1[1] = (__int128)v13;
      v19.m128i_i64[1] = 7LL;
      LOWORD(v18) = 0;
    }
    std::wstring::_Tidy_deallocate((__int64)&v18);
    v8 = 0;
  }
  else
  {
    v9 = 1711LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      (const char *)(unsigned int)v7);
  }
  std::wstring::_Tidy_deallocate((__int64)&v16);
  return v8;
}
