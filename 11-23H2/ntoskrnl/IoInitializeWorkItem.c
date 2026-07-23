/*
 * XREFs of IoInitializeWorkItem @ 0x140366620
 * Callers:
 *     DifIoInitializeWorkItemWrapper @ 0x1405E05E0 (DifIoInitializeWorkItemWrapper.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

void __stdcall IoInitializeWorkItem(PVOID IoObject, PIO_WORKITEM IoWorkItem)
{
  if ( (unsigned __int16)(*(_WORD *)IoObject - 3) > 1u )
    KeBugCheckEx(0xE4u, 3uLL, (ULONG_PTR)IoWorkItem, (ULONG_PTR)IoObject, 0LL);
  IoWorkItem->WorkOnBehalfThread = 0LL;
  IoWorkItem->Type = 1;
  IoWorkItem->IoObject = IoObject;
  IoWorkItem->WorkItem.List.Flink = 0LL;
  IoWorkItem->WorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopProcessWorkItem;
  IoWorkItem->WorkItem.Parameter = IoWorkItem;
}
