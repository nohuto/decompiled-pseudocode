/*
 * XREFs of ?_Change_array@?$vector@UCompositionFrameDisplayInstance@@V?$allocator@UCompositionFrameDisplayInstance@@@std@@@std@@AEAAXQEAUCompositionFrameDisplayInstance@@_K1@Z @ 0x1801B1000
 * Callers:
 *     ??$_Emplace_reallocate@AEBUCompositionFrameDisplayInstance@@@?$vector@UCompositionFrameDisplayInstance@@V?$allocator@UCompositionFrameDisplayInstance@@@std@@@std@@QEAAPEAUCompositionFrameDisplayInstance@@QEAU2@AEBU2@@Z @ 0x1801B0A78 (--$_Emplace_reallocate@AEBUCompositionFrameDisplayInstance@@@-$vector@UCompositionFrameDisplayIn.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CompositionFrameDisplayInstance>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 4 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 2));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 60 * a3;
  result = a2 + 60 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
