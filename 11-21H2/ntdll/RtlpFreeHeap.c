/*
 * XREFs of RtlpFreeHeap @ 0x180025D30
 * Callers:
 *     RtlpFreeHeapInternal @ 0x180027BF0 (RtlpFreeHeapInternal.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x1800069C0 (DbgPrint.c)
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlLogStackBackTraceEx @ 0x18001D3E0 (RtlLogStackBackTraceEx.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x1800206D4 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpCommitBlock @ 0x180020728 (RtlpCommitBlock.c)
 *     RtlpHeapAddListEntry @ 0x18002192C (RtlpHeapAddListEntry.c)
 *     RtlpFindEntry @ 0x180021DC0 (RtlpFindEntry.c)
 *     RtlTryEnterCriticalSection @ 0x1800225E0 (RtlTryEnterCriticalSection.c)
 *     RtlpDeCommitFreeBlock @ 0x180022B64 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x1800231D4 (RtlpInsertFreeBlock.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHeapRemoveListEntry @ 0x18002E790 (RtlpHeapRemoveListEntry.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18005B0C4 (RtlpWakeByAddress.c)
 *     RtlpUpdateHeapRates @ 0x180083928 (RtlpUpdateHeapRates.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     RtlpUpdateHeapWatermarks @ 0x18009010C (RtlpUpdateHeapWatermarks.c)
 *     ZwSetEvent @ 0x1800A4230 (ZwSetEvent.c)
 *     RtlCompareMemoryUlong @ 0x1800A8BB0 (RtlCompareMemoryUlong.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3C10 (RtlpNotOwnerCriticalSection.c)
 *     RtlpUpdateTagEntry @ 0x180100360 (RtlpUpdateTagEntry.c)
 *     RtlDebugFreeHeap @ 0x180104FAC (RtlDebugFreeHeap.c)
 *     RtlpBreakPointHeap @ 0x180106C88 (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x180114AD4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapLogRangeRelease @ 0x180114FF4 (RtlpHeapLogRangeRelease.c)
 *     RtlpLogHeapContractEvent @ 0x180116C84 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapFreeEvent @ 0x180116F14 (RtlpLogHeapFreeEvent.c)
 *     RtlpLogHeapFailure @ 0x18011F650 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpFreeHeap(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  char v6; // r13
  int v7; // edi
  __int64 v8; // r8
  _DWORD *SharedData; // rcx
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rsi
  int v13; // edx
  __int64 **v14; // rcx
  _BYTE *v15; // r8
  char v16; // al
  unsigned __int16 *v17; // rdi
  unsigned __int64 v18; // rax
  _WORD *v19; // rdx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // r14
  int v24; // edx
  __int64 v25; // r8
  __int64 v26; // r15
  __int64 *v27; // r12
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 **v30; // rdx
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rdi
  int v33; // eax
  char v34; // al
  unsigned int v35; // r15d
  unsigned __int64 v36; // rdi
  _QWORD *v37; // r14
  _QWORD *Entry; // r8
  int v39; // ecx
  int v40; // eax
  _QWORD *v41; // r14
  __int64 *v42; // rax
  __int64 v43; // rdx
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rdi
  __int64 v46; // rax
  SIZE_T v47; // rdi
  SIZE_T v48; // r15
  int v49; // edx
  __int64 v50; // r14
  __int64 *v51; // r15
  __int64 v52; // rax
  __int64 v53; // r9
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // rax
  unsigned int v57; // eax
  char v58; // al
  SIZE_T v59; // rsi
  SIZE_T v60; // r14
  __int64 v61; // rax
  int v62; // edx
  unsigned __int64 v63; // r14
  _QWORD *v64; // rdi
  _QWORD *v65; // r8
  int v66; // ecx
  int v67; // eax
  __int64 *v68; // rax
  unsigned __int64 v69; // rdi
  unsigned __int64 v70; // rcx
  __int64 v71; // rsi
  __int64 v72; // rax
  __int64 *v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // r9
  __int64 v76; // rdi
  bool v77; // zf
  signed __int32 v78; // r15d
  __int64 v79; // rdi
  __int64 v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // rdi
  __int64 v83; // rcx
  void *DeferredCriticalSectionEvent; // r10
  int v85; // eax
  int v86; // edx
  _DWORD *v87; // r8
  unsigned __int64 v88; // rdx
  int v89; // edx
  unsigned __int16 v90; // cx
  __int64 v91; // rdi
  _BYTE *v92; // rcx
  unsigned int v93; // ecx
  __int64 v94; // rdi
  signed __int32 v95; // esi
  unsigned __int64 v97; // rdx
  void *v98; // r10
  int v99; // eax
  signed __int32 v100[8]; // [rsp+68h] [rbp-158h] BYREF
  char v101[8]; // [rsp+88h] [rbp-138h]
  __int64 v102; // [rsp+90h] [rbp-130h]
  char v103; // [rsp+A8h] [rbp-118h]
  __int16 updated; // [rsp+ACh] [rbp-114h]
  __int16 v105; // [rsp+B0h] [rbp-110h]
  char v106; // [rsp+B8h] [rbp-108h]
  ULONG_PTR v107; // [rsp+C0h] [rbp-100h] BYREF
  __int16 v108; // [rsp+C8h] [rbp-F8h]
  unsigned int v109; // [rsp+CCh] [rbp-F4h]
  int v110[2]; // [rsp+D0h] [rbp-F0h]
  __int64 v111; // [rsp+D8h] [rbp-E8h]
  unsigned int v112; // [rsp+E0h] [rbp-E0h] BYREF
  unsigned __int64 v113; // [rsp+E8h] [rbp-D8h] BYREF
  unsigned __int64 v114; // [rsp+F0h] [rbp-D0h]
  int v115[2]; // [rsp+F8h] [rbp-C8h]
  unsigned int NtGlobalFlag; // [rsp+100h] [rbp-C0h]
  unsigned int v117; // [rsp+104h] [rbp-BCh]
  SIZE_T v118; // [rsp+108h] [rbp-B8h]
  __int64 v119; // [rsp+110h] [rbp-B0h]
  __int64 v120; // [rsp+128h] [rbp-98h]
  SIZE_T v121; // [rsp+130h] [rbp-90h]
  __int64 v122; // [rsp+138h] [rbp-88h]
  __int64 v123; // [rsp+140h] [rbp-80h]
  __int64 v124; // [rsp+148h] [rbp-78h]
  __int64 v125; // [rsp+150h] [rbp-70h]
  struct _TEB *v126; // [rsp+158h] [rbp-68h]
  struct _TEB *v127; // [rsp+160h] [rbp-60h]
  int v128; // [rsp+170h] [rbp-50h]
  int v129; // [rsp+180h] [rbp-40h]
  int v130; // [rsp+190h] [rbp-30h]
  __int64 v131; // [rsp+1C8h] [rbp+8h] BYREF
  _BYTE *v132; // [rsp+1D8h] [rbp+18h]

  v132 = (_BYTE *)a3;
  v131 = a1;
  v6 = 1;
  LOBYTE(v105) = 1;
  v103 = 0;
  v109 = 1;
  v113 = 0LL;
  updated = 0;
  if ( a1 == a3 )
  {
    RtlpLogHeapFailure(9, a1, a3, 0, 0LL, 0LL);
    return 0LL;
  }
  v7 = *(_DWORD *)(a1 + 116) | a2;
  if ( (v7 & 0x7D010F60) != 0 )
  {
    v6 = 0;
    LOBYTE(v105) = 0;
    v8 = 4LL;
    if ( (v7 & 0x61000000) != 0 && (v7 & 0x10000000) == 0 )
      return RtlDebugFreeHeap((void *)a1);
  }
  else
  {
    v8 = 3LL;
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
  {
    v11 = (__int64)NtCurrentPeb()->SharedData + 550;
    v10 = 2147353472LL;
  }
  else
  {
    v10 = 2147353472LL;
    v11 = 2147353472LL;
  }
  if ( *(_BYTE *)v11 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    v12 = (__int64)v132;
    if ( ((v132[10] ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 17))) & 8) == 0 )
      RtlpLogHeapFreeEvent(a1, a4, v8);
  }
  else
  {
    v12 = (__int64)v132;
  }
  if ( (v7 & 1) != 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v86 = *(_DWORD *)(v12 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v12 + 8) = v86;
      if ( HIBYTE(v86) != ((unsigned __int8)v86 ^ (unsigned __int8)(BYTE1(v86) ^ BYTE2(v86))) )
        RtlpAnalyzeHeapFailure(a1, v12);
    }
  }
  else
  {
    if ( RtlTryEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352)) )
    {
      ++*(_DWORD *)(a1 + 616);
    }
    else
    {
      if ( byte_18017A188 )
      {
        v126 = NtCurrentTeb();
        v126->LastStatusValue = -1073741420;
        v127 = NtCurrentTeb();
        v127->LastErrorValue = RtlNtStatusToDosError(-1073741420);
        v109 = 0;
        v132 = 0LL;
        goto LABEL_168;
      }
      RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      RtlpUpdateHeapRates(a1, 1LL);
    }
    v103 = 1;
    if ( *(_DWORD *)(a1 + 124) )
    {
      v13 = *(_DWORD *)(v12 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v12 + 8) = v13;
      if ( HIBYTE(v13) != ((unsigned __int8)v13 ^ (unsigned __int8)(BYTE1(v13) ^ BYTE2(v13))) )
        RtlpAnalyzeHeapFailure(a1, v12);
    }
    v14 = *(__int64 ***)(a1 + 312);
    do
    {
      if ( *(unsigned __int16 *)(v12 + 8) < (unsigned __int64)*((unsigned int *)v14 + 2) )
        break;
      v14 = (__int64 **)*v14;
    }
    while ( v14 );
  }
  v15 = (_BYTE *)(v12 + 10);
  v16 = *(_BYTE *)(v12 + 10);
  if ( (v16 & 8) != 0 )
    *v15 = v16 & 0xF7;
  if ( *(_BYTE *)(v12 + 15) != 4 )
  {
    v17 = (unsigned __int16 *)(v12 + 8);
    v18 = *(unsigned __int16 *)(v12 + 8);
    if ( (unsigned __int16)v18 < *(_WORD *)(a1 + 432) )
    {
      if ( ((unsigned __int8)(1 << (*(_WORD *)(v12 + 8) & 7)) & *(_BYTE *)((v18 >> 3) + a1 + 434)) == 0 )
      {
        v19 = (_WORD *)(*(_QWORD *)(a1 + 424) + 2LL * *v17);
        if ( *v19 > 1u )
          --*v19;
      }
      v12 = (__int64)v132;
    }
    if ( !v6 )
    {
      NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
      v12 = (__int64)v132;
      if ( (NtGlobalFlag & 0x800) != 0 )
      {
        v61 = *(unsigned __int16 *)(a3 + 8);
        *(_DWORD *)v101 = 2;
        if ( (*v15 & 2) != 0 )
          v62 = *(unsigned __int16 *)&v132[16 * v61 - 14];
        else
          v62 = (unsigned __int8)v132[11];
        updated = RtlpUpdateTagEntry(a1, v62, v61, 0, *(_DWORD *)v101);
      }
    }
    v20 = *v17;
    v107 = v20;
    if ( *(char *)(a1 + 112) >= 0 )
    {
      v106 = 0;
      v119 = v12;
      v21 = 16 * (*(unsigned __int16 *)(v12 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140));
      v22 = v12 - v21;
      if ( v12 - v21 != v12
        && ((*(_BYTE *)(v22 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v49 = *(_DWORD *)(v22 + 8) ^ *(_DWORD *)(a1 + 136);
          *(_DWORD *)(v22 + 8) = v49;
          if ( HIBYTE(v49) != ((unsigned __int8)v49 ^ (unsigned __int8)(BYTE1(v49) ^ BYTE2(v49))) )
            RtlpAnalyzeHeapFailure(a1, v22);
        }
        v50 = *(_QWORD *)(v22 + 16);
        v51 = *(__int64 **)(v22 + 24);
        v52 = *v51;
        v53 = *(_QWORD *)(v50 + 8);
        if ( *v51 == v53 && v52 == v22 + 16 )
        {
          *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v22 + 8);
          v54 = *(_QWORD *)(a1 + 312);
          if ( v54 )
          {
            v55 = *(unsigned __int16 *)(v22 + 8);
            while ( 1 )
            {
              v56 = *(unsigned int *)(v54 + 8);
              if ( v55 < v56 )
              {
                v57 = *(unsigned __int16 *)(v22 + 8);
                v111 = *(unsigned __int16 *)(v22 + 8);
                goto LABEL_104;
              }
              v20 = *(_QWORD *)v54;
              if ( !*(_QWORD *)v54 )
                break;
              v54 = *(_QWORD *)v54;
            }
            v57 = v56 - 1;
            v111 = v57;
LABEL_104:
            LOBYTE(v20) = 1;
            RtlpHeapRemoveListEntry(a1, v54, v20, v22 + 16, v57, v55);
          }
          *v51 = v50;
          *(_QWORD *)(v50 + 8) = v51;
          if ( (*(_BYTE *)(v22 + 10) & 8) == 0 || RtlpCommitBlock((char *)a1, v22) )
          {
            v58 = *(_BYTE *)(v22 + 10);
            if ( (v58 & 4) != 0 )
            {
              v59 = 16LL * *(unsigned __int16 *)(v22 + 8) - 32;
              v118 = v59;
              if ( (v58 & 2) != 0 && v59 > 4 )
              {
                v59 -= 4LL;
                v118 = v59;
              }
              v60 = RtlCompareMemoryUlong((PVOID)(v22 + 32), v59, 0xFEEEFEEE);
              if ( v60 != v59 )
              {
                if ( NtCurrentPeb()->Ldr )
                  DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
                else
                  DbgPrint("HEAP: ");
                DbgPrint(
                  "HEAP: Free Heap block %p modified at %p after it was freed\n",
                  (const void *)v22,
                  (const void *)(v60 + v22 + 32));
                RtlpBreakPointHeap();
              }
            }
            *(_BYTE *)(v22 + 10) = 0;
            *(_BYTE *)(v22 + 15) = 0;
            v12 = v22;
            v119 = v22;
            v107 += *(unsigned __int16 *)(v22 + 8);
            *(_WORD *)(v22 + 8) = v107;
            *(_WORD *)(v22 + 16 * v107 + 12) = v107 ^ *(_WORD *)(a1 + 140);
          }
          else
          {
            RtlpDeCommitFreeBlock(a1, v22, *(unsigned __int16 *)(v22 + 8), 1);
          }
        }
        else
        {
          RtlpLogHeapFailure(13, a1, v22 + 16, v53, v52, 0LL);
        }
        v20 = v107;
      }
      v23 = v12 + 16 * v20;
      if ( *(_DWORD *)(a1 + 124) )
      {
        v128 = *(_DWORD *)(v23 + 8) ^ *(_DWORD *)(a1 + 136);
        if ( HIBYTE(v128) != ((unsigned __int8)v128 ^ (unsigned __int8)(BYTE1(v128) ^ BYTE2(v128))) )
          RtlpLogHeapFailure(3, a1, v12 + 16 * v20, 0, 0LL, 0LL);
        v20 = v107;
      }
      while ( ((*(_BYTE *)(v23 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v24 = *(_DWORD *)(v23 + 8) ^ *(_DWORD *)(a1 + 136);
          *(_DWORD *)(v23 + 8) = v24;
          if ( HIBYTE(v24) != ((unsigned __int8)v24 ^ (unsigned __int8)(BYTE1(v24) ^ BYTE2(v24))) )
            RtlpAnalyzeHeapFailure(a1, v23);
        }
        v25 = v23 + 16;
        v26 = *(_QWORD *)(v23 + 16);
        v27 = *(__int64 **)(v23 + 24);
        v28 = *v27;
        v29 = *(_QWORD *)(v26 + 8);
        if ( *v27 == v29 && v28 == v25 )
        {
          *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v23 + 8);
          v30 = *(__int64 ***)(a1 + 312);
          if ( v30 )
          {
            v31 = *(unsigned __int16 *)(v23 + 8);
            while ( 1 )
            {
              v32 = *((unsigned int *)v30 + 2);
              if ( v31 < v32 )
              {
                v33 = *(unsigned __int16 *)(v23 + 8);
                v120 = *(unsigned __int16 *)(v23 + 8);
                goto LABEL_42;
              }
              if ( !*v30 )
                break;
              v30 = (__int64 **)*v30;
            }
            v33 = v32 - 1;
            v120 = (unsigned int)(v32 - 1);
LABEL_42:
            LOBYTE(v25) = 1;
            RtlpHeapRemoveListEntry(a1, (_DWORD)v30, v25, v23 + 16, v33, v31);
          }
          *v27 = v26;
          *(_QWORD *)(v26 + 8) = v27;
          if ( (*(_BYTE *)(v23 + 10) & 8) == 0 || RtlpCommitBlock((char *)a1, v23) )
          {
            v34 = *(_BYTE *)(v23 + 10);
            if ( (v34 & 4) != 0 )
            {
              v47 = 16LL * *(unsigned __int16 *)(v23 + 8) - 32;
              v121 = v47;
              if ( (v34 & 2) != 0 && v47 > 4 )
              {
                v47 -= 4LL;
                v121 = v47;
              }
              v48 = RtlCompareMemoryUlong((PVOID)(v23 + 32), v47, 0xFEEEFEEE);
              if ( v48 != v47 )
              {
                if ( NtCurrentPeb()->Ldr )
                  DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
                else
                  DbgPrint("HEAP: ");
                DbgPrint(
                  "HEAP: Free Heap block %p modified at %p after it was freed\n",
                  (const void *)v23,
                  (const void *)(v48 + v23 + 32));
                RtlpBreakPointHeap();
              }
            }
            *(_BYTE *)(v12 + 10) = 0;
            *(_BYTE *)(v12 + 15) = 0;
            v107 += *(unsigned __int16 *)(v23 + 8);
            *(_WORD *)(v12 + 8) = v107;
            *(_WORD *)(v12 + 16 * v107 + 12) = v107 ^ *(_WORD *)(a1 + 140);
            v20 = v107;
            break;
          }
          RtlpDeCommitFreeBlock(a1, v23, *(unsigned __int16 *)(v23 + 8), 1);
        }
        else
        {
          RtlpLogHeapFailure(13, a1, v25, v29, v28, 0LL);
        }
        v20 = v107;
      }
      v132 = (_BYTE *)v12;
      v6 = v105;
    }
    if ( v20 >= *(_QWORD *)(a1 + 176) && v20 + *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 184) )
    {
      RtlpDeCommitFreeBlock(a1, v12, v20, 0);
      v35 = 256;
      v132 = 0LL;
      goto LABEL_223;
    }
    v35 = 256;
    if ( v20 + *(_QWORD *)(a1 + 192) > *(_QWORD *)(a1 + 184)
      && v20 >= 0x100
      && *(_WORD *)(a1 + 140) == *(_WORD *)(v12 + 12) )
    {
      RtlpDeCommitFreeBlock(a1, v12, v20, 0);
      updated = 0;
      v132 = 0LL;
      goto LABEL_223;
    }
    if ( v20 > 0xFF00 )
    {
      RtlpInsertFreeBlock(a1, v12, v20);
LABEL_69:
      if ( updated )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v89 = *(_DWORD *)(v12 + 8) ^ *(_DWORD *)(a1 + 136);
          *(_DWORD *)(v12 + 8) = v89;
          if ( HIBYTE(v89) != ((unsigned __int8)v89 ^ (unsigned __int8)(BYTE1(v89) ^ BYTE2(v89))) )
            RtlpAnalyzeHeapFailure(a1, v12);
        }
        *(_BYTE *)(v12 + 10) |= 2u;
        v90 = *(_WORD *)(v12 + 8);
        v91 = 16LL * v90 + v12;
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(v12 + 11) = v90 ^ HIBYTE(v90) ^ *(_BYTE *)(v12 + 10);
          *(_DWORD *)(v12 + 8) ^= *(_DWORD *)(a1 + 136);
        }
        *(_WORD *)(v91 - 4) = updated;
        *(_WORD *)(v91 - 2) = 0;
        if ( (*(_DWORD *)(a1 + 112) & 0x8000000) != 0 )
          *(_WORD *)(v91 - 2) = RtlLogStackBackTraceEx(1u);
      }
      v132 = 0LL;
      goto LABEL_223;
    }
    if ( v6 )
    {
      v36 = (unsigned __int16)v20;
      *(_BYTE *)(v12 + 10) = 0;
      *(_BYTE *)(v12 + 15) = 0;
      v37 = (_QWORD *)(a1 + 336);
      if ( *(_QWORD *)(a1 + 312) )
        Entry = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v20);
      else
        Entry = (_QWORD *)*v37;
      while ( v37 != Entry )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v39 = *((_DWORD *)Entry - 2);
          v129 = v39;
          if ( (v39 & *(_DWORD *)(a1 + 124)) != 0 )
          {
            v40 = v39 ^ *(_DWORD *)(a1 + 136);
            v129 = v40;
          }
          else
          {
            LOWORD(v40) = v39;
          }
          v12 = (__int64)v132;
        }
        else
        {
          LOWORD(v40) = *((_WORD *)Entry - 4);
        }
        v105 = v40;
        if ( v36 <= (unsigned __int16)v40 )
          break;
        Entry = (_QWORD *)*Entry;
      }
      v41 = (_QWORD *)(v12 + 16);
      v42 = (__int64 *)Entry[1];
      if ( (_QWORD *)*v42 == Entry )
      {
        *v41 = Entry;
        *(_QWORD *)(v12 + 24) = v42;
        *v42 = (__int64)v41;
        Entry[1] = v41;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v42, 0LL);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v12 + 8);
      v43 = *(_QWORD *)(a1 + 312);
      if ( v43 )
      {
        v44 = *(unsigned __int16 *)(v12 + 8);
        while ( 1 )
        {
          v45 = *(unsigned int *)(v43 + 8);
          if ( v44 < v45 )
          {
            LODWORD(v46) = *(unsigned __int16 *)(v12 + 8);
            v122 = *(unsigned __int16 *)(v12 + 8);
            goto LABEL_65;
          }
          if ( !*(_QWORD *)v43 )
            break;
          v43 = *(_QWORD *)v43;
        }
        LODWORD(v46) = v45 - 1;
        v122 = (unsigned int)(v45 - 1);
LABEL_65:
        v102 = v44;
LABEL_66:
        RtlpHeapAddListEntry(a1, v43, 1, (__int64)v41, v46, v102);
        goto LABEL_67;
      }
      goto LABEL_67;
    }
    v63 = (unsigned __int16)v20;
    *(_BYTE *)(v12 + 10) &= 0xF0u;
    *(_BYTE *)(v12 + 15) = 0;
    if ( (*(_BYTE *)(a1 + 112) & 0x40) == 0 )
    {
LABEL_130:
      v64 = (_QWORD *)(a1 + 336);
      if ( *(_QWORD *)(a1 + 312) )
        v65 = (_QWORD *)RtlpFindEntry(a1, v63);
      else
        v65 = (_QWORD *)*v64;
      while ( v64 != v65 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v66 = *((_DWORD *)v65 - 2);
          v130 = v66;
          if ( (v66 & *(_DWORD *)(a1 + 124)) != 0 )
          {
            v67 = v66 ^ *(_DWORD *)(a1 + 136);
            v130 = v67;
          }
          else
          {
            LOWORD(v67) = v66;
          }
          v12 = (__int64)v132;
        }
        else
        {
          LOWORD(v67) = *((_WORD *)v65 - 4);
        }
        v108 = v67;
        if ( v63 <= (unsigned __int16)v67 )
          break;
        v65 = (_QWORD *)*v65;
      }
      v41 = (_QWORD *)(v12 + 16);
      v68 = (__int64 *)v65[1];
      if ( (_QWORD *)*v68 == v65 )
      {
        *v41 = v65;
        *(_QWORD *)(v12 + 24) = v68;
        *v68 = (__int64)v41;
        v65[1] = v41;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, (_DWORD)v65, 0, *v68, 0LL);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v12 + 8);
      v43 = *(_QWORD *)(a1 + 312);
      if ( v43 )
      {
        v69 = *(unsigned __int16 *)(v12 + 8);
        while ( 1 )
        {
          v70 = *(unsigned int *)(v43 + 8);
          if ( v69 < v70 )
          {
            v46 = *(unsigned __int16 *)(v12 + 8);
            goto LABEL_144;
          }
          if ( !*(_QWORD *)v43 )
            break;
          v43 = *(_QWORD *)v43;
        }
        v46 = (unsigned int)(v70 - 1);
LABEL_144:
        v124 = v46;
        v102 = v69;
        goto LABEL_66;
      }
LABEL_67:
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v12 + 11) = *(_BYTE *)(v12 + 8) ^ *(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10);
        *(_DWORD *)(v12 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      goto LABEL_69;
    }
    v87 = (_DWORD *)(v12 + 32);
    v123 = v12 + 32;
    v88 = (16 * v63 - 32) >> 2;
    v114 = v88;
    if ( v88 )
    {
      if ( ((unsigned __int8)v87 & 4) == 0 )
        goto LABEL_198;
      *v87 = -17891602;
      v114 = --v88;
      if ( v88 )
      {
        v87 = (_DWORD *)(v12 + 36);
        v123 = v12 + 36;
LABEL_198:
        memset64(v87, 0xFEEEFEEEFEEEFEEEuLL, v88 >> 1);
        if ( (v88 & 1) != 0 )
          v87[v88 - 1] = -17891602;
      }
    }
    *(_BYTE *)(v12 + 10) |= 4u;
    goto LABEL_130;
  }
  v71 = v12 - 48;
  *(_QWORD *)v110 = v71;
  *(_QWORD *)v115 = *(_QWORD *)(v71 + 32);
  v113 = v71 & 0xFFFFFFFFFFFF0000uLL;
  *(_QWORD *)(a1 + 592) -= *(_QWORD *)v115;
  v72 = *(_QWORD *)v71;
  v73 = *(__int64 **)(v71 + 8);
  v74 = *v73;
  v75 = *(_QWORD *)(*(_QWORD *)v71 + 8LL);
  if ( *v73 == v75 && v74 == v71 )
  {
    *v73 = v72;
    *(_QWORD *)(v72 + 8) = v73;
  }
  else
  {
    RtlpLogHeapFailure(13, 0, v110[0], v75, v74, 0LL);
  }
  if ( !v6 )
  {
    v117 = NtCurrentPeb()->NtGlobalFlag;
    if ( (v117 & 0x800) != 0 )
      RtlpUpdateTagEntry(a1, *(unsigned __int16 *)(*(_QWORD *)v110 + 18LL), *(_QWORD *)(v71 + 32) >> 4, 0, 3);
  }
  v132 = 0LL;
  if ( v103 )
  {
    v76 = *(_QWORD *)(a1 + 352);
    v77 = (*(_DWORD *)(v76 + 12))-- == 1;
    if ( v77 )
    {
      *(_QWORD *)(v76 + 16) = 0LL;
      v78 = _InterlockedCompareExchange((volatile signed __int32 *)(v76 + 8), -1, -2);
      if ( v78 != -2 )
      {
        if ( (*(_BYTE *)(v76 + 8) & 1) != 0 )
          RtlpNotOwnerCriticalSection(v76);
        DeferredCriticalSectionEvent = *(void **)(v76 + 24);
        if ( !DeferredCriticalSectionEvent )
          DeferredCriticalSectionEvent = (void *)RtlpCreateDeferredCriticalSectionEvent(v76);
        v112 = 0;
        while ( v78 != _InterlockedCompareExchange((volatile signed __int32 *)(v76 + 8), v78 + (v78 & 2 | 1), v78) )
        {
          RtlBackoff(&v112);
          _m_prefetchw((const void *)(v76 + 8));
          v78 = *(_DWORD *)(v76 + 8);
        }
        if ( (v78 & 2) != 0 )
        {
          if ( DeferredCriticalSectionEvent == (void *)-1LL )
          {
            _InterlockedOr(v100, 0);
            RtlpWakeByAddress(v76 + 8, 0LL);
          }
          else
          {
            v85 = ZwSetEvent(DeferredCriticalSectionEvent, 0LL);
            if ( v85 < 0 )
              RtlRaiseStatus(v85);
          }
        }
      }
    }
    v103 = 0;
  }
  v79 = *(_QWORD *)(*(_QWORD *)v110 + 40LL);
  v125 = v79;
  if ( RtlGetCurrentServiceSessionId() )
  {
    v80 = (__int64)NtCurrentPeb()->SharedData + 558;
    v79 = v125;
  }
  else
  {
    v80 = 2147353480LL;
  }
  if ( *(_BYTE *)v80 )
    RtlpHeapLogRangeRelease(a1, v113, v79);
  v107 = 0LL;
  RtlpSecMemFreeVirtualMemory(v80, (PVOID *)&v113, &v107, 0x8000u);
  if ( RtlGetCurrentServiceSessionId() )
    v81 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v81 = 2147353472LL;
  if ( *(_BYTE *)v81 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapContractEvent(a1, v110[0], v115[0], 16 * *(_QWORD *)(a1 + 192), 0, 0LL, (HANDLE)*(unsigned __int8 *)v10);
  }
  v82 = 2147353482LL;
  if ( RtlGetCurrentServiceSessionId() )
    v83 = (__int64)NtCurrentPeb()->SharedData + 560;
  else
    v83 = 2147353482LL;
  if ( *(_BYTE *)v83 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v82 = (__int64)NtCurrentPeb()->SharedData + 560;
    RtlpLogHeapContractEvent(a1, v110[0], v115[0], 16 * *(_QWORD *)(a1 + 192), 0, 0LL, (HANDLE)*(unsigned __int8 *)v82);
  }
LABEL_168:
  v35 = 256;
LABEL_223:
  v92 = v132;
  if ( v132 && *(_DWORD *)(a1 + 124) )
  {
    v132[11] = v132[8] ^ v132[9] ^ v132[10];
    *((_DWORD *)v92 + 2) ^= *(_DWORD *)(a1 + 136);
  }
  if ( v103 )
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
    {
      ++*(_DWORD *)(a1 + 640);
      v93 = *(_DWORD *)(a1 + 648);
      if ( *(_DWORD *)(a1 + 640) > v93 )
      {
        *(_DWORD *)(a1 + 640) = 0;
        v97 = *(_QWORD *)(a1 + 576) - 16LL * *(_QWORD *)(a1 + 192);
        if ( v97 > *(_QWORD *)(a1 + 672) )
          *(_QWORD *)(a1 + 672) = v97;
        *(_QWORD *)(a1 + 680) = v97;
      }
      if ( ++*(_DWORD *)(a1 + 652) >= 0x1000u )
      {
        if ( *(_BYTE *)(a1 + 418) != 2 || *(_DWORD *)(a1 + 656) <= 0x10u )
          v35 = 16;
        if ( *(_DWORD *)(a1 + 644) > v35 && v93 < 0x10000 )
          *(_DWORD *)(a1 + 648) = 2 * v93;
        *(_DWORD *)(a1 + 644) = 0;
        *(_DWORD *)(a1 + 652) = 0;
      }
    }
    v94 = *(_QWORD *)(a1 + 352);
    v77 = (*(_DWORD *)(v94 + 12))-- == 1;
    if ( v77 )
    {
      *(_QWORD *)(v94 + 16) = 0LL;
      v95 = _InterlockedCompareExchange((volatile signed __int32 *)(v94 + 8), -1, -2);
      if ( v95 != -2 )
      {
        if ( (*(_BYTE *)(v94 + 8) & 1) != 0 )
          RtlpNotOwnerCriticalSection(v94);
        v98 = *(void **)(v94 + 24);
        if ( !v98 )
          v98 = (void *)RtlpCreateDeferredCriticalSectionEvent(v94);
        LODWORD(v131) = 0;
        while ( v95 != _InterlockedCompareExchange((volatile signed __int32 *)(v94 + 8), v95 + (v95 & 2 | 1), v95) )
        {
          RtlBackoff((unsigned int *)&v131);
          _m_prefetchw((const void *)(v94 + 8));
          v95 = *(_DWORD *)(v94 + 8);
        }
        if ( (v95 & 2) != 0 )
        {
          if ( v98 == (void *)-1LL )
          {
            _InterlockedOr(v100, 0);
            RtlpWakeByAddress(v94 + 8, 0LL);
          }
          else
          {
            v99 = ZwSetEvent(v98, 0LL);
            if ( v99 < 0 )
              RtlRaiseStatus(v99);
          }
        }
      }
    }
  }
  return v109;
}
