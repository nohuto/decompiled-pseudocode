/*
 * XREFs of RtlpAddDebugInfoToCriticalSection @ 0x18005CB50
 * Callers:
 *     RtlpWaitOnCriticalSection @ 0x180033F90 (RtlpWaitOnCriticalSection.c)
 *     RtlInitializeCriticalSection @ 0x18005C7C0 (RtlInitializeCriticalSection.c)
 *     RtlInitializeCriticalSectionAndSpinCount @ 0x18005C870 (RtlInitializeCriticalSectionAndSpinCount.c)
 *     RtlInitializeResource @ 0x18005C9D0 (RtlInitializeResource.c)
 *     RtlInitializeCriticalSectionEx @ 0x18005CDF0 (RtlInitializeCriticalSectionEx.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlpFreeDebugInfo @ 0x18005AF10 (RtlpFreeDebugInfo.c)
 *     RtlCaptureStackBackTrace @ 0x18007A3C0 (RtlCaptureStackBackTrace.c)
 *     ZwAllocateVirtualMemory @ 0x1800A11B0 (ZwAllocateVirtualMemory.c)
 *     ZwAlertThreadByThreadId @ 0x1800A1CA0 (ZwAlertThreadByThreadId.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A4C40 (RtlpInterlockedPopEntrySList.c)
 *     RtlCompareMemory @ 0x1800A5A20 (RtlCompareMemory.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     RtlStdReleaseStackTrace @ 0x18010F650 (RtlStdReleaseStackTrace.c)
 */

signed __int64 __fastcall RtlpAddDebugInfoToCriticalSection(__int64 a1)
{
  signed __int64 result; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rsi
  volatile signed __int64 v6; // rbx
  signed __int64 *v7; // rax
  signed __int64 v8; // rbx
  __int64 v9; // rcx
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
  __int64 v23; // r12
  PSLIST_ENTRY v24; // r14
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
  struct _SLIST_ENTRY *v40; // r15
  unsigned __int64 v41; // rcx
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
  int v53; // eax
  signed __int64 v54; // rax
  __int64 v55; // r14
  __int64 v56; // rax
  unsigned int v57; // ecx
  __int64 v58; // rcx
  __int16 v59; // cx
  signed __int64 v60; // rax
  __int64 v61; // rsi
  __int64 v62; // rax
  unsigned int v63; // eax
  struct _SLIST_ENTRY *v64; // rcx
  __int64 v65; // r15
  _QWORD *v66; // r12
  unsigned __int64 v67; // rcx
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
  __int64 v81; // rax
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
  __int64 v94; // rax
  unsigned __int64 v95; // [rsp+30h] [rbp-168h] BYREF
  unsigned __int64 v96; // [rsp+38h] [rbp-160h] BYREF
  __int64 v97[3]; // [rsp+40h] [rbp-158h] BYREF
  USHORT v98; // [rsp+5Eh] [rbp-13Ah]
  PVOID BackTrace[32]; // [rsp+60h] [rbp-138h] BYREF
  ULONG BackTraceHash; // [rsp+1A8h] [rbp+10h] BYREF
  SIZE_T Length; // [rsp+1B0h] [rbp+18h]
  unsigned __int64 v102; // [rsp+1B8h] [rbp+20h] BYREF

  result = (signed __int64)RtlpInterlockedPopEntrySList(&RtlCriticalSectionDebugSList);
  v3 = result;
  if ( !result )
  {
    result = (signed __int64)NtCurrentPeb();
    v9 = *(_QWORD *)(result + 48);
    if ( !v9 )
      goto LABEL_35;
    result = RtlAllocateHeap(v9, 0, 48LL);
    v3 = result;
  }
  if ( !v3 )
  {
LABEL_35:
    _InterlockedIncrement(&RtlFailedCriticalDebugAllocations);
    return result;
  }
  *(_WORD *)v3 = 0;
  if ( (*(_DWORD *)(a1 + 32) & 0x8000000) != 0 )
    *(_WORD *)v3 = 1;
  *(_QWORD *)(v3 + 32) = 0LL;
  *(_WORD *)(v3 + 46) = 17235;
  *(_QWORD *)(v3 + 8) = a1;
  *(_DWORD *)(v3 + 40) = 0;
  v4 = RtlpStackTraceDatabase;
  if ( !RtlpStackTraceDatabase )
  {
    LODWORD(v5) = 0;
    goto LABEL_7;
  }
  v21 = RtlCaptureStackBackTrace(3u, 0x20u, BackTrace, &BackTraceHash);
  v98 = v21;
  if ( !v21 )
    goto LABEL_174;
  v22 = 8LL * v21;
  v23 = 16LL * (BackTraceHash % *(_DWORD *)(v4 + 720)) + v4 + 728;
  Length = v22;
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 176));
  if ( !byte_180187488 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v23 + 8));
    v22 = Length;
  }
  v24 = *(PSLIST_ENTRY *)v23;
  if ( *(_QWORD *)v23 )
  {
    do
    {
      if ( *((_WORD *)&v24->Next + 7) == v98 )
      {
        v25 = RtlCompareMemory(&v24[1], BackTrace, v22);
        v22 = Length;
        if ( v25 == Length )
          goto LABEL_104;
      }
      v24 = v24->Next;
    }
    while ( v24 );
  }
  if ( !v98 )
  {
    v24 = 0LL;
LABEL_45:
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 200));
    goto LABEL_46;
  }
  v36 = v98 - 1;
  if ( v36 < 0x20 )
  {
    while ( 1 )
    {
      v37 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v4 + 16 * (v36 + 13LL)));
      if ( v37 )
        break;
      if ( ++v36 >= 0x20 )
      {
        v22 = Length;
        goto LABEL_66;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 196));
    v39 = v37 - 1;
    v22 = Length;
    goto LABEL_102;
  }
