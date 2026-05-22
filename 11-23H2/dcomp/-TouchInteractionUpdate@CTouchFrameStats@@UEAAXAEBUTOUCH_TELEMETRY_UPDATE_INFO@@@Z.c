/*
 * XREFs of ?TouchInteractionUpdate@CTouchFrameStats@@UEAAXAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x180008B80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBatchStats@CTouchFrameStats@@IEAAPEAVCBatchStats@1@K@Z @ 0x180008C34 (-GetBatchStats@CTouchFrameStats@@IEAAPEAVCBatchStats@1@K@Z.c)
 *     ??$emplace_back@AEAPEAVCBatchStats@CTouchFrameStats@@AEBUTOUCH_TELEMETRY_UPDATE_INFO@@@?$vector@VCInteractionInfo@CTouchFrameStats@@V?$allocator@VCInteractionInfo@CTouchFrameStats@@@std@@@std@@QEAA?A_TAEAPEAVCBatchStats@CTouchFrameStats@@AEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x180008D78 (--$emplace_back@AEAPEAVCBatchStats@CTouchFrameStats@@AEBUTOUCH_TELEMETRY_UPDATE_INFO@@@-$vector@.c)
 */

void __fastcall CTouchFrameStats::TouchInteractionUpdate(
        CTouchFrameStats *this,
        const struct TOUCH_TELEMETRY_UPDATE_INFO *a2)
{
  unsigned __int16 v4; // ax
  int v5; // eax
  struct CTouchFrameStats::CBatchStats *BatchStats; // [rsp+30h] [rbp+8h] BYREF

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this - 88));
  BatchStats = CTouchFrameStats::GetBatchStats((CTouchFrameStats *)((char *)this - 160), 0);
  if ( BatchStats )
  {
    if ( *((_QWORD *)this + 11) == *((_QWORD *)this + 10) )
    {
      v5 = *((_DWORD *)a2 + 46);
      if ( v5 )
      {
        *((_DWORD *)this + 38) = v5;
        *((_DWORD *)this + 40) = *((_DWORD *)a2 + 50);
      }
      else
      {
        *((_DWORD *)this + 38) = 0;
        *((_DWORD *)this + 40) = 0;
      }
    }
    std::vector<CTouchFrameStats::CInteractionInfo>::emplace_back<CTouchFrameStats::CBatchStats * &,TOUCH_TELEMETRY_UPDATE_INFO const &>(
      (char *)this + 80,
      &BatchStats,
      a2);
    v4 = *((_WORD *)this + 64);
    if ( v4 <= *((_WORD *)a2 + 94) )
      v4 = *((_WORD *)a2 + 94);
    *((_WORD *)this + 64) = v4;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this - 88));
}
