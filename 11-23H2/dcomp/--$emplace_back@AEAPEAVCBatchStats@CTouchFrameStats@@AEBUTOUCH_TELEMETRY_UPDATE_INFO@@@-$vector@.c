/*
 * XREFs of ??$emplace_back@AEAPEAVCBatchStats@CTouchFrameStats@@AEBUTOUCH_TELEMETRY_UPDATE_INFO@@@?$vector@VCInteractionInfo@CTouchFrameStats@@V?$allocator@VCInteractionInfo@CTouchFrameStats@@@std@@@std@@QEAA?A_TAEAPEAVCBatchStats@CTouchFrameStats@@AEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x180008D78
 * Callers:
 *     ?TouchInteractionUpdate@CTouchFrameStats@@UEAAXAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x180008B80 (-TouchInteractionUpdate@CTouchFrameStats@@UEAAXAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<CTouchFrameStats::CInteractionInfo>::emplace_back<CTouchFrameStats::CBatchStats * &,TOUCH_TELEMETRY_UPDATE_INFO const &>(
        __int64 a1,
        _QWORD *a2,
        _OWORD *a3)
{
  _QWORD *v4; // rdx
  __int64 result; // rax
  _OWORD *v6; // rdx
  __int128 v7; // xmm0
  _OWORD *v8; // r8

  v4 = *(_QWORD **)(a1 + 8);
  if ( v4 == *(_QWORD **)(a1 + 16) )
    return std::vector<CTouchFrameStats::CInteractionInfo>::_Emplace_reallocate<CTouchFrameStats::CBatchStats * &,TOUCH_TELEMETRY_UPDATE_INFO const &>(
             a1,
             v4,
             a2,
             a3);
  *v4 = *a2;
  v6 = v4 + 1;
  *v6 = *a3;
  v6[1] = a3[1];
  v6[2] = a3[2];
  v6[3] = a3[3];
  v6[4] = a3[4];
  v6[5] = a3[5];
  v6[6] = a3[6];
  v6 += 8;
  v7 = a3[7];
  v8 = a3 + 8;
  *(v6 - 1) = v7;
  *v6 = *v8;
  v6[1] = v8[1];
  v6[2] = v8[2];
  v6[3] = v8[3];
  v6[4] = v8[4];
  *((_QWORD *)v6 + 10) = *((_QWORD *)v8 + 10);
  result = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 224;
  return result;
}
