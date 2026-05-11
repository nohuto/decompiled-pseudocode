/*
 * XREFs of USBD_SyncCompletionRoutine @ 0x1C0002F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall USBD_SyncCompletionRoutine(PDEVICE_OBJECT DeviceObject, PIRP Irp, struct _KEVENT *Context)
{
  KeSetEvent(Context, 0, 0);
  return 3221225494LL;
}
