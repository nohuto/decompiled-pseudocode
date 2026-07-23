/*
 * XREFs of RtlpAllocateHeap @ 0x18002B160
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180028BF0 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x1800069C0 (DbgPrint.c)
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlLogStackBackTraceEx @ 0x18001D3E0 (RtlLogStackBackTraceEx.c)
 *     RtlpCommitBlock @ 0x180020728 (RtlpCommitBlock.c)
 *     RtlpExtendHeap @ 0x180020860 (RtlpExtendHeap.c)
 *     RtlpHeapAddListEntry @ 0x18002192C (RtlpHeapAddListEntry.c)
 *     RtlpFindEntry @ 0x180021DC0 (RtlpFindEntry.c)
 *     RtlTryEnterCriticalSection @ 0x1800225E0 (RtlTryEnterCriticalSection.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x18002283C (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpDeCommitFreeBlock @ 0x180022B64 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x1800231D4 (RtlpInsertFreeBlock.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x18002DAA0 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpHeapRemoveListEntry @ 0x18002E790 (RtlpHeapRemoveListEntry.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlpPerformHeapMaintenance @ 0x180053BA8 (RtlpPerformHeapMaintenance.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x18005B090 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlpGetExtraStuffPointer @ 0x180078E10 (RtlpGetExtraStuffPointer.c)
 *     RtlpGetLFHContext @ 0x18007A234 (RtlpGetLFHContext.c)
 *     RtlpUpdateHeapRates @ 0x180083928 (RtlpUpdateHeapRates.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1800866D8 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpUpdateHeapWatermarks @ 0x18009010C (RtlpUpdateHeapWatermarks.c)
 *     RtlCompareMemoryUlong @ 0x1800A8BB0 (RtlCompareMemoryUlong.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3C10 (RtlpNotOwnerCriticalSection.c)
 *     RtlpUpdateTagEntry @ 0x180100360 (RtlpUpdateTagEntry.c)
 *     RtlDebugAllocateHeap @ 0x180104194 (RtlDebugAllocateHeap.c)
 *     RtlpBreakPointHeap @ 0x180106C88 (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x180114AD4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapLogRangeReserve @ 0x18011508C (RtlpHeapLogRangeReserve.c)
 *     RtlpLogHeapCommit @ 0x180116BD4 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x180116E68 (RtlpLogHeapExtendEvent.c)
 *     RtlpLogHeapFailure @ 0x18011F650 (RtlpLogHeapFailure.c)
 */

