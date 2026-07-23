/*
 * XREFs of PoNotifyMediaBuffering @ 0x140258980
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     KeQueryPriorityThread @ 0x14035D5C0 (KeQueryPriorityThread.c)
 */

void __fastcall PoNotifyMediaBuffering(char a1)
{
  char v2; // di
  KPRIORITY PriorityThread; // eax

  v2 = 0;
  KeAcquireSpinLockAtDpcLevel(&qword_140C23AE0);
  if ( !byte_140C23AE8 )
  {
    v2 = 1;
    byte_140C23AE8 = 1;
  }
  byte_140C23AE9 = a1;
  KeReleaseSpinLockFromDpcLevel(&qword_140C23AE0);
  if ( v2 )
  {
    PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
    if ( PriorityThread < 31 )
      ++PriorityThread;
    if ( !a1 && PriorityThread <= 16 )
      PriorityThread = 16;
    ExQueueWorkItem(&stru_140C23AF0, (WORK_QUEUE_TYPE)(PriorityThread + 32));
  }
}
