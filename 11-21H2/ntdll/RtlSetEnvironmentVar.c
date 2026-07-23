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

NTSTATUS __cdecl RtlSetEnvironmentVar(
        PVOID *Environment,
        PCWSTR Name,
        SIZE_T NameLength,
        PCWSTR Value,
        SIZE_T ValueLength)
{
  PCWSTR v5; // r12
  SIZE_T v6; // rbx
  unsigned __int64 i; // rax
  WCHAR v9; // cx
  SIZE_T j; // rax
  _PEB *ProcessEnvironmentBlock; // rcx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rdi
  PVOID v13; // r15
  char *v14; // rsi
  char *v15; // r14
  SIZE_T v16; // rdi
  char *v17; // r13
  unsigned __int64 v18; // r15
  char *v19; // rax
  PCWSTR v20; // r8
  char *v21; // r11
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // r10
  int v25; // ecx
  SIZE_T v26; // r13
  __int16 v27; // ax
  SIZE_T v28; // rax
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
  SIZE_T v45; // r15
  char *EnvBlock; // rsi
  char *v47; // rdi
  char *v48; // rdi
  _RTL_CRITICAL_SECTION *FastPebLock; // rcx
  LOGICAL IsCriticalSectionLockedByThread; // eax
  char v52; // [rsp+20h] [rbp-98h]
  char v53; // [rsp+21h] [rbp-97h]
  _RTL_USER_PROCESS_PARAMETERS *v54; // [rsp+28h] [rbp-90h]
  char *v55; // [rsp+30h] [rbp-88h]
  char *v56; // [rsp+30h] [rbp-88h]
  PVOID Src; // [rsp+38h] [rbp-80h]
  NTSTATUS v58; // [rsp+40h] [rbp-78h]
  char *v59; // [rsp+50h] [rbp-68h]
  SIZE_T v60; // [rsp+58h] [rbp-60h]
  char *v61; // [rsp+60h] [rbp-58h]
  const WCHAR *v63; // [rsp+C8h] [rbp+10h]

  v63 = Name;
  v5 = Value;
  v6 = NameLength;
  v59 = 0LL;
  v60 = 0LL;
  v52 = 0;
  v53 = 0;
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
  v54 = ProcessParameters;
  v58 = 0;
  v61 = 0LL;
  if ( Environment )
  {
    v13 = *Environment;
    Src = *Environment;
    if ( ProcessParameters->Environment == *Environment )
    {
      FastPebLock = ProcessEnvironmentBlock->FastPebLock;
      if ( !FastPebLock
        || (IsCriticalSectionLockedByThread = RtlIsCriticalSectionLockedByThread(FastPebLock),
            Name = v63,
            IsCriticalSectionLockedByThread) )
      {
        v52 = 1;
      }
    }
  }
  else
  {
    v53 = 1;
    v52 = 1;
    RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
    v13 = ProcessParameters->Environment;
    Src = v13;
    Name = v63;
  }
  v14 = (char *)v13;
  v15 = 0LL;
  if ( v13 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      if ( !*(_WORD *)v14 )
      {
        v5 = Value;
        v26 = ValueLength;
        ProcessParameters = v54;
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
          v59 = v14;
          while ( *(_WORD *)v14 )
            v14 += 2;
          v16 = (v14 - v19) >> 1;
          v60 = v16;
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
      while ( v20 < &Name[v22] )
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
      v25 = NameLength - v18;
LABEL_33:
      if ( !v25 )
        break;
      if ( v25 < 0 && !v61 )
        v61 = v17;
      v6 = NameLength;
      Name = v63;
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
    if ( Value )
    {
      v26 = ValueLength;
      if ( ValueLength > v16 )
      {
        v45 = 2 * (ValueLength + ((v15 - (_BYTE *)Src) >> 1) - v60);
        if ( v45 < RtlSizeHeap(NtCurrentPeb()->ProcessHeap, 0, Src) )
        {
          v48 = &v59[2 * ValueLength];
          memmove(v48 + 2, v14, 2 * (unsigned int)((v15 - v14) >> 1));
          *(_WORD *)v48 = 0;
          memmove(v59, Value, 2 * ValueLength);
          ProcessParameters = v54;
          if ( !Environment )
          {
            v54->Environment = Src;
            v54->EnvironmentSize = v45;
            ++v54->EnvironmentVersion;
          }
          if ( v52 )
            ((void (*)(void))RtlpClearEnvironmentHashTable)();
          v13 = Src;
          v6 = NameLength;
        }
        else
        {
          EnvBlock = (char *)RtlpAllocateEnvBlock(2 * (ValueLength + ((v15 - (_BYTE *)Src) >> 1) - v60));
          if ( !EnvBlock )
          {
            v58 = -1073741670;
            goto LABEL_71;
          }
          memmove(EnvBlock, Src, 2LL * (unsigned int)((v59 - (_BYTE *)Src) >> 1));
          v47 = &EnvBlock[2 * (unsigned int)((v59 - (_BYTE *)Src) >> 1)];
          memmove(v47, Value, 2 * ValueLength);
          *(_WORD *)&v47[2 * ValueLength] = 0;
          memmove(&v47[2 * ValueLength + 2], v55, 2 * (unsigned int)((v15 - v55) >> 1));
          ProcessParameters = v54;
          if ( Environment )
          {
            *Environment = EnvBlock;
          }
          else
          {
            v54->Environment = EnvBlock;
            v54->EnvironmentSize = v45;
            ++v54->EnvironmentVersion;
          }
          if ( v52 )
            ((void (*)(void))RtlpClearEnvironmentHashTable)();
          if ( v53 )
          {
            RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
            v53 = 0;
          }
          v13 = Src;
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Src);
          v14 = v55;
          v6 = NameLength;
        }
      }
      else
      {
        memmove(v59, Value, 2 * ValueLength);
        *(_WORD *)&v59[2 * ValueLength] = 0;
        v44 = &v59[2 * ValueLength + 2];
        if ( ValueLength != v16 )
          memmove(v44, v14, 2 * (unsigned int)((v15 - v14) >> 1));
        if ( v52 )
          RtlpClearEnvironmentHashTable(v44);
        ProcessParameters = v54;
        v13 = Src;
        v6 = NameLength;
      }
    }
    else
    {
      memmove(v17, v14, 2 * (unsigned int)((v15 - v14) >> 1));
      if ( v52 )
        ((void (*)(void))RtlpClearEnvironmentHashTable)();
      v26 = ValueLength;
      ProcessParameters = v54;
      v13 = Src;
      v6 = NameLength;
    }
  }
  else
  {
    v26 = ValueLength;
  }
LABEL_44:
  if ( v61 )
    v14 = v61;
  v56 = v14;
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
      v28 = RtlSizeHeap(NtCurrentPeb()->ProcessHeap, 0, v13);
      v15 = v14 + 2;
      v29 = 2 * (v26 + v6 + ((v14 + 2 - (_BYTE *)v13) >> 1)) + 4;
      v14 = v56;
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
      memmove(v14, v63, v39);
      if ( v52 )
        RtlpClearEnvironmentHashTable(v40);
      v41 = &v14[v39];
      *(_WORD *)v41 = 61;
      v41 += 2;
      memmove(v41, Value, 2 * v26);
      *(_WORD *)&v41[2 * v26] = 0;
      if ( !Environment )
      {
        ProcessParameters->Environment = v13;
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
        memmove(v33, v63, 2 * NameLength);
        v34 = &v33[2 * NameLength];
        *(_WORD *)v34 = 61;
        v35 = 2 * v26;
        memmove(v34 + 2, Value, 2 * v26);
        *(_WORD *)&v34[2 * v26 + 2] = 0;
        if ( v14 )
        {
          memmove(&v34[v35 + 4], v14, 2 * (unsigned int)((v15 - v14) >> 1));
          v37 = v52;
          if ( v52 )
            RtlpClearEnvironmentHashTable(v36);
        }
        else
        {
          *(_WORD *)&v34[v35 + 4] = 0;
          v37 = v52;
        }
        v38 = v54;
        if ( Environment )
        {
          *Environment = v31;
        }
        else
        {
          v54->Environment = v31;
          v54->EnvironmentSize = v29;
          ++v54->EnvironmentVersion;
        }
        if ( v53 )
        {
          RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
          v53 = 0;
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Src);
        goto LABEL_115;
      }
      v58 = -1073741670;
    }
  }
LABEL_71:
  v37 = v52;
  v38 = v54;
LABEL_115:
  if ( v58 >= 0 && v37 )
    ++v38->EnvironmentVersion;
  if ( v53 )
    RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  return v58;
}
