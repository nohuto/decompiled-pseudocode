/*
 * XREFs of RtlInitializeResource @ 0x18001D900
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18001D180 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlInitializeCriticalSectionEx @ 0x18001DA80 (RtlInitializeCriticalSectionEx.c)
 *     RtlpFreeDebugInfo @ 0x18001E3C0 (RtlpFreeDebugInfo.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlCaptureStackBackTrace @ 0x18007FE00 (RtlCaptureStackBackTrace.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x1800A4370 (ZwAllocateVirtualMemory.c)
 *     ZwAlertThreadByThreadId @ 0x1800A4E60 (ZwAlertThreadByThreadId.c)
 *     NtCreateSemaphore @ 0x1800A58E0 (NtCreateSemaphore.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A7D40 (RtlpInterlockedPopEntrySList.c)
 *     RtlCompareMemory @ 0x1800A8B30 (RtlCompareMemory.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     RtlStdReleaseStackTrace @ 0x18010E020 (RtlStdReleaseStackTrace.c)
 */

_WORD *__fastcall RtlInitializeResource(__int64 a1)
{
  PSLIST_ENTRY Heap; // rdi
  void *ProcessHeap; // rcx
  volatile signed __int32 *v4; // r12
  unsigned __int64 v5; // r14
  __int64 v6; // rsi
  int v7; // esi
  int v8; // esi
  _WORD *result; // rax
  USHORT v10; // ax
  _QWORD *v11; // r9
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r13
  PSLIST_ENTRY v15; // r15
  SIZE_T v16; // rax
  signed __int64 v17; // rax
  __int64 v18; // rdx
  signed __int64 v19; // rcx
  signed __int64 v20; // rdx
  signed __int64 v21; // rtt
  bool v22; // zf
  signed __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rax
  unsigned int v27; // esi
  PSLIST_ENTRY v28; // rax
  PSLIST_ENTRY v29; // rsi
  unsigned __int64 v30; // rax
  struct _SLIST_ENTRY *v31; // r12
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // r15
  __int64 v34; // rcx
  __int16 v35; // cx
  bool v36; // sf
  signed __int64 v37; // rax
  __int64 v38; // rdx
  signed __int64 v39; // rcx
  signed __int64 v40; // rdx
  signed __int64 v41; // rtt
  signed __int64 v42; // rax
  __int64 v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // rax
  signed __int64 v46; // rax
  __int64 v47; // r15
  __int64 v48; // rax
  unsigned int v49; // eax
  signed __int64 v50; // rax
  __int64 v51; // rsi
  __int64 v52; // rax
  unsigned int v53; // eax
  struct _SLIST_ENTRY *v54; // rcx
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // r13
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rsi
  signed __int64 v59; // rax
  __int64 v60; // rdx
  signed __int64 v61; // rcx
  signed __int64 v62; // rdx
  signed __int64 v63; // rtt
  signed __int64 v64; // rax
  _QWORD *v65; // r9
  __int64 v66; // rcx
  _QWORD *v67; // rax
  __int64 v68; // rax
  signed __int64 v69; // rax
  __int64 v70; // rsi
  __int64 v71; // rax
  signed __int64 v72; // rax
  __int64 v73; // rdx
  signed __int64 v74; // rcx
  signed __int64 v75; // rdx
  signed __int64 v76; // rtt
  signed __int64 v77; // rax
  _QWORD *v78; // r9
  volatile signed __int32 *v79; // rcx
  _QWORD *v80; // rax
  __int64 v81; // rax
  signed __int64 v82; // rax
  __int64 v83; // rax
  unsigned __int64 v84; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v85; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v86; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v88; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v89; // [rsp+58h] [rbp-A8h] BYREF
  USHORT v90; // [rsp+6Eh] [rbp-92h]
  PVOID BackTrace[32]; // [rsp+70h] [rbp-90h] BYREF
  ULONG BackTraceHash; // [rsp+1B8h] [rbp+B8h] BYREF
  SIZE_T Length; // [rsp+1C0h] [rbp+C0h]
  unsigned __int64 v94; // [rsp+1C8h] [rbp+C8h]

  Heap = RtlpInterlockedPopEntrySList(&RtlCriticalSectionDebugSList);
  if ( !Heap )
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( !ProcessHeap || (Heap = (PSLIST_ENTRY)RtlAllocateHeap(ProcessHeap, 0LL, 48LL)) == 0LL )
    {
      RtlRaiseStatus(3221225495LL);
      __debugbreak();
    }
  }
  v4 = 0LL;
  HIDWORD(Heap[2].Next) = 0;
  v5 = RtlpStackTraceDatabase;
  if ( !RtlpStackTraceDatabase )
  {
    LODWORD(v6) = 0;
    goto LABEL_6;
  }
  v10 = RtlCaptureStackBackTrace(2u, 0x20u, BackTrace, &BackTraceHash);
  v90 = v10;
  if ( !v10 )
    goto LABEL_152;
  v12 = BackTraceHash % *(_DWORD *)(v5 + 720);
  v13 = 8LL * v10;
  v14 = 16LL * (unsigned int)v12 + v5 + 728;
  Length = v13;
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 176));
  if ( !byte_18017A188 )
  {
    RtlAcquireSRWLockExclusive(v14 + 8, v12, v13, (unsigned __int64)v11);
    v13 = Length;
  }
  v15 = *(PSLIST_ENTRY *)v14;
  if ( *(_QWORD *)v14 )
  {
    do
    {
      if ( *((_WORD *)&v15->Next + 7) == v90 )
      {
        v16 = RtlCompareMemory(&v15[1], BackTrace, v13);
        v13 = Length;
        if ( v16 == Length )
          goto LABEL_50;
      }
      v15 = v15->Next;
    }
    while ( v15 );
  }
  if ( !v90 )
  {
    v15 = 0LL;
LABEL_21:
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 200));
    goto LABEL_22;
  }
  v27 = v90 - 1;
  if ( v27 < 0x20 )
  {
    while ( 1 )
    {
      v28 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v5 + 16 * (v27 + 13LL)));
      if ( v28 )
        break;
      if ( ++v27 >= 0x20 )
      {
        v13 = Length;
        goto LABEL_42;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 196));
    v29 = v28 - 1;
    v13 = Length;
    goto LABEL_48;
  }
