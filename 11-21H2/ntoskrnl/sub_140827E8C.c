/*
 * XREFs of sub_140827E8C @ 0x140827E8C
 * Callers:
 *     sub_14082830C @ 0x14082830C (sub_14082830C.c)
 * Callees:
 *     sub_1402DCF44 @ 0x1402DCF44 (sub_1402DCF44.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_1403C09F8 @ 0x1403C09F8 (sub_1403C09F8.c)
 *     ExSubscribeWnfStateChange @ 0x1406D1FA0 (ExSubscribeWnfStateChange.c)
 *     sub_140825E70 @ 0x140825E70 (sub_140825E70.c)
 *     sub_140827F54 @ 0x140827F54 (sub_140827F54.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_140827E8C()
{
  int v0; // ebx
  struct _WORK_QUEUE_ITEM *Pool2; // rax

  v0 = sub_140825E70(2u);
  if ( v0 >= 0 )
  {
    byte_140C097C4 = 0;
    if ( byte_140C54E99
      && (int)ExSubscribeWnfStateChange((int)&unk_140D01900, (int)&qword_140037828, 1, 0, (__int64)sub_1409404B0, 0LL) < 0 )
    {
      byte_140C54E99 = 0;
    }
    v0 = sub_1403C09F8(2);
    if ( v0 >= 0 )
    {
      sub_1402DCF44(*((PVOID *)qword_140C46278 + 4), 2, 0, 39LL, 0LL, 0LL, 0LL);
      v0 = sub_140827F54();
      if ( v0 >= 0 )
      {
        Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 32LL, 1852403792LL);
        if ( Pool2 )
        {
          Pool2->List.Flink = 0LL;
          Pool2->WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1403C5610;
          Pool2->Parameter = Pool2;
          ExQueueWorkItem(Pool2, NormalWorkQueue);
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
  }
  return (unsigned int)v0;
}
