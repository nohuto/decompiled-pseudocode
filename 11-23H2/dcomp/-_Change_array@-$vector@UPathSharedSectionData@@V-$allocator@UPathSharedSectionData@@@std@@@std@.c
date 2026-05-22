/*
 * XREFs of ?_Change_array@?$vector@UPathSharedSectionData@@V?$allocator@UPathSharedSectionData@@@std@@@std@@AEAAXQEAUPathSharedSectionData@@_K1@Z @ 0x180178A20
 * Callers:
 *     ??$_Emplace_reallocate@UPathSharedSectionData@@@?$vector@UPathSharedSectionData@@V?$allocator@UPathSharedSectionData@@@std@@@std@@QEAAPEAUPathSharedSectionData@@QEAU2@$$QEAU2@@Z @ 0x180177FD4 (--$_Emplace_reallocate@UPathSharedSectionData@@@-$vector@UPathSharedSectionData@@V-$allocator@UP.c)
 *     ?_Reallocate_exactly@?$vector@UPathSharedSectionData@@V?$allocator@UPathSharedSectionData@@@std@@@std@@AEAAX_K@Z @ 0x180178B1C (-_Reallocate_exactly@-$vector@UPathSharedSectionData@@V-$allocator@UPathSharedSectionData@@@std@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<PathSharedSectionData>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 4 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 2));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 12 * a3;
  result = 3 * a4;
  *(_QWORD *)(a1 + 16) = a2 + 12 * a4;
  return result;
}
