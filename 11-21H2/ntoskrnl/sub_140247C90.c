/*
 * XREFs of sub_140247C90 @ 0x140247C90
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void sub_140247C90()
{
  char v0; // bl

  v0 = 0;
  KeAcquireSpinLockAtDpcLevel(&qword_140C2AE88);
  byte_140C2AE91 |= 1u;
  if ( !byte_140C2AE90 )
  {
    byte_140C2AE90 = 1;
    v0 = 1;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C2AE88);
  if ( v0 )
    ExQueueWorkItem(&stru_140C2AE68, (WORK_QUEUE_TYPE)48);
}
