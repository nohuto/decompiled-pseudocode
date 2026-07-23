/*
 * XREFs of KiIsPrcbThread @ 0x140324F90
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x140240D60 (KiSearchForNewThreadOnProcessor.c)
 *     KiScheduleThreadToRescheduleContext @ 0x140243B10 (KiScheduleThreadToRescheduleContext.c)
 *     KiExecuteAllDpcs @ 0x140244590 (KiExecuteAllDpcs.c)
 *     KiEnterLongDpcProcessing @ 0x140247AD0 (KiEnterLongDpcProcessing.c)
 *     KiDirectSwitchThread @ 0x1402B1B30 (KiDirectSwitchThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x140307814 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140308538 (KiGroupSchedulingGenerationEnd.c)
 *     KiUpdateThreadHgsFeedback @ 0x140578BD0 (KiUpdateThreadHgsFeedback.c)
 *     KiParkCurrentProcessor @ 0x14057E38C (KiParkCurrentProcessor.c)
 *     KiAdjustRescheduleContextForParking @ 0x14058052C (KiAdjustRescheduleContextForParking.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsPrcbThread(__int64 a1)
{
  return a1 && *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess;
}
