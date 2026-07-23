/*
 * XREFs of FsRtlCheckOplockEx @ 0x1402A5CB0
 * Callers:
 *     sub_14071C610 @ 0x14071C610 (sub_14071C610.c)
 * Callees:
 *     FsRtlCheckOplockEx2 @ 0x1402A5D00 (FsRtlCheckOplockEx2.c)
 */

NTSTATUS __stdcall FsRtlCheckOplockEx(
        POPLOCK Oplock,
        PIRP Irp,
        ULONG Flags,
        PVOID Context,
        POPLOCK_WAIT_COMPLETE_ROUTINE CompletionRoutine,
        POPLOCK_FS_PREPOST_IRP PostIrpRoutine)
{
  return FsRtlCheckOplockEx2(Oplock, Irp, Flags, 0LL, Context, CompletionRoutine, PostIrpRoutine, 0LL, 0LL, 0LL);
}
