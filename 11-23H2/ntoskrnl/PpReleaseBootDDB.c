/*
 * XREFs of PpReleaseBootDDB @ 0x140843C34
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x1403A1008 (PnpCompleteSystemStartProcess.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     SdbReleaseDatabase @ 0x140695574 (SdbReleaseDatabase.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 PpReleaseBootDDB()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v1; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiDDBLock, 1u);
  if ( PpDDBHandle )
  {
    SdbReleaseDatabase(PpDDBHandle);
    PpDDBHandle = 0LL;
    ExFreePoolWithTag(PpBootDDB, 0);
    PpBootDDB = 0LL;
    v1 = 0;
  }
  else
  {
    v1 = -1073741823;
  }
  if ( PpDDBPatchHandle )
  {
    SdbReleaseDatabase(PpDDBPatchHandle);
    PpDDBPatchHandle = 0LL;
    ExFreePoolWithTag(PpBootDDBPatch, 0);
    PpBootDDBPatch = 0LL;
  }
  ExReleaseResourceLite(&PiDDBLock);
  KeLeaveCriticalRegion();
  return v1;
}
