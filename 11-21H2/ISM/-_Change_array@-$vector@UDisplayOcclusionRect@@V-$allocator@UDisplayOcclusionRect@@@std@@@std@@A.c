/*
 * XREFs of ?_Change_array@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXQEAUDisplayOcclusionRect@@_K1@Z @ 0x18012FFA8
 * Callers:
 *     ??$_Emplace_reallocate@AEBUDisplayOcclusionRect@@@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@QEAAPEAUDisplayOcclusionRect@@QEAU2@AEBU2@@Z @ 0x18012EC24 (--$_Emplace_reallocate@AEBUDisplayOcclusionRect@@@-$vector@UDisplayOcclusionRect@@V-$allocator@U.c)
 *     ??$_Emplace_reallocate@AEAUDisplayOcclusionRect@@@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@QEAAPEAUDisplayOcclusionRect@@QEAU2@AEAU2@@Z @ 0x18019E4E4 (--$_Emplace_reallocate@AEAUDisplayOcclusionRect@@@-$vector@UDisplayOcclusionRect@@V-$allocator@U.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<DisplayOcclusionRect>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 16 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 4));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 176 * a3;
  result = a2 + 176 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
