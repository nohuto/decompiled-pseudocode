/*
 * XREFs of ?ThreadEntryPoint@CCompFrameStats@@KAKPEAX@Z @ 0x180007C40
 * Callers:
 *     <none>
 * Callees:
 *     ?StatsCollectionThread@CCompFrameStats@@IEAAXXZ @ 0x180007C50 (-StatsCollectionThread@CCompFrameStats@@IEAAXXZ.c)
 */

void __fastcall __noreturn CCompFrameStats::ThreadEntryPoint(CCompFrameStats *Parameter)
{
  CCompFrameStats::StatsCollectionThread(Parameter);
  JUMPOUT(0x180007C49LL);
}
