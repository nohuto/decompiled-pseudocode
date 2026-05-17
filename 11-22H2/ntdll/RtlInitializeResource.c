/*
 * XREFs of RtlInitializeResource @ 0x18005F860
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlpFreeDebugInfo @ 0x18005DF10 (RtlpFreeDebugInfo.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18005F9E0 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlInitializeCriticalSectionEx @ 0x18005FC80 (RtlInitializeCriticalSectionEx.c)
 *     RtlCaptureStackBackTrace @ 0x180079D50 (RtlCaptureStackBackTrace.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x18009F0F0 (ZwAllocateVirtualMemory.c)
 *     ZwAlertThreadByThreadId @ 0x18009FBE0 (ZwAlertThreadByThreadId.c)
 *     NtCreateSemaphore @ 0x1800A0680 (NtCreateSemaphore.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A2B80 (RtlpInterlockedPopEntrySList.c)
 *     RtlCompareMemory @ 0x1800A3970 (RtlCompareMemory.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     RtlStdReleaseStackTrace @ 0x18010E1A0 (RtlStdReleaseStackTrace.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 */

_WORD *__fastcall RtlInitializeResource(__int64 a1)
{
  unsigned __int64 Heap; // rdi
  volatile signed __int32 *v3; // r12
  __int64 v4; // r14
  __int64 v5; // rsi
  int v6; // esi
  int v7; // esi
  _WORD *result; // rax
  void *ProcessHeap; // rcx
  USHORT v10; // ax
  __int64 v11; // r8
  __int64 v12; // r13
  PSLIST_ENTRY v13; // r15
  SIZE_T v14; // rax
  signed __int64 v15; // rax
  __int64 v16; // rdx
  signed __int64 v17; // rcx
  signed __int64 v18; // rdx
  signed __int64 v19; // rtt
  bool v20; // zf
  signed __int64 v21; // rax
  _QWORD *v22; // r9
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rax
  unsigned int v26; // esi
  PSLIST_ENTRY v27; // rax
  PSLIST_ENTRY v28; // rsi
  unsigned __int64 v29; // rax
  struct _SLIST_ENTRY *v30; // r12
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // r15
  __int64 v33; // rcx
  __int16 v34; // cx
  bool v35; // sf
  signed __int64 v36; // rax
  __int64 v37; // rdx
  signed __int64 v38; // rcx
  signed __int64 v39; // rdx
  signed __int64 v40; // rtt
  signed __int64 v41; // rax
  _QWORD *v42; // r9
  __int64 v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // rax
  signed __int64 v46; // rax
  __int64 v47; // r15
  __int64 v48; // rax
  unsigned int v49; // ecx
  signed __int64 v50; // rax
  __int64 v51; // rsi
  __int64 v52; // rax
  unsigned int v53; // eax
  struct _SLIST_ENTRY *v54; // rcx
  __int64 v55; // r13
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rsi
  signed __int64 v58; // rax
  __int64 v59; // rdx
  signed __int64 v60; // rcx
  signed __int64 v61; // rdx
  signed __int64 v62; // rtt
  signed __int64 v63; // rax
  _QWORD *v64; // r9
  __int64 v65; // rcx
  _QWORD *v66; // rax
  __int64 v67; // rax
  signed __int64 v68; // rax
  __int64 v69; // rsi
  __int64 v70; // rax
  signed __int64 v71; // rax
  __int64 v72; // rdx
  signed __int64 v73; // rcx
  signed __int64 v74; // rdx
  signed __int64 v75; // rtt
  signed __int64 v76; // rax
  _QWORD *v77; // r9
  volatile signed __int32 *v78; // rcx
  _QWORD *v79; // rax
  __int64 v80; // rax
  signed __int64 v81; // rax
  __int64 v82; // rax
  unsigned __int64 v83; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v84; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v85; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v87; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v88; // [rsp+58h] [rbp-A8h] BYREF
  USHORT v89; // [rsp+6Eh] [rbp-92h]
  PVOID BackTrace[32]; // [rsp+70h] [rbp-90h] BYREF
  ULONG BackTraceHash; // [rsp+1B8h] [rbp+B8h] BYREF
  SIZE_T Length; // [rsp+1C0h] [rbp+C0h]
  unsigned __int64 v93; // [rsp+1C8h] [rbp+C8h]

  Heap = (unsigned __int64)RtlpInterlockedPopEntrySList(&RtlCriticalSectionDebugSList);
  if ( !Heap )
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( !ProcessHeap )
LABEL_12:
      RtlRaiseStatus(3221225495LL);
    Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, 48LL);
  }
  if ( !Heap )
    goto LABEL_12;
  v3 = 0LL;
  *(_DWORD *)(Heap + 36) = 0;
  v4 = RtlpStackTraceDatabase;
  if ( !RtlpStackTraceDatabase )
  {
    LODWORD(v5) = 0;
    goto LABEL_5;
  }
  v10 = RtlCaptureStackBackTrace(2u, 0x20u, BackTrace, &BackTraceHash);
  v89 = v10;
  if ( !v10 )
    goto LABEL_153;
  v11 = 8LL * v10;
  v12 = 16LL * (BackTraceHash % *(_DWORD *)(v4 + 720)) + v4 + 728;
  Length = v11;
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 176));
  if ( !byte_1801843C8 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v12 + 8));
    v11 = Length;
  }
  v13 = *(PSLIST_ENTRY *)v12;
  if ( *(_QWORD *)v12 )
  {
    do
    {
      if ( *((_WORD *)&v13->Next + 7) == v89 )
      {
        v14 = RtlCompareMemory(&v13[1], BackTrace, v11);
        v11 = Length;
        if ( v14 == Length )
          goto LABEL_51;
      }
      v13 = v13->Next;
    }
    while ( v13 );
  }
  if ( !v89 )
  {
    v13 = 0LL;
LABEL_22:
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 200));
    goto LABEL_23;
  }
  v26 = v89 - 1;
  if ( v26 < 0x20 )
  {
    while ( 1 )
    {
      v27 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v4 + 16 * (v26 + 13LL)));
      if ( v27 )
        break;
      if ( ++v26 >= 0x20 )
      {
        v11 = Length;
        goto LABEL_43;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 196));
    v28 = v27 - 1;
    v11 = Length;
    goto LABEL_49;
  }