void *__fastcall RtlpAllocateHeap(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 **a5,
        _DWORD *a6)
{
  unsigned int v6; // r14d
  unsigned int v8; // r15d
  unsigned int *v10; // r8
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r14
  char v14; // si
  unsigned __int16 *v15; // rdi
  unsigned __int16 v16; // cx
  __int64 *v17; // rdi
  __int64 *i; // rsi
  unsigned __int64 v19; // rax
  __int64 v20; // r15
  __int64 *v21; // r14
  __int64 *v22; // r12
  __int64 *v23; // rax
  int v24; // edi
  unsigned int v25; // edi
  __int64 v26; // rdi
  unsigned int v27; // r9d
  unsigned int v28; // edx
  int v29; // ecx
  __int64 v30; // rdi
  __int64 v31; // r15
  int v32; // edx
  unsigned __int64 v33; // rcx
  __int64 v34; // rsi
  __int64 *v35; // r12
  __int64 v36; // rax
  __int64 v37; // r9
  __int64 **v38; // rdx
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rax
  unsigned int v41; // eax
  char *v42; // rdi
  unsigned __int64 v43; // r12
  char v44; // r14
  unsigned int v45; // r10d
  unsigned __int64 v46; // rdi
  __int64 v47; // rcx
  char v48; // r12
  __int64 v49; // rax
  unsigned __int64 v50; // r9
  __int64 v51; // rsi
  __int64 v52; // rdx
  unsigned __int64 v53; // r14
  __int64 v54; // r14
  _QWORD *v55; // r14
  _QWORD *Entry; // r8
  int v57; // eax
  _QWORD *v58; // r14
  __int64 *v59; // rax
  __int64 v60; // rdx
  unsigned __int64 v61; // rcx
  unsigned __int64 v62; // rdi
  int v63; // eax
  unsigned __int16 *v64; // rsi
  unsigned int v65; // ecx
  __int64 v66; // rdi
  bool v67; // zf
  signed __int32 v68; // esi
  int v69; // ecx
  _QWORD *v70; // rax
  _QWORD *v71; // r8
  __int64 v72; // rsi
  __int64 *v73; // r14
  __int64 **v74; // rdx
  unsigned __int64 v75; // rcx
  unsigned __int64 v76; // rdi
  int v77; // eax
  int v78; // r9d
  unsigned __int64 v79; // rcx
  SIZE_T v80; // rsi
  SIZE_T v81; // r12
  unsigned int v82; // r15d
  unsigned __int64 v83; // rcx
  char v84; // cl
  __int64 v85; // rdi
  _OWORD *ExtraStuffPointer; // r14
  __int64 DeferredCriticalSectionEvent; // r14
  unsigned __int64 v88; // r14
  _QWORD *v89; // rdi
  _QWORD *v90; // r8
  int v91; // eax
  _QWORD *v92; // rdi
  __int64 *v93; // rax
  __int64 v94; // rdx
  unsigned __int64 v95; // rcx
  unsigned __int64 v96; // rax
  unsigned int v97; // eax
  int v98; // ecx
  unsigned int v99; // eax
  int v100; // edx
  __int64 v101; // r8
  __int64 v102; // r13
  __int64 *v103; // rcx
  __int64 v104; // rax
  __int64 v105; // r9
  __int64 **v106; // rdx
  unsigned __int64 v107; // r9
  unsigned __int64 v108; // rcx
  SIZE_T v109; // rax
  unsigned __int64 v110; // rdi
  unsigned __int64 v111; // r14
  _QWORD *v112; // rdi
  _QWORD *v113; // r8
  _QWORD *v114; // rdi
  __int64 *v115; // rax
  __int64 v116; // rcx
  unsigned __int64 v117; // rcx
  __int64 v118; // rdi
  __int64 v119; // rsi
  __int64 v120; // rcx
  __int64 v121; // rcx
  __int64 v122; // rsi
  __int64 v123; // rcx
  __int64 v124; // rcx
  __int64 *v125; // rax
  __int64 v126; // rdi
  __int64 v127; // rdx
  unsigned __int64 v128; // rcx
  unsigned __int64 v129; // r8
  int v130; // eax
  int v131; // eax
  int v132; // ecx
  __int64 *k; // r15
  int v134; // edi
  int v135; // edx
  __int64 v136; // rsi
  __int64 *v137; // r14
  __int64 v138; // rax
  __int64 v139; // r9
  unsigned int *v140; // rdx
  unsigned __int64 v141; // rcx
  unsigned __int64 v142; // rax
  unsigned int v143; // eax
  __int64 v144; // rdx
  __int64 v145; // rcx
  unsigned __int16 LFHContext; // ax
  _DWORD *v147; // r8
  unsigned __int64 v148; // rdx
  char v149; // al
  SIZE_T v150; // r13
  _DWORD *v151; // r8
  unsigned __int64 v152; // rdx
  _QWORD *v153; // rdi
  _QWORD *v154; // r8
  int v155; // ecx
  int v156; // eax
  __int64 *v157; // rax
  unsigned __int64 v158; // r8
  __int64 v159; // rax
  _DWORD *SharedData; // rcx
  __int64 v161; // rcx
  void *v162; // rdi
  __int64 v164; // rax
  unsigned __int64 v165; // r13
  __int64 v166; // rdi
  signed __int32 v167; // esi
  __int64 v168; // r14
  char v169; // [rsp+30h] [rbp-228h]
  unsigned int v170; // [rsp+34h] [rbp-224h] BYREF
  unsigned __int64 v171; // [rsp+38h] [rbp-220h]
  char v172; // [rsp+40h] [rbp-218h]
  char v173; // [rsp+41h] [rbp-217h]
  void *v174; // [rsp+48h] [rbp-210h]
  int v175[2]; // [rsp+50h] [rbp-208h]
  __int64 v176; // [rsp+58h] [rbp-200h]
  __int16 v177; // [rsp+60h] [rbp-1F8h]
  __int16 v178; // [rsp+62h] [rbp-1F6h]
  __int16 v179; // [rsp+64h] [rbp-1F4h]
  __int16 v180; // [rsp+66h] [rbp-1F2h]
  int v181; // [rsp+68h] [rbp-1F0h]
  unsigned int v182; // [rsp+6Ch] [rbp-1ECh]
  int v183; // [rsp+70h] [rbp-1E8h]
  __int64 v184; // [rsp+78h] [rbp-1E0h]
  __int64 v185; // [rsp+80h] [rbp-1D8h]
  char *v186; // [rsp+90h] [rbp-1C8h]
  __int64 *v187; // [rsp+98h] [rbp-1C0h]
  SIZE_T v188; // [rsp+A0h] [rbp-1B8h]
  unsigned __int64 v189; // [rsp+A8h] [rbp-1B0h]
  unsigned __int64 v190; // [rsp+B0h] [rbp-1A8h]
  unsigned __int64 j; // [rsp+B8h] [rbp-1A0h]
  unsigned __int64 v192; // [rsp+C0h] [rbp-198h]
  unsigned int NtGlobalFlag; // [rsp+C8h] [rbp-190h]
  unsigned int *v194; // [rsp+D0h] [rbp-188h]
  __int64 v195; // [rsp+D8h] [rbp-180h]
  __int64 v196; // [rsp+E0h] [rbp-178h]
  __int64 v197; // [rsp+E8h] [rbp-170h]
  SIZE_T v198; // [rsp+F0h] [rbp-168h]
  unsigned __int64 v199; // [rsp+F8h] [rbp-160h]
  __int64 v200; // [rsp+100h] [rbp-158h]
  unsigned int v201; // [rsp+108h] [rbp-150h]
  unsigned int v202; // [rsp+10Ch] [rbp-14Ch]
  SIZE_T v203; // [rsp+110h] [rbp-148h]
  unsigned __int64 v204; // [rsp+118h] [rbp-140h]
  __int64 v205; // [rsp+120h] [rbp-138h]
  __int64 v206; // [rsp+128h] [rbp-130h]
  __int64 v207; // [rsp+130h] [rbp-128h]
  unsigned int *v208; // [rsp+138h] [rbp-120h]
  _OWORD *v209; // [rsp+140h] [rbp-118h]
  __int64 v210; // [rsp+148h] [rbp-110h] BYREF
  struct _TEB *v211; // [rsp+150h] [rbp-108h]
  struct _TEB *v212; // [rsp+158h] [rbp-100h]
  unsigned __int16 *v213; // [rsp+160h] [rbp-F8h]
  struct _TEB *v214; // [rsp+168h] [rbp-F0h]
  struct _TEB *v215; // [rsp+170h] [rbp-E8h]
  __int64 v216; // [rsp+178h] [rbp-E0h]
  unsigned __int64 v217; // [rsp+180h] [rbp-D8h]
  unsigned __int64 v218; // [rsp+188h] [rbp-D0h]
  struct _TEB *v219; // [rsp+190h] [rbp-C8h]
  struct _TEB *v220; // [rsp+198h] [rbp-C0h]
  __int64 v221; // [rsp+1A0h] [rbp-B8h]
  int v222; // [rsp+1B0h] [rbp-A8h]
  unsigned int v223; // [rsp+1C0h] [rbp-98h]
  int v224; // [rsp+1D0h] [rbp-88h]
  int v225; // [rsp+1E0h] [rbp-78h]
  int v226; // [rsp+1F0h] [rbp-68h]
  int v227; // [rsp+200h] [rbp-58h]
  int v228; // [rsp+210h] [rbp-48h]
  unsigned int v229; // [rsp+268h] [rbp+10h] BYREF
  unsigned __int64 v230; // [rsp+270h] [rbp+18h]
  unsigned __int64 v231; // [rsp+278h] [rbp+20h] BYREF

  v231 = a4;
  v230 = a3;
  v229 = a2;
  v8 = a2;
  v170 = 1;
  v169 = 0;
  v10 = 0LL;
  v174 = 0LL;
  *(_QWORD *)v175 = 0LL;
  v181 = 0;
  v11 = a4 >> 4;
  if ( (a2 & 0x7D010F60) != 0 || a3 >= 0x80000000 )
  {
    v170 = 0;
    *a6 = 4;
    if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
      return 0LL;
    if ( (a2 & 0x61000000) != 0 && (a2 & 0x10000000) == 0 )
      return (void *)RtlDebugAllocateHeap((void *)a1);
    if ( a3 )
      v164 = a3;
    else
      v164 = 1LL;
    v165 = *(_QWORD *)(a1 + 264) & (v164 + *(_QWORD *)(a1 + 256));
    if ( v165 < 0x20 )
      v165 = 32LL;
    v231 = v165;
    v6 = (unsigned int)a2 >> 4;
    LOBYTE(v6) = ((unsigned int)a2 >> 4) & 0xE0 | 1;
    LODWORD(v176) = v6;
    if ( (a2 & 0x3C000100) != 0 || *(_QWORD *)(a1 + 328) )
    {
      LOBYTE(v6) = ((unsigned int)a2 >> 4) & 0xE0 | 3;
      LODWORD(v176) = v6;
      v165 += 16LL;
      v231 = v165;
    }
    v12 = v165 >> 4;
    v171 = v12;
  }
  else
  {
    LOBYTE(v6) = 1;
    LODWORD(v176) = v6;
    v12 = a4 >> 4;
    v171 = a4 >> 4;
    if ( v11 < 2 )
    {
      v231 += 16LL;
      v12 = 2LL;
      v171 = 2LL;
    }
    *a6 = 3;
  }
  if ( (a2 & 0x800000) != 0 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
    LOBYTE(v6) = v6 | 8;
    LODWORD(v176) = v6;
  }
  if ( (a2 & 1) == 0 )
  {
    if ( RtlTryEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352)) )
    {
      ++*(_DWORD *)(a1 + 616);
    }
    else
    {
      if ( byte_18017A188 )
      {
        v211 = NtCurrentTeb();
        v211->LastStatusValue = -1073741420;
        v212 = NtCurrentTeb();
        v212->LastErrorValue = RtlNtStatusToDosError(-1073741420);
        goto LABEL_417;
      }
      v181 = 1;
      RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      RtlpUpdateHeapRates(a1, 1LL);
    }
    v169 = 1;
    if ( (*(_DWORD *)(a1 + 120) & 0x30000000) != 0 )
      RtlpPerformHeapMaintenance(a1);
    v10 = 0LL;
  }
  if ( v12 > *(unsigned int *)(a1 + 148) )
  {
    if ( (*(_BYTE *)(a1 + 112) & 2) != 0 )
    {
      v231 += 56LL;
      if ( (unsigned int)RtlpHpHeapCheckCommitLimit(
                           (v231 + 4095) & 0xFFFFFFFFFFFFF000uLL,
                           *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664),
                           a1,
                           (__int64 *)(a1 + 376)) )
      {
        v221 = (RtlpHeapGenerateRandomValue32(v116, a2, v10) & 0xF) << 12;
        *(_QWORD *)v175 = RtlpHpAllocVirtBlockCommitFirst(a1, &v231, v221, &v210);
        if ( *(_QWORD *)v175 )
        {
          v117 = v231;
          v118 = *(_QWORD *)v175;
          *(_WORD *)(*(_QWORD *)v175 + 56LL) = v231 - a3;
          *(_BYTE *)(v118 + 58) = v6 | 2;
          *(_QWORD *)(v118 + 32) = v117;
          *(_QWORD *)(v118 + 40) = v210;
          *(_BYTE *)(v118 + 63) = 4;
          *(_QWORD *)(a1 + 592) += v117;
          v119 = 2147353472LL;
          if ( RtlGetCurrentServiceSessionId() )
            v120 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v120 = 2147353472LL;
          if ( *(_BYTE *)v120 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapCommit(a1, *(_QWORD *)v175, v231, 9LL);
          if ( RtlGetCurrentServiceSessionId() )
            v121 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v121 = 2147353472LL;
          if ( *(_BYTE *)v121 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          {
            if ( RtlGetCurrentServiceSessionId() )
              v119 = (__int64)NtCurrentPeb()->SharedData + 550;
            RtlpLogHeapExtendEvent(a1, v175[0], v231, 16 * *(_QWORD *)(a1 + 192), (HANDLE)*(unsigned __int8 *)v119);
          }
          v122 = 2147353482LL;
          if ( RtlGetCurrentServiceSessionId() )
            v123 = (__int64)NtCurrentPeb()->SharedData + 560;
          else
            v123 = 2147353482LL;
          if ( *(_BYTE *)v123 )
          {
            if ( RtlGetCurrentServiceSessionId() )
              v122 = (__int64)NtCurrentPeb()->SharedData + 560;
            RtlpLogHeapExtendEvent(a1, v175[0], v231, 16 * *(_QWORD *)(a1 + 192), (HANDLE)*(unsigned __int8 *)v122);
          }
          if ( (*(_DWORD *)(a1 + 112) & 0x8000000) != 0 )
            *(_WORD *)(*(_QWORD *)v175 + 16LL) = RtlLogStackBackTraceEx(1u);
          NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
          if ( (NtGlobalFlag & 0x800) != 0 )
            *(_WORD *)(*(_QWORD *)v175 + 18LL) = RtlpUpdateTagEntry(
                                                   a1,
                                                   (unsigned __int8)(v8 >> 18),
                                                   0,
                                                   *(_QWORD *)(v118 + 32) >> 4,
                                                   1);
          v124 = *(_QWORD *)v175;
          if ( *(_DWORD *)(a1 + 124) )
          {
            *(_BYTE *)(*(_QWORD *)v175 + 59LL) = *(_BYTE *)(*(_QWORD *)v175 + 56LL) ^ *(_BYTE *)(*(_QWORD *)v175 + 57LL) ^ *(_BYTE *)(*(_QWORD *)v175 + 58LL);
            *(_DWORD *)(v124 + 56) ^= *(_DWORD *)(a1 + 136);
          }
          v10 = (unsigned int *)(a1 + 272);
          v125 = *(__int64 **)(a1 + 280);
          if ( *v125 == a1 + 272 )
          {
            v126 = *(_QWORD *)v175;
            **(_QWORD **)v175 = v10;
            *(_QWORD *)(v126 + 8) = v125;
            *v125 = v126;
            *(_QWORD *)(a1 + 280) = v126;
          }
          else
          {
            RtlpLogHeapFailure(13, 0, (_DWORD)v10, 0, *v125, 0LL);
          }
          v174 = (void *)(*(_QWORD *)v175 + 64LL);
        }
        else
        {
          v174 = 0LL;
          ++*(_DWORD *)(a1 + 632);
        }
        goto LABEL_417;
      }
    }
    goto LABEL_233;
  }
  if ( (v8 & 0x800000) == 0 )
  {
    if ( v11 >= *(unsigned __int16 *)(a1 + 432) )
    {
      if ( a3 <= RtlpLargestLfhBlock
        && (*(_BYTE *)(a1 + 418) != 2 || !*(_QWORD *)(a1 + 408))
        && *(_BYTE *)(a1 + 419) == 2 )
      {
        *(_DWORD *)(a1 + 120) |= 0x20000000u;
      }
    }
    else if ( a3 <= RtlpLargestLfhBlock )
    {
      v13 = v11 >> 3;
      v14 = v11 & 7;
      if ( ((unsigned __int8)(1 << (v11 & 7)) & *(_BYTE *)((v11 >> 3) + a1 + 434)) == 0 )
      {
        v15 = (unsigned __int16 *)(*(_QWORD *)(a1 + 424) + 2 * v11);
        v213 = v15;
        v16 = *v15 + 33;
        *v15 = v16;
        if ( v181 || (v16 & 0x1Fu) > 0x10 || v16 > 0xFF00u )
        {
          if ( a3 )
            v144 = a3;
          else
            v144 = 1LL;
          if ( *(_BYTE *)(a1 + 418) == 2 )
            v145 = *(_QWORD *)(a1 + 408);
          else
            v145 = 0LL;
          LFHContext = RtlpGetLFHContext(v145, v144);
          if ( LFHContext == 0xFFFF )
          {
            if ( *(_BYTE *)(a1 + 418) != 2 || !*(_QWORD *)(a1 + 408) )
              *(_DWORD *)(a1 + 120) |= 0x20000000u;
          }
          else
          {
            *v15 = LFHContext;
            *(_BYTE *)(v13 + a1 + 434) |= 1 << v14;
            ++*(_DWORD *)(a1 + 656);
          }
        }
      }
    }
  }
  if ( a5 )
  {
    v17 = *a5;
    if ( *a5 )
    {
      v31 = (__int64)(v17 - 2);
      v186 = (char *)(v17 - 2);
      if ( *(_DWORD *)(a1 + 124) )
      {
        v135 = *(_DWORD *)(v31 + 8) ^ *(_DWORD *)(a1 + 136);
        *(_DWORD *)(v31 + 8) = v135;
        if ( HIBYTE(v135) != ((unsigned __int8)v135 ^ (unsigned __int8)(BYTE1(v135) ^ BYTE2(v135))) )
          RtlpAnalyzeHeapFailure(a1, v17 - 2);
      }
      v136 = *v17;
      v137 = *(__int64 **)(v31 + 24);
      v138 = *v137;
      v139 = *(_QWORD *)(*v17 + 8);
      if ( *v137 == v139 && (__int64 *)v138 == v17 )
      {
        *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v31 + 8);
        v140 = *(unsigned int **)(a1 + 312);
        if ( v140 )
        {
          v141 = *(unsigned __int16 *)(v31 + 8);
          while ( 1 )
          {
            v142 = v140[2];
            if ( v141 < v142 )
            {
              v143 = *(unsigned __int16 *)(v31 + 8);
              v171 = *(unsigned __int16 *)(v31 + 8);
              goto LABEL_306;
            }
            v10 = *(unsigned int **)v140;
            if ( !*(_QWORD *)v140 )
              break;
            v140 = *(unsigned int **)v140;
          }
          v143 = v142 - 1;
          v171 = v143;
LABEL_306:
          LOBYTE(v10) = 1;
          RtlpHeapRemoveListEntry(a1, (_DWORD)v140, (_DWORD)v10, (_DWORD)v17, v143, v141);
        }
        *v137 = v136;
        *(_QWORD *)(v136 + 8) = v137;
        v42 = (char *)(v31 + 10);
        if ( (*(_BYTE *)(v31 + 10) & 8) == 0 || RtlpCommitBlock((char *)a1, v31) )
          goto LABEL_61;
        RtlpDeCommitFreeBlock(a1, v31, *(unsigned __int16 *)(v31 + 8), 1);
      }
      else
      {
        RtlpLogHeapFailure(13, a1, (_DWORD)v17, v139, v138, 0LL);
      }
      v214 = NtCurrentTeb();
      v214->LastStatusValue = -1073741801;
      v215 = NtCurrentTeb();
      v215->LastErrorValue = RtlNtStatusToDosError(-1073741801);
      goto LABEL_417;
    }
  }
  v195 = a1 + 336;
  for ( i = *(__int64 **)(a1 + 312); ; i = (__int64 *)*i )
  {
    v19 = *((unsigned int *)i + 2);
    if ( v12 < v19 )
    {
      j = v12;
      goto LABEL_26;
    }
    if ( !*i )
      break;
  }
  LODWORD(v12) = v19 - 1;
  for ( j = (unsigned int)(v19 - 1); ; j = (unsigned int)v12 )
  {
LABEL_26:
    v20 = (unsigned int)(v12 - *((_DWORD *)i + 6));
    v21 = 0LL;
    v22 = (__int64 *)i[4];
    v23 = (__int64 *)v22[1];
    if ( v22 == v23 )
    {
      v21 = (__int64 *)i[4];
    }
    else
    {
      LODWORD(v10) = (_DWORD)v23 - 16;
      v24 = *((_DWORD *)v23 - 2);
      v222 = v24;
      if ( *(_DWORD *)(a1 + 124) )
      {
        v24 ^= *(_DWORD *)(a1 + 136);
        v222 = v24;
        if ( HIBYTE(v24) != ((unsigned __int8)v24 ^ (unsigned __int8)(BYTE1(v24) ^ BYTE2(v24))) )
          RtlpLogHeapFailure(3, a1, (_DWORD)v10, 0, 0LL, 0LL);
      }
      if ( (int)(v171 - (unsigned __int16)v24) > 0 )
      {
        v21 = v22;
      }
      else
      {
        v10 = (unsigned int *)(*v22 - 16);
        v25 = v10[2];
        v223 = v25;
        if ( *(_DWORD *)(a1 + 124) )
        {
          v25 ^= *(_DWORD *)(a1 + 136);
          v223 = v25;
          if ( HIBYTE(v25) != ((unsigned __int8)v25 ^ (unsigned __int8)(BYTE1(v25) ^ BYTE2(v25))) )
            RtlpLogHeapFailure(3, a1, (_DWORD)v10, 0, 0LL, 0LL);
        }
        if ( (int)(v171 - (unsigned __int16)v25) <= 0 )
        {
          v21 = (__int64 *)*v22;
        }
        else if ( *i || (_DWORD)v12 != *((_DWORD *)i + 2) - 1 )
        {
          v26 = (unsigned int)v20 >> 5;
          v182 = (unsigned int)v20 >> 5;
          v27 = ((unsigned int)(*((_DWORD *)i + 2) - *((_DWORD *)i + 6)) >> 5) - 1;
          v10 = (unsigned int *)(i[5] + 4 * v26);
          v194 = v10;
          v28 = *v10 & (-1 << (v20 & 0x1F));
          while ( !v28 )
          {
            if ( (unsigned int)v26 > v27 )
              goto LABEL_293;
            v194 = ++v10;
            v28 = *v10;
            LODWORD(v26) = v26 + 1;
            v182 = v26;
          }
          if ( (_WORD)v28 )
          {
            if ( (_BYTE)v28 )
              v29 = RtlpBitsClearLow[(unsigned __int8)v28];
            else
              v29 = RtlpBitsClearLow[BYTE1(v28)] + 8;
          }
          else if ( (v28 & 0xFF0000) != 0 )
          {
            v29 = RtlpBitsClearLow[BYTE2(v28)] + 16;
          }
          else
          {
            v29 = RtlpBitsClearLow[(unsigned __int64)v28 >> 24] + 24;
          }
          v30 = (unsigned int)(v29 + 32 * v26);
          v182 = v30;
          if ( *((_DWORD *)i + 3) )
            v30 = (unsigned int)(2 * v30);
          v21 = *(__int64 **)(i[6] + 8 * v30);
        }
        else
        {
          if ( *((_DWORD *)i + 3) )
            v20 = (unsigned int)(2 * v20);
          for ( k = *(__int64 **)(i[6] + 8 * v20); v22 != k; k = (__int64 *)*k )
          {
            LODWORD(v10) = (_DWORD)k - 16;
            v134 = *((_DWORD *)k - 2);
            v224 = v134;
            if ( *(_DWORD *)(a1 + 124) )
            {
              v134 ^= *(_DWORD *)(a1 + 136);
              v224 = v134;
              if ( HIBYTE(v134) != ((unsigned __int8)v134 ^ (unsigned __int8)(BYTE1(v134) ^ BYTE2(v134))) )
                RtlpLogHeapFailure(3, a1, (_DWORD)v10, 0, 0LL, 0LL);
            }
            if ( (int)(v171 - (unsigned __int16)v134) <= 0 )
            {
              v21 = k;
              break;
            }
          }
        }
      }
    }
    if ( v21 )
      break;
LABEL_293:
    i = (__int64 *)*i;
    LODWORD(v12) = *((_DWORD *)i + 6);
  }
  if ( (__int64 *)v195 == v21 )
  {
    v12 = v171;
    goto LABEL_131;
  }
  v31 = (__int64)(v21 - 2);
  v186 = (char *)(v21 - 2);
  if ( *(_DWORD *)(a1 + 124) )
  {
    v32 = *(_DWORD *)(v31 + 8) ^ *(_DWORD *)(a1 + 136);
    *(_DWORD *)(v31 + 8) = v32;
    if ( HIBYTE(v32) != ((unsigned __int8)v32 ^ (unsigned __int8)(BYTE1(v32) ^ BYTE2(v32))) )
      RtlpAnalyzeHeapFailure(a1, v21 - 2);
  }
  v33 = *(unsigned __int16 *)(v31 + 8);
  v12 = v171;
  if ( v33 < v171 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v31 + 11) = v33 ^ BYTE1(v33) ^ *(_BYTE *)(v31 + 10);
      *(_DWORD *)(v31 + 8) ^= *(_DWORD *)(a1 + 136);
    }
