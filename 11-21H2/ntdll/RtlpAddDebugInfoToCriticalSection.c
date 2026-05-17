/*
 * XREFs of RtlpAddDebugInfoToCriticalSection @ 0x18001D180
 * Callers:
 *     RtlpWaitOnCriticalSection @ 0x18001D420 (RtlpWaitOnCriticalSection.c)
 *     RtlInitializeResource @ 0x18001D900 (RtlInitializeResource.c)
 *     RtlInitializeCriticalSectionEx @ 0x18001DA80 (RtlInitializeCriticalSectionEx.c)
 *     RtlInitializeCriticalSection @ 0x1800698D0 (RtlInitializeCriticalSection.c)
 *     RtlInitializeCriticalSectionAndSpinCount @ 0x18006A0F0 (RtlInitializeCriticalSectionAndSpinCount.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlpFreeDebugInfo @ 0x18001E3C0 (RtlpFreeDebugInfo.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlCaptureStackBackTrace @ 0x18007FE00 (RtlCaptureStackBackTrace.c)
 *     ZwAllocateVirtualMemory @ 0x1800A4370 (ZwAllocateVirtualMemory.c)
 *     ZwAlertThreadByThreadId @ 0x1800A4E60 (ZwAlertThreadByThreadId.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A7D40 (RtlpInterlockedPopEntrySList.c)
 *     RtlCompareMemory @ 0x1800A8B30 (RtlCompareMemory.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     RtlStdReleaseStackTrace @ 0x18010E020 (RtlStdReleaseStackTrace.c)
 */

