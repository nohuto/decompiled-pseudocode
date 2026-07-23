/*
 * XREFs of ExQueueWorkItemFromIo @ 0x1402B78B0
 * Callers:
 *     IoQueueWorkItemEx @ 0x1402B9660 (IoQueueWorkItemEx.c)
 *     IoQueueWorkItem @ 0x1402B97B0 (IoQueueWorkItem.c)
 *     PnpDeviceCompletionRequestDestroy @ 0x140322C94 (PnpDeviceCompletionRequestDestroy.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x1402B7930 (ExpQueueWorkItem.c)
 *     ExpValidateWorkItem @ 0x1402B8110 (ExpValidateWorkItem.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExQueueWorkItemFromIo(ULONG_PTR BugCheckParameter2, int a2)
{
  ULONG_PTR v2; // rbx
  int v4; // r8d
  __int64 result; // rax

  v2 = a2;
  ExpValidateWorkItem(BugCheckParameter2);
  if ( (unsigned int)v2 >= 7 )
    v4 = v2 - 32;
  else
    v4 = ExpBuiltinPriorities[v2];
  result = ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), BugCheckParameter2, v4, -1, 1);
  if ( !(_BYTE)result )
    KeBugCheckEx(0xE4u, 5uLL, BugCheckParameter2, v2, 0xFFFFFFFFFFFFFFFFuLL);
  return result;
}
