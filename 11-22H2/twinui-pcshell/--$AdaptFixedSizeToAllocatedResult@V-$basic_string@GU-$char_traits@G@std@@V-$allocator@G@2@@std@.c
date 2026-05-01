/*
 * XREFs of ??$AdaptFixedSizeToAllocatedResult@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0BAA@@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@@Z @ 0x1802E76B8
 * Callers:
 *     ??$ExpandEnvironmentStringsW@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0BAA@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1802E78DC (--$ExpandEnvironmentStringsW@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$0BAA.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$function@$$A6A_NJ@Z@wistd@@QEAA@XZ @ 0x180187750 (--1-$function@$$A6A_NJ@Z@wistd@@QEAA@XZ.c)
 *     ??R?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@QEBAJPEAG_KPEA_K@Z @ 0x1801BCAEC (--R-$function@$$A6AJPEAG_KPEA_K@Z@wistd@@QEBAJPEAG_KPEA_K@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?make@?$string_maker@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@QEAAJPEBG_K@Z @ 0x1802D592A (-make@-$string_maker@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wil@.c)
 *     ?erase@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K@Z @ 0x1803DD0F4 (-erase@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_K@Z.c)
 */

__int64 __fastcall wil::AdaptFixedSizeToAllocatedResult<std::wstring,256>(__int128 *a1, __int64 a2)
{
  int v4; // ebx
  unsigned __int64 v5; // rax
  int v6; // eax
  unsigned __int64 v7; // rbx
  int v8; // eax
  unsigned int v9; // esi
  int *v10; // rdx
  int v11; // eax
  bool v12; // cc
  __int128 v13; // xmm6
  __m128i v14; // xmm7
  unsigned __int64 v16; // [rsp+28h] [rbp-E0h] BYREF
  int v17[4]; // [rsp+30h] [rbp-D8h] BYREF
  __m128i v18; // [rsp+40h] [rbp-C8h]
  __int128 v19; // [rsp+50h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+60h] [rbp-A8h]
  _WORD v21[256]; // [rsp+78h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2D0h] [rbp+1C8h]

  *(_QWORD *)v17 = 0LL;
  v18.m128i_i64[0] = 0LL;
  v18.m128i_i64[1] = 7LL;
  v21[0] = 0;
  v16 = 0LL;
  v4 = wistd::function<long (unsigned short *,unsigned __int64,unsigned __int64 *)>::operator()(a2, v21, 256LL, &v16);
  if ( v4 < 0 )
    goto LABEL_16;
  v5 = v16;
  if ( v16 > 0x100 )
  {
    while ( 1 )
    {
      v7 = v5;
      v8 = wil::details::string_maker<std::wstring>::make(v17, 0LL, v5 - 1);
      v9 = v8;
      if ( v8 < 0 )
        break;
      v10 = v17;
      if ( v18.m128i_i64[1] >= 8uLL )
        v10 = *(int **)v17;
      v11 = wistd::function<long (unsigned short *,unsigned __int64,unsigned __int64 *)>::operator()(a2, v10, v7, &v16);
      if ( v11 < 0 )
      {
        v4 = v11;
        goto LABEL_16;
      }
      v5 = v16;
      v12 = v16 <= v7;
      if ( v16 < v7 )
      {
        std::wstring::erase(v17, v16 - 1);
        v5 = v16;
        v12 = v16 <= v7;
      }
      if ( v12 )
        goto LABEL_12;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBB,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
      (const char *)(unsigned int)v8);
    std::wstring::_Tidy_deallocate((__int64)v17);
    wistd::function<bool (long)>::~function<bool (long)>(a2);
    return v9;
  }
  else
  {
    v6 = wil::details::string_maker<std::wstring>::make(v17, (__int64)v21, v16 - 1);
    v4 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB0,
        (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
        (const char *)(unsigned int)v6);
LABEL_16:
      std::wstring::_Tidy_deallocate((__int64)v17);
      wistd::function<bool (long)>::~function<bool (long)>(a2);
      return (unsigned int)v4;
    }
LABEL_12:
    v13 = *(_OWORD *)v17;
    v19 = *(_OWORD *)v17;
    v14 = v18;
    si128 = v18;
    v18.m128i_i64[0] = 0LL;
    v18.m128i_i64[1] = 7LL;
    LOWORD(v17[0]) = 0;
    if ( a1 != &v19 )
    {
      std::wstring::_Tidy_deallocate((__int64)a1);
      *a1 = v13;
      a1[1] = (__int128)v14;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      LOWORD(v19) = 0;
    }
    std::wstring::_Tidy_deallocate((__int64)&v19);
    std::wstring::_Tidy_deallocate((__int64)v17);
    wistd::function<bool (long)>::~function<bool (long)>(a2);
    return 0LL;
  }
}
