/*
 * XREFs of KiIsPrcbThread @ 0x140324D00
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x140240C90 (KiSearchForNewThreadOnProcessor.c)
 *     KiScheduleThreadToRescheduleContext @ 0x140243A40 (KiScheduleThreadToRescheduleContext.c)
 *     KiExecuteAllDpcs @ 0x1402444C0 (KiExecuteAllDpcs.c)
 *     KiEnterLongDpcProcessing @ 0x140247A00 (KiEnterLongDpcProcessing.c)
 *     KiDirectSwitchThread @ 0x1402B18A0 (KiDirectSwitchThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x140307584 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1403082A8 (KiGroupSchedulingGenerationEnd.c)
 *     KiUpdateThreadHgsFeedback @ 0x1405786E0 (KiUpdateThreadHgsFeedback.c)
 *     KiParkCurrentProcessor @ 0x14057DE9C (KiParkCurrentProcessor.c)
 *     KiAdjustRescheduleContextForParking @ 0x14058003C (KiAdjustRescheduleContextForParking.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsPrcbThread(__int64 a1)
{
  return a1 && *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess;
}
