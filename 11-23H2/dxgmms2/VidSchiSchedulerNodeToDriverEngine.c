/*
 * XREFs of VidSchiSchedulerNodeToDriverEngine @ 0x1C0019678
 * Callers:
 *     VidSchiCheckNodeTimeout @ 0x1C00AE620 (VidSchiCheckNodeTimeout.c)
 *     VidSchCreateSystemDevices @ 0x1C00C2114 (VidSchCreateSystemDevices.c)
 *     VidSchiPrepareToResetEngine @ 0x1C010627C (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C01063A8 (VidSchiResetEngines.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0106554 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C0106A0C (VidSchiSubmitRenderCommand.c)
 *     VidSchReportAdapter @ 0x1C0107BF0 (VidSchReportAdapter.c)
 *     VidSchReportDevice @ 0x1C01081D0 (VidSchReportDevice.c)
 *     VidSchSubmitPagingCommand @ 0x1C01086D8 (VidSchSubmitPagingCommand.c)
 *     VidSchiSerializeSchedulingLog @ 0x1C010944C (VidSchiSerializeSchedulingLog.c)
 *     VidSchiSubmitHwPagingCommand @ 0x1C0109554 (VidSchiSubmitHwPagingCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiSchedulerNodeToDriverEngine(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 632);
  if ( a2 < *(_DWORD *)(a1 + 704) )
    v2 += 8LL * a2;
  return *(unsigned __int16 *)(*(_QWORD *)v2 + 6LL);
}
