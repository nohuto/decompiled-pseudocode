/*
 * XREFs of ??$_Sort_heap_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0U?$less@X@0@@Z @ 0x1803F645C
 * Callers:
 *     ??$_Sort_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0_JU?$less@X@0@@Z @ 0x1803F6540 (--$_Sort_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less@X@2@.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$_Pop_heap_hole_by_index@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@_J1$$QEAV10@U?$less@X@0@@Z @ 0x1803F6120 (--$_Pop_heap_hole_by_index@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@.c)
 */

__int64 __fastcall std::_Sort_heap_unchecked<std::wstring *,std::less<void>>(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rsi
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int64 v7; // rdi
  _OWORD v8[2]; // [rsp+30h] [rbp-58h] BYREF

  result = (a2 - a1) & 0xFFFFFFFFFFFFFFE0uLL;
  if ( result >= 64 )
  {
    v4 = a2 - 32;
    do
    {
      v5 = *(_OWORD *)v4;
      v6 = *(_OWORD *)(v4 + 16);
      *(_QWORD *)(v4 + 16) = 0LL;
      *(_QWORD *)(v4 + 24) = 7LL;
      *(_WORD *)v4 = 0;
      v8[0] = v5;
      v8[1] = v6;
      if ( v4 != a1 )
      {
        std::wstring::_Tidy_deallocate(v4);
        *(_OWORD *)v4 = *(_OWORD *)a1;
        *(_OWORD *)(v4 + 16) = *(_OWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 16) = 0LL;
        *(_QWORD *)(a1 + 24) = 7LL;
        *(_WORD *)a1 = 0;
      }
      v7 = v4 - a1;
      std::_Pop_heap_hole_by_index<std::wstring *,std::wstring,std::less<void>>(a1, 0LL, (v4 - a1) >> 5, (__int64)v8);
      result = std::wstring::_Tidy_deallocate((__int64)v8);
      v4 -= 32LL;
    }
    while ( (__int64)(v7 & 0xFFFFFFFFFFFFFFE0uLL) >= 64 );
  }
  return result;
}
