/*
 * XREFs of PopExternalMonitorUpdatedWorker @ 0x1407A91F0
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x14032ED60 (PopOkayToQueueNextWorkItem.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     PopEvaluateInputSuppressionAction @ 0x140994374 (PopEvaluateInputSuppressionAction.c)
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
    if ( qword_140C6B0C8 )
    {
      LOBYTE(v2) = v1;
      qword_140C6B0C8(v2);
    }
    if ( PopPlatformAoAc )
      PopEvaluateInputSuppressionAction();
    PopAcquirePolicyLock(v2);
  }
  while ( v1 != PopConsoleExternalDisplayConnected );
  PopOkayToQueueNextWorkItem((__int64)&PopExternalMonitorUpdatedWorkItem);
  return PopReleasePolicyLock();
}
