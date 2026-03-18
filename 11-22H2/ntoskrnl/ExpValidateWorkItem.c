/*
 * XREFs of ExpValidateWorkItem @ 0x1402B7E50
 * Callers:
 *     ExQueueWorkItemFromIo @ 0x1402B75F0 (ExQueueWorkItemFromIo.c)
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     ExQueueWorkItemToPartition @ 0x1402B956C (ExQueueWorkItemToPartition.c)
 *     ExpTryQueueWorkItem @ 0x1402B990C (ExpTryQueueWorkItem.c)
 *     ExQueueWorkItemEx @ 0x14030B180 (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemToPrivatePool @ 0x14046B0EE (ExQueueWorkItemToPrivatePool.c)
 *     ExQueueWorkItemExFromIo @ 0x14060CC1C (ExQueueWorkItemExFromIo.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
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
