/*
 * XREFs of FsRtlOplockFsctrlEx @ 0x14071C5F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14071C610 @ 0x14071C610 (sub_14071C610.c)
 */

NTSTATUS __stdcall FsRtlOplockFsctrlEx(POPLOCK Oplock, PIRP Irp, ULONG OpenCount, ULONG Flags)
{
  return sub_14071C610(Oplock, Irp, 28672);
}
