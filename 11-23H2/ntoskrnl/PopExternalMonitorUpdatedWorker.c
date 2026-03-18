/*
 * XREFs of PopExternalMonitorUpdatedWorker @ 0x1407A8C40
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x14032EF00 (PopOkayToQueueNextWorkItem.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     PopEvaluateInputSuppressionAction @ 0x1409942C4 (PopEvaluateInputSuppressionAction.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopExternalMonitorUpdatedWorker(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  char v4; // bl
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8

  PopAcquirePolicyLock(a1);
  do
  {
    v4 = PopConsoleExternalDisplayConnected;
    PopReleasePolicyLock(v2, v1, v3);
    if ( qword_140C6AFD8 )
    {
      LOBYTE(v5) = v4;
      qword_140C6AFD8(v5);
    }
    if ( PopPlatformAoAc )
      PopEvaluateInputSuppressionAction();
    PopAcquirePolicyLock(v5);
  }
  while ( v4 != PopConsoleExternalDisplayConnected );
  PopOkayToQueueNextWorkItem((__int64)&PopExternalMonitorUpdatedWorkItem);
  return PopReleasePolicyLock(v7, v6, v8);
}
