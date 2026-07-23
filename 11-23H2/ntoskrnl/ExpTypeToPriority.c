/*
 * XREFs of ExpTypeToPriority @ 0x1402B97DC
 * Callers:
 *     ExQueueWorkItemToPartition @ 0x1402B982C (ExQueueWorkItemToPartition.c)
 *     ExpTryQueueWorkItem @ 0x1402B9BCC (ExpTryQueueWorkItem.c)
 *     ExQueueWorkItemEx @ 0x14030B540 (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemExFromIo @ 0x14060D0FC (ExQueueWorkItemExFromIo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpTypeToPriority(unsigned int a1)
{
  if ( a1 >= 7 )
    return a1 - 32;
  else
    return (unsigned int)ExpBuiltinPriorities[a1];
}