LABEL_43:
  v28 = 0LL;
  v29 = (8LL * v89 + 31) & 0xFFFFFFFFFFFFFFF0uLL;
  v93 = v29;
  if ( !byte_1801843C8 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)v4);
    v29 = v93;
    v11 = Length;
  }
  v30 = *(struct _SLIST_ENTRY **)(v4 + 160);
  v31 = *(_QWORD *)(v4 + 144);
  v84 = v31;
  v32 = (unsigned __int64)v30 + v29;
  if ( !*(_BYTE *)(v4 + 128) )
  {
    if ( v32 > v31 )
    {
      v85 = (v29 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( v31 + v85 >= *(_QWORD *)(v4 + 152) )
      {
        LODWORD(v29) = v93;
        goto LABEL_59;
      }
      LODWORD(v29) = ZwAllocateVirtualMemory(-1LL, &v84, 0LL, &v85, 4096, 4);
      v11 = Length;
      v35 = (v29 & 0x80000000) != 0LL;
      LODWORD(v29) = v93;
      if ( v35 )
        goto LABEL_59;
      *(_QWORD *)(v4 + 144) = v85 + v84;
    }
LABEL_57:
    ++*(_DWORD *)(v4 + 192);
    v28 = v30;
    *(_QWORD *)(v4 + 160) = v32;
    goto LABEL_59;
  }
  if ( v32 <= *(_QWORD *)(v4 + 168) )
    goto LABEL_57;
LABEL_59:
  v3 = 0LL;
  if ( !byte_1801843C8 )
  {
    v36 = _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, 1LL);
    if ( v36 != 1 )
    {
      do
      {
        v37 = 3LL;
        v38 = v36 & 6;
        if ( v38 != 2 )
          v37 = -1LL;
        v39 = v36 + v37;
        v40 = v36;
        v36 = _InterlockedCompareExchange64((volatile signed __int64 *)v4, v39, v36);
      }
      while ( v40 != v36 );
      if ( v38 == 2 )
      {
        while ( (v39 & 1) == 0 )
        {
LABEL_68:
          v42 = (_QWORD *)(v39 & 0xFFFFFFFFFFFFFFF0uLL);
          v43 = *(_QWORD *)((v39 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v43 )
          {
            do
            {
              v44 = v42;
              v42 = (_QWORD *)*v42;
              v42[2] = v44;
              v43 = v42[1];
            }
            while ( !v43 );
            if ( v42 != (_QWORD *)(v39 & 0xFFFFFFFFFFFFFFF0uLL) )
              *(_QWORD *)((v39 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v43;
          }
          if ( (*(_DWORD *)(v43 + 36) & 1) != 0 )
          {
            v45 = *(_QWORD *)(v43 + 16);
            if ( v45 )
            {
              *(_QWORD *)((v39 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v45;
              *(_QWORD *)(v43 + 16) = 0LL;
              _InterlockedAnd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFBuLL);
              do
              {
LABEL_76:
                v47 = *(_QWORD *)(v43 + 16);
                v48 = *(_QWORD *)(v43 + 24);
                _interlockedbittestandset((volatile signed __int32 *)(v43 + 36), 2u);
                if ( !_interlockedbittestandreset((volatile signed __int32 *)(v43 + 36), 1u) )
                  ZwAlertThreadByThreadId(v48);
                v43 = v47;
              }
              while ( v47 );
              goto LABEL_79;
            }
          }
          v46 = _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, v39);
          v20 = v39 == v46;
          v39 = v46;
          if ( v20 )
            goto LABEL_76;
        }
        while ( 1 )
        {
          v41 = _InterlockedCompareExchange64((volatile signed __int64 *)v4, v39 - 4, v39);
          v20 = v39 == v41;
          v39 = v41;
          if ( v20 )
            break;
          if ( (v41 & 1) == 0 )
            goto LABEL_68;
        }
LABEL_79:
        v11 = Length;
      }
    }
    LODWORD(v29) = v93;
  }
  v13 = v28;
  if ( v28 )
  {
    v49 = ((unsigned int)(v29 - 16) >> 3) - 1;
    if ( v49 > 0x1F )
      LOWORD(v49) = 31;
    *((_WORD *)&v28->Next + 4) = ((_WORD)v49 << 11) | *(_WORD *)(&v28->Next + 1) & 0x7FF;
    goto LABEL_50;
  }
LABEL_49:
  v13 = v28;
  if ( !v28 )
    goto LABEL_22;
LABEL_50:
  memmove(&v28[1], BackTrace, v11);
  *((_WORD *)&v28->Next + 7) = v89;
  *((_WORD *)&v28->Next + 4) &= 0xF800u;
  v33 = 2LL * (BackTraceHash % *(_DWORD *)(v4 + 720));
  v28->Next = *(_SLIST_ENTRY **)(v4 + 16LL * (BackTraceHash % *(_DWORD *)(v4 + 720)) + 728);
  *(_QWORD *)(v4 + 8 * v33 + 728) = v28;
LABEL_51:
  v34 = *((_WORD *)&v13->Next + 4);
  if ( (v34 & 0x7FF) != 0x7FF )
    *((_WORD *)&v13->Next + 4) = v34 ^ (v34 ^ (v34 + 1)) & 0x7FF;
LABEL_23:
  if ( !byte_1801843C8 )
  {
    v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 8), 0LL, 1LL);
    if ( v15 != 1 )
    {
      do
      {
        v16 = 3LL;
        v17 = v15 & 6;
        if ( v17 != 2 )
          v16 = -1LL;
        v18 = v15 + v16;
        v19 = v15;
        v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 8), v18, v15);
      }
      while ( v19 != v15 );
      if ( v17 == 2 )
      {
        while ( (v18 & 1) == 0 )
        {
LABEL_32:
          v11 = v18 & 0xFFFFFFFFFFFFFFF0uLL;
          v22 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0uLL);
          v23 = *(_QWORD *)((v18 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v23 )
          {
            do
            {
              v24 = v22;
              v22 = (_QWORD *)*v22;
              v22[2] = v24;
              v23 = v22[1];
            }
            while ( !v23 );
            if ( v22 != (_QWORD *)v11 )
              *(_QWORD *)((v18 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v23;
          }
          if ( (*(_DWORD *)(v23 + 36) & 1) != 0 )
          {
            v25 = *(_QWORD *)(v23 + 16);
            if ( v25 )
            {
              *(_QWORD *)((v18 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v25;
              *(_QWORD *)(v23 + 16) = 0LL;
              _InterlockedAnd64((volatile signed __int64 *)(v12 + 8), 0xFFFFFFFFFFFFFFFBuLL);
              do
              {
LABEL_86:
                v51 = *(_QWORD *)(v23 + 16);
                v52 = *(_QWORD *)(v23 + 24);
                _interlockedbittestandset((volatile signed __int32 *)(v23 + 36), 2u);
                if ( !_interlockedbittestandreset((volatile signed __int32 *)(v23 + 36), 1u) )
                  ZwAlertThreadByThreadId(v52);
                v23 = v51;
              }
              while ( v51 );
              goto LABEL_89;
            }
          }
          v50 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 8), 0LL, v18);
          v20 = v18 == v50;
          v18 = v50;
          if ( v20 )
            goto LABEL_86;
        }
        while ( 1 )
        {
          v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 8), v18 - 4, v18);
          v20 = v18 == v21;
          v18 = v21;
          if ( v20 )
            break;
          if ( (v21 & 1) == 0 )
            goto LABEL_32;
        }
      }
    }
  }
