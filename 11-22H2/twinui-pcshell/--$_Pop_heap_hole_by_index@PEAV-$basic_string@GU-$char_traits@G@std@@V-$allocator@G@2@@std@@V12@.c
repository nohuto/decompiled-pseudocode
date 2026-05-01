/*
 * XREFs of ??$_Pop_heap_hole_by_index@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@_J1$$QEAV10@U?$less@X@0@@Z @ 0x1803F6120
 * Callers:
 *     ??$_Make_heap_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0U?$less@X@0@@Z @ 0x1803F5C44 (--$_Make_heap_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less.c)
 *     ??$_Sort_heap_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0U?$less@X@0@@Z @ 0x1803F645C (--$_Sort_heap_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x1802D3736 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 */

__int64 __fastcall std::_Pop_heap_hole_by_index<std::wstring *,std::wstring,std::less<void>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // rbp
  __int64 v8; // rdi
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rbx
  int v13; // eax
  _OWORD *v14; // rdi
  __int64 v15; // r14
  __int64 v16; // rbx
  _OWORD *v17; // rdi

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
      v12 = 2 * v11;
      LOBYTE(v13) = std::wstring::compare((char *)(a1 + 32 * (v12 + 2)), (char *)(a1 + 32 * (v12 + 2) - 32));
      v14 = (_OWORD *)(a1 + 32 * v8);
      v11 = ((unsigned __int64)(unsigned int)~v13 >> 31) + 1 + v12;
      v15 = a1 + 32 * v11;
      if ( v14 != (_OWORD *)v15 )
      {
        std::wstring::_Tidy_deallocate((__int64)v14);
        *v14 = *(_OWORD *)v15;
        v14[1] = *(_OWORD *)(v15 + 16);
        *(_QWORD *)(v15 + 16) = 0LL;
        *(_QWORD *)(v15 + 24) = 7LL;
        *(_WORD *)v15 = 0;
      }
      v8 = v11;
    }
    while ( v11 < v6 );
    v5 = a4;
    v10 = a2;
  }
  if ( v11 == v6 && (a3 & 1) == 0 )
  {
    v16 = 32 * a3 + a1 - 32;
    v17 = (_OWORD *)(a1 + 32 * v8);
    if ( v17 != (_OWORD *)v16 )
    {
      std::wstring::_Tidy_deallocate((__int64)v17);
      *v17 = *(_OWORD *)v16;
      v17[1] = *(_OWORD *)(v16 + 16);
      *(_QWORD *)(v16 + 16) = 0LL;
      *(_QWORD *)(v16 + 24) = 7LL;
      *(_WORD *)v16 = 0;
    }
    v8 = v4;
  }
  return std::_Push_heap_by_index<std::wstring *,std::wstring,std::less<void>>(a1, v8, v10, v5);
}
