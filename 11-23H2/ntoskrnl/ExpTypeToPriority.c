/*
 * XREFs of ExpTypeToPriority @ 0x1402B954C
 * Callers:
 *     ExQueueWorkItemToPartition @ 0x1402B959C (ExQueueWorkItemToPartition.c)
 *     ExpTryQueueWorkItem @ 0x1402B993C (ExpTryQueueWorkItem.c)
 *     ExQueueWorkItemEx @ 0x14030B2B0 (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemExFromIo @ 0x14060CBAC (ExQueueWorkItemExFromIo.c)
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
