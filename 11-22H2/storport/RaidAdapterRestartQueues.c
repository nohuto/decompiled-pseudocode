/*
 * XREFs of RaidAdapterRestartQueues @ 0x1C001921C
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0001770 (RaidUnitCompleteRequest.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0011250 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterDeferredRoutine @ 0x1C0014550 (RaidAdapterDeferredRoutine.c)
 *     StorPortAdapterActiveCondition @ 0x1C001F5B0 (StorPortAdapterActiveCondition.c)
 *     RaidAdapterCancelPauseTimer @ 0x1C0034610 (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterRestartDpcRoutine @ 0x1C0037D90 (RaidAdapterRestartDpcRoutine.c)
 *     RaidAdapterSetPauseTimer @ 0x1C0039174 (RaidAdapterSetPauseTimer.c)
 *     RaidCompletionDpcRoutine @ 0x1C003A6A0 (RaidCompletionDpcRoutine.c)
 *     RaidPauseTimerDpcRoutine @ 0x1C003CF70 (RaidPauseTimerDpcRoutine.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C003D540 (RaidResumeAndRestartAdapterQueues.c)
 * Callees:
 *     StorNextIoGatewayItem @ 0x1C0019328 (StorNextIoGatewayItem.c)
 *     RaidRestartIoQueue @ 0x1C00194E0 (RaidRestartIoQueue.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RaidAdapterRestartQueues(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  char v3; // bp
  void *v5; // rsi
  __int64 IoGatewayItem; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdi
  _QWORD *j; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  __int128 i; // [rsp+48h] [rbp-30h] BYREF
  __int64 v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+60h] [rbp-18h]

  v2 = 0LL;
  v3 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(_DWORD *)(a1 + 904) )
  {
    do
    {
      v5 = (void *)(*(_QWORD *)(a1 + 896) + 320 * v2);
      v12 = 0LL;
      v13 = 0;
      for ( i = 0LL;
            ;
            (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(v7 + 648))(
              *(_QWORD *)(v7 + 640),
              IoGatewayItem - 120,
              &i,
              0LL) )
      {
        IoGatewayItem = StorNextIoGatewayItem(v5);
        if ( !IoGatewayItem )
          break;
        v7 = *(_QWORD *)(*(_QWORD *)(IoGatewayItem - 120 + 184) + 32LL);
      }
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *(_DWORD *)(a1 + 904) );
  }
  if ( !v3 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 144), &LockHandle);
  v8 = (_QWORD *)(a1 + 152);
  for ( j = *(_QWORD **)(a1 + 152); j != v8; j = (_QWORD *)*j )
  {
    LOBYTE(a2) = 1;
    RaidRestartIoQueue(j - 7, a2);
  }
  if ( !v3 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
