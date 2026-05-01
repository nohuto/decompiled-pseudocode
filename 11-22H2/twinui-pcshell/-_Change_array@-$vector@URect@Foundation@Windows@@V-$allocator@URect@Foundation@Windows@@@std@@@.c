/*
 * XREFs of ?_Change_array@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@AEAAXQEAURect@Foundation@Windows@@_K1@Z @ 0x18051C388
 * Callers:
 *     ??$_Emplace_reallocate@AEAURect@Foundation@Windows@@@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@QEAAPEAURect@Foundation@Windows@@QEAU234@AEAU234@@Z @ 0x18050A75C (--$_Emplace_reallocate@AEAURect@Foundation@Windows@@@-$vector@URect@Foundation@Windows@@V-$alloc.c)
 *     ?_Reallocate_exactly@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@AEAAX_K@Z @ 0x18051C840 (-_Reallocate_exactly@-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@Windows@@@.c)
 *     ??$_Emplace_reallocate@URect@Foundation@Windows@@@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@QEAAPEAURect@Foundation@Windows@@QEAU234@$$QEAU234@@Z @ 0x180520748 (--$_Emplace_reallocate@URect@Foundation@Windows@@@-$vector@URect@Foundation@Windows@@V-$allocato.c)
 *     ??$_Emplace_reallocate@AEBURect@Foundation@Windows@@@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@QEAAPEAURect@Foundation@Windows@@QEAU234@AEBU234@@Z @ 0x180678A80 (--$_Emplace_reallocate@AEBURect@Foundation@Windows@@@-$vector@URect@Foundation@Windows@@V-$alloc.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<Windows::Foundation::Rect>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF0uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
}
