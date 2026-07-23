/*
 * XREFs of MmLockRegistryRecoverySections @ 0x14061ADD8
 * Callers:
 *     CmInitSystem2 @ 0x140B39668 (CmInitSystem2.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D750 (ExAcquireResourceSharedLite.c)
 *     MiLockCode @ 0x1402825C0 (MiLockCode.c)
 *     MiGetSystemRegionType @ 0x140284B00 (MiGetSystemRegionType.c)
 *     MiSnapDriverRange @ 0x140703908 (MiSnapDriverRange.c)
 *     MmAcquireLoadLock @ 0x1407047C0 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x140704B40 (MmReleaseLoadLock.c)
 */

__int64 MmLockRegistryRecoverySections()
{
  __int64 Lock; // rdi
  PVOID *i; // rbx
  int v2; // esi
  unsigned __int64 v4; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v5; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  Lock = MmAcquireLoadLock();
  --*(_WORD *)(Lock + 484);
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)i[6]) != 1 )
    {
      v2 = 0;
      do
      {
        v2 = MiSnapDriverRange((_DWORD)i, v2, 128, 0, (__int64)&v4, (__int64)&v5);
        if ( v4 )
          MiLockCode((__int64)i, v4, v5, 2);
      }
      while ( v2 );
    }
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread(Lock);
  return MmReleaseLoadLock(Lock);
}