signed __int64 __fastcall RtlpAddDebugInfoToCriticalSection(__int64 a1)
{
  unsigned __int64 v2; // rdx
  PSLIST_ENTRY v3; // rbx
  __int64 v4; // r8
  _QWORD *v5; // r9
  signed __int64 result; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  __int64 v9; // rsi
  volatile signed __int64 v10; // rbx
  signed __int64 *v11; // rax
  signed __int64 v12; // rbx
  __int64 v13; // rdx
  signed __int64 v14; // rcx
  signed __int64 v15; // rdx
  signed __int64 v16; // rtt
  _QWORD *v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rax
  bool v20; // zf
  signed __int64 v21; // rax
  __int64 v22; // rbx
  _QWORD *v23; // rax
  USHORT v24; // ax
  __int64 v25; // r12
  PSLIST_ENTRY v26; // r14
  SIZE_T v27; // rax
  signed __int64 v28; // rax
  __int64 v29; // rdx
  signed __int64 v30; // rcx
  signed __int64 v31; // rtt
  signed __int64 v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rax
  unsigned int v36; // esi
  PSLIST_ENTRY v37; // rax
  unsigned __int64 v38; // r13
  PSLIST_ENTRY v39; // rsi
  struct _SLIST_ENTRY *v40; // r15
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // r14
  signed __int64 v43; // rax
  __int64 v44; // rdx
  signed __int64 v45; // rcx
  signed __int64 v46; // rtt
  signed __int64 v47; // rax
  __int64 v48; // rcx
  _QWORD *v49; // rax
  __int64 v50; // rax
  int v51; // eax
  signed __int64 v52; // rax
  __int64 v53; // r14
  __int64 v54; // rax
  unsigned int v55; // eax
  __int16 v56; // cx
  signed __int64 v57; // rax
  __int64 v58; // rsi
  __int64 v59; // rax
  unsigned int v60; // eax
  struct _SLIST_ENTRY *v61; // rcx
  unsigned __int64 v62; // r15
  _QWORD *v63; // r12
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rsi
  signed __int64 v66; // rax
  __int64 v67; // rdx
  signed __int64 v68; // rcx
  signed __int64 v69; // rtt
  signed __int64 v70; // rax
  __int64 v71; // rcx
  _QWORD *v72; // rax
  __int64 v73; // rax
  signed __int64 v74; // rax
  __int64 v75; // rsi
  __int64 v76; // rax
  signed __int64 v77; // rax
  __int64 v78; // rdx
  signed __int64 v79; // rcx
  signed __int64 v80; // rtt
  signed __int64 v81; // rax
  __int64 v82; // rcx
  _QWORD *v83; // rax
  __int64 v84; // rax
  signed __int64 v85; // rax
  __int64 v86; // r15
  __int64 v87; // rax
  unsigned __int64 v88; // [rsp+30h] [rbp-168h] BYREF
  unsigned __int64 v89; // [rsp+38h] [rbp-160h] BYREF
  __int64 v90[3]; // [rsp+40h] [rbp-158h] BYREF
  USHORT v91; // [rsp+5Eh] [rbp-13Ah]
  PVOID BackTrace[32]; // [rsp+60h] [rbp-138h] BYREF
  ULONG BackTraceHash; // [rsp+1A8h] [rbp+10h] BYREF
  SIZE_T Length; // [rsp+1B0h] [rbp+18h]
  unsigned __int64 v95; // [rsp+1B8h] [rbp+20h] BYREF

  v3 = RtlpInterlockedPopEntrySList(&RtlCriticalSectionDebugSList);
  if ( !v3 )
  {
    result = (signed __int64)NtCurrentPeb();
    v7 = *(_QWORD *)(result + 48);
    if ( !v7 || (result = RtlAllocateHeap(v7, 0LL, 48LL), (v3 = (PSLIST_ENTRY)result) == 0LL) )
    {
      _InterlockedIncrement(&RtlFailedCriticalDebugAllocations);
      return result;
    }
  }
  LOWORD(v3->Next) = 0;
  if ( (*(_DWORD *)(a1 + 32) & 0x8000000) != 0 )
    LOWORD(v3->Next) = 1;
  v3[2].Next = 0LL;
  *((_QWORD *)&v3->Next + 1) = a1;
  *((_DWORD *)&v3[2].Next + 2) = 0;
  v8 = RtlpStackTraceDatabase;
  if ( !RtlpStackTraceDatabase )
  {
    LODWORD(v9) = 0;
    goto LABEL_8;
  }
  v24 = RtlCaptureStackBackTrace(3u, 0x20u, BackTrace, &BackTraceHash);
  v91 = v24;
  if ( !v24 )
    goto LABEL_173;
  v2 = BackTraceHash % *(_DWORD *)(v8 + 720);
  v4 = 8LL * v24;
  v25 = 16LL * (unsigned int)v2 + v8 + 728;
  Length = v4;
  _InterlockedIncrement((volatile signed __int32 *)(v8 + 176));
  if ( !byte_18017A188 )
  {
    RtlAcquireSRWLockExclusive(v25 + 8, v2, v4, (unsigned __int64)v5);
    v4 = Length;
  }
  v26 = *(PSLIST_ENTRY *)v25;
  if ( *(_QWORD *)v25 )
  {
    do
    {
      if ( *((_WORD *)&v26->Next + 7) == v91 )
      {
        v27 = RtlCompareMemory(&v26[1], BackTrace, v4);
        v4 = Length;
        if ( v27 == Length )
          goto LABEL_103;
      }
      v26 = v26->Next;
    }
    while ( v26 );
  }
  if ( !v91 )
  {
    v26 = 0LL;
LABEL_44:
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 200));
    goto LABEL_45;
  }
  v36 = v91 - 1;
  if ( v36 < 0x20 )
  {
    while ( 1 )
    {
      v37 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v8 + 16 * (v36 + 13LL)));
      if ( v37 )
        break;
      if ( ++v36 >= 0x20 )
      {
        v4 = Length;
        goto LABEL_65;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 196));
    v39 = v37 - 1;
    v4 = Length;
    goto LABEL_101;
  }
