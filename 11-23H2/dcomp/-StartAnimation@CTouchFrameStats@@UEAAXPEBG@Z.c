/*
 * XREFs of ?StartAnimation@CTouchFrameStats@@UEAAXPEBG@Z @ 0x1801A9440
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBatchStats@CTouchFrameStats@@IEAAPEAVCBatchStats@1@K@Z @ 0x180008C34 (-GetBatchStats@CTouchFrameStats@@IEAAPEAVCBatchStats@1@K@Z.c)
 *     ??$emplace_back@AEAPEAVCBatchStats@CTouchFrameStats@@AEAPEBG@?$vector@VCAnimationInfo@CTouchFrameStats@@V?$allocator@VCAnimationInfo@CTouchFrameStats@@@std@@@std@@QEAA?A_TAEAPEAVCBatchStats@CTouchFrameStats@@AEAPEBG@Z @ 0x1801A6B6C (--$emplace_back@AEAPEAVCBatchStats@CTouchFrameStats@@AEAPEBG@-$vector@VCAnimationInfo@CTouchFram.c)
 */

void __fastcall CTouchFrameStats::StartAnimation(CTouchFrameStats *this, size_t *a2)
{
  struct CTouchFrameStats::CBatchStats *BatchStats; // [rsp+30h] [rbp+8h] BYREF
  size_t *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this - 88));
  BatchStats = CTouchFrameStats::GetBatchStats((CTouchFrameStats *)((char *)this - 160), 0);
  if ( BatchStats )
    std::vector<CTouchFrameStats::CAnimationInfo>::emplace_back<CTouchFrameStats::CBatchStats * &,unsigned short const * &>(
      (__int64 *)this + 13,
      (__int64 *)&BatchStats,
      &v4);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this - 88));
}
