/*
 * XREFs of PiDmaGuardQueueRemoveEntry @ 0x1405650C8
 * Callers:
 *     PiDmaGuardProcessPostRemove @ 0x140869D84 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 *     PipDgqFreeEntry @ 0x140972038 (PipDgqFreeEntry.c)
 */

void __fastcall PiDmaGuardQueueRemoveEntry(PVOID a1)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v3; // rcx
  PVOID *v4; // rax
  PVOID **v5; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PipDgqListLock, 1u);
  v3 = (PVOID *)PipDgqListHead;
  if ( PipDgqListHead != &PipDgqListHead )
  {
    while ( 1 )
    {
      v4 = (PVOID *)*v3;
      if ( v3[2] == a1 )
        break;
      v3 = (PVOID *)*v3;
      if ( v4 == &PipDgqListHead )
        goto LABEL_4;
    }
    if ( v4[1] != v3 || (v5 = (PVOID **)v3[1], *v5 != v3) )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = v5;
    PipDgqFreeEntry(v3);
  }
LABEL_4:
  ExReleaseResourceLite(&PipDgqListLock);
  KeLeaveCriticalRegion();
}