LABEL_65:
  v38 = (8LL * v91 + 31) & 0xFFFFFFFFFFFFFFF0uLL;
  v39 = 0LL;
  if ( !byte_18017A188 )
  {
    RtlAcquireSRWLockExclusive(v8, v2, v4, (unsigned __int64)v5);
    v4 = Length;
  }
  v40 = *(struct _SLIST_ENTRY **)(v8 + 160);
  v41 = *(_QWORD *)(v8 + 144);
  v88 = v41;
  v42 = (unsigned __int64)v40 + v38;
  if ( *(_BYTE *)(v8 + 128) )
  {
    if ( v42 > *(_QWORD *)(v8 + 168) )
      goto LABEL_70;
  }
  else if ( v42 > v41 )
  {
    v89 = (v38 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    if ( v41 + v89 >= *(_QWORD *)(v8 + 152) )
      goto LABEL_70;
    v51 = ZwAllocateVirtualMemory(-1LL, &v88, 0LL, &v89, 4096, 4);
    v4 = Length;
    if ( v51 < 0 )
      goto LABEL_70;
    *(_QWORD *)(v8 + 144) = v89 + v88;
  }
  ++*(_DWORD *)(v8 + 192);
  v39 = v40;
  *(_QWORD *)(v8 + 160) = v42;
LABEL_70:
  if ( !byte_18017A188 )
  {
    v43 = _InterlockedCompareExchange64((volatile signed __int64 *)v8, 0LL, 1LL);
    if ( v43 != 1 )
    {
      do
      {
        v44 = 3LL;
        v45 = v43 & 6;
        if ( v45 != 2 )
          v44 = -1LL;
        v2 = v43 + v44;
        v46 = v43;
        v43 = _InterlockedCompareExchange64((volatile signed __int64 *)v8, v2, v43);
      }
      while ( v46 != v43 );
      if ( v45 == 2 )
      {
        while ( (v2 & 1) == 0 )
        {
LABEL_79:
          v5 = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0uLL);
          v48 = *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v48 )
          {
            do
            {
              v49 = v5;
              v5 = (_QWORD *)*v5;
              v5[2] = v49;
              v48 = v5[1];
            }
            while ( !v48 );
            if ( v5 != (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0uLL) )
              *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v48;
          }
          if ( (*(_DWORD *)(v48 + 36) & 1) != 0 )
          {
            v50 = *(_QWORD *)(v48 + 16);
            if ( v50 )
            {
              *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v50;
              *(_QWORD *)(v48 + 16) = 0LL;
              _InterlockedAnd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFBuLL);
              do
              {
LABEL_93:
                v53 = *(_QWORD *)(v48 + 16);
                v54 = *(_QWORD *)(v48 + 24);
                _interlockedbittestandset((volatile signed __int32 *)(v48 + 36), 2u);
                if ( !_interlockedbittestandreset((volatile signed __int32 *)(v48 + 36), 1u) )
                  ZwAlertThreadByThreadId(v54);
                v48 = v53;
              }
              while ( v53 );
              goto LABEL_96;
            }
          }
          v52 = _InterlockedCompareExchange64((volatile signed __int64 *)v8, 0LL, v2);
          v20 = v2 == v52;
          v2 = v52;
          if ( v20 )
            goto LABEL_93;
        }
        while ( 1 )
        {
          v47 = _InterlockedCompareExchange64((volatile signed __int64 *)v8, v2 - 4, v2);
          v20 = v2 == v47;
          v2 = v47;
          if ( v20 )
            break;
          if ( (v47 & 1) == 0 )
            goto LABEL_79;
        }
LABEL_96:
        v4 = Length;
      }
    }
  }
  v26 = v39;
  if ( v39 )
  {
    v55 = ((unsigned int)(v38 - 16) >> 3) - 1;
    if ( v55 > 0x1F )
      LOWORD(v55) = 31;
    *((_WORD *)&v39->Next + 4) &= 0x7FFu;
    *((_WORD *)&v39->Next + 4) |= (_WORD)v55 << 11;
    goto LABEL_102;
  }
LABEL_101:
  v26 = v39;
  if ( !v39 )
    goto LABEL_44;
LABEL_102:
  memmove(&v39[1], BackTrace, v4);
  HIDWORD(v2) = 0;
  *((_WORD *)&v39->Next + 7) = v91;
  *((_WORD *)&v39->Next + 4) &= 0xF800u;
  LODWORD(v2) = BackTraceHash % *(_DWORD *)(v8 + 720);
  v39->Next = *(_SLIST_ENTRY **)(v8 + 16LL * (unsigned int)v2 + 728);
  *(_QWORD *)(v8 + 16LL * (unsigned int)v2 + 728) = v39;
LABEL_103:
  v56 = *((_WORD *)&v26->Next + 4);
  if ( (v56 & 0x7FF) != 0x7FF )
    *((_WORD *)&v26->Next + 4) = v56 ^ (v56 ^ (v56 + 1)) & 0x7FF;
