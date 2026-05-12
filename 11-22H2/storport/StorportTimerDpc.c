/*
 * XREFs of StorportTimerDpc @ 0x1C0007620
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterReleaseStartIoLock @ 0x1C0007568 (RaidAdapterReleaseStartIoLock.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C000759C (RaidAdapterAcquireStartIoLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall StorportTimerDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  void (__fastcall *v6)(__int64, __int64); // rbx
  struct _KLOCK_QUEUE_HANDLE v7; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)DeferredContext;
  v5 = *((_QWORD *)DeferredContext + 18);
  memset(&v7, 0, sizeof(v7));
  v6 = (void (__fastcall *)(__int64, __int64))_InterlockedExchange64((volatile __int64 *)DeferredContext + 17, 0LL);
  if ( v6 )
  {
    RaidAdapterAcquireStartIoLock(v4, &v7);
    v6(*(_QWORD *)(v4 + 576) + 16LL, v5);
    RaidAdapterReleaseStartIoLock(v4, &v7);
  }
}
