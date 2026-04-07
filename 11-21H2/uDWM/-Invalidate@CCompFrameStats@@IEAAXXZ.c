/*
 * XREFs of ?Invalidate@CCompFrameStats@@IEAAXXZ @ 0x18010AB50
 * Callers:
 *     ?StopCollection@CCompFrameStats@@UEAAXXZ @ 0x180002760 (-StopCollection@CCompFrameStats@@UEAAXXZ.c)
 *     ?StatsCollectionThread@CCompFrameStats@@IEAAXXZ @ 0x180002834 (-StatsCollectionThread@CCompFrameStats@@IEAAXXZ.c)
 *     ?CollectStats@CCompFrameStats@@IEAAX_K@Z @ 0x180002A1C (-CollectStats@CCompFrameStats@@IEAAX_K@Z.c)
 * Callees:
 *     ?Shutdown@CCompFrameStats@@IEAAXXZ @ 0x1800027E0 (-Shutdown@CCompFrameStats@@IEAAXXZ.c)
 */

void __fastcall CCompFrameStats::Invalidate(CCompFrameStats *this)
{
  *((_BYTE *)this + 12) = 0;
  CCompFrameStats::Shutdown(this);
  *((_QWORD *)this + 12) = *((_QWORD *)this + 11);
  *((_QWORD *)this + 15) = *((_QWORD *)this + 14);
}
