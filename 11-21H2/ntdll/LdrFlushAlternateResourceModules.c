/*
 * XREFs of LdrFlushAlternateResourceModules @ 0x18008CDE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1800A45B0 (NtUnmapViewOfSection.c)
 */

char __fastcall LdrFlushAlternateResourceModules(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned int i; // ebx
  unsigned __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  void *v8; // rcx

  RtlAcquireSRWLockExclusive((unsigned __int64)&MuiCacheSWRLock, a2, a3, a4);
  if ( AlternateResourceModuleCount )
  {
    for ( i = 0; i < AlternateResourceModuleCount; ++i )
    {
      v5 = AlternateResourceModules + ((unsigned __int64)i << 6);
      v6 = *(_QWORD *)(v5 + 32);
      if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        v7 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( *(_DWORD *)(v5 + 56) == -1073741799 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
        else
          NtUnmapViewOfSection(-1LL);
        *(_QWORD *)(v5 + 32) = 0LL;
        v8 = *(void **)(v5 + 40);
        if ( v8 )
        {
          NtClose(v8);
          *(_QWORD *)(v5 + 40) = 0LL;
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
