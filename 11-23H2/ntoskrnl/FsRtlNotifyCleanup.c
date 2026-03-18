/*
 * XREFs of FsRtlNotifyCleanup @ 0x1407C4A70
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1403025F0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x140302660 (ExAcquireFastMutexUnsafe.c)
 *     SeReleaseSubjectContext @ 0x140737BC0 (SeReleaseSubjectContext.c)
 *     FsRtlIsNotifyOnList @ 0x1407C4E10 (FsRtlIsNotifyOnList.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x1407C4E38 (FsRtlNotifyCleanupOneEntry.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
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
