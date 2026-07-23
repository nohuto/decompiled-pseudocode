/*
 * XREFs of IoSetHardErrorOrVerifyDevice @ 0x140459D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall IoSetHardErrorOrVerifyDevice(PIRP Irp, PDEVICE_OBJECT DeviceObject)
{
  PETHREAD Thread; // rax

  Thread = Irp->Tail.Overlay.Thread;
  if ( Thread )
    *((_QWORD *)Thread + 163) = DeviceObject;
}
