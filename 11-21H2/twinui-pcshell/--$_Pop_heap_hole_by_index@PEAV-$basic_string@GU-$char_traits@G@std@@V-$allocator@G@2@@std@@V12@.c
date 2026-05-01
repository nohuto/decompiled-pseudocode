/*
 * XREFs of ??$_Pop_heap_hole_by_index@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@_J1$$QEAV10@U?$less@X@0@@Z @ 0x180328E10
 * Callers:
 *     ??$_Make_heap_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0U?$less@X@0@@Z @ 0x180328950 (--$_Make_heap_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less.c)
 *     ??$_Sort_heap_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0U?$less@X@0@@Z @ 0x1803292E4 (--$_Sort_heap_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x180126B5C (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 */

__int64 __fastcall std::_Pop_heap_hole_by_index<std::wstring *,std::wstring,std::less<void>>(
        __int64 a1,
        signed __int64 a2,
        __int64 a3,
        __int64 a4)
{
  signed __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // rbp
  signed __int64 v8; // rdi
  signed __int64 v10; // r14
  signed __int64 v11; // rbx
  _OWORD *v12; // rdi
  __int64 v13; // r14
  __int64 v14; // rbx
  _OWORD *v15; // rdi

  v4 = a3 - 1;
  v5 = a4;
  v6 = (a3 - 1) >> 1;
  v8 = a2;
  v10 = a2;
  v11 = a2;
  if ( a2 < v6 )
  {
    do
    {
      v12 = (_OWORD *)(a1 + 32 * v8);
      v11 = ((unsigned __int64)(unsigned int)~std::wstring::compare(
                                                (_QWORD *)(a1 + 32 * (2 * v11 + 2)),
                                                (_QWORD *)(a1 + 32 * (2 * v11 + 2) - 32)) >> 31)
          + 1
          + 2 * v11;
      v13 = a1 + 32 * v11;
      if ( v12 != (_OWORD *)v13 )
      {
        std::wstring::_Tidy_deallocate((__int64)v12);
        *v12 = *(_OWORD *)v13;
        v12[1] = *(_OWORD *)(v13 + 16);
        *(_QWORD *)(v13 + 16) = 0LL;
        *(_QWORD *)(v13 + 24) = 7LL;
        *(_WORD *)v13 = 0;
      }
      v8 = v11;
    }
    while ( v11 < v6 );
    v5 = a4;
    v10 = a2;
  }
  if ( v11 == v6 && (a3 & 1) == 0 )
  {
    v14 = 32 * a3 + a1 - 32;
    v15 = (_OWORD *)(a1 + 32 * v8);
    if ( v15 != (_OWORD *)v14 )
    {
      std::wstring::_Tidy_deallocate((__int64)v15);
      *v15 = *(_OWORD *)v14;
      v15[1] = *(_OWORD *)(v14 + 16);
      *(_QWORD *)(v14 + 16) = 0LL;
      *(_QWORD *)(v14 + 24) = 7LL;
      *(_WORD *)v14 = 0;
    }
    v8 = v4;
  }
  return std::_Push_heap_by_index<std::wstring *,std::wstring,std::less<void>>(a1, v8, v10, v5);
}