LABEL_131:
    v70 = (_QWORD *)RtlpExtendHeap(a1, v231);
    v31 = (__int64)v70;
    v186 = (char *)v70;
    if ( v70 )
    {
      v71 = v70 + 2;
      v72 = v70[2];
      v73 = (__int64 *)v70[3];
      v36 = *v73;
      v37 = *(_QWORD *)(v72 + 8);
      if ( *v73 == v37 && (_QWORD *)v36 == v71 )
      {
        *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v31 + 8);
        v74 = *(__int64 ***)(a1 + 312);
        if ( v74 )
        {
          v75 = *(unsigned __int16 *)(v31 + 8);
          while ( 1 )
          {
            v76 = *((unsigned int *)v74 + 2);
            if ( v75 < v76 )
            {
              v77 = *(unsigned __int16 *)(v31 + 8);
              v197 = *(unsigned __int16 *)(v31 + 8);
              goto LABEL_138;
            }
            if ( !*v74 )
              break;
            v74 = (__int64 **)*v74;
          }
          v77 = v76 - 1;
          v197 = (unsigned int)(v76 - 1);
LABEL_138:
          v78 = (int)v71;
          LOBYTE(v71) = 1;
          RtlpHeapRemoveListEntry(a1, (_DWORD)v74, (_DWORD)v71, v78, v77, v75);
        }
        *v73 = v72;
        *(_QWORD *)(v72 + 8) = v73;
        goto LABEL_60;
      }
