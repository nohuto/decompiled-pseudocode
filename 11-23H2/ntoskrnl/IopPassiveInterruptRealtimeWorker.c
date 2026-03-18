/*
 * XREFs of IopPassiveInterruptRealtimeWorker @ 0x1403B3C70
 * Callers:
 *     <none>
 * Callees:
 *     KeRemoveQueue @ 0x14031CCF0 (KeRemoveQueue.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

void __fastcall __noreturn IopPassiveInterruptRealtimeWorker(PRKQUEUE Queue)
{
  PLIST_ENTRY v2; // rax

  while ( 1 )
  {
    do
      v2 = KeRemoveQueue(Queue, 0, 0LL);
    while ( v2 == (PLIST_ENTRY)128 );
    ((void (__fastcall *)(struct _LIST_ENTRY *))v2[1].Flink)(v2[1].Blink);
  }
}
