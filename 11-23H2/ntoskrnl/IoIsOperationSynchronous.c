/*
 * XREFs of IoIsOperationSynchronous @ 0x140302580
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x140766310 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall IoIsOperationSynchronous(PIRP Irp)
{
  ULONG v1; // eax

  v1 = Irp->Flags & 0x42;
  return ((Irp->Tail.Overlay.CurrentStackLocation->FileObject->Flags & 2) != 0 || (Irp->Flags & 4) != 0 || v1 == 66)
      && v1 != 2;
}
