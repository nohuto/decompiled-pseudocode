/*
 * XREFs of FsRtlOplockBreakH @ 0x14092E6F0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlOplockBreakH2 @ 0x1406D8C10 (FsRtlOplockBreakH2.c)
 */

NTSTATUS __stdcall FsRtlOplockBreakH(
        POPLOCK Oplock,
        PIRP Irp,
        ULONG Flags,
        PVOID Context,
        POPLOCK_WAIT_COMPLETE_ROUTINE CompletionRoutine,
        POPLOCK_FS_PREPOST_IRP PostIrpRoutine)
{
  return FsRtlOplockBreakH2(
           (__int64 *)Oplock,
           Irp,
           Flags,
           (__int64)Context,
           (__int64)CompletionRoutine,
           (__int64)PostIrpRoutine,
           0LL,
           0LL);
}
