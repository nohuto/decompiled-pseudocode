/*
 * XREFs of KiIsPrcbThread @ 0x140324B20
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x140240C70 (KiSearchForNewThreadOnProcessor.c)
 *     KiScheduleThreadToRescheduleContext @ 0x140243A20 (KiScheduleThreadToRescheduleContext.c)
 *     KiExecuteAllDpcs @ 0x1402444A0 (KiExecuteAllDpcs.c)
 *     KiEnterLongDpcProcessing @ 0x1402479E0 (KiEnterLongDpcProcessing.c)
 *     KiDirectSwitchThread @ 0x1402B1870 (KiDirectSwitchThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x140307454 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140308178 (KiGroupSchedulingGenerationEnd.c)
 *     KiUpdateThreadHgsFeedback @ 0x140578770 (KiUpdateThreadHgsFeedback.c)
 *     KiParkCurrentProcessor @ 0x14057DF2C (KiParkCurrentProcessor.c)
 *     KiAdjustRescheduleContextForParking @ 0x1405800CC (KiAdjustRescheduleContextForParking.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsPrcbThread(__int64 a1)
{
  return a1 && *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess;
}
