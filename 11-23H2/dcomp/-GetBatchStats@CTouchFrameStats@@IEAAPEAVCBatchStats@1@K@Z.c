/*
 * XREFs of ?GetBatchStats@CTouchFrameStats@@IEAAPEAVCBatchStats@1@K@Z @ 0x180008C34
 * Callers:
 *     ?TouchInteractionUpdate@CTouchFrameStats@@UEAAXAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x180008B80 (-TouchInteractionUpdate@CTouchFrameStats@@UEAAXAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z.c)
 *     ?EndAnimation@CTouchFrameStats@@UEAAXXZ @ 0x1801A8530 (-EndAnimation@CTouchFrameStats@@UEAAXXZ.c)
 *     ?StartAnimation@CTouchFrameStats@@UEAAXPEBG@Z @ 0x1801A9440 (-StartAnimation@CTouchFrameStats@@UEAAXPEBG@Z.c)
 * Callees:
 *     ??$emplace_back@V?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@std@@@?$vector@V?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@std@@V?$allocator@V?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@std@@@2@@std@@QEAA?A_T$$QEAV?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@1@@Z @ 0x180008CD4 (--$emplace_back@V-$unique_ptr@VCBatchStats@CTouchFrameStats@@U-$default_delete@VCBatchStats@CTou.c)
 *     ??$make_unique@VCBatchStats@CTouchFrameStats@@AEAK$0A@@std@@YA?AV?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@0@AEAK@Z @ 0x180008D10 (--$make_unique@VCBatchStats@CTouchFrameStats@@AEAK$0A@@std@@YA-AV-$unique_ptr@VCBatchStats@CTouc.c)
 *     ?GetCurrentBatchId@CTouchFrameStats@@IEAAKXZ @ 0x180008E38 (-GetCurrentBatchId@CTouchFrameStats@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
struct CTouchFrameStats::CBatchStats *__fastcall CTouchFrameStats::GetBatchStats(
        CTouchFrameStats *this,
        unsigned int CurrentBatchId)
{
  void *v3; // rdi
  void *v5; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = CurrentBatchId;
  v3 = 0LL;
  if ( !CurrentBatchId )
  {
    CurrentBatchId = CTouchFrameStats::GetCurrentBatchId(this);
    v6 = CurrentBatchId;
  }
  if ( *((_BYTE *)this + 12) )
  {
    if ( (__int64)(*((_QWORD *)this + 28) - *((_QWORD *)this + 27)) >> 3
      && **(_DWORD **)(*((_QWORD *)this + 28) - 8LL) == CurrentBatchId )
    {
      return *(struct CTouchFrameStats::CBatchStats **)(*((_QWORD *)this + 28) - 8LL);
    }
    else
    {
      std::make_unique<CTouchFrameStats::CBatchStats,unsigned long &,0>(&v5, &v6);
      v3 = v5;
      std::vector<std::unique_ptr<CTouchFrameStats::CBatchStats>>::emplace_back<std::unique_ptr<CTouchFrameStats::CBatchStats>>(
        (char *)this + 216,
        &v5);
      if ( v5 )
        operator delete(v5, 0x70uLL);
    }
  }
  return (struct CTouchFrameStats::CBatchStats *)v3;
}