LABEL_66:
  v38 = (8LL * v98 + 31) & 0xFFFFFFFFFFFFFFF0uLL;
  v39 = 0LL;
  if ( !byte_180187488 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)v4);
    v22 = Length;
  }
  v40 = *(struct _SLIST_ENTRY **)(v4 + 160);
  v41 = *(_QWORD *)(v4 + 144);
  v95 = v41;
  v42 = (unsigned __int64)v40 + v38;
  if ( *(_BYTE *)(v4 + 128) )
  {
    if ( v42 > *(_QWORD *)(v4 + 168) )
      goto LABEL_71;
  }
  else if ( v42 > v41 )
  {
    v96 = (v38 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    if ( v41 + v96 >= *(_QWORD *)(v4 + 152) )
      goto LABEL_71;
    v53 = ZwAllocateVirtualMemory(-1LL, &v95, 0LL, &v96, 4096, 4);
    v22 = Length;
    if ( v53 < 0 )
      goto LABEL_71;
    *(_QWORD *)(v4 + 144) = v96 + v95;
  }
  ++*(_DWORD *)(v4 + 192);
  v39 = v40;
  *(_QWORD *)(v4 + 160) = v42;
LABEL_71:
  if ( !byte_180187488 )
  {
    v43 = _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, 1LL);
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
        v43 = _InterlockedCompareExchange64((volatile signed __int64 *)v4, v46, v43);
      }
      while ( v47 != v43 );
      if ( v45 == 2 )
      {
        while ( (v46 & 1) == 0 )
        {
LABEL_80:
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
              _InterlockedAnd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFBuLL);
              do
              {
LABEL_94:
                v55 = *(_QWORD *)(v50 + 16);
                v56 = *(_QWORD *)(v50 + 24);
                _interlockedbittestandset((volatile signed __int32 *)(v50 + 36), 2u);
                if ( !_interlockedbittestandreset((volatile signed __int32 *)(v50 + 36), 1u) )
                  ZwAlertThreadByThreadId(v56);
                v50 = v55;
              }
              while ( v55 );
              goto LABEL_97;
            }
          }
          v54 = _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, v46);
          v17 = v46 == v54;
          v46 = v54;
          if ( v17 )
            goto LABEL_94;
        }
        while ( 1 )
        {
          v48 = _InterlockedCompareExchange64((volatile signed __int64 *)v4, v46 - 4, v46);
          v17 = v46 == v48;
          v46 = v48;
          if ( v17 )
            break;
          if ( (v48 & 1) == 0 )
            goto LABEL_80;
        }
LABEL_97:
        v22 = Length;
      }
    }
  }
  v24 = v39;
  if ( v39 )
  {
    v57 = ((unsigned int)(v38 - 16) >> 3) - 1;
    if ( v57 > 0x1F )
      LOWORD(v57) = 31;
    *((_WORD *)&v39->Next + 4) = *(_WORD *)(&v39->Next + 1) & 0x7FF | ((_WORD)v57 << 11);
    goto LABEL_103;
  }
LABEL_102:
  v24 = v39;
  if ( !v39 )
    goto LABEL_45;
LABEL_103:
  memmove(&v39[1], BackTrace, v22);
  *((_WORD *)&v39->Next + 7) = v98;
  *((_WORD *)&v39->Next + 4) &= 0xF800u;
  v58 = 2LL * (BackTraceHash % *(_DWORD *)(v4 + 720));
  v39->Next = *(_SLIST_ENTRY **)(v4 + 16LL * (BackTraceHash % *(_DWORD *)(v4 + 720)) + 728);
  *(_QWORD *)(v4 + 8 * v58 + 728) = v39;
LABEL_104:
  v59 = *((_WORD *)&v24->Next + 4);
  if ( (v59 & 0x7FF) != 0x7FF )
    *((_WORD *)&v24->Next + 4) = v59 ^ (v59 ^ (v59 + 1)) & 0x7FF;
