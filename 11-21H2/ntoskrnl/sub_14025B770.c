/*
 * XREFs of sub_14025B770 @ 0x14025B770
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void __fastcall sub_14025B770(struct _KDPC *Dpc, char *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  KSPIN_LOCK *v4; // rdi

  v4 = (KSPIN_LOCK *)(DeferredContext + 424);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)DeferredContext + 53);
  if ( !DeferredContext[432] )
  {
    *((_QWORD *)DeferredContext + 49) = 0LL;
    *((_QWORD *)DeferredContext + 51) = sub_140748E80;
    *((_QWORD *)DeferredContext + 52) = DeferredContext;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(DeferredContext + 392), DelayedWorkQueue);
    DeferredContext[432] = 1;
  }
  KeReleaseSpinLockFromDpcLevel(v4);
}
