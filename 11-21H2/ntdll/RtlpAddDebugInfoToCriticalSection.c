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

int __fastcall RtlpAddDebugInfoToCriticalSection(__int64 a1)
{
  PSLIST_ENTRY v2; // rbx
  signed __int64 Heap; // rax
  void *v4; // rcx
  PRTL_SRWLOCK v5; // rbp
  __int64 v6; // rsi
  volatile signed __int64 v7; // rbx
  signed __int64 *v8; // rax
  signed __int64 v9; // rbx
  __int64 v10; // rdx
  signed __int64 v11; // rcx
  signed __int64 v12; // rdx
  signed __int64 v13; // rtt
  _QWORD *v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rax
  bool v17; // zf
  signed __int64 v18; // rax
  __int64 v19; // rbx
  _QWORD *v20; // rax
  USHORT v21; // ax
  __int64 v22; // r8
  _RTL_SRWLOCK *v23; // r12
  unsigned __int64 i; // r14
  SIZE_T v25; // rax
  signed __int64 v26; // rax
  __int64 v27; // rdx
  signed __int64 v28; // rcx
  signed __int64 v29; // rdx
  signed __int64 v30; // rtt
  signed __int64 v31; // rax
  _QWORD *v32; // r9
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rax
  unsigned int v36; // esi
  PSLIST_ENTRY v37; // rax
  unsigned __int64 v38; // r13
  PSLIST_ENTRY v39; // rsi
  unsigned __int64 Value; // r15
  void *Ptr; // rcx
  unsigned __int64 v42; // r14
  signed __int64 v43; // rax
  __int64 v44; // rdx
  signed __int64 v45; // rcx
  signed __int64 v46; // rdx
  signed __int64 v47; // rtt
  signed __int64 v48; // rax
  _QWORD *v49; // r9
  __int64 v50; // rcx
  _QWORD *v51; // rax
  __int64 v52; // rax
  NTSTATUS v53; // eax
  signed __int64 v54; // rax
  __int64 v55; // r14
  void *v56; // rax
  unsigned int v57; // eax
  __int64 v58; // rcx
  __int16 v59; // cx
  signed __int64 v60; // rax
  __int64 v61; // rsi
  void *v62; // rax
  unsigned int v63; // eax
  _DWORD *v64; // rcx
  _RTL_SRWLOCK *v65; // r15
  _QWORD *v66; // r12
  char *v67; // rcx
  unsigned __int64 v68; // rsi
  signed __int64 v69; // rax
  __int64 v70; // rdx
  signed __int64 v71; // rcx
  signed __int64 v72; // rdx
  signed __int64 v73; // rtt
  signed __int64 v74; // rax
  _QWORD *v75; // r9
  __int64 v76; // rcx
  _QWORD *v77; // rax
  __int64 v78; // rax
  signed __int64 v79; // rax
  __int64 v80; // rsi
  void *v81; // rax
  signed __int64 v82; // rax
  __int64 v83; // rdx
  signed __int64 v84; // rcx
  signed __int64 v85; // rdx
  signed __int64 v86; // rtt
  signed __int64 v87; // rax
  _QWORD *v88; // r9
  __int64 v89; // rcx
  _QWORD *v90; // rax
  __int64 v91; // rax
  signed __int64 v92; // rax
  __int64 v93; // r15
  void *v94; // rax
  PVOID BaseAddress; // [rsp+30h] [rbp-168h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-160h] BYREF
  ULONG_PTR v98[3]; // [rsp+40h] [rbp-158h] BYREF
  USHORT v99; // [rsp+5Eh] [rbp-13Ah]
  PVOID BackTrace[32]; // [rsp+60h] [rbp-138h] BYREF
  ULONG BackTraceHash; // [rsp+1A8h] [rbp+10h] BYREF
  SIZE_T Length; // [rsp+1B0h] [rbp+18h]
  PVOID v103; // [rsp+1B8h] [rbp+20h] BYREF

  v2 = RtlpInterlockedPopEntrySList(&RtlCriticalSectionDebugSList);
  if ( !v2 )
  {
    Heap = (signed __int64)NtCurrentPeb();
    v4 = *(void **)(Heap + 48);
    if ( !v4 || (Heap = (signed __int64)RtlAllocateHeap(v4, 0, 0x30uLL), (v2 = (PSLIST_ENTRY)Heap) == 0LL) )
    {
      _InterlockedIncrement(&RtlFailedCriticalDebugAllocations);
      return Heap;
    }
  }
  LOWORD(v2->Next) = 0;
  if ( (*(_DWORD *)(a1 + 32) & 0x8000000) != 0 )
    LOWORD(v2->Next) = 1;
  v2[2].Next = 0LL;
  *((_QWORD *)&v2->Next + 1) = a1;
  *((_DWORD *)&v2[2].Next + 2) = 0;
  v5 = RtlpStackTraceDatabase;
  if ( !RtlpStackTraceDatabase )
  {
    LODWORD(v6) = 0;
    goto LABEL_8;
  }
  v21 = RtlCaptureStackBackTrace(3u, 0x20u, BackTrace, &BackTraceHash);
  v99 = v21;
  if ( !v21 )
    goto LABEL_173;
  v22 = 8LL * v21;
  v23 = &v5[2 * (BackTraceHash % *(_DWORD *)&v5[90].0) + 91];
  Length = v22;
  _InterlockedIncrement((volatile signed __int32 *)&v5[22]);
  if ( !byte_18017A188 )
  {
    RtlAcquireSRWLockExclusive(v23 + 1);
    v22 = Length;
  }
  for ( i = v23->Value; i; i = *(_QWORD *)i )
  {
    if ( *(_WORD *)(i + 14) == v99 )
    {
      v25 = RtlCompareMemory((const void *)(i + 16), BackTrace, v22);
      v22 = Length;
      if ( v25 == Length )
        goto LABEL_103;
    }
  }
  if ( !v99 )
  {
    i = 0LL;
LABEL_44:
    _InterlockedIncrement((volatile signed __int32 *)&v5[25]);
    goto LABEL_45;
  }
  v36 = v99 - 1;
  if ( v36 < 0x20 )
  {
    while ( 1 )
    {
      v37 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&v5[2 * v36 + 26]);
      if ( v37 )
        break;
      if ( ++v36 >= 0x20 )
      {
        v22 = Length;
        goto LABEL_65;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)&v5[24].Ptr + 1);
    v39 = v37 - 1;
    v22 = Length;
    goto LABEL_101;
  }
