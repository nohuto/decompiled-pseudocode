/*
 * XREFs of WdipSemFastAllocate @ 0x14083178C
 * Callers:
 *     WdipSemAddContextEventToScenario @ 0x14082FCAC (WdipSemAddContextEventToScenario.c)
 *     WdipSemBuildScenarioInstance @ 0x1408301B0 (WdipSemBuildScenarioInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x140830598 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemLoadScenarioTable @ 0x140830D04 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140831110 (WdipSemLoadNextScenario.c)
 *     WdipSemUpdateProviderTableWithEvent @ 0x140831900 (WdipSemUpdateProviderTableWithEvent.c)
 *     WdipSemAddEndEventToScenario @ 0x140832864 (WdipSemAddEndEventToScenario.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x1409DDE54 (WdipSemUpdateFrequentScenarioTable.c)
 *     WdipSemUpdateInflightScenarioTable @ 0x1409DDF08 (WdipSemUpdateInflightScenarioTable.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140428EB0 (RtlpInterlockedPopEntrySList.c)
 *     WdipSemAllocatePool @ 0x140831AD4 (WdipSemAllocatePool.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastAllocate(int a1, unsigned int a2)
{
  PSLIST_ENTRY result; // rax

  result = RtlpInterlockedPopEntrySList(&SListHead + a1);
  if ( !result )
    return (PSLIST_ENTRY)WdipSemAllocatePool(a2);
  return result;
}