LABEL_337:
      RtlpLogHeapFailure(13, a1, (_DWORD)v71, v37, v36, 0LL);
      goto LABEL_417;
    }
LABEL_233:
    v174 = 0LL;
    goto LABEL_417;
  }
  v34 = *v21;
  v35 = *(__int64 **)(v31 + 24);
  v36 = *v35;
  v37 = *(_QWORD *)(*v21 + 8);
  if ( *v35 != v37 || (__int64 *)v36 != v21 )
  {
    LODWORD(v71) = (_DWORD)v21;
    goto LABEL_337;
  }
  *(_QWORD *)(a1 + 192) -= v33;
  v38 = *(__int64 ***)(a1 + 312);
  if ( v38 )
  {
    v39 = *(unsigned __int16 *)(v31 + 8);
    while ( 1 )
    {
      v40 = *((unsigned int *)v38 + 2);
      if ( v39 < v40 )
      {
        v41 = *(unsigned __int16 *)(v31 + 8);
        v196 = *(unsigned __int16 *)(v31 + 8);
        goto LABEL_58;
      }
      if ( !*v38 )
        break;
      v38 = (__int64 **)*v38;
    }
    v41 = v40 - 1;
    v196 = v41;
LABEL_58:
    LOBYTE(v10) = 1;
    RtlpHeapRemoveListEntry(a1, (_DWORD)v38, (_DWORD)v10, (_DWORD)v21, v41, v39);
  }
  *v35 = v34;
  *(_QWORD *)(v34 + 8) = v35;
