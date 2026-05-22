/*
 * XREFs of ??$_Emplace_reallocate@AEAPEAVCBatchStats@CTouchFrameStats@@AEAUTOUCH_TELEMETRY_UPDATE_INFO@@@?$vector@VCInteractionInfo@CTouchFrameStats@@V?$allocator@VCInteractionInfo@CTouchFrameStats@@@std@@@std@@QEAAPEAVCInteractionInfo@CTouchFrameStats@@QEAV23@AEAPEAVCBatchStats@3@AEAUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1801A4B48
 * Callers:
 *     ??$emplace_back@AEAPEAVCBatchStats@CTouchFrameStats@@AEAUTOUCH_TELEMETRY_UPDATE_INFO@@@?$vector@VCInteractionInfo@CTouchFrameStats@@V?$allocator@VCInteractionInfo@CTouchFrameStats@@@std@@@std@@QEAA?A_TAEAPEAVCBatchStats@CTouchFrameStats@@AEAUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1801A4F28 (--$emplace_back@AEAPEAVCBatchStats@CTouchFrameStats@@AEAUTOUCH_TELEMETRY_UPDATE_INFO@@@-$vector@.c)
 * Callees:
 *     ?_Calculate_growth@?$vector@VCInteractionInfo@CTouchFrameStats@@V?$allocator@VCInteractionInfo@CTouchFrameStats@@@std@@@std@@AEBA_K_K@Z @ 0x180008FC4 (-_Calculate_growth@-$vector@VCInteractionInfo@CTouchFrameStats@@V-$allocator@VCInteractionInfo@C.c)
 *     ??$_Uninitialized_move@PEAVCInteractionInfo@CTouchFrameStats@@V?$allocator@VCInteractionInfo@CTouchFrameStats@@@std@@@std@@YAPEAVCInteractionInfo@CTouchFrameStats@@QEAV12@0PEAV12@AEAV?$allocator@VCInteractionInfo@CTouchFrameStats@@@0@@Z @ 0x180009194 (--$_Uninitialized_move@PEAVCInteractionInfo@CTouchFrameStats@@V-$allocator@VCInteractionInfo@CTo.c)
 *     ?_Change_array@?$vector@VCInteractionInfo@CTouchFrameStats@@V?$allocator@VCInteractionInfo@CTouchFrameStats@@@std@@@std@@AEAAXQEAVCInteractionInfo@CTouchFrameStats@@_K1@Z @ 0x1800092B8 (-_Change_array@-$vector@VCInteractionInfo@CTouchFrameStats@@V-$allocator@VCInteractionInfo@CTouc.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800E5D98 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

_OWORD *__fastcall std::vector<CTouchFrameStats::CInteractionInfo>::_Emplace_reallocate<CTouchFrameStats::CBatchStats * &,TOUCH_TELEMETRY_UPDATE_INFO &>(
        __int64 *a1,
        _OWORD *a2,
        _QWORD *a3,
        _OWORD *a4)
{
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r13
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // r10
  _OWORD *v14; // rax
  __int64 v15; // rbx
  _OWORD *v16; // r15
  _OWORD *v17; // r14
  _OWORD *v18; // rdx
  _OWORD *v19; // r8
  _OWORD *v20; // rcx
  _OWORD *result; // rax
  unsigned __int64 v22; // [rsp+60h] [rbp+8h]
  void *v23; // [rsp+68h] [rbp+10h]

  v7 = (unsigned __int128)(((__int64)a2 - *a1) * (__int128)0x4924924924924925LL) >> 64;
  v8 = ((unsigned __int64)v7 >> 63) + (v7 >> 6);
  v9 = 0x6DB6DB6DB6DB6DB7LL * ((a1[1] - *a1) >> 5);
  if ( v9 == 0x124924924924924LL )
    std::_Xlength_error("vector too long");
  v10 = v9 + 1;
  v11 = std::vector<CTouchFrameStats::CInteractionInfo>::_Calculate_growth(a1, v9 + 1);
  v12 = v11;
  v22 = v11;
  if ( v11 > v13 )
    std::_Throw_bad_array_new_length();
  v14 = (_OWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(224 * v11);
  v15 = (__int64)v14;
  v23 = v14;
  try
  {
    v16 = &v14[14 * v8];
    *(_QWORD *)v16 = *a3;
    *(_OWORD *)((char *)v16 + 8) = *a4;
    *(_OWORD *)((char *)v16 + 24) = a4[1];
    *(_OWORD *)((char *)v16 + 40) = a4[2];
    *(_OWORD *)((char *)v16 + 56) = a4[3];
    *(_OWORD *)((char *)v16 + 72) = a4[4];
    *(_OWORD *)((char *)v16 + 88) = a4[5];
    *(_OWORD *)((char *)v16 + 104) = a4[6];
    *(_OWORD *)((char *)v16 + 120) = a4[7];
    v17 = a4 + 8;
    *(_OWORD *)((char *)v16 + 136) = *v17;
    *(_OWORD *)((char *)v16 + 152) = v17[1];
    *(_OWORD *)((char *)v16 + 168) = v17[2];
    *(_OWORD *)((char *)v16 + 184) = v17[3];
    *(_OWORD *)((char *)v16 + 200) = v17[4];
    *((_QWORD *)v16 + 27) = *((_QWORD *)v17 + 10);
    v18 = (_OWORD *)a1[1];
    v19 = v14;
    v20 = (_OWORD *)*a1;
    if ( a2 != v18 )
    {
      std::_Uninitialized_move<CTouchFrameStats::CInteractionInfo *>(v20, a2, v14);
      v19 = v16 + 14;
      v18 = (_OWORD *)a1[1];
      v20 = a2;
    }
    std::_Uninitialized_move<CTouchFrameStats::CInteractionInfo *>(v20, v18, v19);
    std::vector<CTouchFrameStats::CInteractionInfo>::_Change_array(a1, v15, v10, v12);
    result = v16;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v23, 224 * v22);
    throw;
  }
  return result;
}