LABEL_89:
  if ( !v13 )
  {
LABEL_153:
    LODWORD(v5) = 0;
    goto LABEL_5;
  }
  v53 = 0;
  if ( *((_WORD *)&v13->Next + 7) )
  {
    v54 = v13 + 1;
    v11 = *((unsigned __int16 *)&v13->Next + 7);
    do
    {
      v53 += LODWORD(v54->Next);
      v54 = (struct _SLIST_ENTRY *)((char *)v54 + 8);
      --v11;
    }
    while ( v11 );
  }
  v55 = v4 + 16LL * (v53 % *(_DWORD *)(v4 + 720));
  if ( !byte_1801843C8 )
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v55 + 736));
  if ( !*(_DWORD *)((char *)&v13->Next + 10) )
  {
    if ( !byte_1801843C8 )
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)v4);
    v56 = *(_QWORD *)(v4 + 152);
    v57 = *(_QWORD *)(v4 + 168) - 8LL;
    v20 = *(_BYTE *)(v4 + 128) == 0;
    v83 = v56;
    if ( v20 )
    {
      if ( v57 < v56 )
      {
        v87 = 4096LL;
        if ( v56 - 4096 <= *(_QWORD *)(v4 + 144)
          || (v83 = v56 - 4096, (int)ZwAllocateVirtualMemory(-1LL, &v83, 0LL, &v87, 4096, 4) < 0) )
        {
LABEL_106:
          if ( !byte_1801843C8 )
          {
            v58 = _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, 1LL);
            if ( v58 != 1 )
            {
              do
              {
                v59 = 3LL;
                v60 = v58 & 6;
                if ( v60 != 2 )
                  v59 = -1LL;
                v61 = v58 + v59;
                v62 = v58;
                v58 = _InterlockedCompareExchange64((volatile signed __int64 *)v4, v61, v58);
              }
              while ( v62 != v58 );
              if ( v60 == 2 )
              {
                while ( (v61 & 1) == 0 )
                {
LABEL_115:
                  v11 = v61 & 0xFFFFFFFFFFFFFFF0uLL;
                  v64 = (_QWORD *)(v61 & 0xFFFFFFFFFFFFFFF0uLL);
                  v65 = *(_QWORD *)((v61 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
                  if ( !v65 )
                  {
                    do
                    {
                      v66 = v64;
                      v64 = (_QWORD *)*v64;
                      v64[2] = v66;
                      v65 = v64[1];
                    }
                    while ( !v65 );
                    if ( v64 != (_QWORD *)v11 )
                      *(_QWORD *)((v61 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v65;
                  }
                  if ( (*(_DWORD *)(v65 + 36) & 1) != 0 )
                  {
                    v67 = *(_QWORD *)(v65 + 16);
                    if ( v67 )
                    {
                      *(_QWORD *)((v61 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v67;
                      *(_QWORD *)(v65 + 16) = 0LL;
                      _InterlockedAnd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFBuLL);
                      do
                      {
LABEL_123:
                        v69 = *(_QWORD *)(v65 + 16);
                        v70 = *(_QWORD *)(v65 + 24);
                        _interlockedbittestandset((volatile signed __int32 *)(v65 + 36), 2u);
                        if ( !_interlockedbittestandreset((volatile signed __int32 *)(v65 + 36), 1u) )
                          ZwAlertThreadByThreadId(v70);
                        v65 = v69;
                      }
                      while ( v69 );
                      goto LABEL_126;
                    }
                  }
                  v68 = _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, v61);
                  v20 = v61 == v68;
                  v61 = v68;
                  if ( v20 )
                    goto LABEL_123;
                }
                while ( 1 )
                {
                  v63 = _InterlockedCompareExchange64((volatile signed __int64 *)v4, v61 - 4, v61);
                  v20 = v61 == v63;
                  v61 = v63;
                  if ( v20 )
                    break;
                  if ( (v63 & 1) == 0 )
                    goto LABEL_115;
                }
              }
            }
          }
LABEL_126:
          if ( v3 )
          {
            *(_QWORD *)v3 = v13;
            v5 = (__int64)(*(_QWORD *)(v4 + 184) - (_QWORD)v3) >> 3;
            *((_WORD *)&v13->Next + 6) = v5;
            *((_WORD *)&v13->Next + 5) = WORD1(v5);
            v3 = 0LL;
          }
          else
          {
            LODWORD(v5) = 0;
          }
          goto LABEL_130;
        }
        *(_QWORD *)(v4 + 152) = v83;
      }
    }
    else if ( v57 < *(_QWORD *)(v4 + 160) )
    {
      goto LABEL_106;
    }
    ++*(_DWORD *)(v4 + 180);
    v3 = (volatile signed __int32 *)v57;
    *(_QWORD *)(v4 + 168) = v57;
    goto LABEL_106;
  }
  LODWORD(v5) = *((unsigned __int16 *)&v13->Next + 6) + (*((unsigned __int16 *)&v13->Next + 5) << 16);
LABEL_130:
  if ( !byte_1801843C8 )
  {
    v71 = _InterlockedCompareExchange64((volatile signed __int64 *)(v55 + 736), 0LL, 1LL);
    if ( v71 != 1 )
    {
      do
      {
        v72 = 3LL;
        v73 = v71 & 6;
        if ( v73 != 2 )
          v72 = -1LL;
        v74 = v71 + v72;
        v75 = v71;
        v71 = _InterlockedCompareExchange64((volatile signed __int64 *)(v55 + 736), v74, v71);
      }
      while ( v75 != v71 );
      if ( v73 == 2 )
      {
        while ( (v74 & 1) == 0 )
        {
LABEL_139:
          v11 = v74 & 0xFFFFFFFFFFFFFFF0uLL;
          v77 = (_QWORD *)(v74 & 0xFFFFFFFFFFFFFFF0uLL);
          v78 = *(volatile signed __int32 **)((v74 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v78 )
          {
            do
            {
              v79 = v77;
              v77 = (_QWORD *)*v77;
              v77[2] = v79;
              v78 = (volatile signed __int32 *)v77[1];
            }
            while ( !v78 );
            if ( v77 != (_QWORD *)v11 )
              *(_QWORD *)((v74 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v78;
          }
          if ( (v78[9] & 1) != 0 )
          {
            v80 = *((_QWORD *)v78 + 2);
            if ( v80 )
            {
              *(_QWORD *)((v74 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v80;
              *((_QWORD *)v78 + 2) = 0LL;
              _InterlockedAnd64((volatile signed __int64 *)(v55 + 736), 0xFFFFFFFFFFFFFFFBuLL);
              do
              {
LABEL_147:
                v3 = (volatile signed __int32 *)*((_QWORD *)v78 + 2);
                v82 = *((_QWORD *)v78 + 3);
                _interlockedbittestandset(v78 + 9, 2u);
                if ( !_interlockedbittestandreset(v78 + 9, 1u) )
                  ZwAlertThreadByThreadId(v82);
                v78 = v3;
              }
              while ( v3 );
              goto LABEL_150;
            }
          }
          v81 = _InterlockedCompareExchange64((volatile signed __int64 *)(v55 + 736), 0LL, v74);
          v20 = v74 == v81;
          v74 = v81;
          if ( v20 )
            goto LABEL_147;
        }
        while ( 1 )
        {
          v76 = _InterlockedCompareExchange64((volatile signed __int64 *)(v55 + 736), v74 - 4, v74);
          v20 = v74 == v76;
          v74 = v76;
          if ( v20 )
            break;
          if ( (v76 & 1) == 0 )
            goto LABEL_139;
        }
      }
    }
  }
LABEL_150:
  if ( !(_DWORD)v5 )
    RtlStdReleaseStackTrace(v4, v13, v11);
LABEL_5:
  *(_WORD *)(Heap + 2) = v5;
  *(_WORD *)(Heap + 44) = WORD1(v5);
  v6 = NtCreateSemaphore(&Handle, 1048579LL, 0LL, 0LL, 0x7FFFFFFF);
  if ( v6 < 0 )
  {
    RtlpFreeDebugInfo(Heap);
    RtlRaiseStatus((unsigned int)v6);
  }
  v7 = NtCreateSemaphore(&v88, 1048579LL, 0LL, 0LL, 0x7FFFFFFF);
  if ( v7 < 0 )
  {
    NtClose(Handle);
    RtlpFreeDebugInfo(Heap);
    RtlRaiseStatus((unsigned int)v7);
  }
  *(_QWORD *)(a1 + 40) = Handle;
  *(_QWORD *)(a1 + 56) = v88;
  *(_DWORD *)(a1 + 48) = (_DWORD)v3;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = v3;
  *(_DWORD *)(a1 + 80) = (_DWORD)v3;
  *(_QWORD *)(a1 + 88) = Heap;
  RtlInitializeCriticalSectionEx(a1, 0LL, 0x8000000LL);
  RtlpAddDebugInfoToCriticalSection(a1);
  result = *(_WORD **)a1;
  if ( *(_QWORD *)a1 != -1LL )
    *result = 1;
  return result;
}
