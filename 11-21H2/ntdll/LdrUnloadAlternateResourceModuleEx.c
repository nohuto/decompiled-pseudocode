/*
 * XREFs of LdrUnloadAlternateResourceModuleEx @ 0x180052A10
 * Callers:
 *     LdrpGetFromMUIMemCache @ 0x18003AC48 (LdrpGetFromMUIMemCache.c)
 *     LdrpUnloadNode @ 0x1800526F0 (LdrpUnloadNode.c)
 *     LdrUnloadAlternateResourceModule @ 0x180052A00 (LdrUnloadAlternateResourceModule.c)
 *     LdrResRelease @ 0x18008FB30 (LdrResRelease.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlReAllocateHeap @ 0x180024530 (RtlReAllocateHeap.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     LdrpRemoveAlternateModuleCacheItem @ 0x18008A728 (LdrpRemoveAlternateModuleCacheItem.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1800A45B0 (NtUnmapViewOfSection.c)
 */

char __fastcall LdrUnloadAlternateResourceModuleEx(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int16 v4; // r12
  char v6; // bl
  unsigned int v7; // edi
  int v8; // esi
  int v9; // r13d
  __int64 v10; // r14
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  void *v14; // rcx
  __int64 Heap; // rax
  int i; // [rsp+24h] [rbp-34h]
  __int64 v18; // [rsp+60h] [rbp+8h]

  v4 = a2;
  v6 = 0;
  if ( !a1 )
    return 0;
  RtlAcquireSRWLockExclusive((unsigned __int64)&MuiCacheSWRLock, a2, a3, a4);
  v7 = AlternateResourceModuleCount;
  if ( AlternateResourceModuleCount )
  {
    v8 = AlternateResourceModuleCount;
    for ( i = AlternateResourceModuleCount; ; i = v9 )
    {
      if ( v8 <= 0 )
        goto LABEL_30;
      v9 = v8 - 1;
      v10 = AlternateResourceModules + ((__int64)(v8 - 1) << 6);
      if ( *(_QWORD *)(v10 + 8) == a1 )
        break;
LABEL_6:
      v8 = v9;
    }
    v18 = AlternateResourceModules + ((__int64)v9 << 6);
    v11 = (_QWORD *)(v10 + 32);
    v12 = *(_QWORD *)(v10 + 32);
    if ( v12 && (!v4 || v4 == *(_WORD *)v10) && v12 != -1 )
    {
      v13 = v12 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( *(_DWORD *)(v10 + 56) == -1073741799 )
      {
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v13);
        v8 = i;
        v10 = v18;
      }
      else
      {
        NtUnmapViewOfSection(-1LL);
      }
      v14 = *(void **)(v10 + 40);
      if ( v14 )
      {
        NtClose(v14);
        *(_QWORD *)(v10 + 40) = 0LL;
      }
      *v11 = 0LL;
      v7 = AlternateResourceModuleCount;
    }
    if ( v8 != v7 )
      LdrpRemoveAlternateModuleCacheItem((unsigned int)(v8 - 1));
    AlternateResourceModuleCount = --v7;
    if ( v7 )
    {
      if ( v7 >= AltResMemBlockCount - 32 )
        goto LABEL_20;
      Heap = RtlReAllocateHeap(
               (__int64)NtCurrentPeb()->ProcessHeap,
               0,
               AlternateResourceModules,
               (unsigned __int64)(unsigned int)(AltResMemBlockCount - 32) << 6);
      if ( !Heap )
      {
        v6 = 0;
        goto LABEL_30;
      }
      AlternateResourceModules = Heap;
      AltResMemBlockCount -= 32;
    }
    else
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, AlternateResourceModules);
      AlternateResourceModules = 0LL;
      AltResMemBlockCount = 0;
    }
    v7 = AlternateResourceModuleCount;
LABEL_20:
    v6 = 1;
    goto LABEL_6;
  }
  v6 = 1;
LABEL_30:
  RtlReleaseSRWLockExclusive(&MuiCacheSWRLock);
  return v6;
}
