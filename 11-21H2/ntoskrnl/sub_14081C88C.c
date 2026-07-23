/*
 * XREFs of sub_14081C88C @ 0x14081C88C
 * Callers:
 *     sub_140808C50 @ 0x140808C50 (sub_140808C50.c)
 *     sub_14081C860 @ 0x14081C860 (sub_14081C860.c)
 *     sub_140864FC0 @ 0x140864FC0 (sub_140864FC0.c)
 *     sub_1409DA7D0 @ 0x1409DA7D0 (sub_1409DA7D0.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_14081C88C(int a1)
{
  __int64 Pool2; // rax

  if ( a1 < 8 )
  {
    Pool2 = ExAllocatePool2(64LL, 40LL, 1682330192LL);
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = 0LL;
      *(_QWORD *)(Pool2 + 16) = sub_140818A90;
      *(_QWORD *)(Pool2 + 24) = Pool2;
      *(_DWORD *)(Pool2 + 32) = a1;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)Pool2, DelayedWorkQueue);
    }
  }
}