LABEL_60:
  v42 = (char *)(v31 + 10);
  if ( (*(_BYTE *)(v31 + 10) & 8) != 0 && !RtlpCommitBlock((char *)a1, v31) )
  {
    RtlpDeCommitFreeBlock(a1, v31, *(unsigned __int16 *)(v31 + 8), 1);
    goto LABEL_417;
  }
LABEL_61:
  v43 = v31;
  v171 = v31;
  v44 = *v42;
  v172 = *v42;
  v45 = v170;
  if ( !v170 && (v44 & 4) != 0 )
  {
    v80 = 16LL * *(unsigned __int16 *)(v31 + 8) - 32;
    v198 = v80;
    if ( (v44 & 2) != 0 && v80 > 4 )
    {
      v80 -= 4LL;
      v198 = v80;
    }
    v81 = RtlCompareMemoryUlong((PVOID)(v31 + 32), v80, 0xFEEEFEEE);
    if ( v81 == v80 )
    {
      v43 = v31;
    }
    else
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v31 = (__int64)v186;
      DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v186, &v186[v81 + 32]);
      RtlpBreakPointHeap();
      v44 = v172;
      v43 = v171;
    }
    v45 = v170;
  }
  v185 = v31;
  if ( (*v42 & 1) != 0 )
  {
    RtlpLogHeapFailure(3, a1, v31, 0, 0LL, 0LL);
    goto LABEL_417;
  }
  *v42 = v176;
  v46 = *(unsigned __int16 *)(v31 + 8) - v12;
  *(_WORD *)(v31 + 8) = v12;
  v47 = v231 - v230;
  v216 = v231 - v230;
  if ( v231 - v230 >= 0x3F )
  {
    *(_QWORD *)(v31 + 16 * v12) = v47;
    *(_BYTE *)(v31 + 15) = 63;
  }
  else
  {
    *(_BYTE *)(v31 + 15) = v47;
  }
  *(_BYTE *)(v31 + 11) = 0;
  if ( !v46 )
    goto LABEL_97;
  if ( v46 == 1 )
  {
    ++*(_WORD *)(v31 + 8);
    v79 = v47 + 16;
    v217 = v79;
    if ( v79 >= 0x3F )
    {
      *(_QWORD *)(v31 + 16 * (v12 + 1)) = v79;
      *(_BYTE *)(v31 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(v31 + 15) = v79;
    }
    goto LABEL_97;
  }
  if ( v45 )
  {
    v48 = 0;
    v183 = 0;
  }
  else
  {
    v48 = 1;
    v183 = 1;
  }
  v49 = *(unsigned __int8 *)(v31 + 14);
  if ( (_BYTE)v49 )
  {
    v50 = (v31 & 0xFFFFFFFFFFFF0000uLL) - (v49 << 16) + 0x10000;
    v199 = v50;
  }
  else
  {
    v50 = a1;
    v199 = a1;
  }
  v204 = v46;
  v51 = v31 + 16 * v12;
  LODWORD(v176) = 0;
  *(_BYTE *)(v51 + 10) = v44;
  *(_BYTE *)(v51 + 15) = 0;
  *(_WORD *)(v51 + 12) = v12 ^ *(_WORD *)(a1 + 140);
  v52 = *(_QWORD *)(v50 + 40);
  if ( v52 == v50 )
  {
    LOBYTE(v53) = 0;
  }
  else
  {
    v53 = ((v51 - v50) >> 16) + 1;
    v218 = v53;
    if ( v53 >= 0xFE )
      RtlpLogHeapFailure(3, v52, v31 + 16 * v12, v50, 0LL, 0LL);
  }
  v173 = v53;
  *(_BYTE *)(v51 + 14) = v53;
  *(_BYTE *)(v51 + 11) = 0;
  *(_WORD *)(v51 + 8) = v46;
  while ( 1 )
  {
    v54 = v51 + 16 * v46;
    if ( ((*(_BYTE *)(v54 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) != 0 )
    {
      *(_WORD *)(v54 + 12) = v46 ^ *(_WORD *)(a1 + 140);
      if ( !v48 )
      {
        *(_BYTE *)(v51 + 10) = 0;
        *(_BYTE *)(v51 + 15) = 0;
        v55 = (_QWORD *)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          Entry = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v46);
        else
          Entry = (_QWORD *)*v55;
        while ( v55 != Entry )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            v69 = *((_DWORD *)Entry - 2);
            v225 = v69;
            if ( (v69 & *(_DWORD *)(a1 + 124)) != 0 )
            {
              v57 = v69 ^ *(_DWORD *)(a1 + 136);
              v225 = v57;
            }
            else
            {
              LOWORD(v57) = v69;
            }
          }
          else
          {
            LOWORD(v57) = *((_WORD *)Entry - 4);
          }
          v177 = v57;
          if ( (unsigned __int16)v46 <= (unsigned __int64)(unsigned __int16)v57 )
            break;
          Entry = (_QWORD *)*Entry;
        }
        v58 = (_QWORD *)(v51 + 16);
        v59 = (__int64 *)Entry[1];
        if ( (_QWORD *)*v59 == Entry )
        {
          *v58 = Entry;
          *(_QWORD *)(v51 + 24) = v59;
          *v59 = (__int64)v58;
          Entry[1] = v58;
        }
        else
        {
          RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v59, 0LL);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v51 + 8);
        v60 = *(_QWORD *)(a1 + 312);
        if ( v60 )
        {
          v61 = *(unsigned __int16 *)(v51 + 8);
          while ( 1 )
          {
            v62 = *(unsigned int *)(v60 + 8);
            if ( v61 < v62 )
            {
              v63 = *(unsigned __int16 *)(v51 + 8);
              v176 = *(unsigned __int16 *)(v51 + 8);
              goto LABEL_93;
            }
            if ( !*(_QWORD *)v60 )
              break;
            v60 = *(_QWORD *)v60;
          }
          v63 = v62 - 1;
          v176 = (unsigned int)(v62 - 1);
LABEL_93:
          RtlpHeapAddListEntry(a1, v60, 1, v51 + 16, v63, v61);
        }
        goto LABEL_94;
      }
      v88 = (unsigned __int16)v46;
      *(_BYTE *)(v51 + 10) &= 0xF0u;
      *(_BYTE *)(v51 + 15) = 0;
      if ( (*(_BYTE *)(a1 + 112) & 0x40) == 0 )
      {
LABEL_183:
        v89 = (_QWORD *)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          v90 = (_QWORD *)RtlpFindEntry(a1, v88);
        else
          v90 = (_QWORD *)*v89;
        while ( v89 != v90 )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            v98 = *((_DWORD *)v90 - 2);
            v226 = v98;
            if ( (v98 & *(_DWORD *)(a1 + 124)) != 0 )
            {
              v91 = v98 ^ *(_DWORD *)(a1 + 136);
              v226 = v91;
            }
            else
            {
              LOWORD(v91) = v98;
            }
          }
          else
          {
            LOWORD(v91) = *((_WORD *)v90 - 4);
          }
          v178 = v91;
          if ( v88 <= (unsigned __int16)v91 )
            break;
          v90 = (_QWORD *)*v90;
        }
        v92 = (_QWORD *)(v51 + 16);
        v93 = (__int64 *)v90[1];
        if ( (_QWORD *)*v93 == v90 )
        {
          *v92 = v90;
          *(_QWORD *)(v51 + 24) = v93;
          *v93 = (__int64)v92;
          v90[1] = v92;
        }
        else
        {
          RtlpLogHeapFailure(13, 0, (_DWORD)v90, 0, *v93, 0LL);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v51 + 8);
        v94 = *(_QWORD *)(a1 + 312);
        if ( v94 )
        {
          v95 = *(unsigned __int16 *)(v51 + 8);
          while ( 1 )
          {
            v96 = *(unsigned int *)(v94 + 8);
            if ( v95 < v96 )
            {
              v97 = *(unsigned __int16 *)(v51 + 8);
              v187 = (__int64 *)*(unsigned __int16 *)(v51 + 8);
              goto LABEL_195;
            }
            if ( !*(_QWORD *)v94 )
              break;
            v94 = *(_QWORD *)v94;
          }
          v97 = v96 - 1;
          v187 = (__int64 *)v97;
LABEL_195:
          RtlpHeapAddListEntry(a1, v94, 1, (__int64)v92, v97, v95);
          goto LABEL_94;
        }
        goto LABEL_94;
      }
      v147 = (_DWORD *)(v51 + 32);
      v200 = v51 + 32;
      v148 = (16 * (unsigned __int64)(unsigned __int16)v46 - 32) >> 2;
      v192 = v148;
      if ( v148 )
      {
        if ( ((unsigned __int8)v147 & 4) == 0 )
          goto LABEL_353;
        *v147 = -17891602;
        v192 = --v148;
        if ( v148 )
        {
          v147 = (_DWORD *)(v51 + 36);
          v200 = v51 + 36;
LABEL_353:
          memset64(v147, 0xFEEEFEEEFEEEFEEEuLL, v148 >> 1);
          if ( (v148 & 1) != 0 )
            v147[v148 - 1] = -17891602;
        }
      }
      *(_BYTE *)(v51 + 10) |= 4u;
      goto LABEL_183;
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      v100 = *(_DWORD *)(v54 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v54 + 8) = v100;
      if ( HIBYTE(v100) != ((unsigned __int8)v100 ^ (unsigned __int8)(BYTE1(v100) ^ BYTE2(v100))) )
        RtlpAnalyzeHeapFailure(a1, v51 + 16 * v46);
    }
    v101 = v54 + 16;
    v102 = *(_QWORD *)(v54 + 16);
    v103 = *(__int64 **)(v54 + 24);
    v187 = v103;
    v104 = *v103;
    v105 = *(_QWORD *)(v102 + 8);
    if ( *v103 == v105 && v104 == v101 )
      break;
    RtlpLogHeapFailure(13, a1, v101, v105, v104, 0LL);
