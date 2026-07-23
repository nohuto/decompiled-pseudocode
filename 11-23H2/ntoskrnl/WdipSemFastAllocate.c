/*
 * XREFs of WdipSemFastAllocate @ 0x140831A8C
 * Callers:
 *     WdipSemAddContextEventToScenario @ 0x14082FFAC (WdipSemAddContextEventToScenario.c)
 *     WdipSemBuildScenarioInstance @ 0x1408304B0 (WdipSemBuildScenarioInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x140830898 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemLoadScenarioTable @ 0x140831004 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140831410 (WdipSemLoadNextScenario.c)
 *     WdipSemUpdateProviderTableWithEvent @ 0x140831C00 (WdipSemUpdateProviderTableWithEvent.c)
 *     WdipSemAddEndEventToScenario @ 0x140832B64 (WdipSemAddEndEventToScenario.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x1409DE054 (WdipSemUpdateFrequentScenarioTable.c)
 *     WdipSemUpdateInflightScenarioTable @ 0x1409DE108 (WdipSemUpdateInflightScenarioTable.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140429240 (RtlpInterlockedPopEntrySList.c)
 *     WdipSemAllocatePool @ 0x140831DD4 (WdipSemAllocatePool.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastAllocate(int a1, unsigned int a2)
{
  PSLIST_ENTRY result; // rax

  result = RtlpInterlockedPopEntrySList(&SListHead + a1);
  if ( !result )
    return (PSLIST_ENTRY)WdipSemAllocatePool(a2);
  return result;
}
