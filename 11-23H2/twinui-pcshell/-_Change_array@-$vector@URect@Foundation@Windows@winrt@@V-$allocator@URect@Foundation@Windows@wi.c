/*
 * XREFs of ?_Change_array@?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@AEAAXQEAURect@Foundation@Windows@winrt@@_K1@Z @ 0x18052E57C
 * Callers:
 *     ??$_Emplace_reallocate@AEBURect@Foundation@Windows@winrt@@@?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@QEAAPEAURect@Foundation@Windows@winrt@@QEAU2345@AEBU2345@@Z @ 0x180520634 (--$_Emplace_reallocate@AEBURect@Foundation@Windows@winrt@@@-$vector@URect@Foundation@Windows@win.c)
 *     ??$_Emplace_reallocate@URect@Foundation@Windows@winrt@@@?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@QEAAPEAURect@Foundation@Windows@winrt@@QEAU2345@$$QEAU2345@@Z @ 0x18052085C (--$_Emplace_reallocate@URect@Foundation@Windows@winrt@@@-$vector@URect@Foundation@Windows@winrt@.c)
 *     ?_Reallocate_exactly@?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@AEAAX_K@Z @ 0x18052E838 (-_Reallocate_exactly@-$vector@URect@Foundation@Windows@winrt@@V-$allocator@URect@Foundation@Wind.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<winrt::Windows::Foundation::Rect>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF0uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
}