LABEL_45:
  if ( !byte_18017A188 )
  {
    v28 = _InterlockedCompareExchange64((volatile signed __int64 *)(v25 + 8), 0LL, 1LL);
    if ( v28 != 1 )
    {
      do
      {
        v29 = 3LL;
        v30 = v28 & 6;
        if ( v30 != 2 )
          v29 = -1LL;
        v2 = v28 + v29;
        v31 = v28;
        v28 = _InterlockedCompareExchange64((volatile signed __int64 *)(v25 + 8), v2, v28);
      }
      while ( v31 != v28 );
      if ( v30 == 2 )
      {
        while ( (v2 & 1) == 0 )
        {
LABEL_54:
          v4 = v2 & 0xFFFFFFFFFFFFFFF0uLL;
          v5 = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0uLL);
          v33 = *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v33 )
          {
            do
            {
              v34 = v5;
              v5 = (_QWORD *)*v5;
              v5[2] = v34;
              v33 = v5[1];
            }
            while ( !v33 );
            if ( v5 != (_QWORD *)v4 )
              *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v33;
          }
          if ( (*(_DWORD *)(v33 + 36) & 1) != 0 )
          {
            v35 = *(_QWORD *)(v33 + 16);
            if ( v35 )
            {
              *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v35;
              *(_QWORD *)(v33 + 16) = 0LL;
              _InterlockedAnd64((volatile signed __int64 *)(v25 + 8), 0xFFFFFFFFFFFFFFFBuLL);
              do
              {
LABEL_106:
                v58 = *(_QWORD *)(v33 + 16);
                v59 = *(_QWORD *)(v33 + 24);
                _interlockedbittestandset((volatile signed __int32 *)(v33 + 36), 2u);
                if ( !_interlockedbittestandreset((volatile signed __int32 *)(v33 + 36), 1u) )
                  ZwAlertThreadByThreadId(v59);
                v33 = v58;
              }
              while ( v58 );
              goto LABEL_109;
            }
          }
          v57 = _InterlockedCompareExchange64((volatile signed __int64 *)(v25 + 8), 0LL, v2);
          v20 = v2 == v57;
          v2 = v57;
          if ( v20 )
            goto LABEL_106;
        }
        while ( 1 )
        {
          v32 = _InterlockedCompareExchange64((volatile signed __int64 *)(v25 + 8), v2 - 4, v2);
          v20 = v2 == v32;
          v2 = v32;
          if ( v20 )
            break;
          if ( (v32 & 1) == 0 )
            goto LABEL_54;
        }
      }
    }
  }
