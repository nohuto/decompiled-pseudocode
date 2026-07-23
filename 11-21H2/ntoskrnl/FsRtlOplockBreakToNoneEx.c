/*
 * XREFs of FsRtlOplockBreakToNoneEx @ 0x140542200
 * Callers:
 *     FsRtlOplockBreakToNone @ 0x1405421A0 (FsRtlOplockBreakToNone.c)
 * Callees:
 *     sub_140256F58 @ 0x140256F58 (sub_140256F58.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     sub_1402A4E10 @ 0x1402A4E10 (sub_1402A4E10.c)
 */

NTSTATUS __stdcall FsRtlOplockBreakToNoneEx(
        POPLOCK Oplock,
        PIRP Irp,
        ULONG Flags,
        PVOID Context,
        POPLOCK_WAIT_COMPLETE_ROUTINE CompletionRoutine,
        POPLOCK_FS_PREPOST_IRP PostIrpRoutine)
{
  PFAST_MUTEX *v8; // rbx
  NTSTATUS v9; // esi
  ULONG v10; // edi
  POPLOCK_FS_PREPOST_IRP v11; // r15
  POPLOCK_WAIT_COMPLETE_ROUTINE v12; // r12
  __int64 v14; // [rsp+20h] [rbp-98h]
  _BYTE v15[8]; // [rsp+80h] [rbp-38h] BYREF
  PVOID v16; // [rsp+88h] [rbp-30h]
  char v17; // [rsp+C0h] [rbp+8h] BYREF

  v8 = (PFAST_MUTEX *)*Oplock;
  v16 = *Oplock;
  v17 = 0;
  v15[0] = 0;
  if ( (Flags & 0x10) != 0 )
  {
    v9 = -1073741811;
  }
  else
  {
    v10 = Flags | 8;
    v11 = PostIrpRoutine;
    v12 = CompletionRoutine;
    do
    {
      v15[0] = 0;
      if ( !v17 )
      {
        ExAcquireFastMutexUnsafe(v8[19]);
        v17 = 1;
      }
      v9 = sub_140256F58(
             (__int64)v8,
             (__int64)Irp->Tail.Overlay.CurrentStackLocation,
             (__int64)Irp,
             v10,
             v14,
             (__int64)Context,
             (__int64)v12,
             (__int64)v11,
             0LL,
             0LL,
             0LL,
             &v17,
             v15);
      if ( !v9 )
      {
        LODWORD(v14) = 0;
        v9 = sub_1402A4E10(
               (__int64)v8,
               (__int64)Irp->Tail.Overlay.CurrentStackLocation,
               (__int64)Irp,
               v10,
               v14,
               28672,
               0LL,
               0LL,
               (__int64)Context,
               (__int64)v12,
               (__int64)v11,
               0LL,
               0LL,
               0LL,
               &v17,
               v15);
      }
    }
    while ( v15[0] );
  }
  if ( v17 )
    ExReleaseFastMutexUnsafe(v8[19]);
  return v9;
}
