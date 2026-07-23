/*
 * XREFs of sub_1406B86D0 @ 0x1406B86D0
 * Callers:
 *     sub_1406B83B4 @ 0x1406B83B4 (sub_1406B83B4.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406B86D0(__int64 a1, unsigned int a2)
{
  __int64 Pool2; // rax
  unsigned int v5; // ebx

  Pool2 = ExAllocatePool2(64LL, a2 + 48LL, 1668499779LL);
  v5 = 0;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 24) = Pool2;
    *(_QWORD *)(Pool2 + 16) = sub_1406A9520;
    *(_QWORD *)Pool2 = 0LL;
    *(_QWORD *)(Pool2 + 32) = a1;
    *(_DWORD *)(Pool2 + 40) = a2;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)Pool2, DelayedWorkQueue);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v5;
}
