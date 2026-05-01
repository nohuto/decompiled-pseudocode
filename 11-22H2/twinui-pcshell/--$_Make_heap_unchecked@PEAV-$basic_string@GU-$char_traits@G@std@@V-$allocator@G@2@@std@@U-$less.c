/*
 * XREFs of ??$_Make_heap_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0U?$less@X@0@@Z @ 0x1803F5C44
 * Callers:
 *     ??$_Sort_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0_JU?$less@X@0@@Z @ 0x1803F6540 (--$_Sort_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less@X@2@.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$_Pop_heap_hole_by_index@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@_J1$$QEAV10@U?$less@X@0@@Z @ 0x1803F6120 (--$_Pop_heap_hole_by_index@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@.c)
 */

__int64 __fastcall std::_Make_heap_unchecked<std::wstring *,std::less<void>>(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdi
  __int64 v7; // r14
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-68h]
  _OWORD v12[2]; // [rsp+30h] [rbp-58h] BYREF

  v4 = (a2 - a1) >> 5;
  v6 = (a2 - a1) >> 6;
  if ( v6 > 0 )
  {
    v7 = 32 * v6 + a1 - 32;
    do
    {
      v8 = *(_OWORD *)v7;
      --v6;
      v9 = *(_OWORD *)(v7 + 16);
      *(_QWORD *)(v7 + 16) = 0LL;
      *(_QWORD *)(v7 + 24) = 7LL;
      *(_WORD *)v7 = 0;
      v12[0] = v8;
      LOBYTE(v11) = a3;
      v12[1] = v9;
      std::_Pop_heap_hole_by_index<std::wstring *,std::wstring,std::less<void>>(a1, v6, v4, v12, v11);
      result = std::wstring::_Tidy_deallocate((__int64)v12);
      v7 -= 32LL;
    }
    while ( v6 > 0 );
  }
  return result;
}
