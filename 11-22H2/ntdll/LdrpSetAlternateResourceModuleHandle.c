/*
 * XREFs of LdrpSetAlternateResourceModuleHandle @ 0x1800310E4
 * Callers:
 *     LdrResGetRCConfig @ 0x1800077D0 (LdrResGetRCConfig.c)
 *     LdrpGetRcConfig @ 0x180007D68 (LdrpGetRcConfig.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001F930 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSearchResourceSection_U @ 0x180027340 (LdrpSearchResourceSection_U.c)
 *     LdrSetMUICacheType @ 0x18008E320 (LdrSetMUICacheType.c)
 * Callees:
 *     RtlImageNtHeader @ 0x18002EEB0 (RtlImageNtHeader.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlReAllocateHeap @ 0x180042320 (RtlReAllocateHeap.c)
 *     LdrpSpecialCacheTypeHandle @ 0x18008E1FC (LdrpSpecialCacheTypeHandle.c)
 *     Feature_Servicing_CritsecInit__private_IsEnabled @ 0x18009E30C (Feature_Servicing_CritsecInit__private_IsEnabled.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x18009F330 (NtUnmapViewOfSection.c)
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
  char *v13; // rcx
  PVOID v14; // rax
  char *v15; // rcx
  PVOID Heap; // rax
  __int64 j; // rbx
  unsigned __int64 v18; // r14
  char *v19; // rcx
  __int64 v20; // rdx
  HANDLE v21; // rax
  PIMAGE_NT_HEADERS v22; // rax
  unsigned int CheckSum; // r8d
  unsigned __int64 v24; // rcx
  char *v25; // rdx
  __int64 v26; // rax
  HANDLE v27; // rax
  __int64 v28; // rbx
  char *v29; // rcx

  if ( !a1 || (a6 & 0xFFFFFFCC) != 0 || (a6 & 3) == 3 || (a6 & 1) != 0 && !a2 )
    return 0;
  Feature_Servicing_CritsecInit__private_IsEnabled();
  RtlAcquireSRWLockExclusive(&MuiCacheSWRLock);
  for ( i = 0; ; ++i )
  {
    if ( i >= AlternateResourceModuleCount )
      goto LABEL_19;
    v12 = (unsigned __int64)i << 6;
    v13 = (char *)AlternateResourceModules + v12;
    if ( *(_QWORD *)((char *)AlternateResourceModules + v12 + 8) != a1 )
    {
      if ( (a6 & 0x10) != 0 && gMUICacheType && (unsigned __int64)(*((_QWORD *)v13 + 5) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
        LdrpSpecialCacheTypeHandle(v13, 0LL);
      continue;
    }
    if ( (a6 & 2) != 0 && *((_QWORD *)v13 + 2) )
      goto LABEL_71;
    if ( (a6 & 1) != 0 && *((_QWORD *)v13 + 4) && a5 && *(_WORD *)v13 == a5 )
      break;
  }
  if ( *a2 == -1LL )
  {
LABEL_25:
    v15 = (char *)AlternateResourceModules;
    *a2 = *(_QWORD *)((char *)AlternateResourceModules + v12 + 32);
    if ( a3 )
      *a3 = *(HANDLE *)&v15[v12 + 40];
    goto LABEL_71;
  }
  if ( (a6 & 0x20) == 0 )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID)(*a2 & 0xFFFFFFFFFFFFFFFCuLL));
    if ( a3 )
      NtClose(*a3);
    goto LABEL_25;
  }
  if ( *((_QWORD *)v13 + 4) == -1LL )
    *((_QWORD *)v13 + 4) = 0LL;
LABEL_19:
  if ( (a6 & 0x10) != 0 )
    goto LABEL_71;
  if ( AlternateResourceModules )
  {
    if ( AlternateResourceModuleCount >= (unsigned int)AltResMemBlockCount )
    {
      Heap = RtlReAllocateHeap(
               NtCurrentPeb()->ProcessHeap,
               8u,
               AlternateResourceModules,
               (unsigned __int64)(unsigned int)(AltResMemBlockCount + 32) << 6);
      if ( !Heap )
        goto LABEL_71;
      AlternateResourceModules = Heap;
      AltResMemBlockCount += 32;
    }
  }
  else
  {
    v14 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x800uLL);
    if ( !v14 )
      goto LABEL_71;
    AlternateResourceModules = v14;
    AltResMemBlockCount = 32;
  }
  for ( j = 0LL; (unsigned int)j < AlternateResourceModuleCount; j = (unsigned int)(j + 1) )
  {
    v18 = (unsigned __int64)(unsigned int)j << 6;
    v19 = (char *)AlternateResourceModules + v18;
    if ( *(_QWORD *)((char *)AlternateResourceModules + v18 + 8) == a1 )
    {
      if ( (a6 & 2) != 0 && !*((_QWORD *)v19 + 2) )
      {
        *((_QWORD *)v19 + 2) = a4;
        *((_DWORD *)v19 + 14) = a7;
        goto LABEL_71;
      }
      if ( (a6 & 1) != 0 && !*((_QWORD *)v19 + 4) )
      {
        v20 = a5;
        if ( *(_WORD *)v19 == a5 || !*(_WORD *)v19 )
        {
          *((_QWORD *)v19 + 4) = *a2;
          if ( a3 )
            v21 = *a3;
          else
            v21 = 0LL;
          *((_QWORD *)v19 + 5) = v21;
          *(_WORD *)v19 = a5;
          *((_DWORD *)v19 + 14) = a7;
          *((_QWORD *)v19 + 6) = a8;
          if ( gMUICacheType )
          {
            LOBYTE(v20) = 1;
            if ( (int)LdrpSpecialCacheTypeHandle(v19, v20) >= 0
              && (gMUICacheType & 2) != 0
              && *(_DWORD *)((char *)AlternateResourceModules + v18 + 56) == -1073741799 )
            {
              *a2 = *(_QWORD *)((char *)AlternateResourceModules + v18 + 32);
            }
          }
          goto LABEL_71;
        }
      }
    }
  }
  v22 = RtlImageNtHeader((PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL));
  if ( v22 )
  {
    CheckSum = v22->OptionalHeader.CheckSum;
    v24 = (unsigned __int64)(unsigned int)AlternateResourceModuleCount << 6;
    v25 = (char *)AlternateResourceModules;
    *(_QWORD *)((char *)AlternateResourceModules + v24 + 8) = a1;
    *(_QWORD *)&v25[v24 + 16] = a4;
    if ( (a6 & 1) != 0 )
    {
      if ( a2 )
        v26 = *a2;
      else
        v26 = 0LL;
      *(_QWORD *)&v25[v24 + 32] = v26;
      if ( a3 )
        v27 = *a3;
      else
        v27 = 0LL;
      *(_QWORD *)&v25[v24 + 40] = v27;
      *(_QWORD *)&v25[v24 + 48] = a8;
    }
    else
    {
      *(_QWORD *)&v25[v24 + 32] = 0LL;
      *(_QWORD *)&v25[v24 + 40] = 0LL;
      *(_QWORD *)&v25[v24 + 48] = 0LL;
    }
    *(_WORD *)&v25[v24] = a5;
    *(_DWORD *)&v25[v24 + 24] = CheckSum;
    *(_DWORD *)&v25[v24 + 56] = a7;
    if ( gMUICacheType )
    {
      if ( (a6 & 1) != 0 )
      {
        v28 = j << 6;
        v29 = &v25[v28];
        LOBYTE(v25) = 1;
        if ( (int)LdrpSpecialCacheTypeHandle(v29, v25) >= 0
          && (gMUICacheType & 2) != 0
          && *(_DWORD *)((char *)AlternateResourceModules + v28 + 56) == -1073741799 )
        {
          *a2 = *(_QWORD *)((char *)AlternateResourceModules + v28 + 32);
        }
      }
    }
    ++AlternateResourceModuleCount;
  }
LABEL_71:
  RtlReleaseSRWLockExclusive(&MuiCacheSWRLock);
  return 1;
}
