/*
 * XREFs of ?_Change_array@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXQEAUCRect@Geometry@@_K1@Z @ 0x180674390
 * Callers:
 *     ??$_Emplace_reallocate@AEBUCRect@Geometry@@@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAAPEAUCRect@Geometry@@QEAU23@AEBU23@@Z @ 0x1806702D4 (--$_Emplace_reallocate@AEBUCRect@Geometry@@@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geomet.c)
 *     ??$_Emplace_reallocate@UCRect@Geometry@@@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAAPEAUCRect@Geometry@@QEAU23@$$QEAU23@@Z @ 0x180670400 (--$_Emplace_reallocate@UCRect@Geometry@@@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@.c)
 *     ?_Reallocate_exactly@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAX_K@Z @ 0x180674400 (-_Reallocate_exactly@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAX_K.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<Geometry::CRect>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF0uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
}
