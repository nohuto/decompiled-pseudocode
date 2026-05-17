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

__int64 __fastcall RtlSetEnvironmentVar(void **a1, _WORD *a2, unsigned __int64 a3, const void *a4, unsigned __int64 a5)
{
  const void *v5; // r13
  unsigned __int64 v6; // rdi
  unsigned __int64 i; // rax
  __int16 v9; // cx
  unsigned __int64 j; // rax
  _PEB *ProcessEnvironmentBlock; // rcx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r12
  void *Environment; // rbx
  _WORD *v14; // rsi
  char *v15; // r14
  unsigned __int64 v16; // r12
  _WORD *v17; // rcx
  unsigned __int64 v18; // r13
  _WORD *v19; // rax
  unsigned __int16 *v20; // r10
  _WORD *v21; // rbx
  unsigned __int64 v22; // rax
  unsigned __int16 *v23; // rdi
  __int64 v24; // rdx
  int v25; // r15d
  unsigned __int16 v26; // r11
  unsigned __int16 v27; // ax
  int v28; // eax
  unsigned __int64 v29; // r15
  __int16 v30; // ax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r12
  unsigned __int64 v33; // rcx
  char *v34; // r15
  __int64 v35; // rbx
  char *v36; // rdi
  char *v37; // rdi
  __int64 v38; // rbx
  __int64 v39; // rcx
  char v40; // bl
  _RTL_USER_PROCESS_PARAMETERS *v41; // rcx
  _WORD *v42; // r14
  __int16 v43; // ax
  char *v44; // rcx
  unsigned __int64 v45; // r15
  char *EnvBlock; // rsi
  char *v47; // rdi
  __int64 v48; // rcx
  _WORD *v49; // rsi
  char *v50; // rdi
  _RTL_CRITICAL_SECTION *FastPebLock; // rdx
  char v53; // [rsp+20h] [rbp-98h]
  char v54; // [rsp+21h] [rbp-97h]
  _WORD *v55; // [rsp+28h] [rbp-90h]
  _WORD *v56; // [rsp+28h] [rbp-90h]
  void *Src; // [rsp+30h] [rbp-88h]
  int v58; // [rsp+38h] [rbp-80h]
  _RTL_USER_PROCESS_PARAMETERS *v59; // [rsp+40h] [rbp-78h]
  char *v60; // [rsp+50h] [rbp-68h]
  unsigned __int64 v61; // [rsp+58h] [rbp-60h]
  _WORD *v62; // [rsp+60h] [rbp-58h]
  _WORD *v63; // [rsp+68h] [rbp-50h]
  _WORD *v65; // [rsp+C8h] [rbp+10h]

  v65 = a2;
  v5 = a4;
  v6 = a3;
  v60 = 0LL;
  v61 = 0LL;
  v53 = 0;
  v54 = 0;
  if ( !v6 || !*a2 )
    return 3221225485LL;
  for ( i = 1LL; i < v6; ++i )
  {
    v9 = a2[i];
    if ( !v9 || v9 == 61 )
      return 3221225485LL;
  }
  if ( a4 )
  {
    for ( j = 0LL; j < a5; ++j )
    {
      if ( !*((_WORD *)a4 + j) )
        return 3221225485LL;
    }
  }
  ProcessEnvironmentBlock = NtCurrentTeb()->ProcessEnvironmentBlock;
  ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
  v59 = ProcessParameters;
  v58 = 0;
  v62 = 0LL;
  if ( a1 )
  {
    Environment = *a1;
    Src = *a1;
    if ( ProcessParameters->Environment != *a1 )
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
    Environment = ProcessParameters->Environment;
    Src = Environment;
  }
  a2 = v65;
LABEL_15:
  v14 = Environment;
  v15 = 0LL;
  if ( !Environment )
  {
LABEL_38:
    v29 = a5;
    goto LABEL_39;
  }
  v16 = 0LL;
  while ( 1 )
  {
    if ( !*v14 )
      goto LABEL_38;
    v17 = v14;
    v63 = v14;
    v18 = 0LL;
    while ( *++v14 )
    {
      if ( *v14 == 61 )
      {
        v18 = v14 - v17;
        v19 = ++v14;
        v60 = (char *)v14;
        while ( *v14 )
          ++v14;
        v16 = v14 - v19;
        v61 = v16;
        break;
      }
    }
    v55 = ++v14;
    v20 = a2;
    v21 = v17;
    v22 = v18;
    if ( v6 <= v18 )
      v22 = v6;
    v23 = &a2[v22];
    while ( v20 < v23 )
    {
      v24 = *v20;
      if ( (_WORD)v24 != *v21 )
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
      ++v21;
    }
    v28 = a3 - v18;
LABEL_32:
    if ( !v28 )
      break;
    if ( v28 < 0 && !v62 )
      v62 = v63;
    v5 = a4;
    v6 = a3;
    a2 = v65;
    Environment = Src;
  }
  v42 = v14;
  while ( 1 )
  {
    v43 = *v42;
    if ( !*v42 )
      break;
    while ( 1 )
    {
      ++v42;
      if ( !v43 )
        break;
      v43 = *v42;
    }
  }
  v15 = (char *)(v42 + 1);
  v5 = a4;
  if ( !a4 )
  {
    memmove(v63, v14, 2 * (unsigned int)((v15 - (char *)v14) >> 1));
    if ( v53 )
      ((void (*)(void))RtlpClearEnvironmentHashTable)();
    v29 = a5;
    goto LABEL_75;
  }
  v29 = a5;
  if ( a5 <= v16 )
  {
    memmove(v60, a4, 2 * a5);
    *(_WORD *)&v60[2 * a5] = 0;
    v44 = &v60[2 * a5 + 2];
    if ( a5 != v16 )
      memmove(v44, v14, 2 * (unsigned int)((v15 - (char *)v14) >> 1));
    if ( v53 )
      RtlpClearEnvironmentHashTable(v44);
LABEL_75:
    Environment = Src;
    v6 = a3;
    goto LABEL_39;
  }
  v45 = 2 * (a5 + ((v15 - (_BYTE *)Src) >> 1) - v61);
  if ( v45 >= RtlSizeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Src) )
  {
    EnvBlock = (char *)RtlpAllocateEnvBlock(2 * (a5 + ((v15 - (_BYTE *)Src) >> 1) - v61));
    if ( !EnvBlock )
    {
LABEL_102:
      v58 = -1073741670;
      goto LABEL_103;
    }
    memmove(EnvBlock, Src, 2LL * (unsigned int)((v60 - (_BYTE *)Src) >> 1));
    v47 = &EnvBlock[2 * (unsigned int)((v60 - (_BYTE *)Src) >> 1)];
    memmove(v47, a4, 2 * a5);
    *(_WORD *)&v47[2 * a5] = 0;
    memmove(&v47[2 * a5 + 2], v55, 2 * (unsigned int)((v15 - (char *)v55) >> 1));
    if ( a1 )
    {
      *a1 = EnvBlock;
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
    Environment = Src;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Src);
    v14 = v55;
    goto LABEL_85;
  }
  v50 = &v60[2 * a5];
  memmove(v50 + 2, v14, 2 * (unsigned int)((v15 - (char *)v14) >> 1));
  *(_WORD *)v50 = 0;
  memmove(v60, a4, 2 * a5);
  Environment = Src;
  if ( !a1 )
  {
    v59->Environment = Src;
    v59->EnvironmentSize = v45;
    ++v59->EnvironmentVersion;
  }
  if ( !v53 )
  {
LABEL_85:
    v29 = a5;
    v6 = a3;
    goto LABEL_39;
  }
  ((void (*)(void))RtlpClearEnvironmentHashTable)();
  v29 = a5;
  v6 = a3;
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
        v30 = *v14;
        if ( !*v14 )
          break;
        while ( 1 )
        {
          ++v14;
          if ( !v30 )
            break;
          v30 = *v14;
        }
      }
      v31 = RtlSizeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Environment);
      v15 = (char *)(v14 + 1);
      v32 = 2 * (v29 + v6 + (((char *)(v14 + 1) - (_BYTE *)Environment) >> 1)) + 4;
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
          v35 = (unsigned int)(((char *)v14 - (_BYTE *)Environment) >> 1);
          memmove(v34, Src, 2 * v35);
        }
        else
        {
          v35 = 0LL;
        }
        v36 = &v34[2 * v35];
        memmove(v36, v65, 2 * a3);
        v37 = &v36[2 * a3];
        *(_WORD *)v37 = 61;
        v38 = 2 * a5;
        memmove(v37 + 2, v5, 2 * a5);
        *(_WORD *)&v37[2 * a5 + 2] = 0;
        if ( v14 )
        {
          memmove(&v37[v38 + 4], v14, 2 * (unsigned int)((v15 - (char *)v14) >> 1));
          v40 = v53;
          if ( v53 )
            RtlpClearEnvironmentHashTable(v39);
        }
        else
        {
          *(_WORD *)&v37[v38 + 4] = 0;
          v40 = v53;
        }
        if ( a1 )
        {
          *a1 = v34;
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
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Src);
        goto LABEL_61;
      }
      goto LABEL_102;
    }
    memmove(&v14[v33 + 2], v14, 2 * (unsigned int)((v15 - (char *)v14) >> 1));
    memmove(v14, v65, 2 * v6);
    if ( v53 )
      RtlpClearEnvironmentHashTable(v48);
    v49 = &v14[v6];
    *v49++ = 61;
    memmove(v49, v5, 2 * v29);
    v49[v29] = 0;
    if ( a1 )
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
  return (unsigned int)v58;
}
