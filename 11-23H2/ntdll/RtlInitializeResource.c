/*
 * XREFs of RtlInitializeResource @ 0x18005C9D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlpFreeDebugInfo @ 0x18005AF10 (RtlpFreeDebugInfo.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18005CB50 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlInitializeCriticalSectionEx @ 0x18005CDF0 (RtlInitializeCriticalSectionEx.c)
 *     RtlCaptureStackBackTrace @ 0x18007A3C0 (RtlCaptureStackBackTrace.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x1800A11B0 (ZwAllocateVirtualMemory.c)
 *     ZwAlertThreadByThreadId @ 0x1800A1CA0 (ZwAlertThreadByThreadId.c)
 *     NtCreateSemaphore @ 0x1800A2740 (NtCreateSemaphore.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A4C40 (RtlpInterlockedPopEntrySList.c)
 *     RtlCompareMemory @ 0x1800A5A20 (RtlCompareMemory.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     RtlStdReleaseStackTrace @ 0x18010F620 (RtlStdReleaseStackTrace.c)
 *     RtlRaiseStatus @ 0x1801106A0 (RtlRaiseStatus.c)
 */

void __cdecl RtlInitializeResource(PRTL_RESOURCE Resource)
{
  _RTL_CRITICAL_SECTION_DEBUG *Heap; // rdi
  volatile signed __int32 *v3; // r12
  PRTL_SRWLOCK v4; // r14
  __int64 v5; // rsi
  int v6; // esi
  int v7; // esi
  void *ProcessHeap; // rcx
  USHORT v9; // ax
  __int64 v10; // r8
  _RTL_SRWLOCK *v11; // r13
  unsigned __int64 i; // r15
  SIZE_T v13; // rax
  signed __int64 v14; // rax
  __int64 v15; // rdx
  signed __int64 v16; // rcx
  signed __int64 v17; // rdx
  signed __int64 v18; // rtt
  bool v19; // zf
  signed __int64 v20; // rax
  _QWORD *v21; // r9
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rax
  unsigned int v25; // esi
  PSLIST_ENTRY v26; // rax
  PSLIST_ENTRY v27; // rsi
  unsigned __int64 v28; // rax
  unsigned __int64 Value; // r12
  void *Ptr; // rcx
  unsigned __int64 v31; // r15
  __int64 v32; // rcx
  __int16 v33; // cx
  bool v34; // sf
  signed __int64 v35; // rax
  __int64 v36; // rdx
  signed __int64 v37; // rcx
  signed __int64 v38; // rdx
  signed __int64 v39; // rtt
  signed __int64 v40; // rax
  _QWORD *v41; // r9
  __int64 v42; // rcx
  _QWORD *v43; // rax
  __int64 v44; // rax
  signed __int64 v45; // rax
  __int64 v46; // r15
  void *v47; // rax
  unsigned int v48; // ecx
  signed __int64 v49; // rax
  __int64 v50; // rsi
  void *v51; // rax
  unsigned int v52; // eax
  _DWORD *v53; // rcx
  _RTL_SRWLOCK *v54; // r13
  char *v55; // rcx
  unsigned __int64 v56; // rsi
  signed __int64 v57; // rax
  __int64 v58; // rdx
  signed __int64 v59; // rcx
  signed __int64 v60; // rdx
  signed __int64 v61; // rtt
  signed __int64 v62; // rax
  _QWORD *v63; // r9
  __int64 v64; // rcx
  _QWORD *v65; // rax
  __int64 v66; // rax
  signed __int64 v67; // rax
  __int64 v68; // rsi
  void *v69; // rax
  signed __int64 v70; // rax
  __int64 v71; // rdx
  signed __int64 v72; // rcx
  signed __int64 v73; // rdx
  signed __int64 v74; // rtt
  signed __int64 v75; // rax
  _QWORD *v76; // r9
  volatile signed __int32 *v77; // rcx
  _QWORD *v78; // rax
  __int64 v79; // rax
  signed __int64 v80; // rax
  void *v81; // rax
  PVOID v82; // [rsp+30h] [rbp-D0h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-C8h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE SemaphoreHandle; // [rsp+48h] [rbp-B8h] BYREF
  ULONG_PTR v86; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v87; // [rsp+58h] [rbp-A8h] BYREF
  USHORT v88; // [rsp+6Eh] [rbp-92h]
  PVOID BackTrace[32]; // [rsp+70h] [rbp-90h] BYREF
  ULONG BackTraceHash; // [rsp+1B8h] [rbp+B8h] BYREF
  SIZE_T Length; // [rsp+1C0h] [rbp+C0h]
  unsigned __int64 v92; // [rsp+1C8h] [rbp+C8h]

  Heap = (_RTL_CRITICAL_SECTION_DEBUG *)RtlpInterlockedPopEntrySList(&RtlCriticalSectionDebugSList);
  if ( !Heap )
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( !ProcessHeap )
LABEL_12:
      RtlRaiseStatus(-1073741801);
    Heap = (_RTL_CRITICAL_SECTION_DEBUG *)RtlAllocateHeap(ProcessHeap, 0, 0x30uLL);
  }
  if ( !Heap )
    goto LABEL_12;
  v3 = 0LL;
  Heap->ContentionCount = 0;
  v4 = RtlpStackTraceDatabase;
  if ( !RtlpStackTraceDatabase )
  {
    LODWORD(v5) = 0;
    goto LABEL_5;
  }
  v9 = RtlCaptureStackBackTrace(2u, 0x20u, BackTrace, &BackTraceHash);
  v88 = v9;
  if ( !v9 )
    goto LABEL_153;
  v10 = 8LL * v9;
  v11 = &v4[2 * (BackTraceHash % *(_DWORD *)&v4[90].0) + 91];
  Length = v10;
  _InterlockedIncrement((volatile signed __int32 *)&v4[22]);
  if ( !byte_180187488 )
  {
    RtlAcquireSRWLockExclusive(v11 + 1);
    v10 = Length;
  }
  for ( i = v11->Value; i; i = *(_QWORD *)i )
  {
    if ( *(_WORD *)(i + 14) == v88 )
    {
      v13 = RtlCompareMemory((const void *)(i + 16), BackTrace, v10);
      v10 = Length;
      if ( v13 == Length )
        goto LABEL_51;
    }
  }
  if ( !v88 )
  {
    i = 0LL;
LABEL_22:
    _InterlockedIncrement((volatile signed __int32 *)&v4[25]);
    goto LABEL_23;
  }
  v25 = v88 - 1;
  if ( v25 < 0x20 )
  {
    while ( 1 )
    {
      v26 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&v4[2 * v25 + 26]);
      if ( v26 )
        break;
      if ( ++v25 >= 0x20 )
      {
        v10 = Length;
        goto LABEL_43;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)&v4[24].Ptr + 1);
    v27 = v26 - 1;
    v10 = Length;
    goto LABEL_49;
  }
