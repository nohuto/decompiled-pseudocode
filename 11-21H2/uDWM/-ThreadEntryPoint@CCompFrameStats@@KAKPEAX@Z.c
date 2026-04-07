/*
 * XREFs of ?ThreadEntryPoint@CCompFrameStats@@KAKPEAX@Z @ 0x180002740
 * Callers:
 *     <none>
 * Callees:
 *     ?StatsCollectionThread@CCompFrameStats@@IEAAXXZ @ 0x180002834 (-StatsCollectionThread@CCompFrameStats@@IEAAXXZ.c)
 */

void __fastcall __noreturn CCompFrameStats::ThreadEntryPoint(CCompFrameStats *Parameter)
{
  CCompFrameStats::StatsCollectionThread(Parameter);
  JUMPOUT(0x180002749LL);
}