LABEL_326:
    if ( (_DWORD)v176 )
    {
      v219 = NtCurrentTeb();
      v219->LastStatusValue = -1073741764;
      v220 = NtCurrentTeb();
      v220->LastErrorValue = RtlNtStatusToDosError(-1073741764);
      goto LABEL_417;
    }
    LODWORD(v176) = 1;
  }
  *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v54 + 8);
  v106 = *(__int64 ***)(a1 + 312);
  if ( v106 )
  {
    v107 = *(unsigned __int16 *)(v54 + 8);
    while ( 1 )
    {
      v108 = *((unsigned int *)v106 + 2);
      if ( v107 < v108 )
      {
        v109 = *(unsigned __int16 *)(v54 + 8);
        goto LABEL_220;
      }
      if ( !*v106 )
        break;
      v106 = (__int64 **)*v106;
    }
    v109 = (unsigned int)(v108 - 1);
LABEL_220:
    v188 = v109;
    LOBYTE(v101) = 1;
    RtlpHeapRemoveListEntry(a1, (_DWORD)v106, v101, v54 + 16, v109, v107);
    v103 = v187;
  }
  *v103 = v102;
  *(_QWORD *)(v102 + 8) = v103;
  if ( (*(_BYTE *)(v54 + 10) & 8) != 0 && !RtlpCommitBlock((char *)a1, v51 + 16 * v46) )
  {
    RtlpDeCommitFreeBlock(a1, v51 + 16 * v46, *(unsigned __int16 *)(v54 + 8), 1);
    goto LABEL_326;
  }
  if ( v48 )
  {
    v149 = *(_BYTE *)(v54 + 10);
    if ( (v149 & 4) != 0 )
    {
      v150 = 16LL * *(unsigned __int16 *)(v54 + 8) - 32;
      v203 = v150;
      if ( (v149 & 2) != 0 && v150 > 4 )
      {
        v150 -= 4LL;
        v203 = v150;
      }
      v188 = RtlCompareMemoryUlong((PVOID)(v54 + 32), v150, 0xFEEEFEEE);
      if ( v188 != v150 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint(
          "HEAP: Free Heap block %p modified at %p after it was freed\n",
          (const void *)(v51 + 16 * v46),
          (const void *)(v54 + v188 + 32));
        RtlpBreakPointHeap();
        v48 = v183;
      }
    }
  }
  *(_BYTE *)(v51 + 10) = *(_BYTE *)(v54 + 10);
  v110 = *(unsigned __int16 *)(v54 + 8) + v46;
  v204 = v110;
  if ( v110 > 0xFF00 )
  {
    RtlpInsertFreeBlock(a1, v51, v110);
    v43 = v171;
    goto LABEL_96;
  }
  *(_WORD *)(v51 + 8) = v110;
  *(_WORD *)(v51 + 16 * v110 + 12) = v110 ^ *(_WORD *)(a1 + 140);
  v111 = (unsigned __int16)v110;
  if ( v48 )
  {
    *(_BYTE *)(v51 + 10) &= 0xF0u;
    *(_BYTE *)(v51 + 15) = 0;
    if ( (*(_BYTE *)(a1 + 112) & 0x40) == 0 )
      goto LABEL_378;
    v151 = (_DWORD *)(v51 + 32);
    v206 = v51 + 32;
    v152 = (16 * (unsigned __int64)(unsigned __int16)v110 - 32) >> 2;
    v189 = v152;
    if ( v152 )
    {
      if ( ((unsigned __int8)v151 & 4) == 0 )
        goto LABEL_375;
      *v151 = -17891602;
      v189 = --v152;
      if ( v152 )
      {
        v151 = (_DWORD *)(v51 + 36);
        v206 = v51 + 36;
LABEL_375:
        memset64(v151, 0xFEEEFEEEFEEEFEEEuLL, v152 >> 1);
        if ( (v152 & 1) != 0 )
          v151[v152 - 1] = -17891602;
      }
    }
    *(_BYTE *)(v51 + 10) |= 4u;
LABEL_378:
    v153 = (_QWORD *)(a1 + 336);
    if ( *(_QWORD *)(a1 + 312) )
      v154 = (_QWORD *)RtlpFindEntry(a1, v111);
    else
      v154 = (_QWORD *)*v153;
    while ( v153 != v154 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v155 = *((_DWORD *)v154 - 2);
        v228 = v155;
        if ( (v155 & *(_DWORD *)(a1 + 124)) != 0 )
        {
          v156 = v155 ^ *(_DWORD *)(a1 + 136);
          v228 = v156;
        }
        else
        {
          LOWORD(v156) = v155;
        }
      }
      else
      {
        LOWORD(v156) = *((_WORD *)v154 - 4);
      }
      v180 = v156;
      if ( v111 <= (unsigned __int16)v156 )
        break;
      v154 = (_QWORD *)*v154;
    }
    v92 = (_QWORD *)(v51 + 16);
    v157 = (__int64 *)v154[1];
    if ( (_QWORD *)*v157 == v154 )
    {
      *v92 = v154;
      *(_QWORD *)(v51 + 24) = v157;
      *v157 = (__int64)v92;
      v154[1] = v92;
    }
    else
    {
      RtlpLogHeapFailure(13, 0, (_DWORD)v154, 0, *v157, 0LL);
    }
    *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v51 + 8);
    v94 = *(_QWORD *)(a1 + 312);
    if ( v94 )
    {
      v95 = *(unsigned __int16 *)(v51 + 8);
      while ( 1 )
      {
        v158 = *(unsigned int *)(v94 + 8);
        if ( v95 < v158 )
        {
          v97 = *(unsigned __int16 *)(v51 + 8);
          v207 = *(unsigned __int16 *)(v51 + 8);
          goto LABEL_195;
        }
        if ( !*(_QWORD *)v94 )
          break;
        v94 = *(_QWORD *)v94;
      }
      v97 = v158 - 1;
      v207 = (unsigned int)(v158 - 1);
      goto LABEL_195;
    }
