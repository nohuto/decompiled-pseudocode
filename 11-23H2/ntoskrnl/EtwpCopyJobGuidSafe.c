/*
 * XREFs of EtwpCopyJobGuidSafe @ 0x1408A6B44
 * Callers:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1403A5E60 (EtwTraceJobServerSiloMonitorCallback.c)
 *     EtwTraceJob @ 0x1409E5308 (EtwTraceJob.c)
 *     EtwTraceJobAssignProcess @ 0x1409E53E8 (EtwTraceJobAssignProcess.c)
 *     EtwTraceJobSendNotification @ 0x1409E553C (EtwTraceJobSendNotification.c)
 *     EtwTraceJobSetQuery @ 0x1409E569C (EtwTraceJobSetQuery.c)
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
