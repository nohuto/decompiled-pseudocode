/*
 * XREFs of ??$emplace_back@V?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@std@@@?$vector@V?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@std@@V?$allocator@V?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@std@@@2@@std@@QEAA?A_T$$QEAV?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@1@@Z @ 0x180008CD4
 * Callers:
 *     ?GetBatchStats@CTouchFrameStats@@IEAAPEAVCBatchStats@1@K@Z @ 0x180008C34 (-GetBatchStats@CTouchFrameStats@@IEAAPEAVCBatchStats@1@K@Z.c)
 *     ?FlushInteractionUpdates@CInteractionFrameStats@@UEAAX_K0@Z @ 0x1801A56E0 (-FlushInteractionUpdates@CInteractionFrameStats@@UEAAX_K0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<std::unique_ptr<CTouchFrameStats::CBatchStats>>::emplace_back<std::unique_ptr<CTouchFrameStats::CBatchStats>>(
        __int64 a1,
        __int64 *a2)
{
  _QWORD *v3; // rcx
  __int64 result; // rax
  __int64 v5; // rax

  v3 = *(_QWORD **)(a1 + 8);
  if ( v3 == *(_QWORD **)(a1 + 16) )
    return std::vector<std::unique_ptr<CTouchFrameStats::CBatchStats>>::_Emplace_reallocate<std::unique_ptr<CTouchFrameStats::CBatchStats>>(
             a1,
             v3,
             a2);
  v5 = *a2;
  *a2 = 0LL;
  *v3 = v5;
  result = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 8;
  return result;
}
