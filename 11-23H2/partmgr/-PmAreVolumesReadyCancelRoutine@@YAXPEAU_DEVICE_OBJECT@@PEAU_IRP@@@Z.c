/*
 * XREFs of ?PmAreVolumesReadyCancelRoutine@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000E4C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PmAreVolumesReadyCancelRoutine(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  struct _KMUTANT *DeviceExtension; // rbx
  struct _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *Blink; // rax

  DeviceExtension = (struct _KMUTANT *)a1->DeviceExtension;
  IoReleaseCancelSpinLock(a2->CancelIrql);
  KeWaitForSingleObject(&DeviceExtension[1], Executive, 0, 0, 0LL);
  Flink = a2->Tail.Overlay.ListEntry.Flink;
  if ( (PVOID *)Flink->Blink != &a2->Tail.CompletionKey + 6
    || (Blink = a2->Tail.Overlay.ListEntry.Blink, (PVOID *)Blink->Flink != &a2->Tail.CompletionKey + 6) )
  {
    __fastfail(3u);
  }
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  KeReleaseMutex(DeviceExtension + 1, 0);
  a2->IoStatus.Information = 0LL;
  a2->IoStatus.Status = -1073741536;
  IofCompleteRequest(a2, 0);
}
