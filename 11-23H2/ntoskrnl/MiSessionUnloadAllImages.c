/*
 * XREFs of MiSessionUnloadAllImages @ 0x140681CD8
 * Callers:
 *     MiDereferenceSessionFinal @ 0x140681B80 (MiDereferenceSessionFinal.c)
 * Callees:
 *     MiSessionLookupImage @ 0x14020AB68 (MiSessionLookupImage.c)
 *     MiGetSystemRegionType @ 0x140284B00 (MiGetSystemRegionType.c)
 *     MmUnloadSystemImage @ 0x140696020 (MmUnloadSystemImage.c)
 *     MmAcquireLoadLock @ 0x1407047C0 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x140704B40 (MmReleaseLoadLock.c)
 */

__int64 MiSessionUnloadAllImages()
{
  __int64 Lock; // rax
  PVOID *v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rax
  unsigned __int64 v4; // rsi

  Lock = MmAcquireLoadLock();
  v1 = (PVOID *)PsLoadedModuleList;
  v2 = Lock;
  while ( v1 != &PsLoadedModuleList )
  {
    v4 = (unsigned __int64)v1[6];
    if ( (unsigned int)MiGetSystemRegionType(v4) == 1 && MiSessionLookupImage(v4) )
    {
      MmReleaseLoadLock(v2);
      MmUnloadSystemImage((ULONG_PTR)v1);
      v3 = MmAcquireLoadLock();
      v1 = (PVOID *)PsLoadedModuleList;
      v2 = v3;
    }
    else
    {
      v1 = (PVOID *)*v1;
    }
  }
  return MmReleaseLoadLock(v2);
}
