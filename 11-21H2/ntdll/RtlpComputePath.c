/*
 * XREFs of RtlpComputePath @ 0x180033140
 * Callers:
 *     RtlpComputeDllPath @ 0x180032AE0 (RtlpComputeDllPath.c)
 *     RtlpComputeDllPathWithOptions @ 0x1800827C0 (RtlpComputeDllPathWithOptions.c)
 *     RtlpComputeSearchPath @ 0x180084DD0 (RtlpComputeSearchPath.c)
 *     RtlpComputeExePath @ 0x18008BC10 (RtlpComputeExePath.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlpGetDirPath @ 0x180032FB0 (RtlpGetDirPath.c)
 *     RtlQueryEnvironmentVariable @ 0x180036CE0 (RtlQueryEnvironmentVariable.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     LdrpIncludeAlternateForwarders @ 0x1800DCD48 (LdrpIncludeAlternateForwarders.c)
 *     RtlpAddForwarderPath @ 0x1800EA2D0 (RtlpAddForwarderPath.c)
 */

__int64 __fastcall RtlpComputePath(_DWORD *a1, unsigned int a2, wchar_t *a3, char a4)
{
  unsigned int v5; // edx
  unsigned __int64 v6; // rdi
  char v7; // r10
  void *v8; // r9
  size_t v9; // r15
  const void *v10; // r13
  __int64 v11; // rbx
  __int64 v12; // rsi
  const void **v13; // r12
  int v14; // r14d
  _DWORD *v15; // r12
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 Heap; // rax
  int v19; // eax
  __int64 v20; // rax
  unsigned int v21; // r8d
  _WORD *v22; // rdi
  unsigned int v23; // r15d
  char v24; // bl
  unsigned int v25; // r12d
  __int64 v26; // r14
  __int128 *v27; // rax
  _DWORD *v28; // rdx
  __int64 v29; // rax
  size_t v30; // rax
  wchar_t *DirPath; // rax
  __int128 *v33; // rax
  __int64 v34; // rcx
  void **v35; // rbx
  int v36; // eax
  __int64 v37; // rcx
  char v38; // al
  __int64 v39; // rdx
  char v40; // [rsp+38h] [rbp-39h]
  unsigned int v41; // [rsp+40h] [rbp-31h]
  __int64 v42; // [rsp+40h] [rbp-31h]
  __int64 v43; // [rsp+48h] [rbp-29h] BYREF
  void *v44; // [rsp+50h] [rbp-21h]
  int v45; // [rsp+58h] [rbp-19h]
  size_t Size; // [rsp+60h] [rbp-11h] BYREF
  __int128 *v47; // [rsp+68h] [rbp-9h]
  void *Src; // [rsp+70h] [rbp-1h]
  size_t v49[10]; // [rsp+78h] [rbp+7h] BYREF
  _DWORD *v50; // [rsp+D8h] [rbp+67h]
  wchar_t *v52; // [rsp+E8h] [rbp+77h]

  v52 = a3;
  v50 = a1;
  v5 = 0;
  v44 = 0LL;
  v6 = ((unsigned __int64)qword_18018F390 >> 60) & 3;
  v49[0] = 0LL;
  Src = 0LL;
  v7 = a4;
  Size = 0LL;
  v8 = 0LL;
  v43 = 0LL;
  v9 = 0LL;
  v40 = 0;
  v10 = 0LL;
  v45 = 0;
  v11 = 128LL;
  v47 = 0LL;
  v12 = 0LL;
  v41 = 0;
  v13 = 0LL;
  v14 = 0;
  if ( a2 )
  {
    v15 = a1;
    while ( 1 )
    {
      switch ( *v15 )
      {
        case 0:
          v16 = (unsigned __int16)LdrpDllDirectory;
LABEL_12:
          if ( !(_WORD)v16 )
            break;
          v17 = v16 + 2;
LABEL_14:
          v11 += v17;
          break;
        case 1:
          goto LABEL_69;
        case 2:
          v11 += (unsigned __int16)RtlpSystemDirs;
          if ( (_BYTE)v6 != 1 )
            break;
          v33 = &RtlpSystemDirs;
          goto LABEL_62;
        case 3:
          RtlEnterCriticalSection(&FastPebLock);
          v14 = RtlQueryEnvironmentVariable(0LL, L"PATH", 4LL, 0LL, 0LL, &v43);
          if ( v14 == -1073741789 )
          {
            Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, 2 * v43);
            v10 = (const void *)Heap;
            if ( !Heap )
            {
              RtlLeaveCriticalSection(&FastPebLock);
              return v12;
            }
            v19 = RtlQueryEnvironmentVariable(0LL, L"PATH", 4LL, Heap, v43, &v43);
            v9 = Size;
            v14 = v19;
          }
          RtlLeaveCriticalSection(&FastPebLock);
          if ( v14 == -1073741568 )
          {
            v43 = 0LL;
            v14 = 0;
          }
          else
          {
            if ( v14 < 0 )
              goto LABEL_50;
            v11 += 2 * v43 + 2;
          }
          v5 = v41;
          v8 = v44;
          break;
        case 4:
          v11 += 4LL;
          break;
        case 5:
          if ( a3 )
          {
            DirPath = (wchar_t *)RtlpGetDirPath(a3, &Size);
            v5 = v41;
            v8 = v44;
            v9 = Size;
            Src = DirPath;
          }
          if ( v9 )
          {
            v11 += v9 + 2;
            break;
          }
LABEL_69:
          v8 = (void *)RtlpGetDirPath(0LL, v49);
          v5 = v41;
          v11 += v49[0] + 2;
          v44 = v8;
          break;
        case 6:
          v17 = (unsigned __int16)word_180174220;
          goto LABEL_14;
        case 7:
          v11 += (unsigned __int16)RtlpSystem32Dirs;
          if ( v7 )
          {
            v38 = LdrpIncludeAlternateForwarders((unsigned int)(*v15 - 6), (unsigned __int16)RtlpSystem32Dirs, a3, v8);
            v8 = v44;
            v11 += v39 + 22;
            v40 = v38;
            if ( v38 )
              v11 += v39 + 30;
          }
          v5 = v41;
          if ( (_BYTE)v6 == 1 )
          {
            v33 = &RtlpSystem32Dirs;
LABEL_62:
            v47 = v33;
          }
          break;
        default:
          v16 = (unsigned __int16)LdrpAppPackagesPath;
          goto LABEL_12;
      }
      ++v5;
      ++v15;
      v41 = v5;
      if ( v5 >= a2 )
      {
        v13 = (const void **)v47;
        v44 = v8;
        v45 = v14;
        if ( (unsigned __int64)(v11 - 128) <= 0xFFFE )
          break;
        v14 = -1073741562;
        goto LABEL_50;
      }
      a3 = v52;
      v7 = a4;
    }
  }
  v20 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
  v42 = v20;
  v12 = v20;
  if ( v20 )
  {
    v21 = a2;
    v22 = (_WORD *)(v20 + 128);
    *(_WORD *)(v20 + 72) = a2;
    v23 = 0;
    *(_QWORD *)(v20 + 88) = 0LL;
    *(_QWORD *)(v20 + 96) = 0LL;
    *(_QWORD *)(v20 + 104) = 0LL;
    *(_DWORD *)(v20 + 112) = v11;
    *(_QWORD *)(v20 + 120) = 0LL;
    if ( v13 )
    {
      *(_QWORD *)(v20 + 24) = v22;
      v36 = 7;
      if ( &RtlpSystem32Dirs != (__int128 *)v13 )
        v36 = 2;
      *(_DWORD *)v12 = v36;
      memmove(v22, v13[1], *(unsigned __int16 *)v13);
      v24 = v40;
      v23 = 1;
      v22 += (unsigned __int64)*(unsigned __int16 *)v13 >> 1;
      if ( a4 )
      {
        LOBYTE(v37) = v40;
        v22 = (_WORD *)RtlpAddForwarderPath(v37, v22);
      }
      v21 = a2;
    }
    else
    {
      v24 = v40;
    }
    v25 = 0;
    if ( v21 )
    {
      v26 = v43;
      v27 = v47;
      v28 = v50;
      while ( 1 )
      {
        if ( v27 && (*v28 == 2 || *v28 == 7) )
          goto LABEL_47;
        *(_DWORD *)(v12 + 4LL * v23) = *v28;
        *(_QWORD *)(v12 + 8LL * v23 + 24) = v22;
        if ( !*v28 )
          break;
        switch ( *v28 )
        {
          case 1:
            goto LABEL_70;
          case 2:
            memmove(v22, *((const void **)&RtlpSystemDirs + 1), (unsigned __int16)RtlpSystemDirs);
            v22 += (unsigned __int64)(unsigned __int16)RtlpSystemDirs >> 1;
            goto LABEL_45;
          case 3:
            if ( !v26 )
              goto LABEL_46;
            memmove(v22, v10, 2 * v26);
            v22 += v26 + 1;
LABEL_44:
            *(v22 - 1) = 59;
LABEL_45:
            v28 = v50;
            v21 = a2;
            goto LABEL_46;
          case 4:
            *(_QWORD *)(v12 + 120) = v22;
            *v22 = 46;
            v22 += 2;
            *(v22 - 1) = 59;
            goto LABEL_46;
          case 5:
            if ( Size )
            {
              memmove(v22, Src, Size);
              v30 = Size;
            }
            else
            {
LABEL_70:
              memmove(v22, v44, v49[0]);
              v30 = v49[0];
            }
            goto LABEL_43;
          case 6:
            v35 = (void **)LdrpUserDllDirectories;
            if ( LdrpUserDllDirectories == (_UNKNOWN *)&LdrpUserDllDirectories )
              goto LABEL_46;
            do
            {
              memmove(v22, (char *)v35 + 18, *((unsigned __int16 *)v35 + 8));
              v22 += ((unsigned __int64)*((unsigned __int16 *)v35 + 8) >> 1) + 1;
              *(v22 - 1) = 59;
              v35 = (void **)*v35;
            }
            while ( v35 != (void **)&LdrpUserDllDirectories );
            v12 = v42;
            v26 = v43;
            goto LABEL_45;
          case 7:
            memmove(v22, *((const void **)&RtlpSystem32Dirs + 1), (unsigned __int16)RtlpSystem32Dirs);
            v22 += (unsigned __int64)(unsigned __int16)RtlpSystem32Dirs >> 1;
            if ( a4 )
            {
              LOBYTE(v34) = v24;
              v22 = (_WORD *)RtlpAddForwarderPath(v34, v22);
            }
            goto LABEL_45;
        }
        if ( (_WORD)LdrpAppPackagesPath )
        {
          *(v22 - 1) = 0;
          memmove(v22, *((const void **)&LdrpAppPackagesPath + 1), (unsigned __int16)LdrpAppPackagesPath);
          v29 = LdrpAppPackagesPathVersion;
          *(_QWORD *)(v12 + 104) = v22;
          *(_QWORD *)(v12 + 96) = v29;
          v22 += ((unsigned __int64)(unsigned __int16)LdrpAppPackagesPath >> 1) + 1;
          goto LABEL_45;
        }
LABEL_46:
        v27 = v47;
        ++v23;
LABEL_47:
        v24 = v40;
        ++v28;
        ++v25;
        v50 = v28;
        if ( v25 >= v21 )
        {
          v14 = v45;
          goto LABEL_49;
        }
      }
      if ( !(_WORD)LdrpDllDirectory )
        goto LABEL_46;
      memmove(v22, *((const void **)&LdrpDllDirectory + 1), (unsigned __int16)LdrpDllDirectory);
      v30 = (unsigned __int16)LdrpDllDirectory;
LABEL_43:
      v22 += (v30 >> 1) + 1;
      goto LABEL_44;
    }
LABEL_49:
    *(v22 - 1) = 0;
  }
  else
  {
    v14 = -1073741801;
  }
LABEL_50:
  if ( v10 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v10);
  if ( v12 && v14 < 0 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v12);
    return 0LL;
  }
  return v12;
}
