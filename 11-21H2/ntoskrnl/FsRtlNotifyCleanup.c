/*
 * XREFs of FsRtlNotifyCleanup @ 0x1406AB5E0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlIsNotifyOnList @ 0x1406AC108 (FsRtlIsNotifyOnList.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x1406AC2DC (FsRtlNotifyCleanupOneEntry.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlNotifyCleanup(PNOTIFY_SYNC NotifySync, PLIST_ENTRY NotifyList, PVOID FsContext)
{
  struct _KTHREAD *CurrentThread; // rdi
  void *IsNotifyOnList; // rax

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *((struct _KTHREAD **)NotifySync + 7) )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)NotifySync);
    *((_QWORD *)NotifySync + 7) = CurrentThread;
  }
  ++*((_DWORD *)NotifySync + 16);
  IsNotifyOnList = (void *)FsRtlIsNotifyOnList(NotifyList, FsContext);
  if ( IsNotifyOnList )
    FsRtlNotifyCleanupOneEntry(IsNotifyOnList);
  if ( (*((_DWORD *)NotifySync + 16))-- == 1 )
  {
    *((_QWORD *)NotifySync + 7) = 0LL;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)NotifySync);
  }
}
