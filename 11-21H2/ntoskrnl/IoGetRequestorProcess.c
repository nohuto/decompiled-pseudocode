/*
 * XREFs of IoGetRequestorProcess @ 0x14021DC00
 * Callers:
 *     FsRtlProcessFileLock @ 0x14021D0B0 (FsRtlProcessFileLock.c)
 *     FsRtlCheckLockForWriteAccess @ 0x14021D1E0 (FsRtlCheckLockForWriteAccess.c)
 *     sub_14021D404 @ 0x14021D404 (sub_14021D404.c)
 *     FsRtlCheckLockForReadAccess @ 0x14021DA60 (FsRtlCheckLockForReadAccess.c)
 *     sub_14021F280 @ 0x14021F280 (sub_14021F280.c)
 *     sub_140417964 @ 0x140417964 (sub_140417964.c)
 *     sub_140559FA8 @ 0x140559FA8 (sub_140559FA8.c)
 * Callees:
 *     <none>
 */

PEPROCESS __stdcall IoGetRequestorProcess(PIRP Irp)
{
  PETHREAD Thread; // rdx
  CCHAR ApcEnvironment; // al

  Thread = Irp->Tail.Overlay.Thread;
  if ( (Irp->Flags & 0x2000) != 0 )
    return (PEPROCESS)(Irp->Overlay.AllocationSize.QuadPart & 0xFFFFFFFFFFFFFFF9uLL);
  if ( !Thread )
    return 0LL;
  ApcEnvironment = Irp->ApcEnvironment;
  if ( !ApcEnvironment )
    return (PEPROCESS)*((_QWORD *)Thread + 68);
  if ( ApcEnvironment == 1 )
    return (PEPROCESS)*((_QWORD *)Thread + 23);
  else
    return 0LL;
}