LABEL_109:
  if ( v26 )
  {
    v60 = 0;
    if ( *((_WORD *)&v26->Next + 7) )
    {
      v61 = v26 + 1;
      v4 = *((unsigned __int16 *)&v26->Next + 7);
      do
      {
        v60 += LODWORD(v61->Next);
        v61 = (struct _SLIST_ENTRY *)((char *)v61 + 8);
        --v4;
      }
      while ( v4 );
    }
    v2 = v60 % *(_DWORD *)(v8 + 720);
    v62 = v8 + 16LL * (unsigned int)v2;
    if ( !byte_18017A188 )
      RtlAcquireSRWLockExclusive(v62 + 736, v2, v4, (unsigned __int64)v5);
    if ( *(_DWORD *)((char *)&v26->Next + 10) )
    {
      LODWORD(v9) = *((unsigned __int16 *)&v26->Next + 6) + (*((unsigned __int16 *)&v26->Next + 5) << 16);
LABEL_150:
      if ( !byte_18017A188 )
      {
        v77 = _InterlockedCompareExchange64((volatile signed __int64 *)(v62 + 736), 0LL, 1LL);
        if ( v77 != 1 )
        {
          do
          {
            v78 = 3LL;
            v79 = v77 & 6;
            if ( v79 != 2 )
              v78 = -1LL;
            v2 = v77 + v78;
            v80 = v77;
            v77 = _InterlockedCompareExchange64((volatile signed __int64 *)(v62 + 736), v2, v77);
          }
          while ( v80 != v77 );
          if ( v79 == 2 )
          {
            while ( (v2 & 1) == 0 )
            {
LABEL_159:
              v4 = v2 & 0xFFFFFFFFFFFFFFF0uLL;
              v5 = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0uLL);
              v82 = *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
              if ( !v82 )
              {
                do
                {
                  v83 = v5;
                  v5 = (_QWORD *)*v5;
                  v5[2] = v83;
                  v82 = v5[1];
                }
                while ( !v82 );
                if ( v5 != (_QWORD *)v4 )
                  *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v82;
              }
              if ( (*(_DWORD *)(v82 + 36) & 1) != 0 )
              {
                v84 = *(_QWORD *)(v82 + 16);
                if ( v84 )
                {
                  *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v84;
                  *(_QWORD *)(v82 + 16) = 0LL;
                  _InterlockedAnd64((volatile signed __int64 *)(v62 + 736), 0xFFFFFFFFFFFFFFFBuLL);
                  do
                  {
LABEL_167:
                    v86 = *(_QWORD *)(v82 + 16);
                    v87 = *(_QWORD *)(v82 + 24);
                    _interlockedbittestandset((volatile signed __int32 *)(v82 + 36), 2u);
                    if ( !_interlockedbittestandreset((volatile signed __int32 *)(v82 + 36), 1u) )
                      ZwAlertThreadByThreadId(v87);
                    v82 = v86;
                  }
                  while ( v86 );
                  goto LABEL_170;
                }
              }
              v85 = _InterlockedCompareExchange64((volatile signed __int64 *)(v62 + 736), 0LL, v2);
              v20 = v2 == v85;
              v2 = v85;
              if ( v20 )
                goto LABEL_167;
            }
            while ( 1 )
            {
              v81 = _InterlockedCompareExchange64((volatile signed __int64 *)(v62 + 736), v2 - 4, v2);
              v20 = v2 == v81;
              v2 = v81;
              if ( v20 )
                break;
              if ( (v81 & 1) == 0 )
                goto LABEL_159;
            }
          }
        }
      }
LABEL_170:
      if ( !(_DWORD)v9 )
        RtlStdReleaseStackTrace(v8, v26, v4);
      goto LABEL_8;
    }
    v63 = 0LL;
    if ( !byte_18017A188 )
      RtlAcquireSRWLockExclusive(v8, v2, v4, (unsigned __int64)v5);
    v64 = *(_QWORD *)(v8 + 152);
    v65 = *(_QWORD *)(v8 + 168) - 8LL;
    v20 = *(_BYTE *)(v8 + 128) == 0;
    v95 = v64;
    if ( v20 )
    {
      if ( v65 < v64 )
      {
        v90[0] = 4096LL;
        if ( v64 - 4096 <= *(_QWORD *)(v8 + 144)
          || (v95 = v64 - 4096, (int)ZwAllocateVirtualMemory(-1LL, &v95, 0LL, v90, 4096, 4) < 0) )
        {
LABEL_126:
          if ( !byte_18017A188 )
          {
            v66 = _InterlockedCompareExchange64((volatile signed __int64 *)v8, 0LL, 1LL);
            if ( v66 != 1 )
            {
              do
              {
                v67 = 3LL;
                v68 = v66 & 6;
                if ( v68 != 2 )
                  v67 = -1LL;
                v2 = v66 + v67;
                v69 = v66;
                v66 = _InterlockedCompareExchange64((volatile signed __int64 *)v8, v2, v66);
              }
              while ( v69 != v66 );
              if ( v68 == 2 )
              {
                while ( (v2 & 1) == 0 )
                {
LABEL_135:
                  v4 = v2 & 0xFFFFFFFFFFFFFFF0uLL;
                  v5 = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0uLL);
                  v71 = *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
                  if ( !v71 )
                  {
                    do
                    {
                      v72 = v5;
                      v5 = (_QWORD *)*v5;
                      v5[2] = v72;
                      v71 = v5[1];
                    }
                    while ( !v71 );
                    if ( v5 != (_QWORD *)v4 )
                      *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v71;
                  }
                  if ( (*(_DWORD *)(v71 + 36) & 1) != 0 )
                  {
                    v73 = *(_QWORD *)(v71 + 16);
                    if ( v73 )
                    {
                      *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v73;
                      *(_QWORD *)(v71 + 16) = 0LL;
                      _InterlockedAnd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFBuLL);
                      do
                      {
LABEL_143:
                        v75 = *(_QWORD *)(v71 + 16);
                        v76 = *(_QWORD *)(v71 + 24);
                        _interlockedbittestandset((volatile signed __int32 *)(v71 + 36), 2u);
                        if ( !_interlockedbittestandreset((volatile signed __int32 *)(v71 + 36), 1u) )
                          ZwAlertThreadByThreadId(v76);
                        v71 = v75;
                      }
                      while ( v75 );
                      goto LABEL_146;
                    }
                  }
                  v74 = _InterlockedCompareExchange64((volatile signed __int64 *)v8, 0LL, v2);
                  v20 = v2 == v74;
                  v2 = v74;
                  if ( v20 )
                    goto LABEL_143;
                }
                while ( 1 )
                {
                  v70 = _InterlockedCompareExchange64((volatile signed __int64 *)v8, v2 - 4, v2);
                  v20 = v2 == v70;
                  v2 = v70;
                  if ( v20 )
                    break;
                  if ( (v70 & 1) == 0 )
                    goto LABEL_135;
                }
              }
            }
          }
LABEL_146:
          if ( v63 )
          {
            *v63 = v26;
            v9 = (__int64)(*(_QWORD *)(v8 + 184) - (_QWORD)v63) >> 3;
            *((_WORD *)&v26->Next + 6) = v9;
            *((_WORD *)&v26->Next + 5) = WORD1(v9);
          }
          else
          {
            LODWORD(v9) = 0;
          }
          goto LABEL_150;
        }
        *(_QWORD *)(v8 + 152) = v95;
      }
    }
    else if ( v65 < *(_QWORD *)(v8 + 160) )
    {
      goto LABEL_126;
    }
    ++*(_DWORD *)(v8 + 180);
    v63 = (_QWORD *)v65;
    *(_QWORD *)(v8 + 168) = v65;
    goto LABEL_126;
  }
