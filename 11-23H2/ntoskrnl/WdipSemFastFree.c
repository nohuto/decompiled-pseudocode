/*
 * XREFs of WdipSemFastFree @ 0x140831860
 * Callers:
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x1407DA978 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemDeleteTransitionalInstance @ 0x14082FD70 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x140830598 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemLoadNextScenario @ 0x140831110 (WdipSemLoadNextScenario.c)
 *     WdipSemFreeScenario @ 0x1408317C8 (WdipSemFreeScenario.c)
 *     WdipSemRollBackProviderTable @ 0x1409DDB84 (WdipSemRollBackProviderTable.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x1409DDC94 (WdipSemLogInflightLimitExceededInformation.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140428EF0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastFree(int a1, struct _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY result; // rax

  if ( a2 )
    return RtlpInterlockedPushEntrySList(&SListHead + a1, a2);
  return result;
}
