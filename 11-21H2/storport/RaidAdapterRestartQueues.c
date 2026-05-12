/*
 * XREFs of RaidAdapterRestartQueues @ 0x1C001DEE0
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C00028C0 (RaidAdapterDeferredRoutine.c)
 *     RaidUnitCompleteRequest @ 0x1C0006E70 (RaidUnitCompleteRequest.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C001DD00 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterCancelPauseTimer @ 0x1C00339A0 (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterRestartDpcRoutine @ 0x1C0036A10 (RaidAdapterRestartDpcRoutine.c)
 *     RaidAdapterSetPauseTimer @ 0x1C0037D08 (RaidAdapterSetPauseTimer.c)
 *     RaidCompletionDpcRoutine @ 0x1C00390D0 (RaidCompletionDpcRoutine.c)
 *     RaidPauseTimerDpcRoutine @ 0x1C003B180 (RaidPauseTimerDpcRoutine.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C003B74C (RaidResumeAndRestartAdapterQueues.c)
 * Callees:
 *     RaidRestartIoQueue @ 0x1C0009220 (RaidRestartIoQueue.c)
 *     RaidAdapterRestartGateway @ 0x1C001DF98 (RaidAdapterRestartGateway.c)
 */

void __fastcall RaidAdapterRestartQueues(__int64 a1, char a2)
{
  __int64 v2; // rbx
  _QWORD **v5; // rdi
  _QWORD *i; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(_DWORD *)(a1 + 840) )
  {
    do
    {
      RaidAdapterRestartGateway((PVOID)(*(_QWORD *)(a1 + 832) + 320 * v2));
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *(_DWORD *)(a1 + 840) );
  }
  if ( !a2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
  v5 = (_QWORD **)(a1 + 144);
  for ( i = *v5; i != v5; i = (_QWORD *)*i )
    RaidRestartIoQueue((__int64)(i - 7), 1);
  if ( !a2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
