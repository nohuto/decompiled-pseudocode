/*
 * XREFs of PopExternalMonitorUpdatedWorker @ 0x1407A8E30
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x14032F190 (PopOkayToQueueNextWorkItem.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     PopEvaluateInputSuppressionAction @ 0x1409944C4 (PopEvaluateInputSuppressionAction.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopExternalMonitorUpdatedWorker(int a1)
{
  char v1; // bl
  __int64 v2; // rcx

  PopAcquirePolicyLock(a1);
  do
  {
    v1 = PopConsoleExternalDisplayConnected;
    PopReleasePolicyLock();
    if ( qword_140C6AFD8 )
    {
      LOBYTE(v2) = v1;
      qword_140C6AFD8(v2);
    }
    if ( PopPlatformAoAc )
      PopEvaluateInputSuppressionAction();
    PopAcquirePolicyLock(v2);
  }
  while ( v1 != PopConsoleExternalDisplayConnected );
  PopOkayToQueueNextWorkItem((__int64)&PopExternalMonitorUpdatedWorkItem);
  return PopReleasePolicyLock();
}
