/*
 * XREFs of ?make@?$string_maker@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@QEAAJPEBG_K@Z @ 0x1803B15A4
 * Callers:
 *     ??$str_build_nothrow@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAPEBG_K@Z @ 0x1803AF3E0 (--$str_build_nothrow@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wil@.c)
 *     ??$str_vprintf_nothrow@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEAPEAD@Z @ 0x1803AF7D4 (--$str_vprintf_nothrow@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wi.c)
 *     ??$AdaptFixedSizeToAllocatedResult@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0BAA@@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@@Z @ 0x1805758AC (--$AdaptFixedSizeToAllocatedResult@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@_KG@Z @ 0x1801710A8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@_KG@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG_K@Z @ 0x1803AF930 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall wil::details::string_maker<std::wstring>::make(_OWORD *a1, const void *a2, unsigned __int64 a3)
{
  __int64 v4; // rdi
  char v5; // bl
  _BYTE v7[32]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v8[32]; // [rsp+48h] [rbp-40h] BYREF

  if ( a2 )
  {
    v4 = std::wstring::wstring((__int64)v8, a2, a3);
    v5 = 1;
  }
  else
  {
    v4 = std::wstring::wstring((__int64)v7, a3);
    v5 = 2;
  }
  if ( a1 != (_OWORD *)v4 )
  {
    std::wstring::_Tidy_deallocate((__int64)a1);
    *a1 = *(_OWORD *)v4;
    a1[1] = *(_OWORD *)(v4 + 16);
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)(v4 + 24) = 7LL;
    *(_WORD *)v4 = 0;
  }
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    std::wstring::_Tidy_deallocate((__int64)v7);
  }
  if ( (v5 & 1) != 0 )
    std::wstring::_Tidy_deallocate((__int64)v8);
  return 0LL;
}
