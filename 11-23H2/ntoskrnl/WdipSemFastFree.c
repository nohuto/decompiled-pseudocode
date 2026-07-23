/*
 * XREFs of WdipSemFastFree @ 0x140831B60
 * Callers:
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x1407DAC48 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140830070 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x140830898 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemLoadNextScenario @ 0x140831410 (WdipSemLoadNextScenario.c)
 *     WdipSemFreeScenario @ 0x140831AC8 (WdipSemFreeScenario.c)
 *     WdipSemRollBackProviderTable @ 0x1409DDD84 (WdipSemRollBackProviderTable.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x1409DDE94 (WdipSemLogInflightLimitExceededInformation.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140429280 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastFree(int a1, _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY result; // rax

  if ( a2 )
    return RtlpInterlockedPushEntrySList(&SListHead + a1, a2);
  return result;
}
