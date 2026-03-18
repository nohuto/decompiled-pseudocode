/*
 * XREFs of MmFreeBootDriverInitializationCode @ 0x14084E87C
 * Callers:
 *     Phase1Initialization @ 0x140822CA0 (Phase1Initialization.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390C0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     MiFreeDriverInitialization @ 0x140703584 (MiFreeDriverInitialization.c)
 *     MmAcquireLoadLock @ 0x140704660 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x1407049E0 (MmReleaseLoadLock.c)
 */

_QWORD *MmFreeBootDriverInitializationCode()
{
  struct _KTHREAD *Lock; // rdi
  PVOID *i; // rbx
  _QWORD *result; // rax

  Lock = MmAcquireLoadLock();
  --Lock->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    if ( ((_DWORD)i[13] & 0x40000000) == 0 )
      MiFreeDriverInitialization((__int64)i);
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)Lock);
  result = MmReleaseLoadLock((__int64)Lock);
  byte_140C659F6 = 1;
  return result;
}
