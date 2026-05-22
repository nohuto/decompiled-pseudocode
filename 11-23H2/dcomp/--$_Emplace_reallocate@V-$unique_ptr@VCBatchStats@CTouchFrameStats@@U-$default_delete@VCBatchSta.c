/*
 * XREFs of ??$_Emplace_reallocate@V?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@std@@@?$vector@V?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@std@@V?$allocator@V?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x180008E8C
 * Callers:
 *     ??$emplace_back@V?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@std@@@?$vector@V?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@std@@V?$allocator@V?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@std@@@2@@std@@QEAA?A_T$$QEAV?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@1@@Z @ 0x180008CD4 (--$emplace_back@V-$unique_ptr@VCBatchStats@CTouchFrameStats@@U-$default_delete@VCBatchStats@CTou.c)
 * Callees:
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@std@@V?$allocator@V?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@std@@@0@@Z @ 0x180008F84 (--$_Uninitialized_move@PEAV-$unique_ptr@VCBatchStats@CTouchFrameStats@@U-$default_delete@VCBatch.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@std@@V?$allocator@V?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@2@_K1@Z @ 0x180009244 (-_Change_array@-$vector@V-$unique_ptr@VCBatchStats@CTouchFrameStats@@U-$default_delete@VCBatchSt.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180045364 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::vector<std::unique_ptr<CTouchFrameStats::CBatchStats>>::_Emplace_reallocate<std::unique_ptr<CTouchFrameStats::CBatchStats>>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  SIZE_T size_of; // rax
  __int64 v12; // rdi
  _QWORD *v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // r8
  __int64 v17; // rcx

  v5 = (a2 - *a1) >> 3;
  v6 = (a1[1] - *a1) >> 3;
  v7 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v7);
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = (_QWORD *)(v12 + 8 * v5);
  v14 = *a3;
  *a3 = 0LL;
  *v13 = v14;
  v15 = a1[1];
  v16 = (_QWORD *)v12;
  v17 = *a1;
  if ( a2 != v15 )
  {
    std::_Uninitialized_move<std::unique_ptr<CTouchFrameStats::CBatchStats> *,std::allocator<std::unique_ptr<CTouchFrameStats::CBatchStats>>>(
      v17,
      a2,
      v12);
    v16 = v13 + 1;
    v15 = a1[1];
    v17 = a2;
  }
  std::_Uninitialized_move<std::unique_ptr<CTouchFrameStats::CBatchStats> *,std::allocator<std::unique_ptr<CTouchFrameStats::CBatchStats>>>(
    v17,
    v15,
    v16);
  std::vector<std::unique_ptr<CTouchFrameStats::CBatchStats>>::_Change_array(a1, v12, v8, v7, v12);
  return v13;
}
