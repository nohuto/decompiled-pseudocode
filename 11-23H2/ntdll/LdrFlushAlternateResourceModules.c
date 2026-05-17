/*
 * XREFs of LdrFlushAlternateResourceModules @ 0x180088510
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1800A13F0 (NtUnmapViewOfSection.c)
 */

char LdrFlushAlternateResourceModules()
{
  unsigned int i; // ebx
  unsigned __int64 v1; // rdi
  __int64 v2; // rdx
  unsigned __int64 v3; // rdx
  void *v4; // rcx

  RtlAcquireSRWLockExclusive(&MuiCacheSWRLock);
  if ( AlternateResourceModuleCount )
  {
    for ( i = 0; i < AlternateResourceModuleCount; ++i )
    {
      v1 = AlternateResourceModules + ((unsigned __int64)i << 6);
      v2 = *(_QWORD *)(v1 + 32);
      if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        v3 = v2 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( *(_DWORD *)(v1 + 56) == -1073741799 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v3);
        else
          NtUnmapViewOfSection(-1LL);
        *(_QWORD *)(v1 + 32) = 0LL;
        v4 = *(void **)(v1 + 40);
        if ( v4 )
        {
          NtClose(v4);
          *(_QWORD *)(v1 + 40) = 0LL;
        }
      }
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, AlternateResourceModules);
    AlternateResourceModules = 0LL;
    AlternateResourceModuleCount = 0;
    AltResMemBlockCount = 0;
  }
  RtlReleaseSRWLockExclusive(&MuiCacheSWRLock);
  return 1;
}
