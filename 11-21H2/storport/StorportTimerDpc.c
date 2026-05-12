/*
 * XREFs of StorportTimerDpc @ 0x1C000BB70
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterReleaseStartIoLock @ 0x1C000BBF0 (RaidAdapterReleaseStartIoLock.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C000BC24 (RaidAdapterAcquireStartIoLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 */

void __fastcall StorportTimerDpc(
        struct _KDPC *Dpc,
        __int64 *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  void (__fastcall *v6)(__int64, __int64); // rbx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  v4 = *DeferredContext;
  v5 = DeferredContext[18];
  v7 = 0LL;
  v8 = 0LL;
  v6 = (void (__fastcall *)(__int64, __int64))_InterlockedExchange64(DeferredContext + 17, 0LL);
  if ( v6 )
  {
    RaidAdapterAcquireStartIoLock(v4, &v7);
    v6(*(_QWORD *)(v4 + 576) + 16LL, v5);
    RaidAdapterReleaseStartIoLock(v4, &v7);
  }
}
