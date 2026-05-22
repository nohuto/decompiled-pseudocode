/*
 * XREFs of ?_Change_array@?$vector@VCInteractionInfo@CTouchFrameStats@@V?$allocator@VCInteractionInfo@CTouchFrameStats@@@std@@@std@@AEAAXQEAVCInteractionInfo@CTouchFrameStats@@_K1@Z @ 0x1800092B8
 * Callers:
 *     ??$_Emplace_reallocate@AEAPEAVCBatchStats@CTouchFrameStats@@AEBUTOUCH_TELEMETRY_UPDATE_INFO@@@?$vector@VCInteractionInfo@CTouchFrameStats@@V?$allocator@VCInteractionInfo@CTouchFrameStats@@@std@@@std@@QEAAPEAVCInteractionInfo@CTouchFrameStats@@QEAV23@AEAPEAVCBatchStats@3@AEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x18000900C (--$_Emplace_reallocate@AEAPEAVCBatchStats@CTouchFrameStats@@AEBUTOUCH_TELEMETRY_UPDATE_INFO@@@-$.c)
 *     ??$_Emplace_reallocate@AEAPEAVCBatchStats@CTouchFrameStats@@AEAUTOUCH_TELEMETRY_UPDATE_INFO@@@?$vector@VCInteractionInfo@CTouchFrameStats@@V?$allocator@VCInteractionInfo@CTouchFrameStats@@@std@@@std@@QEAAPEAVCInteractionInfo@CTouchFrameStats@@QEAV23@AEAPEAVCBatchStats@3@AEAUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1801A4B48 (--$_Emplace_reallocate@AEAPEAVCBatchStats@CTouchFrameStats@@AEAUTOUCH_TELEMETRY_UPDATE_INFO@@@-$.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CTouchFrameStats::CInteractionInfo>::_Change_array(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 32 * ((a1[2] - v6) >> 5));
  *a1 = a2;
  a1[1] = a2 + 224 * a3;
  result = a2 + 224 * a4;
  a1[2] = result;
  return result;
}
