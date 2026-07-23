/*
 * XREFs of FsRtlOplockFsctrl @ 0x14071C5D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14071C610 @ 0x14071C610 (sub_14071C610.c)
 */

NTSTATUS __stdcall FsRtlOplockFsctrl(POPLOCK Oplock, PIRP Irp, ULONG OpenCount)
{
  return sub_14071C610(Oplock, Irp, 28672);
}
