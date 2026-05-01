/*
 * XREFs of ??$_Push_heap_by_index@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@_J1$$QEAV10@U?$less@X@0@@Z @ 0x1803F6254
 * Callers:
 *     ??$_Pop_heap_hole_by_index@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@_J1$$QEAV10@U?$less@X@0@@Z @ 0x1803F6120 (--$_Pop_heap_hole_by_index@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x1802D3736 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 */

char __fastcall std::_Push_heap_by_index<std::wstring *,std::wstring,std::less<void>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _UNKNOWN **v4; // rax
  __int64 v7; // rbx
  __int64 v9; // rbp
  __int64 v10; // rsi
  _OWORD *v11; // rbx
  _OWORD *v12; // rbx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v4 = &retaddr;
  v7 = a2;
  if ( a3 < a2 )
  {
    do
    {
      v9 = (v7 - 1) >> 1;
      v10 = a1 + 32 * v9;
      LOBYTE(v4) = std::wstring::compare((char *)v10, (char *)a4);
      if ( (int)v4 >= 0 )
        break;
      v11 = (_OWORD *)(a1 + 32 * v7);
      if ( v11 != (_OWORD *)v10 )
      {
        LOBYTE(v4) = std::wstring::_Tidy_deallocate((__int64)v11);
        *v11 = *(_OWORD *)v10;
        v11[1] = *(_OWORD *)(v10 + 16);
        *(_QWORD *)(v10 + 16) = 0LL;
        *(_QWORD *)(v10 + 24) = 7LL;
        *(_WORD *)v10 = 0;
      }
      v7 = v9;
    }
    while ( a3 < v9 );
  }
  v12 = (_OWORD *)(a1 + 32 * v7);
  if ( v12 != (_OWORD *)a4 )
  {
    LOBYTE(v4) = std::wstring::_Tidy_deallocate((__int64)v12);
    *v12 = *(_OWORD *)a4;
    v12[1] = *(_OWORD *)(a4 + 16);
    *(_QWORD *)(a4 + 16) = 0LL;
    *(_QWORD *)(a4 + 24) = 7LL;
    *(_WORD *)a4 = 0;
  }
  return (char)v4;
}
