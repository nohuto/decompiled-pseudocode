/*
 * XREFs of RtlSetEnvironmentVar @ 0x180014C10
 * Callers:
 *     RtlSetEnvironmentVariable @ 0x180058E30 (RtlSetEnvironmentVariable.c)
 * Callees:
 *     RtlpAllocateEnvBlock @ 0x1800142D4 (RtlpAllocateEnvBlock.c)
 *     NLS_UPCASE @ 0x1800154D8 (NLS_UPCASE.c)
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180027020 (RtlLeaveCriticalSection.c)
 *     RtlSizeHeap @ 0x18003AA50 (RtlSizeHeap.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlpClearEnvironmentHashTable @ 0x18006C27C (RtlpClearEnvironmentHashTable.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

NTSTATUS __cdecl RtlSetEnvironmentVar(
        PVOID *Environment,
        PCWSTR Name,
        SIZE_T NameLength,
        PCWSTR Value,
        SIZE_T ValueLength)
{
  PCWSTR v5; // r13
  SIZE_T v6; // rdi
  unsigned __int64 i; // rax
  WCHAR v9; // cx
  SIZE_T j; // rax
  _PEB *ProcessEnvironmentBlock; // rcx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r12
  PVOID v13; // rbx
  char *v14; // rsi
  char *v15; // r14
  SIZE_T v16; // r12
  char *v17; // rcx
  unsigned __int64 v18; // r13
  char *v19; // rax
  PCWSTR v20; // r10
  char *v21; // rbx
  unsigned __int64 v22; // rax
  const WCHAR *v23; // rdi
  __int64 v24; // rdx
  int v25; // r15d
  unsigned __int16 v26; // r11
  unsigned __int16 v27; // ax
  int v28; // eax
  SIZE_T v29; // r15
  __int16 v30; // ax
  SIZE_T v31; // rax
  SIZE_T v32; // r12
  SIZE_T v33; // rcx
  char *v34; // r15
  __int64 v35; // rbx
  char *v36; // rdi
  char *v37; // rdi
  SIZE_T v38; // rbx
  __int64 v39; // rcx
  char v40; // bl
  _RTL_USER_PROCESS_PARAMETERS *v41; // rcx
  char *v42; // r14
  __int16 v43; // ax
  char *v44; // rcx
  SIZE_T v45; // r15
  char *EnvBlock; // rsi
  char *v47; // rdi
  __int64 v48; // rcx
  char *v49; // rsi
  char *v50; // rdi
  _RTL_CRITICAL_SECTION *FastPebLock; // rdx
  char v53; // [rsp+20h] [rbp-98h]
  char v54; // [rsp+21h] [rbp-97h]
  char *v55; // [rsp+28h] [rbp-90h]
  char *v56; // [rsp+28h] [rbp-90h]
  PVOID Src; // [rsp+30h] [rbp-88h]
  NTSTATUS v58; // [rsp+38h] [rbp-80h]
  _RTL_USER_PROCESS_PARAMETERS *v59; // [rsp+40h] [rbp-78h]
  char *v60; // [rsp+50h] [rbp-68h]
  SIZE_T v61; // [rsp+58h] [rbp-60h]
  char *v62; // [rsp+60h] [rbp-58h]
  char *v63; // [rsp+68h] [rbp-50h]
  const WCHAR *v65; // [rsp+C8h] [rbp+10h]

  v65 = Name;
  v5 = Value;
  v6 = NameLength;
  v60 = 0LL;
  v61 = 0LL;
  v53 = 0;
  v54 = 0;
  if ( !v6 || !*Name )
    return -1073741811;
  for ( i = 1LL; i < v6; ++i )
  {
    v9 = Name[i];
    if ( !v9 || v9 == 61 )
      return -1073741811;
  }
  if ( Value )
  {
    for ( j = 0LL; j < ValueLength; ++j )
    {
      if ( !Value[j] )
        return -1073741811;
    }
  }
  ProcessEnvironmentBlock = NtCurrentTeb()->ProcessEnvironmentBlock;
  ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
  v59 = ProcessParameters;
  v58 = 0;
  v62 = 0LL;
  if ( Environment )
  {
    v13 = *Environment;
    Src = *Environment;
    if ( ProcessParameters->Environment != *Environment )
      goto LABEL_15;
    FastPebLock = ProcessEnvironmentBlock->FastPebLock;
    if ( !FastPebLock || FastPebLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
      v53 = 1;
  }
  else
  {
    v54 = 1;
    v53 = 1;
    RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
    v13 = ProcessParameters->Environment;
    Src = v13;
  }
  Name = v65;
LABEL_15:
  v14 = (char *)v13;
  v15 = 0LL;
  if ( !v13 )
  {
LABEL_38:
    v29 = ValueLength;
    goto LABEL_39;
  }
  v16 = 0LL;
  while ( 1 )
  {
    if ( !*(_WORD *)v14 )
      goto LABEL_38;
    v17 = v14;
    v63 = v14;
    v18 = 0LL;
    while ( 1 )
    {
      v14 += 2;
      if ( !*(_WORD *)v14 )
        break;
      if ( *(_WORD *)v14 == 61 )
      {
        v18 = (v14 - v17) >> 1;
        v14 += 2;
        v19 = v14;
        v60 = v14;
        while ( *(_WORD *)v14 )
          v14 += 2;
        v16 = (v14 - v19) >> 1;
        v61 = v16;
        break;
      }
    }
    v14 += 2;
    v55 = v14;
    v20 = Name;
    v21 = v17;
    v22 = v18;
    if ( v6 <= v18 )
      v22 = v6;
    v23 = &Name[v22];
    while ( v20 < v23 )
    {
      v24 = *v20;
      if ( (_WORD)v24 != *(_WORD *)v21 )
      {
        v25 = (unsigned __int16)NLS_UPCASE(qword_180184808, v24);
        v27 = NLS_UPCASE(qword_180184808, v26);
        if ( (_WORD)v25 != v27 )
        {
          v28 = v25 - v27;
          goto LABEL_32;
        }
      }
      ++v20;
      v21 += 2;
    }
    v28 = NameLength - v18;
LABEL_32:
    if ( !v28 )
      break;
    if ( v28 < 0 && !v62 )
      v62 = v63;
    v5 = Value;
    v6 = NameLength;
    Name = v65;
    v13 = Src;
  }
  v42 = v14;
  while ( 1 )
  {
    v43 = *(_WORD *)v42;
    if ( !*(_WORD *)v42 )
      break;
    while ( 1 )
    {
      v42 += 2;
      if ( !v43 )
        break;
      v43 = *(_WORD *)v42;
    }
  }
  v15 = v42 + 2;
  v5 = Value;
  if ( !Value )
  {
    memmove(v63, v14, 2 * (unsigned int)((v15 - v14) >> 1));
    if ( v53 )
      ((void (*)(void))RtlpClearEnvironmentHashTable)();
    v29 = ValueLength;
    goto LABEL_75;
  }
  v29 = ValueLength;
  if ( ValueLength <= v16 )
  {
    memmove(v60, Value, 2 * ValueLength);
    *(_WORD *)&v60[2 * ValueLength] = 0;
    v44 = &v60[2 * ValueLength + 2];
    if ( ValueLength != v16 )
      memmove(v44, v14, 2 * (unsigned int)((v15 - v14) >> 1));
    if ( v53 )
      RtlpClearEnvironmentHashTable(v44);
LABEL_75:
    v13 = Src;
    v6 = NameLength;
    goto LABEL_39;
  }
  v45 = 2 * (ValueLength + ((v15 - (_BYTE *)Src) >> 1) - v61);
  if ( v45 >= RtlSizeHeap(NtCurrentPeb()->ProcessHeap, 0, Src) )
  {
    EnvBlock = (char *)RtlpAllocateEnvBlock(2 * (ValueLength + ((v15 - (_BYTE *)Src) >> 1) - v61));
    if ( !EnvBlock )
    {
LABEL_102:
      v58 = -1073741670;
      goto LABEL_103;
    }
    memmove(EnvBlock, Src, 2LL * (unsigned int)((v60 - (_BYTE *)Src) >> 1));
    v47 = &EnvBlock[2 * (unsigned int)((v60 - (_BYTE *)Src) >> 1)];
    memmove(v47, Value, 2 * ValueLength);
    *(_WORD *)&v47[2 * ValueLength] = 0;
    memmove(&v47[2 * ValueLength + 2], v55, 2 * (unsigned int)((v15 - v55) >> 1));
    if ( Environment )
    {
      *Environment = EnvBlock;
    }
    else
    {
      v59->Environment = EnvBlock;
      v59->EnvironmentSize = v45;
      ++v59->EnvironmentVersion;
    }
    if ( v53 )
      ((void (*)(void))RtlpClearEnvironmentHashTable)();
    if ( v54 )
    {
      RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
      v54 = 0;
    }
    v13 = Src;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Src);
    v14 = v55;
    goto LABEL_85;
  }
  v50 = &v60[2 * ValueLength];
  memmove(v50 + 2, v14, 2 * (unsigned int)((v15 - v14) >> 1));
  *(_WORD *)v50 = 0;
  memmove(v60, Value, 2 * ValueLength);
  v13 = Src;
  if ( !Environment )
  {
    v59->Environment = Src;
    v59->EnvironmentSize = v45;
    ++v59->EnvironmentVersion;
  }
  if ( !v53 )
  {
LABEL_85:
    v29 = ValueLength;
    v6 = NameLength;
    goto LABEL_39;
  }
  ((void (*)(void))RtlpClearEnvironmentHashTable)();
  v29 = ValueLength;
  v6 = NameLength;
LABEL_39:
  if ( v62 )
    v14 = v62;
  v56 = v14;
  if ( v15 )
  {
    v41 = v59;
    v40 = v53;
  }
  else
  {
    if ( !v5 )
    {
LABEL_103:
      v40 = v53;
LABEL_61:
      v41 = v59;
      goto LABEL_104;
    }
    if ( v14 )
    {
      while ( 1 )
      {
        v30 = *(_WORD *)v14;
        if ( !*(_WORD *)v14 )
          break;
        while ( 1 )
        {
          v14 += 2;
          if ( !v30 )
            break;
          v30 = *(_WORD *)v14;
        }
      }
      v31 = RtlSizeHeap(NtCurrentPeb()->ProcessHeap, 0, v13);
      v15 = v14 + 2;
      v32 = 2 * (v29 + v6 + ((v14 + 2 - (_BYTE *)v13) >> 1)) + 4;
      v33 = v29 + v6;
      v14 = v56;
    }
    else
    {
      v33 = v6 + v29;
      v32 = 2 * (v6 + v29) + 6;
      v31 = 0LL;
    }
    if ( v32 >= v31 )
    {
      v34 = (char *)RtlpAllocateEnvBlock(v32);
      if ( v34 )
      {
        if ( v14 )
        {
          v35 = (unsigned int)((v14 - (_BYTE *)v13) >> 1);
          memmove(v34, Src, 2 * v35);
        }
        else
        {
          v35 = 0LL;
        }
        v36 = &v34[2 * v35];
        memmove(v36, v65, 2 * NameLength);
        v37 = &v36[2 * NameLength];
        *(_WORD *)v37 = 61;
        v38 = 2 * ValueLength;
        memmove(v37 + 2, v5, 2 * ValueLength);
        *(_WORD *)&v37[2 * ValueLength + 2] = 0;
        if ( v14 )
        {
          memmove(&v37[v38 + 4], v14, 2 * (unsigned int)((v15 - v14) >> 1));
          v40 = v53;
          if ( v53 )
            RtlpClearEnvironmentHashTable(v39);
        }
        else
        {
          *(_WORD *)&v37[v38 + 4] = 0;
          v40 = v53;
        }
        if ( Environment )
        {
          *Environment = v34;
        }
        else
        {
          v59->Environment = v34;
          v59->EnvironmentSize = v32;
          ++v59->EnvironmentVersion;
        }
        if ( v54 )
        {
          RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
          v54 = 0;
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Src);
        goto LABEL_61;
      }
      goto LABEL_102;
    }
    memmove(&v14[2 * v33 + 4], v14, 2 * (unsigned int)((v15 - v14) >> 1));
    memmove(v14, v65, 2 * v6);
    if ( v53 )
      RtlpClearEnvironmentHashTable(v48);
    v49 = &v14[2 * v6];
    *(_WORD *)v49 = 61;
    v49 += 2;
    memmove(v49, v5, 2 * v29);
    *(_WORD *)&v49[2 * v29] = 0;
    if ( Environment )
      goto LABEL_103;
    v41 = v59;
    v59->Environment = Src;
    v59->EnvironmentSize = v32;
    ++v59->EnvironmentVersion;
    v40 = v53;
  }
LABEL_104:
  if ( v58 >= 0 && v40 )
    ++v41->EnvironmentVersion;
  if ( v54 )
    RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  return v58;
}
