/*
 * XREFs of ?_Change_array@?$vector@VBatchFrameId@CTouchFrameStats@@V?$allocator@VBatchFrameId@CTouchFrameStats@@@std@@@std@@AEAAXQEAVBatchFrameId@CTouchFrameStats@@_K1@Z @ 0x1801A961C
 * Callers:
 *     ??$_Emplace_reallocate@AEAKAEA_K@?$vector@VBatchFrameId@CTouchFrameStats@@V?$allocator@VBatchFrameId@CTouchFrameStats@@@std@@@std@@QEAAPEAVBatchFrameId@CTouchFrameStats@@QEAV23@AEAKAEA_K@Z @ 0x1801A67A4 (--$_Emplace_reallocate@AEAKAEA_K@-$vector@VBatchFrameId@CTouchFrameStats@@V-$allocator@VBatchFra.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<CTouchFrameStats::BatchFrameId>::_Change_array(
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
