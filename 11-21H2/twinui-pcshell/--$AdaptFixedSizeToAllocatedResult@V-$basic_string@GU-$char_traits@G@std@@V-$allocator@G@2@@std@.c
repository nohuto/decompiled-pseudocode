/*
 * XREFs of ??$AdaptFixedSizeToAllocatedResult@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0BAA@@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@@Z @ 0x1805758AC
 * Callers:
 *     ??$ExpandEnvironmentStringsW@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0BAA@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180575AD0 (--$ExpandEnvironmentStringsW@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$0BAA.c)
 * Callees:
 *     ??1?$function@$$A6A_NJ@Z@wistd@@QEAA@XZ @ 0x180030A3C (--1-$function@$$A6A_NJ@Z@wistd@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??R?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@QEBAJPEAG_KPEA_K@Z @ 0x1802E1070 (--R-$function@$$A6AJPEAG_KPEA_K@Z@wistd@@QEBAJPEAG_KPEA_K@Z.c)
 *     ?make@?$string_maker@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@QEAAJPEBG_K@Z @ 0x1803B15A4 (-make@-$string_maker@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wil@.c)
 *     ?erase@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K@Z @ 0x180576D3C (-erase@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_K@Z.c)
 */

__int64 __fastcall wil::AdaptFixedSizeToAllocatedResult<std::wstring,256>(__int128 *a1, __int64 a2)
{
  int v4; // ebx
  unsigned __int64 v5; // rax
  int v6; // eax
  unsigned __int64 v7; // rbx
  int v8; // eax
  unsigned int v9; // esi
  __int128 *v10; // rdx
  int v11; // eax
  bool v12; // cc
  int v14[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v15; // [rsp+28h] [rbp-D8h]
  __int128 v16; // [rsp+38h] [rbp-C8h]
  __int128 v17; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v18; // [rsp+58h] [rbp-A8h]
  __int128 v19; // [rsp+68h] [rbp-98h] BYREF
  __int128 v20; // [rsp+78h] [rbp-88h]
  _WORD v21[256]; // [rsp+90h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2C8h] [rbp+1C8h]

  *(_QWORD *)&v18 = 0LL;
  *((_QWORD *)&v18 + 1) = 7LL;
  LOWORD(v17) = 0;
  v21[0] = 0;
  *(_QWORD *)v14 = 0LL;
  v4 = wistd::function<long (unsigned short *,unsigned __int64,unsigned __int64 *)>::operator()(a2, v21, 256LL, v14);
  if ( v4 < 0 )
    goto LABEL_16;
  v5 = *(_QWORD *)v14;
  if ( *(_QWORD *)v14 > 0x100uLL )
  {
    while ( 1 )
    {
      v7 = v5;
      v8 = wil::details::string_maker<std::wstring>::make(&v17, 0LL, v5 - 1);
      v9 = v8;
      if ( v8 < 0 )
        break;
      v10 = &v17;
      if ( *((_QWORD *)&v18 + 1) >= 8uLL )
        v10 = (__int128 *)v17;
      v11 = wistd::function<long (unsigned short *,unsigned __int64,unsigned __int64 *)>::operator()(a2, v10, v7, v14);
      if ( v11 < 0 )
      {
        v4 = v11;
        goto LABEL_16;
      }
      v5 = *(_QWORD *)v14;
      v12 = *(_QWORD *)v14 <= v7;
      if ( *(_QWORD *)v14 < v7 )
      {
        std::wstring::erase(&v17, *(_QWORD *)v14 - 1LL);
        v5 = *(_QWORD *)v14;
        v12 = *(_QWORD *)v14 <= v7;
      }
      if ( v12 )
        goto LABEL_12;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBB,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
      (const char *)(unsigned int)v8);
    std::wstring::_Tidy_deallocate((__int64)&v17);
    wistd::function<bool (long)>::~function<bool (long)>(a2);
    return v9;
  }
  else
  {
    v6 = wil::details::string_maker<std::wstring>::make(&v17, v21, *(_QWORD *)v14 - 1LL);
    v4 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB0,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
        (const char *)(unsigned int)v6);
LABEL_16:
      std::wstring::_Tidy_deallocate((__int64)&v17);
      wistd::function<bool (long)>::~function<bool (long)>(a2);
      return (unsigned int)v4;
    }
LABEL_12:
    v15 = v17;
    v19 = v17;
    v16 = v18;
    v20 = v18;
    *(_QWORD *)&v18 = 0LL;
    *((_QWORD *)&v18 + 1) = 7LL;
    LOWORD(v17) = 0;
    if ( a1 != &v19 )
    {
      std::wstring::_Tidy_deallocate((__int64)a1);
      *a1 = v15;
      a1[1] = v16;
      *(_QWORD *)&v20 = 0LL;
      *((_QWORD *)&v20 + 1) = 7LL;
      LOWORD(v19) = 0;
    }
    std::wstring::_Tidy_deallocate((__int64)&v19);
    std::wstring::_Tidy_deallocate((__int64)&v17);
    wistd::function<bool (long)>::~function<bool (long)>(a2);
    return 0LL;
  }
}
