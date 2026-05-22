/*
 * XREFs of ??$emplace_back@AEAPEAVCBatchStats@CTouchFrameStats@@AEAUTOUCH_TELEMETRY_UPDATE_INFO@@@?$vector@VCInteractionInfo@CTouchFrameStats@@V?$allocator@VCInteractionInfo@CTouchFrameStats@@@std@@@std@@QEAA?A_TAEAPEAVCBatchStats@CTouchFrameStats@@AEAUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1801A4F28
 * Callers:
 *     ?FlushInteractionUpdates@CInteractionFrameStats@@UEAAX_K0@Z @ 0x1801A56E0 (-FlushInteractionUpdates@CInteractionFrameStats@@UEAAX_K0@Z.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall std::vector<CTouchFrameStats::CInteractionInfo>::emplace_back<CTouchFrameStats::CBatchStats * &,TOUCH_TELEMETRY_UPDATE_INFO &>(
        __int64 *a1,
        _QWORD *a2,
        _OWORD *a3)
{
  _OWORD *v4; // rdx
  _OWORD *v5; // rdx
  __int128 v6; // xmm0
  _OWORD *v7; // r8
  _OWORD *result; // rax

  v4 = (_OWORD *)a1[1];
  if ( v4 == (_OWORD *)a1[2] )
    return std::vector<CTouchFrameStats::CInteractionInfo>::_Emplace_reallocate<CTouchFrameStats::CBatchStats * &,TOUCH_TELEMETRY_UPDATE_INFO &>(
             a1,
             v4,
             a2,
             a3);
  *(_QWORD *)v4 = *a2;
  v5 = (_OWORD *)((char *)v4 + 8);
  *v5 = *a3;
  v5[1] = a3[1];
  v5[2] = a3[2];
  v5[3] = a3[3];
  v5[4] = a3[4];
  v5[5] = a3[5];
  v5[6] = a3[6];
  v5 += 8;
  v6 = a3[7];
  v7 = a3 + 8;
  *(v5 - 1) = v6;
  *v5 = *v7;
  v5[1] = v7[1];
  v5[2] = v7[2];
  v5[3] = v7[3];
  v5[4] = v7[4];
  *((_QWORD *)v5 + 10) = *((_QWORD *)v7 + 10);
  result = (_OWORD *)a1[1];
  a1[1] = (__int64)(result + 14);
  return result;
}
