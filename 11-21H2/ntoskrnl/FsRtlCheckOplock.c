/*
 * XREFs of FsRtlCheckOplock @ 0x1402A68A0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlCheckOplockEx2 @ 0x1402A5D00 (FsRtlCheckOplockEx2.c)
 *     sub_1402A6980 @ 0x1402A6980 (sub_1402A6980.c)
 */

NTSTATUS __stdcall FsRtlCheckOplock(
        POPLOCK Oplock,
        PIRP Irp,
        PVOID Context,
        POPLOCK_WAIT_COMPLETE_ROUTINE CompletionRoutine,
        POPLOCK_FS_PREPOST_IRP PostIrpRoutine)
{
  unsigned int v9; // esi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  ULONG Options; // eax

  v9 = 0;
  sub_1402A6980(Oplock, Irp, 0LL);
  if ( !*Oplock && (!Irp || Irp->Tail.Overlay.CurrentStackLocation->MajorFunction) )
    return 0;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( !CurrentStackLocation->MajorFunction )
  {
    Options = CurrentStackLocation->Parameters.Create.Options;
    v9 = (Options >> 8) & 1;
    if ( (Options & 0x10000) != 0 )
      v9 |= 0x10000000u;
  }
  return FsRtlCheckOplockEx2(
           (__int64 *)Oplock,
           (__int64)Irp,
           v9,
           0,
           (__int64)Context,
           CompletionRoutine,
           (__int64)PostIrpRoutine,
           0LL,
           0LL,
           0LL);
}
