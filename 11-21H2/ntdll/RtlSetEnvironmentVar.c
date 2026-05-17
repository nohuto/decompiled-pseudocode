/*
 * XREFs of RtlSetEnvironmentVar @ 0x18000D0F0
 * Callers:
 *     RtlSetEnvironmentVariable @ 0x18000D0B0 (RtlSetEnvironmentVariable.c)
 * Callees:
 *     RtlpAllocateEnvBlock @ 0x18000DA4C (RtlpAllocateEnvBlock.c)
 *     RtlpClearEnvironmentHashTable @ 0x180025C30 (RtlpClearEnvironmentHashTable.c)
 *     RtlSizeHeap @ 0x1800270A0 (RtlSizeHeap.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     RtlIsCriticalSectionLockedByThread @ 0x18004D120 (RtlIsCriticalSectionLockedByThread.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

__int64 __fastcall RtlSetEnvironmentVar(void **a1, _WORD *a2, size_t a3, _WORD *a4, unsigned __int64 a5)
{
  _WORD *v5; // r12
  size_t v6; // rbx
  unsigned __int64 i; // rax
  __int16 v9; // cx
  unsigned __int64 j; // rax
  _PEB *ProcessEnvironmentBlock; // rcx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rdi
  void *Environment; // r15
  char *v14; // rsi
  char *v15; // r14
  unsigned __int64 v16; // rdi
  char *v17; // r13
  unsigned __int64 v18; // r15
  char *v19; // rax
  unsigned __int16 *v20; // r8
  char *v21; // r11
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // r10
  int v25; // ecx
  unsigned __int64 v26; // r13
  __int16 v27; // ax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r12
  char *v30; // rax
  char *v31; // r15
  __int64 v32; // rbx
  char *v33; // rdi
  char *v34; // rdi
  __int64 v35; // rbx
  __int64 v36; // rcx
  char v37; // di
  _RTL_USER_PROCESS_PARAMETERS *v38; // rbx
  size_t v39; // rbx
  __int64 v40; // rcx
  char *v41; // rsi
  char *v42; // r14
  __int16 v43; // ax
  char *v44; // rcx
  unsigned __int64 v45; // r15
  char *EnvBlock; // rsi
  char *v47; // rdi
  char *v48; // rdi
  int IsCriticalSectionLockedByThread; // eax
  char v51; // [rsp+20h] [rbp-98h]
  char v52; // [rsp+21h] [rbp-97h]
  _RTL_USER_PROCESS_PARAMETERS *v53; // [rsp+28h] [rbp-90h]
  char *v54; // [rsp+30h] [rbp-88h]
  char *v55; // [rsp+30h] [rbp-88h]
  void *Src; // [rsp+38h] [rbp-80h]
  int v57; // [rsp+40h] [rbp-78h]
  char *v58; // [rsp+50h] [rbp-68h]
  unsigned __int64 v59; // [rsp+58h] [rbp-60h]
  char *v60; // [rsp+60h] [rbp-58h]
  _WORD *v62; // [rsp+C8h] [rbp+10h]

  v62 = a2;
  v5 = a4;
  v6 = a3;
  v58 = 0LL;
  v59 = 0LL;
  v51 = 0;
  v52 = 0;
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
      if ( !a4[j] )
        return 3221225485LL;
    }
  }
  ProcessEnvironmentBlock = NtCurrentTeb()->ProcessEnvironmentBlock;
  ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
  v53 = ProcessParameters;
  v57 = 0;
  v60 = 0LL;
  if ( a1 )
  {
    Environment = *a1;
    Src = *a1;
    if ( ProcessParameters->Environment == *a1 )
    {
      if ( !ProcessEnvironmentBlock->FastPebLock
        || (IsCriticalSectionLockedByThread = RtlIsCriticalSectionLockedByThread(),
            a2 = v62,
            IsCriticalSectionLockedByThread) )
      {
        v51 = 1;
      }
    }
  }
  else
  {
    v52 = 1;
    v51 = 1;
    RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
    Environment = ProcessParameters->Environment;
    Src = Environment;
    a2 = v62;
  }
  v14 = (char *)Environment;
  v15 = 0LL;
  if ( Environment )
  {
    v16 = 0LL;
    while ( 1 )
    {
      if ( !*(_WORD *)v14 )
      {
        v5 = a4;
        v26 = a5;
        ProcessParameters = v53;
        goto LABEL_44;
      }
      v17 = v14;
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
          v58 = v14;
          while ( *(_WORD *)v14 )
            v14 += 2;
          v16 = (v14 - v19) >> 1;
          v59 = v16;
          break;
        }
      }
      v14 += 2;
      v54 = v14;
      v20 = a2;
      v21 = v17;
      v22 = v18;
      if ( v6 <= v18 )
        v22 = v6;
      while ( v20 < &a2[v22] )
      {
        v23 = *v20;
        v24 = *(unsigned __int16 *)v21;
        if ( (_WORD)v23 != (_WORD)v24 )
        {
          if ( (unsigned int)v23 >= 0x61 )
          {
            if ( (unsigned int)v23 > 0x7A )
            {
              if ( qword_1801776F8 && (unsigned __int16)v23 >= 0xC0u )
                LOWORD(v23) = *(_WORD *)(qword_1801776F8
                                       + 2
                                       * ((v23 & 0xF)
                                        + *(unsigned __int16 *)(qword_1801776F8
                                                              + 2LL
                                                              * (((unsigned __int8)v23 >> 4)
                                                               + (unsigned int)*(unsigned __int16 *)(qword_1801776F8 + 2 * (v23 >> 8))))))
                            + v23;
            }
            else
            {
              LOWORD(v23) = v23 - 32;
            }
          }
          if ( (unsigned int)v24 >= 0x61 )
          {
            if ( (unsigned int)v24 > 0x7A )
            {
              if ( qword_1801776F8 && (unsigned __int16)v24 >= 0xC0u )
                LOWORD(v24) = *(_WORD *)(qword_1801776F8
                                       + 2
                                       * ((v24 & 0xF)
                                        + *(unsigned __int16 *)(qword_1801776F8
                                                              + 2LL
                                                              * (((unsigned __int8)v24 >> 4)
                                                               + (unsigned int)*(unsigned __int16 *)(qword_1801776F8 + 2 * (v24 >> 8))))))
                            + v24;
            }
            else
            {
              LOWORD(v24) = v24 - 32;
            }
          }
          if ( (_WORD)v23 != (_WORD)v24 )
          {
            v25 = (unsigned __int16)v23 - (unsigned __int16)v24;
            goto LABEL_33;
          }
        }
        ++v20;
        v21 += 2;
      }
      v25 = a3 - v18;
LABEL_33:
      if ( !v25 )
        break;
      if ( v25 < 0 && !v60 )
        v60 = v17;
      v6 = a3;
      a2 = v62;
      Environment = Src;
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
    v5 = a4;
    if ( a4 )
    {
      v26 = a5;
      if ( a5 > v16 )
      {
        v45 = 2 * (a5 + ((v15 - (_BYTE *)Src) >> 1) - v59);
        if ( v45 < RtlSizeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Src) )
        {
          v48 = &v58[2 * a5];
          memmove(v48 + 2, v14, 2 * (unsigned int)((v15 - v14) >> 1));
          *(_WORD *)v48 = 0;
          memmove(v58, a4, 2 * a5);
          ProcessParameters = v53;
          if ( !a1 )
          {
            v53->Environment = Src;
            v53->EnvironmentSize = v45;
            ++v53->EnvironmentVersion;
          }
          if ( v51 )
            ((void (*)(void))RtlpClearEnvironmentHashTable)();
          Environment = Src;
          v6 = a3;
        }
        else
        {
          EnvBlock = (char *)RtlpAllocateEnvBlock(2 * (a5 + ((v15 - (_BYTE *)Src) >> 1) - v59));
          if ( !EnvBlock )
          {
            v57 = -1073741670;
            goto LABEL_71;
          }
          memmove(EnvBlock, Src, 2LL * (unsigned int)((v58 - (_BYTE *)Src) >> 1));
          v47 = &EnvBlock[2 * (unsigned int)((v58 - (_BYTE *)Src) >> 1)];
          memmove(v47, a4, 2 * a5);
          *(_WORD *)&v47[2 * a5] = 0;
          memmove(&v47[2 * a5 + 2], v54, 2 * (unsigned int)((v15 - v54) >> 1));
          ProcessParameters = v53;
          if ( a1 )
          {
            *a1 = EnvBlock;
          }
          else
          {
            v53->Environment = EnvBlock;
            v53->EnvironmentSize = v45;
            ++v53->EnvironmentVersion;
          }
          if ( v51 )
            ((void (*)(void))RtlpClearEnvironmentHashTable)();
          if ( v52 )
          {
            RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
            v52 = 0;
          }
          Environment = Src;
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Src);
          v14 = v54;
          v6 = a3;
        }
      }
      else
      {
        memmove(v58, a4, 2 * a5);
        *(_WORD *)&v58[2 * a5] = 0;
        v44 = &v58[2 * a5 + 2];
        if ( a5 != v16 )
          memmove(v44, v14, 2 * (unsigned int)((v15 - v14) >> 1));
        if ( v51 )
          RtlpClearEnvironmentHashTable(v44);
        ProcessParameters = v53;
        Environment = Src;
        v6 = a3;
      }
    }
    else
    {
      memmove(v17, v14, 2 * (unsigned int)((v15 - v14) >> 1));
      if ( v51 )
        ((void (*)(void))RtlpClearEnvironmentHashTable)();
      v26 = a5;
      ProcessParameters = v53;
      Environment = Src;
      v6 = a3;
    }
  }
  else
  {
    v26 = a5;
  }
LABEL_44:
  if ( v60 )
    v14 = v60;
  v55 = v14;
  if ( !v15 && v5 )
  {
    if ( v14 )
    {
      while ( 1 )
      {
        v27 = *(_WORD *)v14;
        if ( !*(_WORD *)v14 )
          break;
        while ( 1 )
        {
          v14 += 2;
          if ( !v27 )
            break;
          v27 = *(_WORD *)v14;
        }
      }
      v28 = RtlSizeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Environment);
      v15 = v14 + 2;
      v29 = 2 * (v26 + v6 + ((v14 + 2 - (_BYTE *)Environment) >> 1)) + 4;
      v14 = v55;
    }
    else
    {
      v29 = 2 * (v6 + v26) + 6;
      v28 = 0LL;
    }
    if ( v29 < v28 )
    {
      memmove(&v14[2 * v6 + 4 + 2 * v26], v14, 2 * (unsigned int)((v15 - v14) >> 1));
      v39 = 2 * v6;
      memmove(v14, v62, v39);
      if ( v51 )
        RtlpClearEnvironmentHashTable(v40);
      v41 = &v14[v39];
      *(_WORD *)v41 = 61;
      v41 += 2;
      memmove(v41, a4, 2 * v26);
      *(_WORD *)&v41[2 * v26] = 0;
      if ( !a1 )
      {
        ProcessParameters->Environment = Environment;
        ProcessParameters->EnvironmentSize = v29;
        ++ProcessParameters->EnvironmentVersion;
      }
    }
    else
    {
      v30 = (char *)RtlpAllocateEnvBlock(v29);
      v31 = v30;
      if ( v30 )
      {
        if ( v14 )
        {
          v32 = (unsigned int)((v14 - (_BYTE *)Src) >> 1);
          memmove(v30, Src, 2 * v32);
        }
        else
        {
          v32 = 0LL;
        }
        v33 = &v31[2 * v32];
        memmove(v33, v62, 2 * a3);
        v34 = &v33[2 * a3];
        *(_WORD *)v34 = 61;
        v35 = 2 * v26;
        memmove(v34 + 2, a4, 2 * v26);
        *(_WORD *)&v34[2 * v26 + 2] = 0;
        if ( v14 )
        {
          memmove(&v34[v35 + 4], v14, 2 * (unsigned int)((v15 - v14) >> 1));
          v37 = v51;
          if ( v51 )
            RtlpClearEnvironmentHashTable(v36);
        }
        else
        {
          *(_WORD *)&v34[v35 + 4] = 0;
          v37 = v51;
        }
        v38 = v53;
        if ( a1 )
        {
          *a1 = v31;
        }
        else
        {
          v53->Environment = v31;
          v53->EnvironmentSize = v29;
          ++v53->EnvironmentVersion;
        }
        if ( v52 )
        {
          RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
          v52 = 0;
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Src);
        goto LABEL_115;
      }
      v57 = -1073741670;
    }
  }
LABEL_71:
  v37 = v51;
  v38 = v53;
LABEL_115:
  if ( v57 >= 0 && v37 )
    ++v38->EnvironmentVersion;
  if ( v52 )
    RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  return (unsigned int)v57;
}
