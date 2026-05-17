/*
 * XREFs of LdrpSetAlternateResourceModuleHandle @ 0x180030F14
 * Callers:
 *     LdrResGetRCConfig @ 0x180007BB0 (LdrResGetRCConfig.c)
 *     LdrpGetRcConfig @ 0x180008148 (LdrpGetRcConfig.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001F750 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSearchResourceSection_U @ 0x180027170 (LdrpSearchResourceSection_U.c)
 *     LdrSetMUICacheType @ 0x18008EB20 (LdrSetMUICacheType.c)
 * Callees:
 *     RtlImageNtHeader @ 0x18002ECE0 (RtlImageNtHeader.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlReAllocateHeap @ 0x1800421C0 (RtlReAllocateHeap.c)
 *     LdrpSpecialCacheTypeHandle @ 0x18008E9FC (LdrpSpecialCacheTypeHandle.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1800A13F0 (NtUnmapViewOfSection.c)
 */

char __fastcall LdrpSetAlternateResourceModuleHandle(
        __int64 a1,
        _QWORD *a2,
        HANDLE *a3,
        __int64 a4,
        unsigned __int16 a5,
        int a6,
        int a7,
        __int64 a8)
{
  unsigned int i; // ebx
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rcx
  __int64 j; // rbx
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // r8d
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  HANDLE v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  HANDLE v26; // rax
  __int64 Heap; // rax
  __int64 v28; // rbx
  __int64 v29; // rcx

  if ( !a1 || (a6 & 0xFFFFFFCC) != 0 || (a6 & 3) == 3 || (a6 & 1) != 0 && !a2 )
    return 0;
  RtlAcquireSRWLockExclusive(&MuiCacheSWRLock);
  for ( i = 0; ; ++i )
  {
    if ( i >= AlternateResourceModuleCount )
      goto LABEL_11;
    v12 = (unsigned __int64)i << 6;
    v13 = v12 + AlternateResourceModules;
    if ( *(_QWORD *)(v12 + AlternateResourceModules + 8) != a1 )
    {
      if ( (a6 & 0x10) != 0 && gMUICacheType && (unsigned __int64)(*(_QWORD *)(v13 + 40) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
        LdrpSpecialCacheTypeHandle(v13, 0LL);
      continue;
    }
    if ( (a6 & 2) != 0 && *(_QWORD *)(v13 + 16) )
      goto LABEL_74;
    if ( (a6 & 1) != 0 && *(_QWORD *)(v13 + 32) && a5 && *(_WORD *)v13 == a5 )
      break;
  }
  if ( *a2 == -1LL )
  {
LABEL_46:
    v24 = AlternateResourceModules;
    *a2 = *(_QWORD *)(v12 + AlternateResourceModules + 32);
    if ( a3 )
      *a3 = *(HANDLE *)(v12 + v24 + 40);
    goto LABEL_74;
  }
  if ( (a6 & 0x20) == 0 )
  {
    NtUnmapViewOfSection(-1LL);
    if ( a3 )
      NtClose(*a3);
    goto LABEL_46;
  }
  if ( *(_QWORD *)(v13 + 32) == -1LL )
    *(_QWORD *)(v13 + 32) = 0LL;
LABEL_11:
  if ( (a6 & 0x10) != 0 )
    goto LABEL_74;
  if ( AlternateResourceModules )
  {
    if ( AlternateResourceModuleCount >= (unsigned int)AltResMemBlockCount )
    {
      Heap = RtlReAllocateHeap(
               NtCurrentPeb()->ProcessHeap,
               8LL,
               AlternateResourceModules,
               (unsigned __int64)(unsigned int)(AltResMemBlockCount + 32) << 6);
      if ( !Heap )
        goto LABEL_74;
      AlternateResourceModules = Heap;
      AltResMemBlockCount += 32;
    }
  }
  else
  {
    v23 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, 2048LL);
    if ( !v23 )
      goto LABEL_74;
    AlternateResourceModules = v23;
    AltResMemBlockCount = 32;
  }
  for ( j = 0LL; (unsigned int)j < AlternateResourceModuleCount; j = (unsigned int)(j + 1) )
  {
    v15 = (unsigned __int64)(unsigned int)j << 6;
    v16 = v15 + AlternateResourceModules;
    if ( *(_QWORD *)(v15 + AlternateResourceModules + 8) == a1 )
    {
      if ( (a6 & 2) != 0 && !*(_QWORD *)(v16 + 16) )
      {
        *(_QWORD *)(v16 + 16) = a4;
        *(_DWORD *)(v16 + 56) = a7;
        goto LABEL_74;
      }
      if ( (a6 & 1) != 0 && !*(_QWORD *)(v16 + 32) )
      {
        v21 = a5;
        if ( !*(_WORD *)v16 || *(_WORD *)v16 == a5 )
        {
          *(_QWORD *)(v16 + 32) = *a2;
          if ( a3 )
            v22 = *a3;
          else
            v22 = 0LL;
          *(_QWORD *)(v16 + 40) = v22;
          *(_WORD *)v16 = a5;
          *(_DWORD *)(v16 + 56) = a7;
          *(_QWORD *)(v16 + 48) = a8;
          if ( gMUICacheType )
          {
            LOBYTE(v21) = 1;
            if ( (int)LdrpSpecialCacheTypeHandle(v16, v21) >= 0
              && (gMUICacheType & 2) != 0
              && *(_DWORD *)(v15 + AlternateResourceModules + 56) == -1073741799 )
            {
              *a2 = *(_QWORD *)(v15 + AlternateResourceModules + 32);
            }
          }
          goto LABEL_74;
        }
      }
    }
  }
  v17 = RtlImageNtHeader(a1 & 0xFFFFFFFFFFFFFFFCuLL);
  if ( v17 )
  {
    v18 = *(_DWORD *)(v17 + 88);
    v19 = (unsigned __int64)(unsigned int)AlternateResourceModuleCount << 6;
    v20 = AlternateResourceModules;
    *(_QWORD *)(v19 + AlternateResourceModules + 8) = a1;
    *(_QWORD *)(v19 + v20 + 16) = a4;
    if ( (a6 & 1) != 0 )
    {
      if ( a2 )
        v25 = *a2;
      else
        v25 = 0LL;
      *(_QWORD *)(v19 + v20 + 32) = v25;
      if ( a3 )
        v26 = *a3;
      else
        v26 = 0LL;
      *(_QWORD *)(v19 + v20 + 40) = v26;
      *(_QWORD *)(v19 + v20 + 48) = a8;
    }
    else
    {
      *(_QWORD *)(v19 + v20 + 32) = 0LL;
      *(_QWORD *)(v19 + v20 + 40) = 0LL;
      *(_QWORD *)(v19 + v20 + 48) = 0LL;
    }
    *(_WORD *)(v19 + v20) = a5;
    *(_DWORD *)(v19 + v20 + 24) = v18;
    *(_DWORD *)(v19 + v20 + 56) = a7;
    if ( gMUICacheType )
    {
      if ( (a6 & 1) != 0 )
      {
        v28 = j << 6;
        v29 = v28 + v20;
        LOBYTE(v20) = 1;
        if ( (int)LdrpSpecialCacheTypeHandle(v29, v20) >= 0
          && (gMUICacheType & 2) != 0
          && *(_DWORD *)(v28 + AlternateResourceModules + 56) == -1073741799 )
        {
          *a2 = *(_QWORD *)(v28 + AlternateResourceModules + 32);
        }
      }
    }
    ++AlternateResourceModuleCount;
  }
LABEL_74:
  RtlReleaseSRWLockExclusive(&MuiCacheSWRLock);
  return 1;
}
