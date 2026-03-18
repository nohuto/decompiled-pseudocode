/*
 * XREFs of CmpWakeWriteQueueWaiters @ 0x14075217C
 * Callers:
 *     CmpFlushHive @ 0x140752E88 (CmpFlushHive.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14082722C (CmpFinishBeingActiveFlusherAndReconciler.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 */

signed __int32 __fastcall CmpWakeWriteQueueWaiters(ULONG_PTR BugCheckParameter2, PRKEVENT Event, LONG a3)
{
  PRKEVENT v4; // rax
  struct _LIST_ENTRY *Flink; // rbx

  v4 = Event;
  if ( Event )
  {
    do
    {
      Flink = v4[1].Header.WaitListHead.Flink;
      v4[1].Header.LockNV = a3;
      KeSetEvent(v4, 0, 0);
      v4 = (PRKEVENT)Flink;
    }
    while ( Flink );
  }
  return KeAbPostRelease(BugCheckParameter2);
}
