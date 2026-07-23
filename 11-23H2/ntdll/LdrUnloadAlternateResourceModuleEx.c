/*
 * XREFs of LdrUnloadAlternateResourceModuleEx @ 0x18006B800
 * Callers:
 *     LdrpGetFromMUIMemCache @ 0x180022F48 (LdrpGetFromMUIMemCache.c)
 *     LdrpUnloadNode @ 0x18006B520 (LdrpUnloadNode.c)
 *     LdrUnloadAlternateResourceModule @ 0x18006B7F0 (LdrUnloadAlternateResourceModule.c)
 *     LdrResRelease @ 0x1800F0160 (LdrResRelease.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlReAllocateHeap @ 0x1800421C0 (RtlReAllocateHeap.c)
 *     LdrpRemoveAlternateModuleCacheItem @ 0x18006C160 (LdrpRemoveAlternateModuleCacheItem.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1800A13F0 (NtUnmapViewOfSection.c)
 */

BOOLEAN __cdecl LdrUnloadAlternateResourceModuleEx(PVOID DllHandle, ULONG Flags)
{
  __int16 v2; // r12
  BOOLEAN v4; // bl
  unsigned int v5; // edi
  int v6; // esi
  int v7; // r13d
  char *v8; // r14
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  void *v11; // rdx
  void *v12; // rcx
  PVOID Heap; // rax
  int i; // [rsp+24h] [rbp-34h]
  char *v16; // [rsp+60h] [rbp+8h]

  v2 = Flags;
  v4 = 0;
  if ( !DllHandle )
    return 0;
  RtlAcquireSRWLockExclusive(&MuiCacheSWRLock);
  v5 = AlternateResourceModuleCount;
  if ( AlternateResourceModuleCount )
  {
    v6 = AlternateResourceModuleCount;
    for ( i = AlternateResourceModuleCount; ; i = v7 )
    {
      if ( v6 <= 0 )
        goto LABEL_30;
      v7 = v6 - 1;
      v8 = (char *)AlternateResourceModules + 64 * (__int64)(v6 - 1);
      if ( *((PVOID *)v8 + 1) == DllHandle )
        break;
LABEL_6:
      v6 = v7;
    }
    v16 = (char *)AlternateResourceModules + 64 * (__int64)v7;
    v9 = v8 + 32;
    v10 = *((_QWORD *)v8 + 4);
    if ( v10 && (!v2 || v2 == *(_WORD *)v8) && v10 != -1 )
    {
      v11 = (void *)(v10 & 0xFFFFFFFFFFFFFFFCuLL);
      if ( *((_DWORD *)v8 + 14) == -1073741799 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
        v6 = i;
        v8 = v16;
      }
      else
      {
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v11);
      }
      v12 = (void *)*((_QWORD *)v8 + 5);
      if ( v12 )
      {
        NtClose(v12);
        *((_QWORD *)v8 + 5) = 0LL;
      }
      *v9 = 0LL;
      v5 = AlternateResourceModuleCount;
    }
    if ( v6 != v5 )
      LdrpRemoveAlternateModuleCacheItem((unsigned int)(v6 - 1));
    AlternateResourceModuleCount = --v5;
    if ( v5 )
    {
      if ( v5 >= AltResMemBlockCount - 32 )
        goto LABEL_20;
      Heap = RtlReAllocateHeap(
               NtCurrentPeb()->ProcessHeap,
               0,
               AlternateResourceModules,
               (unsigned __int64)(unsigned int)(AltResMemBlockCount - 32) << 6);
      if ( !Heap )
      {
        v4 = 0;
        goto LABEL_30;
      }
      AlternateResourceModules = Heap;
      AltResMemBlockCount -= 32;
    }
    else
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, AlternateResourceModules);
      AlternateResourceModules = 0LL;
      AltResMemBlockCount = 0;
    }
    v5 = AlternateResourceModuleCount;
LABEL_20:
    v4 = 1;
    goto LABEL_6;
  }
  v4 = 1;
LABEL_30:
  RtlReleaseSRWLockExclusive(&MuiCacheSWRLock);
  return v4;
}
