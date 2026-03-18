/*
 * XREFs of LdrpKrnGetDataTableEntry @ 0x1402D7504
 * Callers:
 *     LdrpGetImageSize @ 0x1402D6C18 (LdrpGetImageSize.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x1402D708C (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpResGetMappingSize @ 0x1406734EC (LdrpResGetMappingSize.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 */

PVOID *__fastcall LdrpKrnGetDataTableEntry(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  PVOID *v2; // rbx
  PVOID *v4; // rdx
  PVOID v5; // rcx

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v4 = (PVOID *)PsLoadedModuleList;
  if ( PsLoadedModuleList )
  {
    while ( v4 != &PsLoadedModuleList )
    {
      v5 = v4[6];
      if ( a1 >= (unsigned __int64)v5 && a1 < (unsigned __int64)v5 + *((unsigned int *)v4 + 16) )
      {
        v2 = v4;
        break;
      }
      v4 = (PVOID *)*v4;
    }
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v2;
}