LABEL_94:
    v43 = v171;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v51 + 11) = *(_BYTE *)(v51 + 8) ^ *(_BYTE *)(v51 + 9) ^ *(_BYTE *)(v51 + 10);
      *(_DWORD *)(v51 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    goto LABEL_96;
  }
  *(_BYTE *)(v51 + 10) = 0;
  *(_BYTE *)(v51 + 15) = 0;
  v112 = (_QWORD *)(a1 + 336);
  if ( *(_QWORD *)(a1 + 312) )
    v113 = (_QWORD *)RtlpFindEntry(a1, (unsigned int)v111);
  else
    v113 = (_QWORD *)*v112;
  while ( v112 != v113 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v132 = *((_DWORD *)v113 - 2);
      v227 = v132;
      if ( (v132 & *(_DWORD *)(a1 + 124)) != 0 )
      {
        v131 = v132 ^ *(_DWORD *)(a1 + 136);
        v227 = v131;
      }
      else
      {
        LOWORD(v131) = v132;
      }
    }
    else
    {
      LOWORD(v131) = *((_WORD *)v113 - 4);
    }
    v179 = v131;
    if ( v111 <= (unsigned __int16)v131 )
      break;
    v113 = (_QWORD *)*v113;
  }
  v114 = (_QWORD *)(v51 + 16);
  v115 = (__int64 *)v113[1];
  if ( (_QWORD *)*v115 == v113 )
  {
    *v114 = v113;
    *(_QWORD *)(v51 + 24) = v115;
    *v115 = (__int64)v114;
    v113[1] = v114;
  }
  else
  {
    RtlpLogHeapFailure(13, 0, (_DWORD)v113, 0, *v115, 0LL);
  }
  *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v51 + 8);
  v127 = *(_QWORD *)(a1 + 312);
  if ( v127 )
  {
    v128 = *(unsigned __int16 *)(v51 + 8);
    while ( 1 )
    {
      v129 = *(unsigned int *)(v127 + 8);
      if ( v128 < v129 )
      {
        v130 = *(unsigned __int16 *)(v51 + 8);
        v205 = *(unsigned __int16 *)(v51 + 8);
        goto LABEL_260;
      }
      if ( !*(_QWORD *)v127 )
        break;
      v127 = *(_QWORD *)v127;
    }
    v130 = v129 - 1;
    v205 = (unsigned int)(v129 - 1);
LABEL_260:
    RtlpHeapAddListEntry(a1, v127, 1, v51 + 16, v130, v128);
  }
  v43 = v171;
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(v51 + 11) = *(_BYTE *)(v51 + 8) ^ *(_BYTE *)(v51 + 9) ^ *(_BYTE *)(v51 + 10);
    *(_DWORD *)(v51 + 8) ^= *(_DWORD *)(a1 + 136);
LABEL_96:
    v45 = v170;
    goto LABEL_97;
  }
  v45 = v170;
