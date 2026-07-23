/*
 * XREFs of RtlpComputePath @ 0x18006A490
 * Callers:
 *     RtlpComputeSearchPath @ 0x18006A120 (RtlpComputeSearchPath.c)
 *     RtlpComputeExePath @ 0x18006A1E0 (RtlpComputeExePath.c)
 *     RtlpComputeDllPathWithOptions @ 0x18006A270 (RtlpComputeDllPathWithOptions.c)
 *     RtlpComputeDllPath @ 0x18006A3B0 (RtlpComputeDllPath.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x18001ED70 (RtlQueryEnvironmentVariable.c)
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlpGetDirPath @ 0x18006AB10 (RtlpGetDirPath.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     LdrpIncludeAlternateForwarders @ 0x1800DD4C8 (LdrpIncludeAlternateForwarders.c)
 *     RtlpAddForwarderPath @ 0x1800E9630 (RtlpAddForwarderPath.c)
 */

int *__fastcall RtlpComputePath(_DWORD *a1, unsigned int a2, wchar_t *a3, char a4)
{
  unsigned int v5; // edx
  unsigned __int64 v6; // rdi
  char v7; // r10
  void *v8; // r9
  size_t v9; // r15
  WCHAR *v10; // r13
  SIZE_T v11; // rbx
  int *v12; // rsi
  const void **v13; // r12
  NTSTATUS v14; // r14d
  _DWORD *v15; // r12
  __int64 Length; // rax
  __int64 v17; // rax
  WCHAR *Heap; // rax
  NTSTATUS v19; // eax
  _WORD *v20; // rax
  unsigned int v21; // r8d
  _WORD *v22; // rdi
  unsigned int v23; // r15d
  char v24; // bl
  unsigned int v25; // r12d
  __int128 *v26; // rax
  ULONG_PTR v27; // r14
  _DWORD *v28; // rdx
  __int64 v29; // rax
  size_t v30; // rax
  _WORD *v31; // rcx
  void *DirPath; // rax
  __int128 *v34; // rax
  _WORD *v35; // rax
  __int64 v36; // rcx
  void **v37; // rbx
  _WORD *v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  char v41; // al
  __int64 v42; // rdx
  char v43; // [rsp+38h] [rbp-39h]
  unsigned int v44; // [rsp+40h] [rbp-31h]
  int *v45; // [rsp+40h] [rbp-31h]
  ULONG_PTR ReturnLength; // [rsp+48h] [rbp-29h] BYREF
  void *v47; // [rsp+50h] [rbp-21h]
  NTSTATUS v48; // [rsp+58h] [rbp-19h]
  size_t Size; // [rsp+60h] [rbp-11h]
  __int128 *v50; // [rsp+68h] [rbp-9h]
  void *Src; // [rsp+70h] [rbp-1h]
  size_t v52; // [rsp+78h] [rbp+7h]
  _DWORD *v53; // [rsp+D8h] [rbp+67h]
  wchar_t *v55; // [rsp+E8h] [rbp+77h]

  v55 = a3;
  v53 = a1;
  v5 = 0;
  v47 = 0LL;
  v6 = (LdrSystemDllInitBlock.MitigationOptionsMap.Map[0] >> 60) & 3;
  v52 = 0LL;
  Src = 0LL;
  v7 = a4;
  Size = 0LL;
  v8 = 0LL;
  ReturnLength = 0LL;
  v9 = 0LL;
  v43 = 0;
  v10 = 0LL;
  v48 = 0;
  v11 = 128LL;
  v50 = 0LL;
  v12 = 0LL;
  v44 = 0;
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
          Length = LdrpDllDirectory.Length;
LABEL_12:
          if ( !(_WORD)Length )
            break;
          v17 = Length + 2;
LABEL_14:
          v11 += v17;
          break;
        case 1:
          goto LABEL_68;
        case 2:
          v11 += RtlpSystemDirs.Length;
          if ( (_BYTE)v6 != 1 )
            break;
          v34 = (__int128 *)&RtlpSystemDirs;
          goto LABEL_61;
        case 3:
          RtlEnterCriticalSection(&FastPebLock);
          v14 = RtlQueryEnvironmentVariable(0LL, L"PATH", 4uLL, 0LL, 0LL, &ReturnLength);
          if ( v14 == -1073741789 )
          {
            Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, 2 * ReturnLength);
            v10 = Heap;
            if ( !Heap )
            {
              RtlLeaveCriticalSection(&FastPebLock);
              return v12;
            }
            v19 = RtlQueryEnvironmentVariable(0LL, L"PATH", 4uLL, Heap, ReturnLength, &ReturnLength);
            v9 = Size;
            v14 = v19;
          }
          RtlLeaveCriticalSection(&FastPebLock);
          if ( v14 == -1073741568 )
          {
            ReturnLength = 0LL;
            v14 = 0;
          }
          else
          {
            if ( v14 < 0 )
              goto LABEL_49;
            v11 += 2 * ReturnLength + 2;
          }
          v5 = v44;
          v8 = v47;
          break;
        case 4:
          v11 += 4LL;
          break;
        case 5:
          if ( a3 )
          {
            DirPath = (void *)RtlpGetDirPath(a3);
            v5 = v44;
            v8 = v47;
            v9 = Size;
            Src = DirPath;
          }
          if ( v9 )
          {
            v11 += v9 + 2;
            break;
          }
