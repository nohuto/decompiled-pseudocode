/*
 * XREFs of KiCheckThreadAffinity @ 0x140243590
 * Callers:
 *     KiQueueReadyThread @ 0x140234510 (KiQueueReadyThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402425A0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiExecuteAllDpcs @ 0x1402444C0 (KiExecuteAllDpcs.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14039DEEC (KiUpdateGlobalCpuSetConfiguration.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiCheckThreadAffinity(__int64 a1)
{
  return *(_QWORD *)(a1 + 568) == KiCpuSetSequence || (*(_DWORD *)(a1 + 116) & 8) != 0;
}
