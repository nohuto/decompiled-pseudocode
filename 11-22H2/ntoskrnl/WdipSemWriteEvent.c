/*
 * XREFs of WdipSemWriteEvent @ 0x1408339AC
 * Callers:
 *     WdipSemSqmInit @ 0x1408316E8 (WdipSemSqmInit.c)
 *     WdipSemWriteSemActionsEvent @ 0x1408320E8 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemWriteInflightLimitExceededEvent @ 0x1409DE3B0 (WdipSemWriteInflightLimitExceededEvent.c)
 *     WdipSemWriteMisconfigEvent @ 0x1409DE498 (WdipSemWriteMisconfigEvent.c)
 *     WdipSemWriteProviderLimitExceededEvent @ 0x1409DE528 (WdipSemWriteProviderLimitExceededEvent.c)
 *     WdipSemWriteScenarioLimitExceededEvent @ 0x1409DE594 (WdipSemWriteScenarioLimitExceededEvent.c)
 *     WdipSemWriteSemFailureEvent @ 0x1409DE61C (WdipSemWriteSemFailureEvent.c)
 *     WdipSemWriteTimeoutEvent @ 0x1409DE6B0 (WdipSemWriteTimeoutEvent.c)
 *     WdipSemSqmAddToStream @ 0x1409DE8E8 (WdipSemSqmAddToStream.c)
 *     WdipSemSqmIncrementDword @ 0x1409DEA9C (WdipSemSqmIncrementDword.c)
 * Callees:
 *     EtwWrite @ 0x140257780 (EtwWrite.c)
 *     EtwEventEnabled @ 0x140258300 (EtwEventEnabled.c)
 */

NTSTATUS __fastcall WdipSemWriteEvent(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        ULONG a4,
        struct _EVENT_DATA_DESCRIPTOR *UserData)
{
  REGHANDLE v5; // rdi

  v5 = WdipSemRegHandle;
  if ( !a2 )
    return -1073741811;
  if ( EtwEventEnabled(WdipSemRegHandle, a2) )
    return EtwWrite(v5, a2, a3, a4, UserData);
  return -1073741816;
}
