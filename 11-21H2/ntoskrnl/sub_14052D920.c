/*
 * XREFs of sub_14052D920 @ 0x14052D920
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void sub_14052D920()
{
  if ( (_DWORD)dword_140C4A0DC )
  {
    if ( !_InterlockedExchange(&dword_140C49E80, 1) )
      ExQueueWorkItem(&stru_140C49E60, DelayedWorkQueue);
  }
}
