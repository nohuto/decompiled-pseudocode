/*
 * XREFs of RtlpFreeHeap @ 0x1800397E0
 * Callers:
 *     RtlpFreeHeapInternal @ 0x18003BD50 (RtlpFreeHeapInternal.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18002A1DC (RtlpWakeByAddress.c)
 *     RtlBackoff @ 0x180033F80 (RtlBackoff.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     RtlTryEnterCriticalSection @ 0x180044030 (RtlTryEnterCriticalSection.c)
 *     RtlpFindEntry @ 0x1800448D0 (RtlpFindEntry.c)
 *     RtlpInsertFreeBlock @ 0x180044950 (RtlpInsertFreeBlock.c)
 *     RtlpHeapAddListEntry @ 0x180044ED4 (RtlpHeapAddListEntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1800450BC (RtlpDeCommitFreeBlock.c)
 *     RtlpCommitBlock @ 0x18004691C (RtlpCommitBlock.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180046C90 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpHeapRemoveListEntry @ 0x18004913C (RtlpHeapRemoveListEntry.c)
 *     RtlNtStatusToDosError @ 0x180053810 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180053A70 (DbgPrint.c)
 *     RtlLogStackBackTraceEx @ 0x18005FC44 (RtlLogStackBackTraceEx.c)
 *     RtlpUpdateHeapRates @ 0x18007D408 (RtlpUpdateHeapRates.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180082DF0 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpUpdateHeapWatermarks @ 0x180089BD4 (RtlpUpdateHeapWatermarks.c)
 *     ZwSetEvent @ 0x18009EFB0 (ZwSetEvent.c)
 *     RtlCompareMemoryUlong @ 0x1800A39F0 (RtlCompareMemoryUlong.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3940 (RtlpNotOwnerCriticalSection.c)
 *     RtlpUpdateTagEntry @ 0x18010002C (RtlpUpdateTagEntry.c)
 *     RtlDebugFreeHeap @ 0x180104C90 (RtlDebugFreeHeap.c)
 *     RtlpBreakPointHeap @ 0x1801069E8 (RtlpBreakPointHeap.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 *     RtlpAnalyzeHeapFailure @ 0x180114F24 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapLogRangeRelease @ 0x1801153DC (RtlpHeapLogRangeRelease.c)
 *     RtlpLogHeapContractEvent @ 0x180117070 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapFreeEvent @ 0x180117300 (RtlpLogHeapFreeEvent.c)
 *     RtlpLogHeapFailure @ 0x180121540 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpFreeHeap(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
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
  unsigned __int64 v46; // rdi
  __int64 v47; // r15
  int v48; // edx
  __int64 v49; // r14
  __int64 *v50; // r15
  __int64 v51; // rax
  __int64 v52; // r9
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rax
  char v56; // al
  unsigned __int64 v57; // rsi
  __int64 v58; // r14
  __int64 v59; // r9
  __int64 v60; // r9
  int v61; // ecx
  int v62; // edx
  unsigned __int64 v63; // r14
  _QWORD *v64; // rdi
  int v65; // eax
  __int64 *v66; // rax
  unsigned __int64 v67; // rdi
  unsigned __int64 v68; // rsi
  __int64 v69; // rax
  unsigned __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // r9
  __int64 v73; // rdi
  int v74; // eax
  signed __int32 v75; // r15d
  __int64 v76; // rdi
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rdi
  __int64 v90; // rcx
  __int64 DeferredCriticalSectionEvent; // r10
  int v92; // eax
  int v93; // edx
  _DWORD *v94; // r8
  unsigned __int64 v95; // rdx
  int v96; // edx
  __int64 v97; // rdx
  _BYTE *v98; // rdi
  unsigned int v99; // edi
  _BYTE *v100; // rcx
  unsigned int v101; // eax
  unsigned int v102; // ecx
  unsigned int v103; // eax
  __int64 v104; // rdi
  signed __int32 v106; // esi
  unsigned __int64 v108; // rdx
  __int64 v109; // r10
  int v110; // eax
  signed __int32 v111[8]; // [rsp+58h] [rbp-158h] BYREF
  __int64 v112; // [rsp+78h] [rbp-138h]
  char v113; // [rsp+98h] [rbp-118h]
  __int16 updated; // [rsp+9Ch] [rbp-114h]
  __int16 v115; // [rsp+A0h] [rbp-110h]
  char v116; // [rsp+A8h] [rbp-108h]
  unsigned __int64 v117; // [rsp+B0h] [rbp-100h] BYREF
  __int16 v118; // [rsp+B8h] [rbp-F8h]
  unsigned int v119; // [rsp+BCh] [rbp-F4h]
  unsigned __int64 v120; // [rsp+C0h] [rbp-F0h]
  unsigned __int64 v121; // [rsp+C8h] [rbp-E8h]
  unsigned int v122; // [rsp+D0h] [rbp-E0h] BYREF
  unsigned __int64 v123; // [rsp+D8h] [rbp-D8h] BYREF
  unsigned __int64 v124; // [rsp+E0h] [rbp-D0h]
  __int64 v125; // [rsp+E8h] [rbp-C8h]
  unsigned int v126; // [rsp+F0h] [rbp-C0h]
  unsigned int NtGlobalFlag; // [rsp+F4h] [rbp-BCh]
  unsigned __int64 v128; // [rsp+F8h] [rbp-B8h]
  _BYTE *v129; // [rsp+100h] [rbp-B0h]
  unsigned __int64 v130; // [rsp+118h] [rbp-98h]
  unsigned __int64 v131; // [rsp+120h] [rbp-90h]
  unsigned __int64 v132; // [rsp+128h] [rbp-88h]
  _BYTE *v133; // [rsp+130h] [rbp-80h]
  unsigned __int64 v134; // [rsp+138h] [rbp-78h]
  __int64 v135; // [rsp+140h] [rbp-70h]
  struct _TEB *v136; // [rsp+148h] [rbp-68h]
  struct _TEB *v137; // [rsp+150h] [rbp-60h]
  int v138; // [rsp+160h] [rbp-50h]
  int v139; // [rsp+170h] [rbp-40h]
  int v140; // [rsp+180h] [rbp-30h]
  __int64 v141; // [rsp+1B8h] [rbp+8h] BYREF
  _BYTE *v142; // [rsp+1C8h] [rbp+18h]

  v142 = a3;
  v141 = a1;
  v5 = 1;
  LOBYTE(v115) = 1;
  v113 = 0;
  v119 = 1;
  v123 = 0LL;
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
    LOBYTE(v115) = 0;
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
    v11 = v142;
    if ( ((v142[10] ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 17))) & 8) == 0 )
      RtlpLogHeapFreeEvent(a1, a4, v7);
  }
  else
  {
    v11 = v142;
  }
  if ( (v6 & 1) != 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v93 = *((_DWORD *)v11 + 2) ^ *(_DWORD *)(a1 + 136);
      *((_DWORD *)v11 + 2) = v93;
      if ( HIBYTE(v93) != ((unsigned __int8)v93 ^ (unsigned __int8)(BYTE1(v93) ^ BYTE2(v93))) )
        RtlpAnalyzeHeapFailure(a1, v11, v7);
    }
LABEL_16:
    v15 = v11 + 10;
    v16 = v11[10];
    if ( (v16 & 8) != 0 )
      *v15 = v16 & 0xF7;
    if ( v11[15] == 4 )
    {
      v68 = (unsigned __int64)(v11 - 48);
      v120 = v68;
      v125 = *(_QWORD *)(v68 + 32);
      v123 = v68 & 0xFFFFFFFFFFFF0000uLL;
      *(_QWORD *)(a1 + 592) -= v125;
      v69 = *(_QWORD *)v68;
      v70 = *(_QWORD *)(v68 + 8);
      v71 = *(_QWORD *)v70;
      v72 = *(_QWORD *)(*(_QWORD *)v68 + 8LL);
      if ( *(_QWORD *)v70 == v72 && v71 == v68 )
      {
        *(_QWORD *)v70 = v69;
        *(_QWORD *)(v69 + 8) = v70;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, v120, v72, v71, 0LL);
      }
      if ( !v5 )
      {
        NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
        v70 = NtGlobalFlag;
        if ( (NtGlobalFlag & 0x800) != 0 )
          RtlpUpdateTagEntry(a1, *(unsigned __int16 *)(v120 + 18), *(_QWORD *)(v68 + 32) >> 4, 0, 3);
      }
      v142 = 0LL;
      if ( v113 )
      {
        v73 = *(_QWORD *)(a1 + 352);
        v74 = *(_DWORD *)(v73 + 12) - 1;
        *(_DWORD *)(v73 + 12) = v74;
        if ( !v74 )
        {
          *(_QWORD *)(v73 + 16) = 0LL;
          v75 = _InterlockedCompareExchange((volatile signed __int32 *)(v73 + 8), -1, -2);
          if ( v75 != -2 )
          {
            if ( (*(_BYTE *)(v73 + 8) & 1) != 0 )
              RtlpNotOwnerCriticalSection(v73);
            DeferredCriticalSectionEvent = *(_QWORD *)(v73 + 24);
            if ( !DeferredCriticalSectionEvent )
              DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v73);
            v122 = 0;
            while ( 1 )
            {
              v71 = v75 & 2 | 1u;
              v70 = (unsigned int)(v75 + v71);
              if ( v75 == _InterlockedCompareExchange((volatile signed __int32 *)(v73 + 8), v70, v75) )
                break;
              RtlBackoff(&v122);
              _m_prefetchw((const void *)(v73 + 8));
              v75 = *(_DWORD *)(v73 + 8);
            }
            if ( (v75 & 2) != 0 )
            {
              if ( DeferredCriticalSectionEvent == -1 )
              {
                _InterlockedOr(v111, 0);
                RtlpWakeByAddress(v73 + 8, 0);
              }
              else
              {
                v92 = ZwSetEvent(DeferredCriticalSectionEvent, 0LL);
                if ( v92 < 0 )
                  RtlRaiseStatus((unsigned int)v92);
              }
            }
          }
        }
        v113 = 0;
      }
      v76 = *(_QWORD *)(v120 + 40);
      v135 = v76;
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v70, v71, v15, v72) )
      {
        v77 = (__int64)NtCurrentPeb()->SharedData + 558;
        v76 = v135;
      }
      else
      {
        v77 = 2147353480LL;
      }
      if ( *(_BYTE *)v77 )
        RtlpHeapLogRangeRelease(a1, v123, v76);
      v117 = 0LL;
      RtlpSecMemFreeVirtualMemory(v77, &v123, &v117, 0x8000LL);
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v79, v78, v80, v81) )
        v85 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v85 = 2147353472LL;
      if ( *(_BYTE *)v85 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v85, v82, v83, v84) )
          v9 = (__int64)NtCurrentPeb()->SharedData + 550;
        RtlpLogHeapContractEvent(a1, v120, v125, 16 * *(_QWORD *)(a1 + 192), 0, 0LL, *(unsigned __int8 *)v9);
      }
      v89 = 2147353482LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v85, v82, v83, v84) )
        v90 = (__int64)NtCurrentPeb()->SharedData + 560;
      else
        v90 = 2147353482LL;
      if ( *(_BYTE *)v90 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v90, v86, v87, v88) )
          v89 = (__int64)NtCurrentPeb()->SharedData + 560;
        RtlpLogHeapContractEvent(a1, v120, v125, 16 * *(_DWORD *)(a1 + 192), 0, 0LL, *(unsigned __int8 *)v89);
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
      v11 = v142;
    }
    if ( !v5 )
    {
      v126 = NtCurrentPeb()->NtGlobalFlag;
      v11 = v142;
      if ( (v126 & 0x800) != 0 )
      {
        v61 = *v17;
        LODWORD(v112) = 2;
        if ( (*v15 & 2) != 0 )
          v62 = *(unsigned __int16 *)&v142[16 * v61 - 14];
        else
          v62 = (unsigned __int8)v142[11];
        updated = RtlpUpdateTagEntry(a1, v62, v61, 0, v112);
      }
    }
    v20 = *v17;
    v117 = v20;
    if ( *(char *)(a1 + 112) >= 0 )
    {
      v116 = 0;
      v129 = v11;
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
            v121 = v54;
            LOBYTE(v20) = 1;
            RtlpHeapRemoveListEntry(a1, v53, v20, (_DWORD)v22 + 16, v54, *((unsigned __int16 *)v22 + 4));
          }
          *v50 = v49;
          *(_QWORD *)(v49 + 8) = v50;
          if ( (v22[10] & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1, v22) )
          {
            v56 = v22[10];
            if ( (v56 & 4) != 0 )
            {
              v57 = 16LL * *((unsigned __int16 *)v22 + 4) - 32;
              v128 = v57;
              if ( (v56 & 2) != 0 && v57 > 4 )
              {
                v57 -= 4LL;
                v128 = v57;
              }
              v58 = RtlCompareMemoryUlong(v22 + 32, v57, 4277075694LL);
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
            v129 = v22;
            v117 += *((unsigned __int16 *)v22 + 4);
            *((_WORD *)v22 + 4) = v117;
            *(_WORD *)&v22[16 * v117 + 12] = *(_WORD *)(a1 + 140) ^ v117;
          }
          else
          {
            LOBYTE(v60) = 1;
            RtlpDeCommitFreeBlock(a1, v22, *((unsigned __int16 *)v22 + 4), v60);
          }
        }
        else
        {
          RtlpLogHeapFailure(13, a1, (_DWORD)v22 + 16, v52, v51, 0LL);
        }
        v20 = v117;
      }
      v23 = &v11[16 * v20];
      if ( *(_DWORD *)(a1 + 124) )
      {
        v138 = *(_DWORD *)(a1 + 136) ^ *((_DWORD *)v23 + 2);
        if ( HIBYTE(v138) != ((unsigned __int8)v138 ^ (unsigned __int8)(BYTE1(v138) ^ BYTE2(v138))) )
          RtlpLogHeapFailure(3, a1, (_DWORD)v11 + 16 * v20, 0, 0LL, 0LL);
        v20 = v117;
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
            v130 = v31;
            LOBYTE(v25) = 1;
            RtlpHeapRemoveListEntry(a1, (_DWORD)v30, (_DWORD)v25, (_DWORD)v23 + 16, v31, *((unsigned __int16 *)v23 + 4));
          }
          *v27 = v26;
          *(_QWORD *)(v26 + 8) = v27;
          if ( (v23[10] & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1, v23) )
          {
            v33 = v23[10];
            if ( (v33 & 4) != 0 )
            {
              v46 = 16LL * *((unsigned __int16 *)v23 + 4) - 32;
              v131 = v46;
              if ( (v33 & 2) != 0 && v46 > 4 )
              {
                v46 -= 4LL;
                v131 = v46;
              }
              v47 = RtlCompareMemoryUlong(v23 + 32, v46, 4277075694LL);
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
            v117 += *((unsigned __int16 *)v23 + 4);
            *((_WORD *)v11 + 4) = v117;
            *(_WORD *)&v11[16 * v117 + 12] = *(_WORD *)(a1 + 140) ^ v117;
            v20 = v117;
            break;
          }
          LOBYTE(v59) = 1;
          RtlpDeCommitFreeBlock(a1, v23, *((unsigned __int16 *)v23 + 4), v59);
        }
        else
        {
          RtlpLogHeapFailure(13, a1, (_DWORD)v25, v29, v28, 0LL);
        }
        v20 = v117;
      }
      v142 = v11;
      v5 = v115;
    }
    if ( v20 >= *(_QWORD *)(a1 + 176) && v20 + *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 184) )
    {
      RtlpDeCommitFreeBlock(a1, v11, v20, 0LL);
      v142 = 0LL;
      goto LABEL_218;
    }
    if ( v20 + *(_QWORD *)(a1 + 192) > *(_QWORD *)(a1 + 184)
      && v20 >= 0x100
      && *(_WORD *)(a1 + 140) == *((_WORD *)v11 + 6) )
    {
      RtlpDeCommitFreeBlock(a1, v11, v20, 0LL);
      updated = 0;
      v142 = 0LL;
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
          v96 = *(_DWORD *)v42 ^ *(_DWORD *)(a1 + 136);
          *(_DWORD *)v42 = v96;
          if ( HIBYTE(v96) != ((unsigned __int8)v96 ^ (unsigned __int8)(BYTE1(v96) ^ BYTE2(v96))) )
            RtlpAnalyzeHeapFailure(a1, v11, Entry);
        }
        *v34 |= 2u;
        v97 = *v42;
        LOWORD(v97) = HIBYTE(*v42);
        v98 = &v11[16 * *v42];
        if ( *v38 )
        {
          v11[11] = v97 ^ *((_BYTE *)v42 + 2) ^ *v42;
          *(_DWORD *)v42 ^= *(_DWORD *)(a1 + 136);
        }
        *((_WORD *)v98 - 2) = updated;
        *((_WORD *)v98 - 1) = 0;
        if ( (*(_DWORD *)(a1 + 112) & 0x8000000) != 0 )
          *((_WORD *)v98 - 1) = RtlLogStackBackTraceEx(1LL, v97);
      }
      v142 = 0LL;
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
          v139 = v39;
          if ( (v39 & *(_DWORD *)(a1 + 124)) != 0 )
          {
            v39 ^= *(_DWORD *)(a1 + 136);
            v139 = v39;
          }
          v11 = v142;
        }
        else
        {
          LOWORD(v39) = *((_WORD *)Entry - 4);
        }
        v115 = v39;
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
      v132 = v44;
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
    v63 = (unsigned __int16)v20;
    *v34 &= 0xF0u;
    v11[15] = 0;
    if ( (*(_BYTE *)(a1 + 112) & 0x40) == 0 )
    {
LABEL_127:
      v64 = (_QWORD *)(a1 + 336);
      if ( *(_QWORD *)(a1 + 312) )
        Entry = (_QWORD *)RtlpFindEntry(a1, v63);
      else
        Entry = (_QWORD *)*v64;
      v38 = (_DWORD *)(a1 + 124);
      while ( v64 != Entry )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v65 = *((_DWORD *)Entry - 2);
          v140 = v65;
          if ( (v65 & *(_DWORD *)(a1 + 124)) != 0 )
          {
            v65 ^= *(_DWORD *)(a1 + 136);
            v140 = v65;
          }
          v11 = v142;
        }
        else
        {
          LOWORD(v65) = *((_WORD *)Entry - 4);
        }
        v118 = v65;
        if ( v63 <= (unsigned __int16)v65 )
          break;
        Entry = (_QWORD *)*Entry;
      }
      v40 = v11 + 16;
      v66 = (__int64 *)Entry[1];
      if ( (_QWORD *)*v66 == Entry )
      {
        *v40 = Entry;
        *((_QWORD *)v11 + 3) = v66;
        *v66 = (__int64)v40;
        Entry[1] = v40;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v66, 0LL);
      }
      v42 = (unsigned __int16 *)(v11 + 8);
      *(_QWORD *)(a1 + 192) += *((unsigned __int16 *)v11 + 4);
      v43 = *(__int64 ***)(a1 + 312);
      if ( !v43 )
        goto LABEL_70;
      v44 = *v42;
      while ( 1 )
      {
        v67 = *((unsigned int *)v43 + 2);
        if ( v44 < v67 )
          break;
        if ( !*v43 )
        {
          v44 = (unsigned int)(v67 - 1);
          break;
        }
        v43 = (__int64 **)*v43;
      }
      v134 = v44;
      goto LABEL_69;
    }
    v94 = v11 + 32;
    v133 = v11 + 32;
    v95 = (16 * v63 - 32) >> 2;
    v124 = v95;
    if ( v95 )
    {
      if ( ((unsigned __int8)v94 & 4) == 0 )
        goto LABEL_194;
      *v94 = -17891602;
      v124 = --v95;
      if ( v95 )
      {
        v94 = v11 + 36;
        v133 = v11 + 36;
LABEL_194:
        memset64(v94, 0xFEEEFEEEFEEEFEEEuLL, v95 >> 1);
        if ( (v95 & 1) != 0 )
          v94[v95 - 1] = -17891602;
      }
    }
    *v34 |= 4u;
    goto LABEL_127;
  }
  if ( (unsigned int)RtlTryEnterCriticalSection(*(_QWORD *)(a1 + 352), a2, v7) )
  {
    ++*(_DWORD *)(a1 + 616);
    goto LABEL_11;
  }
  if ( !byte_1801843C8 )
  {
    RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
    RtlpUpdateHeapRates(a1, 1LL);
LABEL_11:
    v113 = 1;
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
  v136 = NtCurrentTeb();
  v136->LastStatusValue = -1073741420;
  v137 = NtCurrentTeb();
  v137->LastErrorValue = RtlNtStatusToDosError(-1073741420);
  v119 = 0;
  v142 = 0LL;
LABEL_218:
  v99 = 256;
  v100 = v142;
  if ( v142 && *(_DWORD *)(a1 + 124) )
  {
    v142[11] = v142[8] ^ v142[9] ^ v142[10];
    *((_DWORD *)v100 + 2) ^= *(_DWORD *)(a1 + 136);
  }
  if ( v113 )
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
    {
      v101 = *(_DWORD *)(a1 + 640) + 1;
      *(_DWORD *)(a1 + 640) = v101;
      v102 = *(_DWORD *)(a1 + 648);
      if ( v101 > v102 )
      {
        *(_DWORD *)(a1 + 640) = 0;
        v108 = *(_QWORD *)(a1 + 576) - 16LL * *(_QWORD *)(a1 + 192);
        if ( v108 > *(_QWORD *)(a1 + 672) )
          *(_QWORD *)(a1 + 672) = v108;
        *(_QWORD *)(a1 + 680) = v108;
      }
      v103 = *(_DWORD *)(a1 + 652) + 1;
      *(_DWORD *)(a1 + 652) = v103;
      if ( v103 >= 0x1000 )
      {
        if ( *(_BYTE *)(a1 + 418) != 2 || *(_DWORD *)(a1 + 656) <= 0x10u )
          v99 = 16;
        if ( *(_DWORD *)(a1 + 644) > v99 && v102 < 0x10000 )
          *(_DWORD *)(a1 + 648) = 2 * v102;
        *(_DWORD *)(a1 + 644) = 0;
        *(_DWORD *)(a1 + 652) = 0;
      }
    }
    v104 = *(_QWORD *)(a1 + 352);
    if ( (*(_DWORD *)(v104 + 12))-- == 1 )
    {
      *(_QWORD *)(v104 + 16) = 0LL;
      v106 = _InterlockedCompareExchange((volatile signed __int32 *)(v104 + 8), -1, -2);
      if ( v106 != -2 )
      {
        if ( (*(_BYTE *)(v104 + 8) & 1) != 0 )
          RtlpNotOwnerCriticalSection(v104);
        v109 = *(_QWORD *)(v104 + 24);
        if ( !v109 )
          v109 = RtlpCreateDeferredCriticalSectionEvent(v104);
        LODWORD(v141) = 0;
        while ( v106 != _InterlockedCompareExchange((volatile signed __int32 *)(v104 + 8), v106 + (v106 & 2 | 1), v106) )
        {
          RtlBackoff((unsigned int *)&v141);
          _m_prefetchw((const void *)(v104 + 8));
          v106 = *(_DWORD *)(v104 + 8);
        }
        if ( (v106 & 2) != 0 )
        {
          if ( v109 == -1 )
          {
            _InterlockedOr(v111, 0);
            RtlpWakeByAddress(v104 + 8, 0);
          }
          else
          {
            v110 = ZwSetEvent(v109, 0LL);
            if ( v110 < 0 )
              RtlRaiseStatus((unsigned int)v110);
          }
        }
      }
    }
  }
  return v119;
}