LABEL_42:
  v29 = 0LL;
  v30 = (8LL * v90 + 31) & 0xFFFFFFFFFFFFFFF0uLL;
  v94 = v30;
  if ( !byte_18017A188 )
  {
    RtlAcquireSRWLockExclusive(v5, v12, v13, (unsigned __int64)v11);
    v30 = v94;
    v13 = Length;
  }
  v31 = *(struct _SLIST_ENTRY **)(v5 + 160);
  v32 = *(_QWORD *)(v5 + 144);
  v85 = v32;
  v33 = (unsigned __int64)v31 + v30;
  if ( !*(_BYTE *)(v5 + 128) )
  {
    if ( v33 > v32 )
    {
      v86 = (v30 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( v32 + v86 >= *(_QWORD *)(v5 + 152) )
      {
        LODWORD(v30) = v94;
        goto LABEL_58;
      }
      LODWORD(v30) = ZwAllocateVirtualMemory(-1LL, &v85, 0LL, &v86, 4096, 4);
      v13 = Length;
      v36 = (v30 & 0x80000000) != 0LL;
      LODWORD(v30) = v94;
      if ( v36 )
        goto LABEL_58;
      *(_QWORD *)(v5 + 144) = v86 + v85;
    }
LABEL_56:
    ++*(_DWORD *)(v5 + 192);
    v29 = v31;
    *(_QWORD *)(v5 + 160) = v33;
    goto LABEL_58;
  }
  if ( v33 <= *(_QWORD *)(v5 + 168) )
    goto LABEL_56;
LABEL_58:
  v4 = 0LL;
  if ( !byte_18017A188 )
  {
    v37 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, 1LL);
    if ( v37 != 1 )
    {
      do
      {
        v38 = 3LL;
        v39 = v37 & 6;
        if ( v39 != 2 )
          v38 = -1LL;
        v40 = v37 + v38;
        v41 = v37;
        v37 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, v40, v37);
      }
      while ( v41 != v37 );
      if ( v39 == 2 )
      {
        while ( (v40 & 1) == 0 )
        {
LABEL_67:
          v11 = (_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF0uLL);
          v43 = *(_QWORD *)((v40 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v43 )
          {
            do
            {
              v44 = v11;
              v11 = (_QWORD *)*v11;
              v11[2] = v44;
              v43 = v11[1];
            }
            while ( !v43 );
            if ( v11 != (_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF0uLL) )
              *(_QWORD *)((v40 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v43;
          }
          if ( (*(_DWORD *)(v43 + 36) & 1) != 0 )
          {
            v45 = *(_QWORD *)(v43 + 16);
            if ( v45 )
            {
              *(_QWORD *)((v40 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v45;
              *(_QWORD *)(v43 + 16) = 0LL;
              _InterlockedAnd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFBuLL);
              do
              {
LABEL_75:
                v47 = *(_QWORD *)(v43 + 16);
                v48 = *(_QWORD *)(v43 + 24);
                _interlockedbittestandset((volatile signed __int32 *)(v43 + 36), 2u);
                if ( !_interlockedbittestandreset((volatile signed __int32 *)(v43 + 36), 1u) )
                  ZwAlertThreadByThreadId(v48);
                v43 = v47;
              }
              while ( v47 );
              goto LABEL_78;
            }
          }
          v46 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, v40);
          v22 = v40 == v46;
          v40 = v46;
          if ( v22 )
            goto LABEL_75;
        }
        while ( 1 )
        {
          v42 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, v40 - 4, v40);
          v22 = v40 == v42;
          v40 = v42;
          if ( v22 )
            break;
          if ( (v42 & 1) == 0 )
            goto LABEL_67;
        }
LABEL_78:
        v13 = Length;
      }
    }
    LODWORD(v30) = v94;
  }
  v15 = v29;
  if ( v29 )
  {
    v49 = ((unsigned int)(v30 - 16) >> 3) - 1;
    if ( v49 > 0x1F )
      LOWORD(v49) = 31;
    *((_WORD *)&v29->Next + 4) &= 0x7FFu;
    *((_WORD *)&v29->Next + 4) |= (_WORD)v49 << 11;
    goto LABEL_49;
  }
LABEL_48:
  v15 = v29;
  if ( !v29 )
    goto LABEL_21;
LABEL_49:
  memmove(&v29[1], BackTrace, v13);
  *((_WORD *)&v29->Next + 7) = v90;
  *((_WORD *)&v29->Next + 4) &= 0xF800u;
  v34 = 2LL * (BackTraceHash % *(_DWORD *)(v5 + 720));
  v29->Next = *(_SLIST_ENTRY **)(v5 + 16LL * (BackTraceHash % *(_DWORD *)(v5 + 720)) + 728);
  *(_QWORD *)(v5 + 8 * v34 + 728) = v29;
LABEL_50:
  v35 = *((_WORD *)&v15->Next + 4);
  if ( (v35 & 0x7FF) != 0x7FF )
    *((_WORD *)&v15->Next + 4) = v35 ^ (v35 ^ (v35 + 1)) & 0x7FF;
LABEL_22:
  if ( !byte_18017A188 )
  {
    v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 8), 0LL, 1LL);
    if ( v17 != 1 )
    {
      do
      {
        v18 = 3LL;
        v19 = v17 & 6;
        if ( v19 != 2 )
          v18 = -1LL;
        v20 = v17 + v18;
        v21 = v17;
        v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 8), v20, v17);
      }
      while ( v21 != v17 );
      if ( v19 == 2 )
      {
        while ( (v20 & 1) == 0 )
        {
LABEL_31:
          v13 = v20 & 0xFFFFFFFFFFFFFFF0uLL;
          v11 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0uLL);
          v24 = *(_QWORD *)((v20 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v24 )
          {
            do
            {
              v25 = v11;
              v11 = (_QWORD *)*v11;
              v11[2] = v25;
              v24 = v11[1];
            }
            while ( !v24 );
            if ( v11 != (_QWORD *)v13 )
              *(_QWORD *)((v20 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v24;
          }
          if ( (*(_DWORD *)(v24 + 36) & 1) != 0 )
          {
            v26 = *(_QWORD *)(v24 + 16);
            if ( v26 )
            {
              *(_QWORD *)((v20 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v26;
              *(_QWORD *)(v24 + 16) = 0LL;
              _InterlockedAnd64((volatile signed __int64 *)(v14 + 8), 0xFFFFFFFFFFFFFFFBuLL);
              do
              {
LABEL_85:
                v51 = *(_QWORD *)(v24 + 16);
                v52 = *(_QWORD *)(v24 + 24);
                _interlockedbittestandset((volatile signed __int32 *)(v24 + 36), 2u);
                if ( !_interlockedbittestandreset((volatile signed __int32 *)(v24 + 36), 1u) )
                  ZwAlertThreadByThreadId(v52);
                v24 = v51;
              }
              while ( v51 );
              goto LABEL_88;
            }
          }
          v50 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 8), 0LL, v20);
          v22 = v20 == v50;
          v20 = v50;
          if ( v22 )
            goto LABEL_85;
        }
        while ( 1 )
        {
          v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 8), v20 - 4, v20);
          v22 = v20 == v23;
          v20 = v23;
          if ( v22 )
            break;
          if ( (v23 & 1) == 0 )
            goto LABEL_31;
        }
      }
    }
  }