LABEL_173:
  LODWORD(v9) = 0;
LABEL_8:
  WORD1(v3->Next) = v9;
  *((_WORD *)&v3[2].Next + 6) = WORD1(v9);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1, (signed __int64)v3, -1LL) != -1 )
    return RtlpFreeDebugInfo(v3);
  v10 = *(_QWORD *)a1;
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlCriticalSectionLock, v2, v4, (unsigned __int64)v5);
  v11 = (signed __int64 *)off_1801743E0[0];
  v12 = v10 + 16;
  if ( *(_UNKNOWN ***)off_1801743E0[0] != &RtlCriticalSectionList )
    __fastfail(3u);
  *(_UNKNOWN ***)(v12 + 8) = off_1801743E0[0];
  *(_QWORD *)v12 = &RtlCriticalSectionList;
  *v11 = v12;
  off_1801743E0[0] = (_UNKNOWN **)v12;
  result = _InterlockedCompareExchange64(&RtlCriticalSectionLock, 0LL, 1LL);
  if ( result != 1 )
  {
    do
    {
      v13 = 3LL;
      v14 = result & 6;
      if ( v14 != 2 )
        v13 = -1LL;
      v15 = result + v13;
      v16 = result;
      result = _InterlockedCompareExchange64(&RtlCriticalSectionLock, v15, result);
    }
    while ( v16 != result );
    if ( v14 == 2 )
    {
      while ( (v15 & 1) == 0 )
      {
LABEL_18:
        v17 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0uLL);
        v18 = *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
        if ( !v18 )
        {
          do
          {
            v23 = v17;
            v17 = (_QWORD *)*v17;
            v17[2] = v23;
            v18 = v17[1];
          }
          while ( !v18 );
          if ( v17 != (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0uLL) )
            *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v18;
        }
        if ( (*(_DWORD *)(v18 + 36) & 1) != 0 )
        {
          v19 = *(_QWORD *)(v18 + 16);
          if ( v19 )
          {
            *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v19;
            *(_QWORD *)(v18 + 16) = 0LL;
            _InterlockedAnd64(&RtlCriticalSectionLock, 0xFFFFFFFFFFFFFFFBuLL);
            do
            {
LABEL_22:
              v22 = *(_QWORD *)(v18 + 16);
              result = *(_QWORD *)(v18 + 24);
              _interlockedbittestandset((volatile signed __int32 *)(v18 + 36), 2u);
              if ( !_interlockedbittestandreset((volatile signed __int32 *)(v18 + 36), 1u) )
                result = ZwAlertThreadByThreadId(result);
              v18 = v22;
            }
            while ( v22 );
            return result;
          }
        }
        v21 = _InterlockedCompareExchange64(&RtlCriticalSectionLock, 0LL, v15);
        v20 = v15 == v21;
        v15 = v21;
        if ( v20 )
          goto LABEL_22;
      }
      while ( 1 )
      {
        result = _InterlockedCompareExchange64(&RtlCriticalSectionLock, v15 - 4, v15);
        v20 = v15 == result;
        v15 = result;
        if ( v20 )
          break;
        if ( (result & 1) == 0 )
          goto LABEL_18;
      }
    }
  }
  return result;
}
