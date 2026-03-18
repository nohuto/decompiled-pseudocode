/*
 * XREFs of ExpValidateWorkItem @ 0x1402B7E80
 * Callers:
 *     ExQueueWorkItemFromIo @ 0x1402B7620 (ExQueueWorkItemFromIo.c)
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
 *     ExQueueWorkItemToPartition @ 0x1402B959C (ExQueueWorkItemToPartition.c)
 *     ExpTryQueueWorkItem @ 0x1402B993C (ExpTryQueueWorkItem.c)
 *     ExQueueWorkItemEx @ 0x14030B2B0 (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemToPrivatePool @ 0x14046B74E (ExQueueWorkItemToPrivatePool.c)
 *     ExQueueWorkItemExFromIo @ 0x14060CBAC (ExQueueWorkItemExFromIo.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpValidateWorkItem(_QWORD *BugCheckParameter2, int a2)
{
  ULONG_PTR v2; // r9
  __int64 result; // rax

  if ( *BugCheckParameter2 )
    KeBugCheckEx(0xE4u, 1uLL, (ULONG_PTR)BugCheckParameter2, a2, 0LL);
  if ( (unsigned int)(a2 - 7) <= 0x18 || a2 >= 64 )
    KeBugCheckEx(0xE4u, 6uLL, (ULONG_PTR)BugCheckParameter2, a2, 0LL);
  v2 = BugCheckParameter2[2];
  result = 0xFFFF800000000000uLL;
  if ( v2 < 0xFFFF800000000000uLL )
    KeBugCheckEx(0xE4u, 7uLL, (ULONG_PTR)BugCheckParameter2, v2, 0LL);
  return result;
}
