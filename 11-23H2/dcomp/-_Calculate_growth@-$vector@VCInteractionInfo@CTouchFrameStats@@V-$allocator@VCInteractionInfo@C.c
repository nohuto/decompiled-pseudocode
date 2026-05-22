/*
 * XREFs of ?_Calculate_growth@?$vector@VCInteractionInfo@CTouchFrameStats@@V?$allocator@VCInteractionInfo@CTouchFrameStats@@@std@@@std@@AEBA_K_K@Z @ 0x180008FC4
 * Callers:
 *     ??$_Emplace_reallocate@AEAPEAVCBatchStats@CTouchFrameStats@@AEBUTOUCH_TELEMETRY_UPDATE_INFO@@@?$vector@VCInteractionInfo@CTouchFrameStats@@V?$allocator@VCInteractionInfo@CTouchFrameStats@@@std@@@std@@QEAAPEAVCInteractionInfo@CTouchFrameStats@@QEAV23@AEAPEAVCBatchStats@3@AEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x18000900C (--$_Emplace_reallocate@AEAPEAVCBatchStats@CTouchFrameStats@@AEBUTOUCH_TELEMETRY_UPDATE_INFO@@@-$.c)
 *     ??$_Emplace_reallocate@AEAPEAVCBatchStats@CTouchFrameStats@@AEAUTOUCH_TELEMETRY_UPDATE_INFO@@@?$vector@VCInteractionInfo@CTouchFrameStats@@V?$allocator@VCInteractionInfo@CTouchFrameStats@@@std@@@std@@QEAAPEAVCInteractionInfo@CTouchFrameStats@@QEAV23@AEAPEAVCBatchStats@3@AEAUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1801A4B48 (--$_Emplace_reallocate@AEAPEAVCBatchStats@CTouchFrameStats@@AEAUTOUCH_TELEMETRY_UPDATE_INFO@@@-$.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<CTouchFrameStats::CInteractionInfo>::_Calculate_growth(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 result; // rax
  unsigned __int64 v4; // r9

  v2 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(a1[2] - *a1) >> 5);
  result = 0x124924924924924LL;
  v4 = v2 >> 1;
  if ( v2 <= 0x124924924924924LL - (v2 >> 1) )
  {
    result = v4 + v2;
    if ( v4 + v2 < a2 )
      return a2;
  }
  return result;
}
