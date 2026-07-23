/*
 * XREFs of RtlpFreeHeap @ 0x180039680
 * Callers:
 *     RtlpFreeHeapInternal @ 0x18003BBF0 (RtlpFreeHeapInternal.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18002A00C (RtlpWakeByAddress.c)
 *     RtlBackoff @ 0x180033E20 (RtlBackoff.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     RtlTryEnterCriticalSection @ 0x180043ED0 (RtlTryEnterCriticalSection.c)
 *     RtlpFindEntry @ 0x180044770 (RtlpFindEntry.c)
 *     RtlpInsertFreeBlock @ 0x1800447F0 (RtlpInsertFreeBlock.c)
 *     RtlpHeapAddListEntry @ 0x180044D74 (RtlpHeapAddListEntry.c)
 *     RtlpDeCommitFreeBlock @ 0x180044F5C (RtlpDeCommitFreeBlock.c)
 *     RtlpCommitBlock @ 0x1800467BC (RtlpCommitBlock.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180046B30 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpHeapRemoveListEntry @ 0x180048FDC (RtlpHeapRemoveListEntry.c)
 *     RtlNtStatusToDosError @ 0x1800536B0 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180053910 (DbgPrint.c)
 *     RtlLogStackBackTraceEx @ 0x18005CDB4 (RtlLogStackBackTraceEx.c)
 *     RtlpUpdateHeapRates @ 0x18007DA78 (RtlpUpdateHeapRates.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180083460 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpUpdateHeapWatermarks @ 0x18008A3D4 (RtlpUpdateHeapWatermarks.c)
 *     ZwSetEvent @ 0x1800A1070 (ZwSetEvent.c)
 *     RtlCompareMemoryUlong @ 0x1800A5AA0 (RtlCompareMemoryUlong.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F4D50 (RtlpNotOwnerCriticalSection.c)
 *     RtlpUpdateTagEntry @ 0x18010143C (RtlpUpdateTagEntry.c)
 *     RtlDebugFreeHeap @ 0x1801060A0 (RtlDebugFreeHeap.c)
 *     RtlpBreakPointHeap @ 0x180107DF8 (RtlpBreakPointHeap.c)
 *     RtlRaiseStatus @ 0x1801106A0 (RtlRaiseStatus.c)
 *     RtlpAnalyzeHeapFailure @ 0x1801163A4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapLogRangeRelease @ 0x18011685C (RtlpHeapLogRangeRelease.c)
 *     RtlpLogHeapContractEvent @ 0x1801184F0 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapFreeEvent @ 0x180118780 (RtlpLogHeapFreeEvent.c)
 *     RtlpLogHeapFailure @ 0x1801229C0 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpFreeHeap(__int64 a1, int a2, _BYTE *a3, __int64 a4)
{
  char v5; // r14
  int v6; // edi
  __int64 v7; // r8
  _DWORD *SharedData; // rcx
  __int64 v9; // r12
  __int64 v10; // rcx
  _BYTE *v11; // rsi
  __int64 v12; // r8
  int v13; // edx
  __int64 **v14; // rcx
  _BYTE *v15; // r8
  char v16; // al
  unsigned __int16 *v17; // rdi
  unsigned __int64 v18; // rax
  _WORD *v19; // rdx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rcx
  _BYTE *v22; // rdi
  _BYTE *v23; // r14
  int v24; // edx
  _BYTE *v25; // r8
  __int64 v26; // r15
  __int64 *v27; // r12
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 **v30; // rdx
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rdi
  char v33; // al
  _BYTE *v34; // r13
  unsigned __int64 v35; // rdi
  _QWORD *v36; // r14
  _QWORD *Entry; // r8
  _DWORD *v38; // r12
  int v39; // eax
  _QWORD *v40; // r15
  __int64 *v41; // rax
  unsigned __int16 *v42; // r14
  __int64 **v43; // rdx
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rdi
  SIZE_T v46; // rdi
  SIZE_T v47; // r15
  int v48; // edx
  __int64 v49; // r14
  __int64 *v50; // r15
  __int64 v51; // rax
  __int64 v52; // r9
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rax
  char v56; // al
  SIZE_T v57; // rsi
  SIZE_T v58; // r14
  int v59; // ecx
  int v60; // edx
  unsigned __int64 v61; // r14
  _QWORD *v62; // rdi
  int v63; // eax
  __int64 *v64; // rax
  unsigned __int64 v65; // rdi
  unsigned __int64 v66; // rsi
  __int64 v67; // rax
  __int64 *v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // r9
  __int64 v71; // rdi
  int v72; // eax
  signed __int32 v73; // r15d
  __int64 v74; // rdi
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rdi
  __int64 v78; // rcx
  void *DeferredCriticalSectionEvent; // r10
  int v80; // eax
  int v81; // edx
  _DWORD *v82; // r8
  unsigned __int64 v83; // rdx
  int v84; // edx
  __int64 v85; // rdx
  _BYTE *v86; // rdi
  unsigned int v87; // edi
  _BYTE *v88; // rcx
  unsigned int v89; // eax
  unsigned int v90; // ecx
  unsigned int v91; // eax
  __int64 v92; // rdi
  signed __int32 v94; // esi
  unsigned __int64 v96; // rdx
  void *v97; // r10
  int v98; // eax
  signed __int32 v99[8]; // [rsp+58h] [rbp-158h] BYREF
  char v100[8]; // [rsp+78h] [rbp-138h]
  char v101; // [rsp+98h] [rbp-118h]
  __int16 updated; // [rsp+9Ch] [rbp-114h]
  __int16 v103; // [rsp+A0h] [rbp-110h]
  char v104; // [rsp+A8h] [rbp-108h]
  unsigned __int64 v105; // [rsp+B0h] [rbp-100h] BYREF
  __int16 v106; // [rsp+B8h] [rbp-F8h]
  unsigned int v107; // [rsp+BCh] [rbp-F4h]
  int v108[2]; // [rsp+C0h] [rbp-F0h]
  unsigned __int64 v109; // [rsp+C8h] [rbp-E8h]
  unsigned int v110; // [rsp+D0h] [rbp-E0h] BYREF
  unsigned __int64 v111; // [rsp+D8h] [rbp-D8h] BYREF
  unsigned __int64 v112; // [rsp+E0h] [rbp-D0h]
  int v113[2]; // [rsp+E8h] [rbp-C8h]
  unsigned int v114; // [rsp+F0h] [rbp-C0h]
  unsigned int NtGlobalFlag; // [rsp+F4h] [rbp-BCh]
  SIZE_T v116; // [rsp+F8h] [rbp-B8h]
  _BYTE *v117; // [rsp+100h] [rbp-B0h]
  unsigned __int64 v118; // [rsp+118h] [rbp-98h]
  SIZE_T v119; // [rsp+120h] [rbp-90h]
  unsigned __int64 v120; // [rsp+128h] [rbp-88h]
  _BYTE *v121; // [rsp+130h] [rbp-80h]
  unsigned __int64 v122; // [rsp+138h] [rbp-78h]
  __int64 v123; // [rsp+140h] [rbp-70h]
  struct _TEB *v124; // [rsp+148h] [rbp-68h]
  struct _TEB *v125; // [rsp+150h] [rbp-60h]
  int v126; // [rsp+160h] [rbp-50h]
  int v127; // [rsp+170h] [rbp-40h]
  int v128; // [rsp+180h] [rbp-30h]
  __int64 v129; // [rsp+1B8h] [rbp+8h] BYREF
  _BYTE *v130; // [rsp+1C8h] [rbp+18h]

  v130 = a3;
  v129 = a1;
  v5 = 1;
  LOBYTE(v103) = 1;
  v101 = 0;
  v107 = 1;
  v111 = 0LL;
  updated = 0;
  if ( (_BYTE *)a1 == a3 )
  {
    RtlpLogHeapFailure(9, a1, (_DWORD)a3, 0, 0LL, 0LL);
    return 0LL;
  }
  v6 = *(_DWORD *)(a1 + 116) | a2;
  if ( (v6 & 0x7D010F60) != 0 )
  {
    v5 = 0;
    LOBYTE(v103) = 0;
    v7 = 4LL;
    if ( (v6 & 0x61000000) != 0 && (v6 & 0x10000000) == 0 )
      return RtlDebugFreeHeap((void *)a1);
  }
  else
  {
    v7 = 3LL;
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
  {
    v10 = (__int64)NtCurrentPeb()->SharedData + 550;
    v9 = 2147353472LL;
  }
  else
  {
    v9 = 2147353472LL;
    v10 = 2147353472LL;
  }
  if ( *(_BYTE *)v10 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    v11 = v130;
    if ( ((v130[10] ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 17))) & 8) == 0 )
      RtlpLogHeapFreeEvent(a1, a4, v7);
  }
  else
  {
    v11 = v130;
  }
  if ( (v6 & 1) != 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v81 = *((_DWORD *)v11 + 2) ^ *(_DWORD *)(a1 + 136);
      *((_DWORD *)v11 + 2) = v81;
      if ( HIBYTE(v81) != ((unsigned __int8)v81 ^ (unsigned __int8)(BYTE1(v81) ^ BYTE2(v81))) )
        RtlpAnalyzeHeapFailure(a1, v11, v7);
    }
LABEL_16:
    v15 = v11 + 10;
    v16 = v11[10];
    if ( (v16 & 8) != 0 )
      *v15 = v16 & 0xF7;
    if ( v11[15] == 4 )
    {
      v66 = (unsigned __int64)(v11 - 48);
      *(_QWORD *)v108 = v66;
      *(_QWORD *)v113 = *(_QWORD *)(v66 + 32);
      v111 = v66 & 0xFFFFFFFFFFFF0000uLL;
      *(_QWORD *)(a1 + 592) -= *(_QWORD *)v113;
      v67 = *(_QWORD *)v66;
      v68 = *(__int64 **)(v66 + 8);
      v69 = *v68;
      v70 = *(_QWORD *)(*(_QWORD *)v66 + 8LL);
      if ( *v68 == v70 && v69 == v66 )
      {
        *v68 = v67;
        *(_QWORD *)(v67 + 8) = v68;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, v108[0], v70, v69, 0LL);
      }
      if ( !v5 )
      {
        NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
        if ( (NtGlobalFlag & 0x800) != 0 )
          RtlpUpdateTagEntry(a1, *(unsigned __int16 *)(*(_QWORD *)v108 + 18LL), *(_QWORD *)(v66 + 32) >> 4, 0, 3);
      }
      v130 = 0LL;
      if ( v101 )
      {
        v71 = *(_QWORD *)(a1 + 352);
        v72 = *(_DWORD *)(v71 + 12) - 1;
        *(_DWORD *)(v71 + 12) = v72;
        if ( !v72 )
        {
          *(_QWORD *)(v71 + 16) = 0LL;
          v73 = _InterlockedCompareExchange((volatile signed __int32 *)(v71 + 8), -1, -2);
          if ( v73 != -2 )
          {
            if ( (*(_BYTE *)(v71 + 8) & 1) != 0 )
              RtlpNotOwnerCriticalSection(v71);
            DeferredCriticalSectionEvent = *(void **)(v71 + 24);
            if ( !DeferredCriticalSectionEvent )
              DeferredCriticalSectionEvent = (void *)RtlpCreateDeferredCriticalSectionEvent(v71);
            v110 = 0;
            while ( v73 != _InterlockedCompareExchange((volatile signed __int32 *)(v71 + 8), v73 + (v73 & 2 | 1), v73) )
            {
              RtlBackoff(&v110);
              _m_prefetchw((const void *)(v71 + 8));
              v73 = *(_DWORD *)(v71 + 8);
            }
            if ( (v73 & 2) != 0 )
            {
              if ( DeferredCriticalSectionEvent == (void *)-1LL )
              {
                _InterlockedOr(v99, 0);
                RtlpWakeByAddress(v71 + 8, 0);
              }
              else
              {
                v80 = ZwSetEvent(DeferredCriticalSectionEvent, 0LL);
                if ( v80 < 0 )
                  RtlRaiseStatus(v80);
              }
            }
          }
        }
        v101 = 0;
      }
      v74 = *(_QWORD *)(*(_QWORD *)v108 + 40LL);
      v123 = v74;
      if ( RtlGetCurrentServiceSessionId() )
      {
        v75 = (__int64)NtCurrentPeb()->SharedData + 558;
        v74 = v123;
      }
      else
      {
        v75 = 2147353480LL;
      }
      if ( *(_BYTE *)v75 )
        RtlpHeapLogRangeRelease(a1, v111, v74);
      v105 = 0LL;
      RtlpSecMemFreeVirtualMemory(v75, &v111, &v105, 0x8000LL);
      if ( RtlGetCurrentServiceSessionId() )
        v76 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v76 = 2147353472LL;
      if ( *(_BYTE *)v76 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v9 = (__int64)NtCurrentPeb()->SharedData + 550;
        RtlpLogHeapContractEvent(
          a1,
          v108[0],
          v113[0],
          16 * *(_QWORD *)(a1 + 192),
          0,
          0LL,
          (HANDLE)*(unsigned __int8 *)v9);
      }
      v77 = 2147353482LL;
      if ( RtlGetCurrentServiceSessionId() )
        v78 = (__int64)NtCurrentPeb()->SharedData + 560;
      else
        v78 = 2147353482LL;
      if ( *(_BYTE *)v78 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v77 = (__int64)NtCurrentPeb()->SharedData + 560;
        RtlpLogHeapContractEvent(
          a1,
          v108[0],
          v113[0],
          16 * *(_DWORD *)(a1 + 192),
          0,
          0LL,
          (HANDLE)*(unsigned __int8 *)v77);
      }
      goto LABEL_218;
    }
    v17 = (unsigned __int16 *)(v11 + 8);
    v18 = *((unsigned __int16 *)v11 + 4);
    if ( (unsigned __int16)v18 < *(_WORD *)(a1 + 432) )
    {
      if ( ((unsigned __int8)(1 << (*((_WORD *)v11 + 4) & 7)) & *(_BYTE *)((v18 >> 3) + a1 + 434)) == 0 )
      {
        v19 = (_WORD *)(*(_QWORD *)(a1 + 424) + 2LL * *v17);
        if ( *v19 > 1u )
          --*v19;
      }
      v11 = v130;
    }
    if ( !v5 )
    {
      v114 = NtCurrentPeb()->NtGlobalFlag;
      v11 = v130;
      if ( (v114 & 0x800) != 0 )
      {
        v59 = *v17;
        *(_DWORD *)v100 = 2;
        if ( (*v15 & 2) != 0 )
          v60 = *(unsigned __int16 *)&v130[16 * v59 - 14];
        else
          v60 = (unsigned __int8)v130[11];
        updated = RtlpUpdateTagEntry(a1, v60, v59, 0, *(_DWORD *)v100);
      }
    }
    v20 = *v17;
    v105 = v20;
    if ( *(char *)(a1 + 112) >= 0 )
    {
      v104 = 0;
      v117 = v11;
      v21 = 16 * (*(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*((unsigned __int16 *)v11 + 6));
      v22 = &v11[-v21];
      if ( &v11[-v21] != v11
        && ((v22[10] ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v48 = *((_DWORD *)v22 + 2) ^ *(_DWORD *)(a1 + 136);
          *((_DWORD *)v22 + 2) = v48;
          if ( HIBYTE(v48) != ((unsigned __int8)v48 ^ (unsigned __int8)(BYTE1(v48) ^ BYTE2(v48))) )
            RtlpAnalyzeHeapFailure(a1, v22, v20);
        }
        v49 = *((_QWORD *)v22 + 2);
        v50 = (__int64 *)*((_QWORD *)v22 + 3);
        v51 = *v50;
        v52 = *(_QWORD *)(v49 + 8);
        if ( *v50 == v52 && (_BYTE *)v51 == v22 + 16 )
        {
          *(_QWORD *)(a1 + 192) -= *((unsigned __int16 *)v22 + 4);
          v53 = *(_QWORD *)(a1 + 312);
          if ( v53 )
          {
            v54 = *((unsigned __int16 *)v22 + 4);
            while ( 1 )
            {
              v55 = *(unsigned int *)(v53 + 8);
              if ( v54 < v55 )
                break;
              v20 = *(_QWORD *)v53;
              if ( !*(_QWORD *)v53 )
              {
                v54 = (unsigned int)(v55 - 1);
                break;
              }
              v53 = *(_QWORD *)v53;
            }
            v109 = v54;
            LOBYTE(v20) = 1;
            RtlpHeapRemoveListEntry(a1, v53, v20, (_DWORD)v22 + 16, v54, *((unsigned __int16 *)v22 + 4));
          }
          *v50 = v49;
          *(_QWORD *)(v49 + 8) = v50;
          if ( (v22[10] & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1) )
          {
            v56 = v22[10];
            if ( (v56 & 4) != 0 )
            {
              v57 = 16LL * *((unsigned __int16 *)v22 + 4) - 32;
              v116 = v57;
              if ( (v56 & 2) != 0 && v57 > 4 )
              {
                v57 -= 4LL;
                v116 = v57;
              }
              v58 = RtlCompareMemoryUlong(v22 + 32, v57, 0xFEEEFEEE);
              if ( v58 != v57 )
              {
                if ( NtCurrentPeb()->Ldr )
                  DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
                else
                  DbgPrint("HEAP: ");
                DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v22, &v22[v58 + 32]);
                RtlpBreakPointHeap();
              }
            }
            v22[10] = 0;
            v22[15] = 0;
            v11 = v22;
            v117 = v22;
            v105 += *((unsigned __int16 *)v22 + 4);
            *((_WORD *)v22 + 4) = v105;
            *(_WORD *)&v22[16 * v105 + 12] = *(_WORD *)(a1 + 140) ^ v105;
          }
          else
          {
            RtlpDeCommitFreeBlock(a1);
          }
        }
        else
        {
          RtlpLogHeapFailure(13, a1, (_DWORD)v22 + 16, v52, v51, 0LL);
        }
        v20 = v105;
      }
      v23 = &v11[16 * v20];
      if ( *(_DWORD *)(a1 + 124) )
      {
        v126 = *(_DWORD *)(a1 + 136) ^ *((_DWORD *)v23 + 2);
        if ( HIBYTE(v126) != ((unsigned __int8)v126 ^ (unsigned __int8)(BYTE1(v126) ^ BYTE2(v126))) )
          RtlpLogHeapFailure(3, a1, (_DWORD)v11 + 16 * v20, 0, 0LL, 0LL);
        v20 = v105;
      }
      while ( ((v23[10] ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v24 = *(_DWORD *)(a1 + 136) ^ *((_DWORD *)v23 + 2);
          *((_DWORD *)v23 + 2) = v24;
          if ( HIBYTE(v24) != ((unsigned __int8)v24 ^ (unsigned __int8)(BYTE1(v24) ^ BYTE2(v24))) )
            RtlpAnalyzeHeapFailure(a1, v23, v20);
        }
        v25 = v23 + 16;
        v26 = *((_QWORD *)v23 + 2);
        v27 = (__int64 *)*((_QWORD *)v23 + 3);
        v28 = *v27;
        v29 = *(_QWORD *)(v26 + 8);
        if ( *v27 == v29 && (_BYTE *)v28 == v25 )
        {
          *(_QWORD *)(a1 + 192) -= *((unsigned __int16 *)v23 + 4);
          v30 = *(__int64 ***)(a1 + 312);
          if ( v30 )
          {
            v31 = *((unsigned __int16 *)v23 + 4);
            while ( 1 )
            {
              v32 = *((unsigned int *)v30 + 2);
              if ( v31 < v32 )
                break;
              if ( !*v30 )
              {
                v31 = (unsigned int)(v32 - 1);
                break;
              }
              v30 = (__int64 **)*v30;
            }
            v118 = v31;
            LOBYTE(v25) = 1;
            RtlpHeapRemoveListEntry(a1, (_DWORD)v30, (_DWORD)v25, (_DWORD)v23 + 16, v31, *((unsigned __int16 *)v23 + 4));
          }
          *v27 = v26;
          *(_QWORD *)(v26 + 8) = v27;
          if ( (v23[10] & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1) )
          {
            v33 = v23[10];
            if ( (v33 & 4) != 0 )
            {
              v46 = 16LL * *((unsigned __int16 *)v23 + 4) - 32;
              v119 = v46;
              if ( (v33 & 2) != 0 && v46 > 4 )
              {
                v46 -= 4LL;
                v119 = v46;
              }
              v47 = RtlCompareMemoryUlong(v23 + 32, v46, 0xFEEEFEEE);
              if ( v47 != v46 )
              {
                if ( NtCurrentPeb()->Ldr )
                  DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
                else
                  DbgPrint("HEAP: ");
                DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v23, &v23[v47 + 32]);
                RtlpBreakPointHeap();
              }
            }
            v11[10] = 0;
            v11[15] = 0;
            v105 += *((unsigned __int16 *)v23 + 4);
            *((_WORD *)v11 + 4) = v105;
            *(_WORD *)&v11[16 * v105 + 12] = *(_WORD *)(a1 + 140) ^ v105;
            v20 = v105;
            break;
          }
          RtlpDeCommitFreeBlock(a1);
        }
        else
        {
          RtlpLogHeapFailure(13, a1, (_DWORD)v25, v29, v28, 0LL);
        }
        v20 = v105;
      }
      v130 = v11;
      v5 = v103;
    }
    if ( v20 >= *(_QWORD *)(a1 + 176) && v20 + *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 184) )
    {
      RtlpDeCommitFreeBlock(a1);
      v130 = 0LL;
      goto LABEL_218;
    }
    if ( v20 + *(_QWORD *)(a1 + 192) > *(_QWORD *)(a1 + 184)
      && v20 >= 0x100
      && *(_WORD *)(a1 + 140) == *((_WORD *)v11 + 6) )
    {
      RtlpDeCommitFreeBlock(a1);
      updated = 0;
      v130 = 0LL;
      goto LABEL_218;
    }
    if ( v20 > 0xFF00 )
    {
      RtlpInsertFreeBlock(a1, v11);
      v38 = (_DWORD *)(a1 + 124);
      v42 = (unsigned __int16 *)(v11 + 8);
      v34 = v11 + 10;
LABEL_72:
      if ( updated )
      {
        if ( *v38 )
        {
          v84 = *(_DWORD *)v42 ^ *(_DWORD *)(a1 + 136);
          *(_DWORD *)v42 = v84;
          if ( HIBYTE(v84) != ((unsigned __int8)v84 ^ (unsigned __int8)(BYTE1(v84) ^ BYTE2(v84))) )
            RtlpAnalyzeHeapFailure(a1, v11, Entry);
        }
        *v34 |= 2u;
        v85 = *v42;
        LOWORD(v85) = HIBYTE(*v42);
        v86 = &v11[16 * *v42];
        if ( *v38 )
        {
          v11[11] = v85 ^ *((_BYTE *)v42 + 2) ^ *v42;
          *(_DWORD *)v42 ^= *(_DWORD *)(a1 + 136);
        }
        *((_WORD *)v86 - 2) = updated;
        *((_WORD *)v86 - 1) = 0;
        if ( (*(_DWORD *)(a1 + 112) & 0x8000000) != 0 )
          *((_WORD *)v86 - 1) = RtlLogStackBackTraceEx(1LL, v85);
      }
      v130 = 0LL;
      goto LABEL_218;
    }
    v34 = v11 + 10;
    if ( v5 )
    {
      v35 = (unsigned __int16)v20;
      *v34 = 0;
      v11[15] = 0;
      v36 = (_QWORD *)(a1 + 336);
      if ( *(_QWORD *)(a1 + 312) )
        Entry = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v20);
      else
        Entry = (_QWORD *)*v36;
      v38 = (_DWORD *)(a1 + 124);
      while ( v36 != Entry )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v39 = *((_DWORD *)Entry - 2);
          v127 = v39;
          if ( (v39 & *(_DWORD *)(a1 + 124)) != 0 )
          {
            v39 ^= *(_DWORD *)(a1 + 136);
            v127 = v39;
          }
          v11 = v130;
        }
        else
        {
          LOWORD(v39) = *((_WORD *)Entry - 4);
        }
        v103 = v39;
        if ( v35 <= (unsigned __int16)v39 )
          break;
        Entry = (_QWORD *)*Entry;
      }
      v40 = v11 + 16;
      v41 = (__int64 *)Entry[1];
      if ( (_QWORD *)*v41 == Entry )
      {
        *v40 = Entry;
        *((_QWORD *)v11 + 3) = v41;
        *v41 = (__int64)v40;
        Entry[1] = v40;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v41, 0LL);
      }
      v42 = (unsigned __int16 *)(v11 + 8);
      *(_QWORD *)(a1 + 192) += *((unsigned __int16 *)v11 + 4);
      v43 = *(__int64 ***)(a1 + 312);
      if ( !v43 )
        goto LABEL_70;
      v44 = *v42;
      while ( 1 )
      {
        v45 = *((unsigned int *)v43 + 2);
        if ( v44 < v45 )
          break;
        if ( !*v43 )
        {
          v44 = (unsigned int)(v45 - 1);
          break;
        }
        v43 = (__int64 **)*v43;
      }
      v120 = v44;
LABEL_69:
      LOBYTE(Entry) = 1;
      RtlpHeapAddListEntry(a1, (_DWORD)v43, (_DWORD)Entry, (_DWORD)v40, v44, *v42);
LABEL_70:
      if ( *v38 )
      {
        v11[11] = *(_BYTE *)v42 ^ *((_BYTE *)v42 + 1) ^ *((_BYTE *)v42 + 2);
        *(_DWORD *)v42 ^= *(_DWORD *)(a1 + 136);
      }
      goto LABEL_72;
    }
    v61 = (unsigned __int16)v20;
    *v34 &= 0xF0u;
    v11[15] = 0;
    if ( (*(_BYTE *)(a1 + 112) & 0x40) == 0 )
    {
LABEL_127:
      v62 = (_QWORD *)(a1 + 336);
      if ( *(_QWORD *)(a1 + 312) )
        Entry = (_QWORD *)RtlpFindEntry(a1, v61);
      else
        Entry = (_QWORD *)*v62;
      v38 = (_DWORD *)(a1 + 124);
      while ( v62 != Entry )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v63 = *((_DWORD *)Entry - 2);
          v128 = v63;
          if ( (v63 & *(_DWORD *)(a1 + 124)) != 0 )
          {
            v63 ^= *(_DWORD *)(a1 + 136);
            v128 = v63;
          }
          v11 = v130;
        }
        else
        {
          LOWORD(v63) = *((_WORD *)Entry - 4);
        }
        v106 = v63;
        if ( v61 <= (unsigned __int16)v63 )
          break;
        Entry = (_QWORD *)*Entry;
      }
      v40 = v11 + 16;
      v64 = (__int64 *)Entry[1];
      if ( (_QWORD *)*v64 == Entry )
      {
        *v40 = Entry;
        *((_QWORD *)v11 + 3) = v64;
        *v64 = (__int64)v40;
        Entry[1] = v40;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v64, 0LL);
      }
      v42 = (unsigned __int16 *)(v11 + 8);
      *(_QWORD *)(a1 + 192) += *((unsigned __int16 *)v11 + 4);
      v43 = *(__int64 ***)(a1 + 312);
      if ( !v43 )
        goto LABEL_70;
      v44 = *v42;
      while ( 1 )
      {
        v65 = *((unsigned int *)v43 + 2);
        if ( v44 < v65 )
          break;
        if ( !*v43 )
        {
          v44 = (unsigned int)(v65 - 1);
          break;
        }
        v43 = (__int64 **)*v43;
      }
      v122 = v44;
      goto LABEL_69;
    }
    v82 = v11 + 32;
    v121 = v11 + 32;
    v83 = (16 * v61 - 32) >> 2;
    v112 = v83;
    if ( v83 )
    {
      if ( ((unsigned __int8)v82 & 4) == 0 )
        goto LABEL_194;
      *v82 = -17891602;
      v112 = --v83;
      if ( v83 )
      {
        v82 = v11 + 36;
        v121 = v11 + 36;
LABEL_194:
        memset64(v82, 0xFEEEFEEEFEEEFEEEuLL, v83 >> 1);
        if ( (v83 & 1) != 0 )
          v82[v83 - 1] = -17891602;
      }
    }
    *v34 |= 4u;
    goto LABEL_127;
  }
  if ( RtlTryEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352)) )
  {
    ++*(_DWORD *)(a1 + 616);
    goto LABEL_11;
  }
  if ( !byte_180187488 )
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
    RtlpUpdateHeapRates(a1, 1LL);
LABEL_11:
    v101 = 1;
    if ( *(_DWORD *)(a1 + 124) )
    {
      v13 = *((_DWORD *)v11 + 2) ^ *(_DWORD *)(a1 + 136);
      *((_DWORD *)v11 + 2) = v13;
      if ( HIBYTE(v13) != ((unsigned __int8)v13 ^ (unsigned __int8)(BYTE1(v13) ^ BYTE2(v13))) )
        RtlpAnalyzeHeapFailure(a1, v11, v12);
    }
    v14 = *(__int64 ***)(a1 + 312);
    do
    {
      if ( *((unsigned __int16 *)v11 + 4) < (unsigned __int64)*((unsigned int *)v14 + 2) )
        break;
      v14 = (__int64 **)*v14;
    }
    while ( v14 );
    goto LABEL_16;
  }
  v124 = NtCurrentTeb();
  v124->LastStatusValue = -1073741420;
  v125 = NtCurrentTeb();
  v125->LastErrorValue = RtlNtStatusToDosError(-1073741420);
  v107 = 0;
  v130 = 0LL;
LABEL_218:
  v87 = 256;
  v88 = v130;
  if ( v130 && *(_DWORD *)(a1 + 124) )
  {
    v130[11] = v130[8] ^ v130[9] ^ v130[10];
    *((_DWORD *)v88 + 2) ^= *(_DWORD *)(a1 + 136);
  }
  if ( v101 )
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
    {
      v89 = *(_DWORD *)(a1 + 640) + 1;
      *(_DWORD *)(a1 + 640) = v89;
      v90 = *(_DWORD *)(a1 + 648);
      if ( v89 > v90 )
      {
        *(_DWORD *)(a1 + 640) = 0;
        v96 = *(_QWORD *)(a1 + 576) - 16LL * *(_QWORD *)(a1 + 192);
        if ( v96 > *(_QWORD *)(a1 + 672) )
          *(_QWORD *)(a1 + 672) = v96;
        *(_QWORD *)(a1 + 680) = v96;
      }
      v91 = *(_DWORD *)(a1 + 652) + 1;
      *(_DWORD *)(a1 + 652) = v91;
      if ( v91 >= 0x1000 )
      {
        if ( *(_BYTE *)(a1 + 418) != 2 || *(_DWORD *)(a1 + 656) <= 0x10u )
          v87 = 16;
        if ( *(_DWORD *)(a1 + 644) > v87 && v90 < 0x10000 )
          *(_DWORD *)(a1 + 648) = 2 * v90;
        *(_DWORD *)(a1 + 644) = 0;
        *(_DWORD *)(a1 + 652) = 0;
      }
    }
    v92 = *(_QWORD *)(a1 + 352);
    if ( (*(_DWORD *)(v92 + 12))-- == 1 )
    {
      *(_QWORD *)(v92 + 16) = 0LL;
      v94 = _InterlockedCompareExchange((volatile signed __int32 *)(v92 + 8), -1, -2);
      if ( v94 != -2 )
      {
        if ( (*(_BYTE *)(v92 + 8) & 1) != 0 )
          RtlpNotOwnerCriticalSection(v92);
        v97 = *(void **)(v92 + 24);
        if ( !v97 )
          v97 = (void *)RtlpCreateDeferredCriticalSectionEvent(v92);
        LODWORD(v129) = 0;
        while ( v94 != _InterlockedCompareExchange((volatile signed __int32 *)(v92 + 8), v94 + (v94 & 2 | 1), v94) )
        {
          RtlBackoff((unsigned int *)&v129);
          _m_prefetchw((const void *)(v92 + 8));
          v94 = *(_DWORD *)(v92 + 8);
        }
        if ( (v94 & 2) != 0 )
        {
          if ( v97 == (void *)-1LL )
          {
            _InterlockedOr(v99, 0);
            RtlpWakeByAddress(v92 + 8, 0);
          }
          else
          {
            v98 = ZwSetEvent(v97, 0LL);
            if ( v98 < 0 )
              RtlRaiseStatus(v98);
          }
        }
      }
    }
  }
  return v107;
}
