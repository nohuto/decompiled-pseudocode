/*
 * XREFs of ??$_Uninitialized_move@PEAVCInteractionInfo@CTouchFrameStats@@V?$allocator@VCInteractionInfo@CTouchFrameStats@@@std@@@std@@YAPEAVCInteractionInfo@CTouchFrameStats@@QEAV12@0PEAV12@AEAV?$allocator@VCInteractionInfo@CTouchFrameStats@@@0@@Z @ 0x180009194
 * Callers:
 *     ??$_Emplace_reallocate@AEAPEAVCBatchStats@CTouchFrameStats@@AEBUTOUCH_TELEMETRY_UPDATE_INFO@@@?$vector@VCInteractionInfo@CTouchFrameStats@@V?$allocator@VCInteractionInfo@CTouchFrameStats@@@std@@@std@@QEAAPEAVCInteractionInfo@CTouchFrameStats@@QEAV23@AEAPEAVCBatchStats@3@AEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x18000900C (--$_Emplace_reallocate@AEAPEAVCBatchStats@CTouchFrameStats@@AEBUTOUCH_TELEMETRY_UPDATE_INFO@@@-$.c)
 *     ??$_Emplace_reallocate@AEAPEAVCBatchStats@CTouchFrameStats@@AEAUTOUCH_TELEMETRY_UPDATE_INFO@@@?$vector@VCInteractionInfo@CTouchFrameStats@@V?$allocator@VCInteractionInfo@CTouchFrameStats@@@std@@@std@@QEAAPEAVCInteractionInfo@CTouchFrameStats@@QEAV23@AEAPEAVCBatchStats@3@AEAUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1801A4B48 (--$_Emplace_reallocate@AEAPEAVCBatchStats@CTouchFrameStats@@AEAUTOUCH_TELEMETRY_UPDATE_INFO@@@-$.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall std::_Uninitialized_move<CTouchFrameStats::CInteractionInfo *>(_OWORD *a1, _OWORD *a2, _OWORD *a3)
{
  _OWORD *result; // rax
  _OWORD *v4; // r9
  _OWORD *v5; // r8
  __int128 v6; // xmm1

  for ( result = a3; a1 != a2; v4[5] = v5[5] )
  {
    v4 = result + 8;
    v5 = a1 + 8;
    *result = *a1;
    result[1] = a1[1];
    result[2] = a1[2];
    result[3] = a1[3];
    result[4] = a1[4];
    result[5] = a1[5];
    result[6] = a1[6];
    result += 14;
    v6 = a1[7];
    a1 += 14;
    *(v4 - 1) = v6;
    *v4 = *v5;
    v4[1] = v5[1];
    v4[2] = v5[2];
    v4[3] = v5[3];
    v4[4] = v5[4];
  }
  return result;
}
