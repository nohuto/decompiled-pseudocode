/*
 * XREFs of EtwpCopyJobGuidSafe @ 0x1408A6D94
 * Callers:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1403A6040 (EtwTraceJobServerSiloMonitorCallback.c)
 *     EtwTraceJob @ 0x1409E5598 (EtwTraceJob.c)
 *     EtwTraceJobAssignProcess @ 0x1409E5678 (EtwTraceJobAssignProcess.c)
 *     EtwTraceJobSendNotification @ 0x1409E57CC (EtwTraceJobSendNotification.c)
 *     EtwTraceJobSetQuery @ 0x1409E592C (EtwTraceJobSetQuery.c)
 * Callees:
 *     <none>
 */

void __fastcall EtwpCopyJobGuidSafe(_OWORD *a1, __int64 a2)
{
  if ( a2 )
    *a1 = *(_OWORD *)(a2 + 1456);
  else
    *a1 = 0LL;
}
