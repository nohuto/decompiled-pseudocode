/*
 * XREFs of ??$_Emplace_reallocate@AEAPEAVCBatchStats@CTouchFrameStats@@AEBUTOUCH_TELEMETRY_UPDATE_INFO@@@?$vector@VCInteractionInfo@CTouchFrameStats@@V?$allocator@VCInteractionInfo@CTouchFrameStats@@@std@@@std@@QEAAPEAVCInteractionInfo@CTouchFrameStats@@QEAV23@AEAPEAVCBatchStats@3@AEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x18000900C
 * Callers:
 *     ??$emplace_back@AEAPEAVCBatchStats@CTouchFrameStats@@AEBUTOUCH_TELEMETRY_UPDATE_INFO@@@?$vector@VCInteractionInfo@CTouchFrameStats@@V?$allocator@VCInteractionInfo@CTouchFrameStats@@@std@@@std@@QEAA?A_TAEAPEAVCBatchStats@CTouchFrameStats@@AEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x180008D78 (--$emplace_back@AEAPEAVCBatchStats@CTouchFrameStats@@AEBUTOUCH_TELEMETRY_UPDATE_INFO@@@-$vector@.c)
 * Callees:
 *     ?_Calculate_growth@?$vector@VCInteractionInfo@CTouchFrameStats@@V?$allocator@VCInteractionInfo@CTouchFrameStats@@@std@@@std@@AEBA_K_K@Z @ 0x180008FC4 (-_Calculate_growth@-$vector@VCInteractionInfo@CTouchFrameStats@@V-$allocator@VCInteractionInfo@C.c)
 *     ??$_Uninitialized_move@PEAVCInteractionInfo@CTouchFrameStats@@V?$allocator@VCInteractionInfo@CTouchFrameStats@@@std@@@std@@YAPEAVCInteractionInfo@CTouchFrameStats@@QEAV12@0PEAV12@AEAV?$allocator@VCInteractionInfo@CTouchFrameStats@@@0@@Z @ 0x180009194 (--$_Uninitialized_move@PEAVCInteractionInfo@CTouchFrameStats@@V-$allocator@VCInteractionInfo@CTo.c)
 *     ?_Change_array@?$vector@VCInteractionInfo@CTouchFrameStats@@V?$allocator@VCInteractionInfo@CTouchFrameStats@@@std@@@std@@AEAAXQEAVCInteractionInfo@CTouchFrameStats@@_K1@Z @ 0x1800092B8 (-_Change_array@-$vector@VCInteractionInfo@CTouchFrameStats@@V-$allocator@VCInteractionInfo@CTouc.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800E5D98 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::vector<CTouchFrameStats::CInteractionInfo>::_Emplace_reallocate<CTouchFrameStats::CBatchStats * &,TOUCH_TELEMETRY_UPDATE_INFO const &>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3,
        _OWORD *a4)
{
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r13
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r10
  __int64 v14; // rbx
  __int64 v15; // r15
  _OWORD *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx

  v7 = (unsigned __int128)((a2 - *a1) * (__int128)0x4924924924924925LL) >> 64;
  v8 = ((unsigned __int64)v7 >> 63) + (v7 >> 6);
  v9 = 0x6DB6DB6DB6DB6DB7LL * ((a1[1] - *a1) >> 5);
  if ( v9 == 0x124924924924924LL )
    std::_Xlength_error("vector too long");
  v10 = v9 + 1;
  v11 = std::vector<CTouchFrameStats::CInteractionInfo>::_Calculate_growth(a1, v9 + 1);
  v12 = v11;
  if ( v11 > v13 )
    std::_Throw_bad_array_new_length();
  v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(224 * v11);
  v15 = v14 + 224 * v8;
  *(_QWORD *)v15 = *a3;
  *(_OWORD *)(v15 + 8) = *a4;
  *(_OWORD *)(v15 + 24) = a4[1];
  *(_OWORD *)(v15 + 40) = a4[2];
  *(_OWORD *)(v15 + 56) = a4[3];
  *(_OWORD *)(v15 + 72) = a4[4];
  *(_OWORD *)(v15 + 88) = a4[5];
  *(_OWORD *)(v15 + 104) = a4[6];
  *(_OWORD *)(v15 + 120) = a4[7];
  v16 = a4 + 8;
  *(_OWORD *)(v15 + 136) = *v16;
  *(_OWORD *)(v15 + 152) = v16[1];
  *(_OWORD *)(v15 + 168) = v16[2];
  *(_OWORD *)(v15 + 184) = v16[3];
  *(_OWORD *)(v15 + 200) = v16[4];
  *(_QWORD *)(v15 + 216) = *((_QWORD *)v16 + 10);
  v17 = a1[1];
  v18 = v14;
  v19 = *a1;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<CTouchFrameStats::CInteractionInfo *>(v19, a2, v14);
    v18 = v15 + 224;
    v17 = a1[1];
    v19 = a2;
  }
  std::_Uninitialized_move<CTouchFrameStats::CInteractionInfo *>(v19, v17, v18);
  std::vector<CTouchFrameStats::CInteractionInfo>::_Change_array(a1, v14, v10, v12);
  return v15;
}
