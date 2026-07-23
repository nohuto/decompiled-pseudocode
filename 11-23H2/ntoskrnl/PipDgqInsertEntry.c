/*
 * XREFs of PipDgqInsertEntry @ 0x140972270
 * Callers:
 *     PiDmaGuardQueueInsertEntry @ 0x1409721BC (PiDmaGuardQueueInsertEntry.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 */

void __fastcall PipDgqInsertEntry(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PipDgqListLock, 1u);
  v3 = (_QWORD *)qword_140C5AF38;
  if ( *(PVOID **)qword_140C5AF38 != &PipDgqListHead )
    __fastfail(3u);
  *a1 = &PipDgqListHead;
  a1[1] = v3;
  *v3 = a1;
  qword_140C5AF38 = (__int64)a1;
  ExReleaseResourceLite(&PipDgqListLock);
  KeLeaveCriticalRegion();
}