LABEL_65:
  v38 = (8LL * v99 + 31) & 0xFFFFFFFFFFFFFFF0uLL;
  v39 = 0LL;
  if ( !byte_18017A188 )
  {
    RtlAcquireSRWLockExclusive(v5);
    v22 = Length;
  }
  Value = v5[20].Value;
  Ptr = v5[18].Ptr;
  BaseAddress = Ptr;
  v42 = Value + v38;
  if ( v5[16].0 )
  {
    if ( v42 > v5[21].Value )
      goto LABEL_70;
  }
  else if ( v42 > (unsigned __int64)Ptr )
  {
    RegionSize = (v38 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    if ( (unsigned __int64)Ptr + RegionSize >= v5[19].Value )
      goto LABEL_70;
    v53 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
    v22 = Length;
    if ( v53 < 0 )
      goto LABEL_70;
    v5[18].Value = (unsigned __int64)BaseAddress + RegionSize;
  }
  ++*(_DWORD *)&v5[24].0;
  v39 = (PSLIST_ENTRY)Value;
  v5[20].Value = v42;
LABEL_70:
  if ( !byte_18017A188 )
  {
    v43 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, 1LL);
    if ( v43 != 1 )
    {
      do
      {
        v44 = 3LL;
        v45 = v43 & 6;
        if ( v45 != 2 )
          v44 = -1LL;
        v46 = v43 + v44;
        v47 = v43;
        v43 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, v46, v43);
      }
      while ( v47 != v43 );
      if ( v45 == 2 )
      {
        while ( (v46 & 1) == 0 )
        {
LABEL_79:
          v49 = (_QWORD *)(v46 & 0xFFFFFFFFFFFFFFF0uLL);
          v50 = *(_QWORD *)((v46 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v50 )
          {
            do
            {
              v51 = v49;
              v49 = (_QWORD *)*v49;
              v49[2] = v51;
              v50 = v49[1];
            }
            while ( !v50 );
            if ( v49 != (_QWORD *)(v46 & 0xFFFFFFFFFFFFFFF0uLL) )
              *(_QWORD *)((v46 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v50;
          }
          if ( (*(_DWORD *)(v50 + 36) & 1) != 0 )
          {
            v52 = *(_QWORD *)(v50 + 16);
            if ( v52 )
            {
              *(_QWORD *)((v46 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v52;
              *(_QWORD *)(v50 + 16) = 0LL;
              _InterlockedAnd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFBuLL);
              do
              {
LABEL_93:
                v55 = *(_QWORD *)(v50 + 16);
                v56 = *(void **)(v50 + 24);
                _interlockedbittestandset((volatile signed __int32 *)(v50 + 36), 2u);
                if ( !_interlockedbittestandreset((volatile signed __int32 *)(v50 + 36), 1u) )
                  ZwAlertThreadByThreadId(v56);
                v50 = v55;
              }
              while ( v55 );
              goto LABEL_96;
            }
          }
          v54 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, v46);
          v17 = v46 == v54;
          v46 = v54;
          if ( v17 )
            goto LABEL_93;
        }
        while ( 1 )
        {
          v48 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, v46 - 4, v46);
          v17 = v46 == v48;
          v46 = v48;
          if ( v17 )
            break;
          if ( (v48 & 1) == 0 )
            goto LABEL_79;
        }
LABEL_96:
        v22 = Length;
      }
    }
  }
  i = (unsigned __int64)v39;
  if ( v39 )
  {
    v57 = ((unsigned int)(v38 - 16) >> 3) - 1;
    if ( v57 > 0x1F )
      LOWORD(v57) = 31;
    *((_WORD *)&v39->Next + 4) &= 0x7FFu;
    *((_WORD *)&v39->Next + 4) |= (_WORD)v57 << 11;
    goto LABEL_102;
  }
LABEL_101:
  i = (unsigned __int64)v39;
  if ( !v39 )
    goto LABEL_44;
LABEL_102:
  memmove(&v39[1], BackTrace, v22);
  *((_WORD *)&v39->Next + 7) = v99;
  *((_WORD *)&v39->Next + 4) &= 0xF800u;
  v58 = 2LL * (BackTraceHash % *(_DWORD *)&v5[90].0);
  v39->Next = (_SLIST_ENTRY *)v5[2 * (BackTraceHash % *(_DWORD *)&v5[90].0) + 91];
  v5[v58 + 91].Value = (unsigned __int64)v39;
LABEL_103:
  v59 = *(_WORD *)(i + 8);
  if ( (v59 & 0x7FF) != 0x7FF )
    *(_WORD *)(i + 8) = v59 ^ (v59 ^ (v59 + 1)) & 0x7FF;
LABEL_45:
  if ( !byte_18017A188 )
  {
    v26 = _InterlockedCompareExchange64((volatile signed __int64 *)&v23[1], 0LL, 1LL);
    if ( v26 != 1 )
    {
      do
      {
        v27 = 3LL;
        v28 = v26 & 6;
        if ( v28 != 2 )
          v27 = -1LL;
        v29 = v26 + v27;
        v30 = v26;
        v26 = _InterlockedCompareExchange64((volatile signed __int64 *)&v23[1], v29, v26);
      }
      while ( v30 != v26 );
      if ( v28 == 2 )
      {
        while ( (v29 & 1) == 0 )
        {
LABEL_54:
          v22 = v29 & 0xFFFFFFFFFFFFFFF0uLL;
          v32 = (_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF0uLL);
          v33 = *(_QWORD *)((v29 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v33 )
          {
            do
            {
              v34 = v32;
              v32 = (_QWORD *)*v32;
              v32[2] = v34;
              v33 = v32[1];
            }
            while ( !v33 );
            if ( v32 != (_QWORD *)v22 )
              *(_QWORD *)((v29 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v33;
          }
          if ( (*(_DWORD *)(v33 + 36) & 1) != 0 )
          {
            v35 = *(_QWORD *)(v33 + 16);
            if ( v35 )
            {
              *(_QWORD *)((v29 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v35;
              *(_QWORD *)(v33 + 16) = 0LL;
              _InterlockedAnd64((volatile signed __int64 *)&v23[1], 0xFFFFFFFFFFFFFFFBuLL);
              do
              {
LABEL_106:
                v61 = *(_QWORD *)(v33 + 16);
                v62 = *(void **)(v33 + 24);
                _interlockedbittestandset((volatile signed __int32 *)(v33 + 36), 2u);
                if ( !_interlockedbittestandreset((volatile signed __int32 *)(v33 + 36), 1u) )
                  ZwAlertThreadByThreadId(v62);
                v33 = v61;
              }
              while ( v61 );
              goto LABEL_109;
            }
          }
          v60 = _InterlockedCompareExchange64((volatile signed __int64 *)&v23[1], 0LL, v29);
          v17 = v29 == v60;
          v29 = v60;
          if ( v17 )
            goto LABEL_106;
        }
        while ( 1 )
        {
          v31 = _InterlockedCompareExchange64((volatile signed __int64 *)&v23[1], v29 - 4, v29);
          v17 = v29 == v31;
          v29 = v31;
          if ( v17 )
            break;
          if ( (v31 & 1) == 0 )
            goto LABEL_54;
        }
      }
    }
  }
LABEL_109:
  if ( i )
  {
    v63 = 0;
    if ( *(_WORD *)(i + 14) )
    {
      v64 = (_DWORD *)(i + 16);
      v22 = *(unsigned __int16 *)(i + 14);
      do
      {
        v63 += *v64;
        v64 += 2;
        --v22;
      }
      while ( v22 );
    }
    v65 = &v5[2 * (v63 % *(_DWORD *)&v5[90].0)];
    if ( !byte_18017A188 )
      RtlAcquireSRWLockExclusive(v65 + 92);
    if ( *(_DWORD *)(i + 10) )
    {
      LODWORD(v6) = *(unsigned __int16 *)(i + 12) + (*(unsigned __int16 *)(i + 10) << 16);
LABEL_150:
      if ( !byte_18017A188 )
      {
        v82 = _InterlockedCompareExchange64((volatile signed __int64 *)&v65[92], 0LL, 1LL);
        if ( v82 != 1 )
        {
          do
          {
            v83 = 3LL;
            v84 = v82 & 6;
            if ( v84 != 2 )
              v83 = -1LL;
            v85 = v82 + v83;
            v86 = v82;
            v82 = _InterlockedCompareExchange64((volatile signed __int64 *)&v65[92], v85, v82);
          }
          while ( v86 != v82 );
          if ( v84 == 2 )
          {
            while ( (v85 & 1) == 0 )
            {
LABEL_159:
              v22 = v85 & 0xFFFFFFFFFFFFFFF0uLL;
              v88 = (_QWORD *)(v85 & 0xFFFFFFFFFFFFFFF0uLL);
              v89 = *(_QWORD *)((v85 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
              if ( !v89 )
              {
                do
                {
                  v90 = v88;
                  v88 = (_QWORD *)*v88;
                  v88[2] = v90;
                  v89 = v88[1];
                }
                while ( !v89 );
                if ( v88 != (_QWORD *)v22 )
                  *(_QWORD *)((v85 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v89;
              }
              if ( (*(_DWORD *)(v89 + 36) & 1) != 0 )
              {
                v91 = *(_QWORD *)(v89 + 16);
                if ( v91 )
                {
                  *(_QWORD *)((v85 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v91;
                  *(_QWORD *)(v89 + 16) = 0LL;
                  _InterlockedAnd64((volatile signed __int64 *)&v65[92], 0xFFFFFFFFFFFFFFFBuLL);
                  do
                  {
LABEL_167:
                    v93 = *(_QWORD *)(v89 + 16);
                    v94 = *(void **)(v89 + 24);
                    _interlockedbittestandset((volatile signed __int32 *)(v89 + 36), 2u);
                    if ( !_interlockedbittestandreset((volatile signed __int32 *)(v89 + 36), 1u) )
                      ZwAlertThreadByThreadId(v94);
                    v89 = v93;
                  }
                  while ( v93 );
                  goto LABEL_170;
                }
              }
              v92 = _InterlockedCompareExchange64((volatile signed __int64 *)&v65[92], 0LL, v85);
              v17 = v85 == v92;
              v85 = v92;
              if ( v17 )
                goto LABEL_167;
            }
            while ( 1 )
            {
              v87 = _InterlockedCompareExchange64((volatile signed __int64 *)&v65[92], v85 - 4, v85);
              v17 = v85 == v87;
              v85 = v87;
              if ( v17 )
                break;
              if ( (v87 & 1) == 0 )
                goto LABEL_159;
            }
          }
        }
      }
LABEL_170:
      if ( !(_DWORD)v6 )
        RtlStdReleaseStackTrace(v5, i, v22);
      goto LABEL_8;
    }
    v66 = 0LL;
    if ( !byte_18017A188 )
      RtlAcquireSRWLockExclusive(v5);
    v67 = (char *)v5[19].Value;
    v68 = v5[21].Value - 8;
    v17 = v5[16].0 == 0;
    v103 = v67;
    if ( v17 )
    {
      if ( v68 < (unsigned __int64)v67 )
      {
        v98[0] = 4096LL;
        if ( (unsigned __int64)(v67 - 4096) <= v5[18].Value
          || (v103 = v67 - 4096, ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v103, 0LL, v98, 0x1000u, 4u) < 0) )
        {
LABEL_126:
          if ( !byte_18017A188 )
          {
            v69 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, 1LL);
            if ( v69 != 1 )
            {
              do
              {
                v70 = 3LL;
                v71 = v69 & 6;
                if ( v71 != 2 )
                  v70 = -1LL;
                v72 = v69 + v70;
                v73 = v69;
                v69 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, v72, v69);
              }
              while ( v73 != v69 );
              if ( v71 == 2 )
              {
                while ( (v72 & 1) == 0 )
                {
LABEL_135:
                  v22 = v72 & 0xFFFFFFFFFFFFFFF0uLL;
                  v75 = (_QWORD *)(v72 & 0xFFFFFFFFFFFFFFF0uLL);
                  v76 = *(_QWORD *)((v72 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
                  if ( !v76 )
                  {
                    do
                    {
                      v77 = v75;
                      v75 = (_QWORD *)*v75;
                      v75[2] = v77;
                      v76 = v75[1];
                    }
                    while ( !v76 );
                    if ( v75 != (_QWORD *)v22 )
                      *(_QWORD *)((v72 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v76;
                  }
                  if ( (*(_DWORD *)(v76 + 36) & 1) != 0 )
                  {
                    v78 = *(_QWORD *)(v76 + 16);
                    if ( v78 )
                    {
                      *(_QWORD *)((v72 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v78;
                      *(_QWORD *)(v76 + 16) = 0LL;
                      _InterlockedAnd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFBuLL);
                      do
                      {
LABEL_143:
                        v80 = *(_QWORD *)(v76 + 16);
                        v81 = *(void **)(v76 + 24);
                        _interlockedbittestandset((volatile signed __int32 *)(v76 + 36), 2u);
                        if ( !_interlockedbittestandreset((volatile signed __int32 *)(v76 + 36), 1u) )
                          ZwAlertThreadByThreadId(v81);
                        v76 = v80;
                      }
                      while ( v80 );
                      goto LABEL_146;
                    }
                  }
                  v79 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, v72);
                  v17 = v72 == v79;
                  v72 = v79;
                  if ( v17 )
                    goto LABEL_143;
                }
                while ( 1 )
                {
                  v74 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, v72 - 4, v72);
                  v17 = v72 == v74;
                  v72 = v74;
                  if ( v17 )
                    break;
                  if ( (v74 & 1) == 0 )
                    goto LABEL_135;
                }
              }
            }
          }
LABEL_146:
          if ( v66 )
          {
            *v66 = i;
            v6 = (__int64)(v5[23].Value - (_QWORD)v66) >> 3;
            *(_WORD *)(i + 12) = v6;
            *(_WORD *)(i + 10) = WORD1(v6);
          }
          else
          {
            LODWORD(v6) = 0;
          }
          goto LABEL_150;
        }
        v5[19].Value = (unsigned __int64)v103;
      }
    }
    else if ( v68 < v5[20].Value )
    {
      goto LABEL_126;
    }
    ++HIDWORD(v5[22].Ptr);
    v66 = (_QWORD *)v68;
    v5[21].Value = v68;
    goto LABEL_126;
  }
LABEL_173:
  LODWORD(v6) = 0;
LABEL_8:
  WORD1(v2->Next) = v6;
  *((_WORD *)&v2[2].Next + 6) = WORD1(v6);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1, (signed __int64)v2, -1LL) == -1 )
  {
    v7 = *(_QWORD *)a1;
    RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
    v8 = (signed __int64 *)off_1801743E0[0];
    v9 = v7 + 16;
    if ( *(_UNKNOWN ***)off_1801743E0[0] != &RtlCriticalSectionList )
      __fastfail(3u);
    *(_UNKNOWN ***)(v9 + 8) = off_1801743E0[0];
    *(_QWORD *)v9 = &RtlCriticalSectionList;
    *v8 = v9;
    off_1801743E0[0] = (_UNKNOWN **)v9;
    Heap = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlCriticalSectionLock, 0LL, 1LL);
    if ( Heap != 1 )
    {
      do
      {
        v10 = 3LL;
        v11 = Heap & 6;
        if ( v11 != 2 )
          v10 = -1LL;
        v12 = Heap + v10;
        v13 = Heap;
        Heap = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlCriticalSectionLock, v12, Heap);
      }
      while ( v13 != Heap );
      if ( v11 == 2 )
      {
        while ( (v12 & 1) == 0 )
        {
LABEL_18:
          v14 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0uLL);
          v15 = *(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v15 )
          {
            do
            {
              v20 = v14;
              v14 = (_QWORD *)*v14;
              v14[2] = v20;
              v15 = v14[1];
            }
            while ( !v15 );
            if ( v14 != (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0uLL) )
              *(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v15;
          }
          if ( (*(_DWORD *)(v15 + 36) & 1) != 0 )
          {
            v16 = *(_QWORD *)(v15 + 16);
            if ( v16 )
            {
              *(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v16;
              *(_QWORD *)(v15 + 16) = 0LL;
              _InterlockedAnd64((volatile signed __int64 *)&RtlCriticalSectionLock, 0xFFFFFFFFFFFFFFFBuLL);
              do
              {
LABEL_22:
                v19 = *(_QWORD *)(v15 + 16);
                Heap = *(_QWORD *)(v15 + 24);
                _interlockedbittestandset((volatile signed __int32 *)(v15 + 36), 2u);
                if ( !_interlockedbittestandreset((volatile signed __int32 *)(v15 + 36), 1u) )
                  LODWORD(Heap) = ZwAlertThreadByThreadId((HANDLE)Heap);
                v15 = v19;
              }
              while ( v19 );
              return Heap;
            }
          }
          v18 = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlCriticalSectionLock, 0LL, v12);
          v17 = v12 == v18;
          v12 = v18;
          if ( v17 )
            goto LABEL_22;
        }
        while ( 1 )
        {
          Heap = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlCriticalSectionLock, v12 - 4, v12);
          v17 = v12 == Heap;
          v12 = Heap;
          if ( v17 )
            break;
          if ( (Heap & 1) == 0 )
            goto LABEL_18;
        }
      }
    }
  }
  else
  {
    LODWORD(Heap) = RtlpFreeDebugInfo(v2);
  }
  return Heap;
}
