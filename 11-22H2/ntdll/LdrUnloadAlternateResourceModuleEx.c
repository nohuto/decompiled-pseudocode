/*
 * XREFs of LdrUnloadAlternateResourceModuleEx @ 0x18006B820
 * Callers:
 *     LdrpGetFromMUIMemCache @ 0x180023058 (LdrpGetFromMUIMemCache.c)
 *     LdrpUnloadNode @ 0x18006B540 (LdrpUnloadNode.c)
 *     LdrUnloadAlternateResourceModule @ 0x18006B810 (LdrUnloadAlternateResourceModule.c)
 *     LdrResRelease @ 0x1800EED50 (LdrResRelease.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlReAllocateHeap @ 0x180042320 (RtlReAllocateHeap.c)
 *     LdrpRemoveAlternateModuleCacheItem @ 0x18006C164 (LdrpRemoveAlternateModuleCacheItem.c)
 *     Feature_Servicing_CritsecInit__private_IsEnabled @ 0x18009E30C (Feature_Servicing_CritsecInit__private_IsEnabled.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x18009F330 (NtUnmapViewOfSection.c)
 */

char __fastcall LdrUnloadAlternateResourceModuleEx(__int64 a1, __int16 a2)
{
  char v4; // bl
  unsigned int v6; // edi
  int v7; // esi
  int v8; // r13d
  __int64 v9; // r14
  _QWORD *v10; // rbx
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  void *v13; // rcx
  __int64 Heap; // rax
  int i; // [rsp+24h] [rbp-34h]
  __int64 v16; // [rsp+60h] [rbp+8h]

  v4 = 0;
  if ( !a1 )
    return 0;
  Feature_Servicing_CritsecInit__private_IsEnabled();
  RtlAcquireSRWLockExclusive(&MuiCacheSWRLock);
  v6 = AlternateResourceModuleCount;
  if ( AlternateResourceModuleCount )
  {
    v7 = AlternateResourceModuleCount;
    for ( i = AlternateResourceModuleCount; ; i = v8 )
    {
      if ( v7 <= 0 )
        goto LABEL_29;
      v8 = v7 - 1;
      v9 = AlternateResourceModules + ((__int64)(v7 - 1) << 6);
      if ( *(_QWORD *)(v9 + 8) == a1 )
        break;
LABEL_28:
      v7 = v8;
    }
    v16 = AlternateResourceModules + ((__int64)v8 << 6);
    v10 = (_QWORD *)(v9 + 32);
    v11 = *(_QWORD *)(v9 + 32);
    if ( v11 && (!a2 || a2 == *(_WORD *)v9) && v11 != -1 )
    {
      v12 = v11 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( *(_DWORD *)(v9 + 56) == -1073741799 )
      {
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v12);
        v7 = i;
        v9 = v16;
      }
      else
      {
        NtUnmapViewOfSection(-1LL);
      }
      v13 = *(void **)(v9 + 40);
      if ( v13 )
      {
        NtClose(v13);
        *(_QWORD *)(v9 + 40) = 0LL;
      }
      *v10 = 0LL;
      v6 = AlternateResourceModuleCount;
    }
    if ( v7 != v6 )
      LdrpRemoveAlternateModuleCacheItem((unsigned int)(v7 - 1));
    AlternateResourceModuleCount = --v6;
    if ( v6 )
    {
      if ( v6 >= AltResMemBlockCount - 32 )
      {
LABEL_27:
        v4 = 1;
        goto LABEL_28;
      }
      Heap = RtlReAllocateHeap(
               (__int64)NtCurrentPeb()->ProcessHeap,
               0,
               AlternateResourceModules,
               (unsigned __int64)(unsigned int)(AltResMemBlockCount - 32) << 6);
      if ( !Heap )
      {
        v4 = 0;
        goto LABEL_29;
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
    v6 = AlternateResourceModuleCount;
    goto LABEL_27;
  }
  v4 = 1;
LABEL_29:
  RtlReleaseSRWLockExclusive(&MuiCacheSWRLock);
  return v4;
}
