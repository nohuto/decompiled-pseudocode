/*
 * XREFs of MouseStartWorker @ 0x1C0002630
 * Callers:
 *     <none>
 * Callees:
 *     MouseStart @ 0x1C00026C0 (MouseStart.c)
 */

void __fastcall MouseStartWorker(PDEVICE_OBJECT DeviceObject, PIO_WORKITEM *Context)
{
  IRP *v2; // rbx
  struct _IO_REMOVE_LOCK *DeviceExtension; // rdi

  v2 = (IRP *)Context[1];
  DeviceExtension = (struct _IO_REMOVE_LOCK *)DeviceObject->DeviceExtension;
  v2->IoStatus.Status = MouseStart(DeviceObject, Context);
  v2->IoStatus.Information = 0LL;
  IofCompleteRequest(v2, 0);
  IoFreeWorkItem(*Context);
  ExFreePoolWithTag(Context, 0);
  IoReleaseRemoveLockEx(DeviceExtension + 1, MouseStartWorker, 0x20u);
}