LABEL_68:
          v8 = (void *)RtlpGetDirPath(0LL);
          v5 = v44;
          v11 += v52 + 2;
          v47 = v8;
          break;
        case 6:
          v17 = (unsigned __int16)word_18017E218;
          goto LABEL_14;
        case 7:
          v11 += (unsigned __int16)RtlpSystem32Dirs;
          if ( v7 )
          {
            v41 = LdrpIncludeAlternateForwarders((unsigned int)(*v15 - 6), (unsigned __int16)RtlpSystem32Dirs, a3, v8);
            v8 = v47;
            v11 += v42 + 22;
            v43 = v41;
            if ( v41 )
              v11 += v42 + 30;
          }
          v5 = v44;
          if ( (_BYTE)v6 == 1 )
          {
            v34 = &RtlpSystem32Dirs;
LABEL_61:
            v50 = v34;
          }
          break;
        default:
          Length = (unsigned __int16)LdrpAppPackagesPath;
          goto LABEL_12;
      }
      ++v5;
      ++v15;
      v44 = v5;
      if ( v5 >= a2 )
      {
        v13 = (const void **)v50;
        v47 = v8;
        v48 = v14;
        if ( v11 - 128 <= 0xFFFE )
          break;
        v14 = -1073741562;
        goto LABEL_49;
      }
      a3 = v55;
      v7 = a4;
    }
  }
  v20 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
  v45 = (int *)v20;
  v12 = (int *)v20;
  if ( v20 )
  {
    v21 = a2;
    v22 = v20 + 64;
    v20[36] = a2;
    v23 = 0;
    *((_QWORD *)v20 + 11) = 0LL;
    *((_QWORD *)v20 + 12) = 0LL;
    *((_QWORD *)v20 + 13) = 0LL;
    *((_DWORD *)v20 + 28) = v11;
    *((_QWORD *)v20 + 15) = 0LL;
    if ( v13 )
    {
      *((_QWORD *)v20 + 3) = v22;
      v39 = 7;
      if ( &RtlpSystem32Dirs != (__int128 *)v13 )
        v39 = 2;
      *v12 = v39;
      memmove(v22, v13[1], *(unsigned __int16 *)v13);
      v24 = v43;
      v23 = 1;
      v22 += (unsigned __int64)*(unsigned __int16 *)v13 >> 1;
      if ( a4 )
      {
        LOBYTE(v40) = v43;
        v22 = (_WORD *)RtlpAddForwarderPath(v40, v22);
      }
      v21 = a2;
    }
    else
    {
      v24 = v43;
    }
    v25 = 0;
    if ( v21 )
    {
      v26 = v50;
      v27 = ReturnLength;
      v28 = v53;
      while ( 1 )
      {
        if ( v26 && (*v28 == 2 || *v28 == 7) )
          goto LABEL_46;
        v12[v23] = *v28;
        *(_QWORD *)&v12[2 * v23 + 6] = v22;
        switch ( *v28 )
        {
          case 0:
            if ( !LdrpDllDirectory.Length )
              goto LABEL_45;
            memmove(v22, LdrpDllDirectory.Buffer, LdrpDllDirectory.Length);
            v30 = LdrpDllDirectory.Length;
            goto LABEL_43;
          case 1:
            goto LABEL_69;
          case 2:
            memmove(v22, RtlpSystemDirs.Buffer, RtlpSystemDirs.Length);
            v22 += (unsigned __int64)RtlpSystemDirs.Length >> 1;
            goto LABEL_44;
          case 3:
            if ( !v27 )
              goto LABEL_45;
            memmove(v22, v10, 2 * v27);
            v35 = &v22[v27];
            v22 = v35 + 1;
            *v35 = 59;
            goto LABEL_44;
          case 4:
            *((_QWORD *)v12 + 15) = v22;
            *v22 = 46;
            v22 += 2;
            *(v22 - 1) = 59;
            goto LABEL_45;
        }
        if ( *v28 == 5 )
          break;
        if ( *v28 == 6 )
        {
          v37 = (void **)LdrpUserDllDirectories;
          if ( LdrpUserDllDirectories == (_UNKNOWN *)&LdrpUserDllDirectories )
            goto LABEL_45;
          do
          {
            memmove(v22, (char *)v37 + 18, *((unsigned __int16 *)v37 + 8));
            v38 = &v22[(unsigned __int64)*((unsigned __int16 *)v37 + 8) >> 1];
            *v38 = 59;
            v22 = v38 + 1;
            v37 = (void **)*v37;
          }
          while ( v37 != (void **)&LdrpUserDllDirectories );
          v12 = v45;
          v27 = ReturnLength;
          goto LABEL_44;
        }
        if ( *v28 == 7 )
        {
          memmove(v22, *((const void **)&RtlpSystem32Dirs + 1), (unsigned __int16)RtlpSystem32Dirs);
          v22 += (unsigned __int64)(unsigned __int16)RtlpSystem32Dirs >> 1;
          if ( a4 )
          {
            LOBYTE(v36) = v24;
            v22 = (_WORD *)RtlpAddForwarderPath(v36, v22);
          }
          goto LABEL_44;
        }
        if ( (_WORD)LdrpAppPackagesPath )
        {
          *(v22 - 1) = 0;
          memmove(v22, *((const void **)&LdrpAppPackagesPath + 1), (unsigned __int16)LdrpAppPackagesPath);
          v29 = LdrpAppPackagesPathVersion;
          *((_QWORD *)v12 + 13) = v22;
          *((_QWORD *)v12 + 12) = v29;
          v22 += ((unsigned __int64)(unsigned __int16)LdrpAppPackagesPath >> 1) + 1;
          goto LABEL_44;
        }
LABEL_45:
        v26 = v50;
        ++v23;
LABEL_46:
        v24 = v43;
        ++v28;
        ++v25;
        v53 = v28;
        if ( v25 >= v21 )
        {
          v14 = v48;
          goto LABEL_48;
        }
      }
      if ( Size )
      {
        memmove(v22, Src, Size);
        v30 = Size;
      }
      else
      {
LABEL_69:
        memmove(v22, v47, v52);
        v30 = v52;
      }
LABEL_43:
      v31 = &v22[v30 >> 1];
      v22 = v31 + 1;
      *v31 = 59;
LABEL_44:
      v28 = v53;
      v21 = a2;
      goto LABEL_45;
    }
LABEL_48:
    *(v22 - 1) = 0;
  }
  else
  {
    v14 = -1073741801;
  }
LABEL_49:
  if ( v10 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
  if ( v12 && v14 < 0 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
    return 0LL;
  }
  return v12;
}