LABEL_43:
  v27 = 0LL;
  v28 = (8LL * v88 + 31) & 0xFFFFFFFFFFFFFFF0uLL;
  v92 = v28;
  if ( !byte_180187488 )
  {
    RtlAcquireSRWLockExclusive(v4);
    v28 = v92;
    v10 = Length;
  }
  Value = v4[20].Value;
  Ptr = v4[18].Ptr;
  BaseAddress = Ptr;
  v31 = v28 + Value;
  if ( !*(_BYTE *)&v4[16].0 )
  {
    if ( v31 > (unsigned __int64)Ptr )
    {
      RegionSize = (v28 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( (unsigned __int64)Ptr + RegionSize >= v4[19].Value )
      {
        LODWORD(v28) = v92;
        goto LABEL_59;
      }
      LODWORD(v28) = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
      v10 = Length;
      v34 = (v28 & 0x80000000) != 0LL;
      LODWORD(v28) = v92;
      if ( v34 )
        goto LABEL_59;
      v4[18].Value = (unsigned __int64)BaseAddress + RegionSize;
    }
LABEL_57:
    ++*(_DWORD *)&v4[24].0;
    v27 = (PSLIST_ENTRY)Value;
    v4[20].Value = v31;
    goto LABEL_59;
  }
  if ( v31 <= v4[21].Value )
    goto LABEL_57;
LABEL_59:
  v3 = 0LL;
  if ( !byte_180187488 )
  {
    v35 = _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, 1LL);
    if ( v35 != 1 )
    {
      do
      {
        v36 = 3LL;
        v37 = v35 & 6;
        if ( v37 != 2 )
          v36 = -1LL;
        v38 = v35 + v36;
        v39 = v35;
        v35 = _InterlockedCompareExchange64((volatile signed __int64 *)v4, v38, v35);
      }
      while ( v39 != v35 );
      if ( v37 == 2 )
      {
        while ( (v38 & 1) == 0 )
        {
LABEL_68:
          v41 = (_QWORD *)(v38 & 0xFFFFFFFFFFFFFFF0uLL);
          v42 = *(_QWORD *)((v38 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v42 )
          {
            do
            {
              v43 = v41;
              v41 = (_QWORD *)*v41;
              v41[2] = v43;
              v42 = v41[1];
            }
            while ( !v42 );
            if ( v41 != (_QWORD *)(v38 & 0xFFFFFFFFFFFFFFF0uLL) )
              *(_QWORD *)((v38 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v42;
          }
          if ( (*(_DWORD *)(v42 + 36) & 1) != 0 )
          {
            v44 = *(_QWORD *)(v42 + 16);
            if ( v44 )
            {
              *(_QWORD *)((v38 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v44;
              *(_QWORD *)(v42 + 16) = 0LL;
              _InterlockedAnd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFBuLL);
              do
              {
LABEL_76:
                v46 = *(_QWORD *)(v42 + 16);
                v47 = *(void **)(v42 + 24);
                _interlockedbittestandset((volatile signed __int32 *)(v42 + 36), 2u);
                if ( !_interlockedbittestandreset((volatile signed __int32 *)(v42 + 36), 1u) )
                  ZwAlertThreadByThreadId(v47);
                v42 = v46;
              }
              while ( v46 );
              goto LABEL_79;
            }
          }
          v45 = _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, v38);
          v19 = v38 == v45;
          v38 = v45;
          if ( v19 )
            goto LABEL_76;
        }
        while ( 1 )
        {
          v40 = _InterlockedCompareExchange64((volatile signed __int64 *)v4, v38 - 4, v38);
          v19 = v38 == v40;
          v38 = v40;
          if ( v19 )
            break;
          if ( (v40 & 1) == 0 )
            goto LABEL_68;
        }
LABEL_79:
        v10 = Length;
      }
    }
    LODWORD(v28) = v92;
  }
  i = (unsigned __int64)v27;
  if ( v27 )
  {
    v48 = ((unsigned int)(v28 - 16) >> 3) - 1;
    if ( v48 > 0x1F )
      LOWORD(v48) = 31;
    *((_WORD *)&v27->Next + 4) = ((_WORD)v48 << 11) | *(_WORD *)(&v27->Next + 1) & 0x7FF;
    goto LABEL_50;
  }
LABEL_49:
  i = (unsigned __int64)v27;
  if ( !v27 )
    goto LABEL_22;
LABEL_50:
  memmove(&v27[1], BackTrace, v10);
  *((_WORD *)&v27->Next + 7) = v88;
  *((_WORD *)&v27->Next + 4) &= 0xF800u;
  v32 = 2LL * (BackTraceHash % *(_DWORD *)&v4[90].0);
  v27->Next = (_SLIST_ENTRY *)v4[2 * (BackTraceHash % *(_DWORD *)&v4[90].0) + 91];
  v4[v32 + 91].Value = (unsigned __int64)v27;
LABEL_51:
  v33 = *(_WORD *)(i + 8);
  if ( (v33 & 0x7FF) != 0x7FF )
    *(_WORD *)(i + 8) = v33 ^ (v33 ^ (v33 + 1)) & 0x7FF;
LABEL_23:
  if ( !byte_180187488 )
  {
    v14 = _InterlockedCompareExchange64((volatile signed __int64 *)&v11[1], 0LL, 1LL);
    if ( v14 != 1 )
    {
      do
      {
        v15 = 3LL;
        v16 = v14 & 6;
        if ( v16 != 2 )
          v15 = -1LL;
        v17 = v14 + v15;
        v18 = v14;
        v14 = _InterlockedCompareExchange64((volatile signed __int64 *)&v11[1], v17, v14);
      }
      while ( v18 != v14 );
      if ( v16 == 2 )
      {
        while ( (v17 & 1) == 0 )
        {
LABEL_32:
          v10 = v17 & 0xFFFFFFFFFFFFFFF0uLL;
          v21 = (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0uLL);
          v22 = *(_QWORD *)((v17 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v22 )
          {
            do
            {
              v23 = v21;
              v21 = (_QWORD *)*v21;
              v21[2] = v23;
              v22 = v21[1];
            }
            while ( !v22 );
            if ( v21 != (_QWORD *)v10 )
              *(_QWORD *)((v17 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v22;
          }
          if ( (*(_DWORD *)(v22 + 36) & 1) != 0 )
          {
            v24 = *(_QWORD *)(v22 + 16);
            if ( v24 )
            {
              *(_QWORD *)((v17 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v24;
              *(_QWORD *)(v22 + 16) = 0LL;
              _InterlockedAnd64((volatile signed __int64 *)&v11[1], 0xFFFFFFFFFFFFFFFBuLL);
              do
              {
LABEL_86:
                v50 = *(_QWORD *)(v22 + 16);
                v51 = *(void **)(v22 + 24);
                _interlockedbittestandset((volatile signed __int32 *)(v22 + 36), 2u);
                if ( !_interlockedbittestandreset((volatile signed __int32 *)(v22 + 36), 1u) )
                  ZwAlertThreadByThreadId(v51);
                v22 = v50;
              }
              while ( v50 );
              goto LABEL_89;
            }
          }
          v49 = _InterlockedCompareExchange64((volatile signed __int64 *)&v11[1], 0LL, v17);
          v19 = v17 == v49;
          v17 = v49;
          if ( v19 )
            goto LABEL_86;
        }
        while ( 1 )
        {
          v20 = _InterlockedCompareExchange64((volatile signed __int64 *)&v11[1], v17 - 4, v17);
          v19 = v17 == v20;
          v17 = v20;
          if ( v19 )
            break;
          if ( (v20 & 1) == 0 )
            goto LABEL_32;
        }
      }
    }
  }
LABEL_89:
  if ( !i )
  {
LABEL_153:
    LODWORD(v5) = 0;
    goto LABEL_5;
  }
  v52 = 0;
  if ( *(_WORD *)(i + 14) )
  {
    v53 = (_DWORD *)(i + 16);
    v10 = *(unsigned __int16 *)(i + 14);
    do
    {
      v52 += *v53;
      v53 += 2;
      --v10;
    }
    while ( v10 );
  }
  v54 = &v4[2 * (v52 % *(_DWORD *)&v4[90].0)];
  if ( !byte_180187488 )
    RtlAcquireSRWLockExclusive(v54 + 92);
  if ( !*(_DWORD *)(i + 10) )
  {
    if ( !byte_180187488 )
      RtlAcquireSRWLockExclusive(v4);
    v55 = (char *)v4[19].Value;
    v56 = v4[21].Value - 8;
    v19 = v4[16].0 == 0;
    v82 = v55;
    if ( v19 )
    {
      if ( v56 < (unsigned __int64)v55 )
      {
        v86 = 4096LL;
        if ( (unsigned __int64)(v55 - 4096) <= v4[18].Value
          || (v82 = v55 - 4096, ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v82, 0LL, &v86, 0x1000u, 4u) < 0) )
        {
LABEL_106:
          if ( !byte_180187488 )
          {
            v57 = _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, 1LL);
            if ( v57 != 1 )
            {
              do
              {
                v58 = 3LL;
                v59 = v57 & 6;
                if ( v59 != 2 )
                  v58 = -1LL;
                v60 = v57 + v58;
                v61 = v57;
                v57 = _InterlockedCompareExchange64((volatile signed __int64 *)v4, v60, v57);
              }
              while ( v61 != v57 );
              if ( v59 == 2 )
              {
                while ( (v60 & 1) == 0 )
                {
LABEL_115:
                  v10 = v60 & 0xFFFFFFFFFFFFFFF0uLL;
                  v63 = (_QWORD *)(v60 & 0xFFFFFFFFFFFFFFF0uLL);
                  v64 = *(_QWORD *)((v60 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
                  if ( !v64 )
                  {
                    do
                    {
                      v65 = v63;
                      v63 = (_QWORD *)*v63;
                      v63[2] = v65;
                      v64 = v63[1];
                    }
                    while ( !v64 );
                    if ( v63 != (_QWORD *)v10 )
                      *(_QWORD *)((v60 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v64;
                  }
                  if ( (*(_DWORD *)(v64 + 36) & 1) != 0 )
                  {
                    v66 = *(_QWORD *)(v64 + 16);
                    if ( v66 )
                    {
                      *(_QWORD *)((v60 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v66;
                      *(_QWORD *)(v64 + 16) = 0LL;
                      _InterlockedAnd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFBuLL);
                      do
                      {
LABEL_123:
                        v68 = *(_QWORD *)(v64 + 16);
                        v69 = *(void **)(v64 + 24);
                        _interlockedbittestandset((volatile signed __int32 *)(v64 + 36), 2u);
                        if ( !_interlockedbittestandreset((volatile signed __int32 *)(v64 + 36), 1u) )
                          ZwAlertThreadByThreadId(v69);
                        v64 = v68;
                      }
                      while ( v68 );
                      goto LABEL_126;
                    }
                  }
                  v67 = _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, v60);
                  v19 = v60 == v67;
                  v60 = v67;
                  if ( v19 )
                    goto LABEL_123;
                }
                while ( 1 )
                {
                  v62 = _InterlockedCompareExchange64((volatile signed __int64 *)v4, v60 - 4, v60);
                  v19 = v60 == v62;
                  v60 = v62;
                  if ( v19 )
                    break;
                  if ( (v62 & 1) == 0 )
                    goto LABEL_115;
                }
              }
            }
          }
LABEL_126:
          if ( v3 )
          {
            *(_QWORD *)v3 = i;
            v5 = (__int64)(v4[23].Value - (_QWORD)v3) >> 3;
            *(_WORD *)(i + 12) = v5;
            *(_WORD *)(i + 10) = WORD1(v5);
            v3 = 0LL;
          }
          else
          {
            LODWORD(v5) = 0;
          }
          goto LABEL_130;
        }
        v4[19].Value = (unsigned __int64)v82;
      }
    }
    else if ( v56 < v4[20].Value )
    {
      goto LABEL_106;
    }
    ++HIDWORD(v4[22].Ptr);
    v3 = (volatile signed __int32 *)v56;
    v4[21].Value = v56;
    goto LABEL_106;
  }
  LODWORD(v5) = *(unsigned __int16 *)(i + 12) + (*(unsigned __int16 *)(i + 10) << 16);
LABEL_130:
  if ( !byte_180187488 )
  {
    v70 = _InterlockedCompareExchange64((volatile signed __int64 *)&v54[92], 0LL, 1LL);
    if ( v70 != 1 )
    {
      do
      {
        v71 = 3LL;
        v72 = v70 & 6;
        if ( v72 != 2 )
          v71 = -1LL;
        v73 = v70 + v71;
        v74 = v70;
        v70 = _InterlockedCompareExchange64((volatile signed __int64 *)&v54[92], v73, v70);
      }
      while ( v74 != v70 );
      if ( v72 == 2 )
      {
        while ( (v73 & 1) == 0 )
        {
LABEL_139:
          v10 = v73 & 0xFFFFFFFFFFFFFFF0uLL;
          v76 = (_QWORD *)(v73 & 0xFFFFFFFFFFFFFFF0uLL);
          v77 = *(volatile signed __int32 **)((v73 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v77 )
          {
            do
            {
              v78 = v76;
              v76 = (_QWORD *)*v76;
              v76[2] = v78;
              v77 = (volatile signed __int32 *)v76[1];
            }
            while ( !v77 );
            if ( v76 != (_QWORD *)v10 )
              *(_QWORD *)((v73 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v77;
          }
          if ( (v77[9] & 1) != 0 )
          {
            v79 = *((_QWORD *)v77 + 2);
            if ( v79 )
            {
              *(_QWORD *)((v73 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v79;
              *((_QWORD *)v77 + 2) = 0LL;
              _InterlockedAnd64((volatile signed __int64 *)&v54[92], 0xFFFFFFFFFFFFFFFBuLL);
              do
              {
LABEL_147:
                v3 = (volatile signed __int32 *)*((_QWORD *)v77 + 2);
                v81 = (void *)*((_QWORD *)v77 + 3);
                _interlockedbittestandset(v77 + 9, 2u);
                if ( !_interlockedbittestandreset(v77 + 9, 1u) )
                  ZwAlertThreadByThreadId(v81);
                v77 = v3;
              }
              while ( v3 );
              goto LABEL_150;
            }
          }
          v80 = _InterlockedCompareExchange64((volatile signed __int64 *)&v54[92], 0LL, v73);
          v19 = v73 == v80;
          v73 = v80;
          if ( v19 )
            goto LABEL_147;
        }
        while ( 1 )
        {
          v75 = _InterlockedCompareExchange64((volatile signed __int64 *)&v54[92], v73 - 4, v73);
          v19 = v73 == v75;
          v73 = v75;
          if ( v19 )
            break;
          if ( (v75 & 1) == 0 )
            goto LABEL_139;
        }
      }
    }
  }
LABEL_150:
  if ( !(_DWORD)v5 )
    RtlStdReleaseStackTrace(v4, i, v10);
LABEL_5:
  Heap->CreatorBackTraceIndex = v5;
  Heap->CreatorBackTraceIndexHigh = WORD1(v5);
  v6 = NtCreateSemaphore(&SemaphoreHandle, 0x100003u, 0LL, 0, 0x7FFFFFFF);
  if ( v6 < 0 )
  {
    RtlpFreeDebugInfo((int *)Heap);
    RtlRaiseStatus(v6);
  }
  v7 = NtCreateSemaphore(&v87, 0x100003u, 0LL, 0, 0x7FFFFFFF);
  if ( v7 < 0 )
  {
    NtClose(SemaphoreHandle);
    RtlpFreeDebugInfo((int *)Heap);
    RtlRaiseStatus(v7);
  }
  Resource->SharedSemaphore = SemaphoreHandle;
  Resource->ExclusiveSemaphore = v87;
  Resource->NumberOfWaitingShared = (unsigned int)v3;
  *(_QWORD *)&Resource->NumberOfWaitingExclusive = 0LL;
  Resource->ExclusiveOwnerThread = (HANDLE)v3;
  Resource->Flags = (unsigned int)v3;
  Resource->DebugInfo = Heap;
  RtlInitializeCriticalSectionEx(&Resource->CriticalSection, 0, 0x8000000u);
  RtlpAddDebugInfoToCriticalSection(Resource);
  if ( Resource->CriticalSection.DebugInfo != (_RTL_CRITICAL_SECTION_DEBUG *)-1LL )
    Resource->CriticalSection.DebugInfo->Type = 1;
}