LABEL_46:
  if ( !byte_180187488 )
  {
    v26 = _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 8), 0LL, 1LL);
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
        v26 = _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 8), v29, v26);
      }
      while ( v30 != v26 );
      if ( v28 == 2 )
      {
        while ( (v29 & 1) == 0 )
        {
LABEL_55:
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
              _InterlockedAnd64((volatile signed __int64 *)(v23 + 8), 0xFFFFFFFFFFFFFFFBuLL);
              do
              {
LABEL_107:
                v61 = *(_QWORD *)(v33 + 16);
                v62 = *(_QWORD *)(v33 + 24);
                _interlockedbittestandset((volatile signed __int32 *)(v33 + 36), 2u);
                if ( !_interlockedbittestandreset((volatile signed __int32 *)(v33 + 36), 1u) )
                  ZwAlertThreadByThreadId(v62);
                v33 = v61;
              }
              while ( v61 );
              goto LABEL_110;
            }
          }
          v60 = _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 8), 0LL, v29);
          v17 = v29 == v60;
          v29 = v60;
          if ( v17 )
            goto LABEL_107;
        }
        while ( 1 )
        {
          v31 = _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 8), v29 - 4, v29);
          v17 = v29 == v31;
          v29 = v31;
          if ( v17 )
            break;
          if ( (v31 & 1) == 0 )
            goto LABEL_55;
        }
      }
    }
  }
LABEL_110:
  if ( v24 )
  {
    v63 = 0;
    if ( *((_WORD *)&v24->Next + 7) )
    {
      v64 = v24 + 1;
      v22 = *((unsigned __int16 *)&v24->Next + 7);
      do
      {
        v63 += LODWORD(v64->Next);
        v64 = (struct _SLIST_ENTRY *)((char *)v64 + 8);
        --v22;
      }
      while ( v22 );
    }
    v65 = v4 + 16LL * (v63 % *(_DWORD *)(v4 + 720));
    if ( !byte_180187488 )
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v65 + 736));
    if ( *(_DWORD *)((char *)&v24->Next + 10) )
    {
      LODWORD(v5) = *((unsigned __int16 *)&v24->Next + 6) + (*((unsigned __int16 *)&v24->Next + 5) << 16);
LABEL_151:
      if ( !byte_180187488 )
      {
        v82 = _InterlockedCompareExchange64((volatile signed __int64 *)(v65 + 736), 0LL, 1LL);
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
            v82 = _InterlockedCompareExchange64((volatile signed __int64 *)(v65 + 736), v85, v82);
          }
          while ( v86 != v82 );
          if ( v84 == 2 )
          {
            while ( (v85 & 1) == 0 )
            {
LABEL_160:
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
                  _InterlockedAnd64((volatile signed __int64 *)(v65 + 736), 0xFFFFFFFFFFFFFFFBuLL);
                  do
                  {
LABEL_168:
                    v93 = *(_QWORD *)(v89 + 16);
                    v94 = *(_QWORD *)(v89 + 24);
                    _interlockedbittestandset((volatile signed __int32 *)(v89 + 36), 2u);
                    if ( !_interlockedbittestandreset((volatile signed __int32 *)(v89 + 36), 1u) )
                      ZwAlertThreadByThreadId(v94);
                    v89 = v93;
                  }
                  while ( v93 );
                  goto LABEL_171;
                }
              }
              v92 = _InterlockedCompareExchange64((volatile signed __int64 *)(v65 + 736), 0LL, v85);
              v17 = v85 == v92;
              v85 = v92;
              if ( v17 )
                goto LABEL_168;
            }
            while ( 1 )
            {
              v87 = _InterlockedCompareExchange64((volatile signed __int64 *)(v65 + 736), v85 - 4, v85);
              v17 = v85 == v87;
              v85 = v87;
              if ( v17 )
                break;
              if ( (v87 & 1) == 0 )
                goto LABEL_160;
            }
          }
        }
      }