LABEL_88:
  if ( !v15 )
  {
LABEL_152:
    LODWORD(v6) = 0;
    goto LABEL_6;
  }
  v53 = 0;
  if ( *((_WORD *)&v15->Next + 7) )
  {
    v54 = v15 + 1;
    v13 = *((unsigned __int16 *)&v15->Next + 7);
    do
    {
      v53 += LODWORD(v54->Next);
      v54 = (struct _SLIST_ENTRY *)((char *)v54 + 8);
      --v13;
    }
    while ( v13 );
  }
  v55 = v53 % *(_DWORD *)(v5 + 720);
  v56 = v5 + 16LL * (unsigned int)v55;
  if ( !byte_18017A188 )
    RtlAcquireSRWLockExclusive(v56 + 736, v55, v13, (unsigned __int64)v11);
  if ( !*(_DWORD *)((char *)&v15->Next + 10) )
  {
    if ( !byte_18017A188 )
      RtlAcquireSRWLockExclusive(v5, v55, v13, (unsigned __int64)v11);
    v57 = *(_QWORD *)(v5 + 152);
    v58 = *(_QWORD *)(v5 + 168) - 8LL;
    v22 = *(_BYTE *)(v5 + 128) == 0;
    v84 = v57;
    if ( v22 )
    {
      if ( v58 < v57 )
      {
        v88 = 4096LL;
        if ( v57 - 4096 <= *(_QWORD *)(v5 + 144)
          || (v84 = v57 - 4096, (int)ZwAllocateVirtualMemory(-1LL, &v84, 0LL, &v88, 4096, 4) < 0) )
        {
LABEL_105:
          if ( !byte_18017A188 )
          {
            v59 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, 1LL);
            if ( v59 != 1 )
            {
              do
              {
                v60 = 3LL;
                v61 = v59 & 6;
                if ( v61 != 2 )
                  v60 = -1LL;
                v62 = v59 + v60;
                v63 = v59;
                v59 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, v62, v59);
              }
              while ( v63 != v59 );
              if ( v61 == 2 )
              {
                while ( (v62 & 1) == 0 )
                {
LABEL_114:
                  v13 = v62 & 0xFFFFFFFFFFFFFFF0uLL;
                  v65 = (_QWORD *)(v62 & 0xFFFFFFFFFFFFFFF0uLL);
                  v66 = *(_QWORD *)((v62 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
                  if ( !v66 )
                  {
                    do
                    {
                      v67 = v65;
                      v65 = (_QWORD *)*v65;
                      v65[2] = v67;
                      v66 = v65[1];
                    }
                    while ( !v66 );
                    if ( v65 != (_QWORD *)v13 )
                      *(_QWORD *)((v62 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v66;
                  }
                  if ( (*(_DWORD *)(v66 + 36) & 1) != 0 )
                  {
                    v68 = *(_QWORD *)(v66 + 16);
                    if ( v68 )
                    {
                      *(_QWORD *)((v62 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v68;
                      *(_QWORD *)(v66 + 16) = 0LL;
                      _InterlockedAnd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFBuLL);
                      do
                      {
LABEL_122:
                        v70 = *(_QWORD *)(v66 + 16);
                        v71 = *(_QWORD *)(v66 + 24);
                        _interlockedbittestandset((volatile signed __int32 *)(v66 + 36), 2u);
                        if ( !_interlockedbittestandreset((volatile signed __int32 *)(v66 + 36), 1u) )
                          ZwAlertThreadByThreadId(v71);
                        v66 = v70;
                      }
                      while ( v70 );
                      goto LABEL_125;
                    }
                  }
                  v69 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, v62);
                  v22 = v62 == v69;
                  v62 = v69;
                  if ( v22 )
                    goto LABEL_122;
                }
                while ( 1 )
                {
                  v64 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, v62 - 4, v62);
                  v22 = v62 == v64;
                  v62 = v64;
                  if ( v22 )
                    break;
                  if ( (v64 & 1) == 0 )
                    goto LABEL_114;
                }
              }
            }
          }
LABEL_125:
          if ( v4 )
          {
            *(_QWORD *)v4 = v15;
            v6 = (__int64)(*(_QWORD *)(v5 + 184) - (_QWORD)v4) >> 3;
            *((_WORD *)&v15->Next + 6) = v6;
            *((_WORD *)&v15->Next + 5) = WORD1(v6);
            v4 = 0LL;
          }
          else
          {
            LODWORD(v6) = 0;
          }
          goto LABEL_129;
        }
        *(_QWORD *)(v5 + 152) = v84;
      }
    }
    else if ( v58 < *(_QWORD *)(v5 + 160) )
    {
      goto LABEL_105;
    }
    ++*(_DWORD *)(v5 + 180);
    v4 = (volatile signed __int32 *)v58;
    *(_QWORD *)(v5 + 168) = v58;
    goto LABEL_105;
  }
  LODWORD(v6) = *((unsigned __int16 *)&v15->Next + 6) + (*((unsigned __int16 *)&v15->Next + 5) << 16);
LABEL_129:
  if ( !byte_18017A188 )
  {
    v72 = _InterlockedCompareExchange64((volatile signed __int64 *)(v56 + 736), 0LL, 1LL);
    if ( v72 != 1 )
    {
      do
      {
        v73 = 3LL;
        v74 = v72 & 6;
        if ( v74 != 2 )
          v73 = -1LL;
        v75 = v72 + v73;
        v76 = v72;
        v72 = _InterlockedCompareExchange64((volatile signed __int64 *)(v56 + 736), v75, v72);
      }
      while ( v76 != v72 );
      if ( v74 == 2 )
      {
        while ( (v75 & 1) == 0 )
        {
LABEL_138:
          v13 = v75 & 0xFFFFFFFFFFFFFFF0uLL;
          v78 = (_QWORD *)(v75 & 0xFFFFFFFFFFFFFFF0uLL);
          v79 = *(volatile signed __int32 **)((v75 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v79 )
          {
            do
            {
              v80 = v78;
              v78 = (_QWORD *)*v78;
              v78[2] = v80;
              v79 = (volatile signed __int32 *)v78[1];
            }
            while ( !v79 );
            if ( v78 != (_QWORD *)v13 )
              *(_QWORD *)((v75 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v79;
          }
          if ( (v79[9] & 1) != 0 )
          {
            v81 = *((_QWORD *)v79 + 2);
            if ( v81 )
            {
              *(_QWORD *)((v75 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v81;
              *((_QWORD *)v79 + 2) = 0LL;
              _InterlockedAnd64((volatile signed __int64 *)(v56 + 736), 0xFFFFFFFFFFFFFFFBuLL);
              do
              {
LABEL_146:
                v4 = (volatile signed __int32 *)*((_QWORD *)v79 + 2);
                v83 = *((_QWORD *)v79 + 3);
                _interlockedbittestandset(v79 + 9, 2u);
                if ( !_interlockedbittestandreset(v79 + 9, 1u) )
                  ZwAlertThreadByThreadId(v83);
                v79 = v4;
              }
              while ( v4 );
              goto LABEL_149;
            }
          }
          v82 = _InterlockedCompareExchange64((volatile signed __int64 *)(v56 + 736), 0LL, v75);
          v22 = v75 == v82;
          v75 = v82;
          if ( v22 )
            goto LABEL_146;
        }
        while ( 1 )
        {
          v77 = _InterlockedCompareExchange64((volatile signed __int64 *)(v56 + 736), v75 - 4, v75);
          v22 = v75 == v77;
          v75 = v77;
          if ( v22 )
            break;
          if ( (v77 & 1) == 0 )
            goto LABEL_138;
        }
      }
    }
  }
LABEL_149:
  if ( !(_DWORD)v6 )
    RtlStdReleaseStackTrace(v5, v15, v13);
LABEL_6:
  WORD1(Heap->Next) = v6;
  *((_WORD *)&Heap[2].Next + 6) = WORD1(v6);
  v7 = NtCreateSemaphore(&Handle, 1048579LL, 0LL, 0LL, 0x7FFFFFFF);
  if ( v7 < 0 )
  {
    RtlpFreeDebugInfo(Heap);
    RtlRaiseStatus((unsigned int)v7);
    __debugbreak();
  }
  v8 = NtCreateSemaphore(&v89, 1048579LL, 0LL, 0LL, 0x7FFFFFFF);
  if ( v8 < 0 )
  {
    NtClose(Handle);
    RtlpFreeDebugInfo(Heap);
    RtlRaiseStatus((unsigned int)v8);
    __debugbreak();
  }
  *(_QWORD *)(a1 + 40) = Handle;
  *(_QWORD *)(a1 + 56) = v89;
  *(_DWORD *)(a1 + 48) = (_DWORD)v4;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = v4;
  *(_DWORD *)(a1 + 80) = (_DWORD)v4;
  *(_QWORD *)(a1 + 88) = Heap;
  RtlInitializeCriticalSectionEx(a1, 0LL, 0x8000000LL);
  RtlpAddDebugInfoToCriticalSection(a1);
  result = *(_WORD **)a1;
  if ( *(_QWORD *)a1 != -1LL )
    *result = 1;
  return result;
}
