/*
 * XREFs of ?EndAnimation@CTouchFrameStats@@UEAAXXZ @ 0x1801A8530
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBatchStats@CTouchFrameStats@@IEAAPEAVCBatchStats@1@K@Z @ 0x180008C34 (-GetBatchStats@CTouchFrameStats@@IEAAPEAVCBatchStats@1@K@Z.c)
 *     ?GetCurrentBatchId@CTouchFrameStats@@IEAAKXZ @ 0x180008E38 (-GetCurrentBatchId@CTouchFrameStats@@IEAAKXZ.c)
 */

void __fastcall CTouchFrameStats::EndAnimation(CTouchFrameStats *this)
{
  int CurrentBatchId; // eax

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this - 88));
  if ( 0x8F5C28F5C28F5C29uLL * ((__int64)(*((_QWORD *)this + 14) - *((_QWORD *)this + 13)) >> 3)
    && !*(_QWORD *)(*((_QWORD *)this + 14) - 192LL) )
  {
    CurrentBatchId = CTouchFrameStats::GetCurrentBatchId((CTouchFrameStats *)((char *)this - 160));
    *(_QWORD *)(*((_QWORD *)this + 14) - 192LL) = CTouchFrameStats::GetBatchStats(
                                                    (CTouchFrameStats *)((char *)this - 160),
                                                    CurrentBatchId - 1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this - 88));
}