LABEL_171:
      if ( !(_DWORD)v5 )
        RtlStdReleaseStackTrace(v4, v24, v22);
      goto LABEL_7;
    }
    v66 = 0LL;
    if ( !byte_180187488 )
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)v4);
    v67 = *(_QWORD *)(v4 + 152);
    v68 = *(_QWORD *)(v4 + 168) - 8LL;
    v17 = *(_BYTE *)(v4 + 128) == 0;
    v102 = v67;
    if ( v17 )
    {
      if ( v68 < v67 )
      {
        v97[0] = 4096LL;
        if ( v67 - 4096 <= *(_QWORD *)(v4 + 144)
          || (v102 = v67 - 4096, (int)ZwAllocateVirtualMemory(-1LL, &v102, 0LL, v97, 4096, 4) < 0) )
        {
LABEL_127:
          if ( !byte_180187488 )
          {
            v69 = _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, 1LL);
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
                v69 = _InterlockedCompareExchange64((volatile signed __int64 *)v4, v72, v69);
              }
              while ( v73 != v69 );
              if ( v71 == 2 )
              {
                while ( (v72 & 1) == 0 )
                {
LABEL_136:
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
                      _InterlockedAnd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFBuLL);
                      do
                      {
LABEL_144:
                        v80 = *(_QWORD *)(v76 + 16);
                        v81 = *(_QWORD *)(v76 + 24);
                        _interlockedbittestandset((volatile signed __int32 *)(v76 + 36), 2u);
                        if ( !_interlockedbittestandreset((volatile signed __int32 *)(v76 + 36), 1u) )
                          ZwAlertThreadByThreadId(v81);
                        v76 = v80;
                      }
                      while ( v80 );
                      goto LABEL_147;
                    }
                  }
                  v79 = _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, v72);
                  v17 = v72 == v79;
                  v72 = v79;
                  if ( v17 )
                    goto LABEL_144;
                }
                while ( 1 )
                {
                  v74 = _InterlockedCompareExchange64((volatile signed __int64 *)v4, v72 - 4, v72);
                  v17 = v72 == v74;
                  v72 = v74;
                  if ( v17 )
                    break;
                  if ( (v74 & 1) == 0 )
                    goto LABEL_136;
                }
              }
            }
          }
LABEL_147:
          if ( v66 )
          {
            *v66 = v24;
            v5 = (__int64)(*(_QWORD *)(v4 + 184) - (_QWORD)v66) >> 3;
            *((_WORD *)&v24->Next + 6) = v5;
            *((_WORD *)&v24->Next + 5) = WORD1(v5);
          }
          else
          {
            LODWORD(v5) = 0;
          }
          goto LABEL_151;
        }
        *(_QWORD *)(v4 + 152) = v102;
      }
    }
    else if ( v68 < *(_QWORD *)(v4 + 160) )
    {
      goto LABEL_127;
    }
    ++*(_DWORD *)(v4 + 180);
    v66 = (_QWORD *)v68;
    *(_QWORD *)(v4 + 168) = v68;
    goto LABEL_127;
  }
LABEL_174:
  LODWORD(v5) = 0;
LABEL_7:
  *(_WORD *)(v3 + 2) = v5;
  *(_WORD *)(v3 + 44) = WORD1(v5);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1, v3, -1LL) != -1 )
    return RtlpFreeDebugInfo(v3);
  v6 = *(_QWORD *)a1;
  RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
  v7 = (signed __int64 *)off_1801813E0[0];
  v8 = v6 + 16;
  if ( *(_UNKNOWN ***)off_1801813E0[0] != &RtlCriticalSectionList )
    __fastfail(3u);
  *(_UNKNOWN ***)(v8 + 8) = off_1801813E0[0];
  *(_QWORD *)v8 = &RtlCriticalSectionList;
  *v7 = v8;
  off_1801813E0[0] = (_UNKNOWN **)v8;
  result = _InterlockedCompareExchange64(&RtlCriticalSectionLock, 0LL, 1LL);
  if ( result != 1 )
  {
    do
    {
      v10 = 3LL;
      v11 = result & 6;
      if ( v11 != 2 )
        v10 = -1LL;
      v12 = result + v10;
      v13 = result;
      result = _InterlockedCompareExchange64(&RtlCriticalSectionLock, v12, result);
    }
    while ( v13 != result );
    if ( v11 == 2 )
    {
      while ( (v12 & 1) == 0 )
      {
LABEL_19:
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
            _InterlockedAnd64(&RtlCriticalSectionLock, 0xFFFFFFFFFFFFFFFBuLL);
            do
            {
LABEL_23:
              v19 = *(_QWORD *)(v15 + 16);
              result = *(_QWORD *)(v15 + 24);
              _interlockedbittestandset((volatile signed __int32 *)(v15 + 36), 2u);
              if ( !_interlockedbittestandreset((volatile signed __int32 *)(v15 + 36), 1u) )
                result = ZwAlertThreadByThreadId(result);
              v15 = v19;
            }
            while ( v19 );
            return result;
          }
        }
        v18 = _InterlockedCompareExchange64(&RtlCriticalSectionLock, 0LL, v12);
        v17 = v12 == v18;
        v12 = v18;
        if ( v17 )
          goto LABEL_23;
      }
      while ( 1 )
      {
        result = _InterlockedCompareExchange64(&RtlCriticalSectionLock, v12 - 4, v12);
        v17 = v12 == result;
        v12 = result;
        if ( v17 )
          break;
        if ( (result & 1) == 0 )
          goto LABEL_19;
      }
    }
  }
  return result;
}