LABEL_97:
  v174 = (void *)(v185 + 16);
  v64 = (unsigned __int16 *)(v185 + 8);
  a2 = *(unsigned __int16 *)(v185 + 8);
  a4 = (unsigned __int16)a2;
  LOWORD(a4) = BYTE1(a2);
  v10 = (unsigned int *)(16 * a2);
  v184 = 16 * a2;
  if ( (*(_BYTE *)(v185 + 15) & 0x3F) == 0x3F )
  {
    v10 -= 2;
    v184 = (__int64)v10;
  }
  if ( v45 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v185 + 11) = a2 ^ BYTE1(a2) ^ *(_BYTE *)(v31 + 10);
      *(_DWORD *)v64 ^= *(_DWORD *)(a1 + 136);
    }
    if ( v169 )
    {
      if ( (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
      {
        ++*(_DWORD *)(a1 + 640);
        v65 = *(_DWORD *)(a1 + 648);
        if ( *(_DWORD *)(a1 + 640) > v65 )
        {
          *(_DWORD *)(a1 + 640) = 0;
          a2 = *(_QWORD *)(a1 + 576) - 16LL * *(_QWORD *)(a1 + 192);
          if ( a2 > *(_QWORD *)(a1 + 672) )
            *(_QWORD *)(a1 + 672) = a2;
          *(_QWORD *)(a1 + 680) = a2;
        }
        if ( ++*(_DWORD *)(a1 + 652) >= 0x1000u )
        {
          if ( *(_BYTE *)(a1 + 418) == 2 && *(_DWORD *)(a1 + 656) > 0x10u )
            v99 = 256;
          else
            v99 = 16;
          if ( *(_DWORD *)(a1 + 644) > v99 && v65 < 0x10000 )
            *(_DWORD *)(a1 + 648) = 2 * v65;
          *(_DWORD *)(a1 + 644) = 0;
          *(_DWORD *)(a1 + 652) = 0;
        }
      }
      v66 = *(_QWORD *)(a1 + 352);
      v67 = (*(_DWORD *)(v66 + 12))-- == 1;
      if ( v67 )
      {
        *(_QWORD *)(v66 + 16) = 0LL;
        v68 = _InterlockedCompareExchange((volatile signed __int32 *)(v66 + 8), -1, -2);
        if ( v68 != -2 )
        {
          if ( (*(_BYTE *)(v66 + 8) & 1) != 0 )
            RtlpNotOwnerCriticalSection(v66);
          DeferredCriticalSectionEvent = *(_QWORD *)(v66 + 24);
          if ( !DeferredCriticalSectionEvent )
            DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v66);
          v170 = 0;
          while ( 1 )
          {
            a2 = v68 + (v68 & 2 | 1u);
            if ( v68 == _InterlockedCompareExchange((volatile signed __int32 *)(v66 + 8), a2, v68) )
              break;
            RtlBackoff(&v170);
            _m_prefetchw((const void *)(v66 + 8));
            v68 = *(_DWORD *)(v66 + 8);
          }
          if ( (v68 & 2) != 0 )
            RtlpUnWaitCriticalSectionEx(v66, DeferredCriticalSectionEvent);
        }
        v10 = (unsigned int *)v184;
      }
      v169 = 0;
    }
    if ( (v229 & 8) != 0 )
      memset(v174, 0, (size_t)(v10 - 2));
    goto LABEL_417;
  }
  v82 = v229;
  if ( (v229 & 8) != 0 )
  {
    memset(v174, 0, (size_t)(v10 - 2));
    goto LABEL_156;
  }
  v83 = v230;
  if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
  {
    v10 = (unsigned int *)v174;
    v208 = (unsigned int *)v174;
    a2 = (v230 & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
    v190 = a2;
    if ( a2 )
    {
      if ( ((unsigned __int8)v174 & 4) == 0 )
        goto LABEL_171;
      *(_DWORD *)v174 = -1163005939;
      v190 = --a2;
      if ( a2 )
      {
        v208 = ++v10;
LABEL_171:
        memset64(v10, 0xBAADF00DBAADF00DuLL, a2 >> 1);
        if ( (a2 & 1) != 0 )
          v10[a2 - 1] = -1163005939;
LABEL_156:
        v83 = v230;
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 112) & 0x20) != 0 )
  {
    *(__m128i *)((char *)v174 + v83) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
    v159 = v185;
    *(_BYTE *)(v185 + 10) |= 4u;
    v84 = *(_BYTE *)(v159 + 10);
  }
  else
  {
    v84 = *(_BYTE *)(v43 + 10);
  }
  v85 = v185;
  *(_BYTE *)(v185 + 11) = 0;
  if ( (v84 & 2) != 0 )
  {
    ExtraStuffPointer = (_OWORD *)RtlpGetExtraStuffPointer(v85, a2);
    v209 = ExtraStuffPointer;
    *ExtraStuffPointer = 0LL;
    if ( (*(_DWORD *)(a1 + 112) & 0x8000000) != 0 )
      *(_WORD *)ExtraStuffPointer = RtlLogStackBackTraceEx(1u);
    v201 = NtCurrentPeb()->NtGlobalFlag;
    if ( (v201 & 0x800) != 0 )
      *((_WORD *)v209 + 1) = RtlpUpdateTagEntry(a1, (v82 >> 18) & 0xFFF, 0, *v64, 0);
  }
  else
  {
    v202 = NtCurrentPeb()->NtGlobalFlag;
    if ( (v202 & 0x800) != 0 )
      *(_BYTE *)(v85 + 11) = RtlpUpdateTagEntry(a1, (unsigned __int8)(v82 >> 18), 0, *v64, 0);
  }
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(v85 + 11) = *(_BYTE *)v64 ^ *((_BYTE *)v64 + 1) ^ *((_BYTE *)v64 + 2);
    *(_DWORD *)v64 ^= *(_DWORD *)(a1 + 136);
  }
LABEL_417:
  if ( v169 )
  {
    if ( !*(_QWORD *)v175 && v174 )
      RtlpUpdateHeapWatermarks(a1, a2, v10, a4);
    v166 = *(_QWORD *)(a1 + 352);
    v67 = (*(_DWORD *)(v166 + 12))-- == 1;
    if ( v67 )
    {
      *(_QWORD *)(v166 + 16) = 0LL;
      v167 = _InterlockedCompareExchange((volatile signed __int32 *)(v166 + 8), -1, -2);
      if ( v167 != -2 )
      {
        if ( (*(_BYTE *)(v166 + 8) & 1) != 0 )
          RtlpNotOwnerCriticalSection(v166);
        v168 = *(_QWORD *)(v166 + 24);
        if ( !v168 )
          v168 = RtlpCreateDeferredCriticalSectionEvent(v166);
        v229 = 0;
        while ( v167 != _InterlockedCompareExchange((volatile signed __int32 *)(v166 + 8), v167 + (v167 & 2 | 1), v167) )
        {
          RtlBackoff(&v229);
          _m_prefetchw((const void *)(v166 + 8));
          v167 = *(_DWORD *)(v166 + 8);
        }
        if ( (v167 & 2) != 0 )
          RtlpUnWaitCriticalSectionEx(v166, v168);
      }
    }
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v161 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v161 = 2147353480LL;
  v162 = v174;
  if ( *(_BYTE *)v161 && v174 )
  {
    if ( *(_QWORD *)v175 )
      RtlpHeapLogRangeReserve(a1, *(_QWORD *)v175 & 0xFFFFFFFFFFFF0000uLL, *(_QWORD *)(*(_QWORD *)v175 + 40LL));
  }
  return v162;
}
