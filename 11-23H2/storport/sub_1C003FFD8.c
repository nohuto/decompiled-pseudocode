/*
 * XREFs of sub_1C003FFD8 @ 0x1C003FFD8
 * Callers:
 *     sub_1C004E400 @ 0x1C004E400 (sub_1C004E400.c)
 *     sub_1C004E4D0 @ 0x1C004E4D0 (sub_1C004E4D0.c)
 *     sub_1C004F440 @ 0x1C004F440 (sub_1C004F440.c)
 *     sub_1C004F478 @ 0x1C004F478 (sub_1C004F478.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1C003FFD8(struct _DEVICE_OBJECT *a1)
{
  struct _IO_WORKITEM *WorkItem; // r10
  _QWORD *DeviceExtension; // rax
  bool v4; // zf

  WorkItem = IoAllocateWorkItem(a1);
  if ( WorkItem )
  {
    DeviceExtension = a1->DeviceExtension;
    if ( *(_DWORD *)DeviceExtension == 1094997074 )
    {
      v4 = DeviceExtension[707] == (_QWORD)(DeviceExtension + 707);
    }
    else
    {
      if ( *(_DWORD *)DeviceExtension != 1431193940 )
        return;
      v4 = DeviceExtension[425] == (_QWORD)(DeviceExtension + 425);
    }
    if ( !v4 )
      IoQueueWorkItem(WorkItem, sub_1C0040220, CriticalWorkQueue, WorkItem);
  }
}
