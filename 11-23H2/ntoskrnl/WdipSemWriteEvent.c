/*
 * XREFs of WdipSemWriteEvent @ 0x140831E5C
 * Callers:
 *     WdipSemSqmInit @ 0x14082FB98 (WdipSemSqmInit.c)
 *     WdipSemWriteSemActionsEvent @ 0x140830598 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemWriteInflightLimitExceededEvent @ 0x1409DE300 (WdipSemWriteInflightLimitExceededEvent.c)
 *     WdipSemWriteMisconfigEvent @ 0x1409DE3E8 (WdipSemWriteMisconfigEvent.c)
 *     WdipSemWriteProviderLimitExceededEvent @ 0x1409DE478 (WdipSemWriteProviderLimitExceededEvent.c)
 *     WdipSemWriteScenarioLimitExceededEvent @ 0x1409DE4E4 (WdipSemWriteScenarioLimitExceededEvent.c)
 *     WdipSemWriteSemFailureEvent @ 0x1409DE56C (WdipSemWriteSemFailureEvent.c)
 *     WdipSemWriteTimeoutEvent @ 0x1409DE600 (WdipSemWriteTimeoutEvent.c)
 *     WdipSemSqmAddToStream @ 0x1409DE838 (WdipSemSqmAddToStream.c)
 *     WdipSemSqmIncrementDword @ 0x1409DE9EC (WdipSemSqmIncrementDword.c)
 * Callees:
 *     EtwWrite @ 0x1402578A0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x140258420 (EtwEventEnabled.c)
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
