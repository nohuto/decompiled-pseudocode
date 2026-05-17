/*
 * XREFs of RtlpAllocateHeap @ 0x18003F320
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18003CD60 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x18002A180 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlBackoff @ 0x180033F80 (RtlBackoff.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x180041DF0 (RtlpHeapGenerateRandomValue32.c)
 *     RtlTryEnterCriticalSection @ 0x180044030 (RtlTryEnterCriticalSection.c)
 *     RtlpFindEntry @ 0x1800448D0 (RtlpFindEntry.c)
 *     RtlpInsertFreeBlock @ 0x180044950 (RtlpInsertFreeBlock.c)
 *     RtlpHeapAddListEntry @ 0x180044ED4 (RtlpHeapAddListEntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1800450BC (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x180045E78 (RtlpExtendHeap.c)
 *     RtlpCommitBlock @ 0x18004691C (RtlpCommitBlock.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x180047384 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpHeapRemoveListEntry @ 0x18004913C (RtlpHeapRemoveListEntry.c)
 *     RtlpPerformHeapMaintenance @ 0x18004A684 (RtlpPerformHeapMaintenance.c)
 *     RtlNtStatusToDosError @ 0x180053810 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180053A70 (DbgPrint.c)
 *     RtlLogStackBackTraceEx @ 0x18005FC44 (RtlLogStackBackTraceEx.c)
 *     RtlpGetLFHContext @ 0x180073144 (RtlpGetLFHContext.c)
 *     RtlpGetExtraStuffPointer @ 0x180076534 (RtlpGetExtraStuffPointer.c)
 *     RtlpUpdateHeapRates @ 0x18007D408 (RtlpUpdateHeapRates.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x18008270C (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180082DF0 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpUpdateHeapWatermarks @ 0x180089BD4 (RtlpUpdateHeapWatermarks.c)
 *     RtlCompareMemoryUlong @ 0x1800A39F0 (RtlCompareMemoryUlong.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3940 (RtlpNotOwnerCriticalSection.c)
 *     RtlpUpdateTagEntry @ 0x18010002C (RtlpUpdateTagEntry.c)
 *     RtlDebugAllocateHeap @ 0x180103E60 (RtlDebugAllocateHeap.c)
 *     RtlpBreakPointHeap @ 0x1801069E8 (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x180114F24 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapLogRangeReserve @ 0x180115474 (RtlpHeapLogRangeReserve.c)
 *     RtlpLogHeapCommit @ 0x180116FC0 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x180117254 (RtlpLogHeapExtendEvent.c)
 *     RtlpLogHeapFailure @ 0x180121540 (RtlpLogHeapFailure.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpAllocateHeap(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 **a5,
        _DWORD *a6)
{
  unsigned int v6; // r14d
  unsigned int v8; // r12d
  unsigned int *v10; // r8
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r14
  char v14; // si
  unsigned __int16 *v15; // rdi
  unsigned __int16 v16; // cx
  __int64 *v17; // rdi
  __int64 *i; // rsi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // r15
  __int64 *v22; // r14
  __int64 *v23; // r12
  __int64 *v24; // rax
  _DWORD *v25; // r13
  int v26; // edi
  unsigned int v27; // edi
  __int64 v28; // rdi
  unsigned int v29; // edx
  int v30; // ecx
  __int64 v31; // rdi
  char *v32; // rsi
  int v33; // edx
  unsigned __int64 v34; // rcx
  __int64 v35; // r13
  __int64 *v36; // r12
  __int64 v37; // rax
  __int64 v38; // r9
  __int64 **v39; // rdx
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rax
  _BYTE *v42; // r12
  char v43; // r13
  unsigned int v44; // r10d
  unsigned __int64 v45; // rdi
  unsigned __int64 v46; // r9
  unsigned __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r8
  char v50; // r12
  __int64 v51; // rax
  unsigned __int64 v52; // r9
  char *v53; // r14
  __int64 v54; // rdx
  unsigned __int64 v55; // r15
  char *v56; // r15
  unsigned __int64 *v57; // r15
  unsigned __int64 v58; // r8
  int v59; // eax
  unsigned __int64 *v60; // r15
  __int64 *v61; // rax
  __int64 **v62; // rdx
  unsigned __int64 v63; // rcx
  unsigned __int64 v64; // rdi
  int v65; // r9d
  unsigned __int16 v66; // cx
  __int64 v67; // r8
  unsigned int v68; // eax
  unsigned int v69; // ecx
  unsigned int v70; // eax
  __int64 v71; // rdi
  int v72; // eax
  signed __int32 v73; // esi
  __int64 *j; // r15
  int v75; // edi
  int v76; // edx
  __int64 v77; // r14
  __int64 *v78; // r12
  __int64 v79; // rax
  __int64 v80; // r9
  unsigned int *v81; // rdx
  unsigned __int64 v82; // rcx
  unsigned __int64 v83; // rax
  __int64 v84; // r9
  _QWORD *v85; // rax
  _QWORD *v86; // r8
  __int64 v87; // r14
  __int64 *v88; // r12
  __int64 v89; // rax
  __int64 v90; // r9
  __int64 **v91; // rdx
  unsigned __int64 v92; // rcx
  unsigned __int64 v93; // rdi
  int v94; // r9d
  unsigned __int64 v95; // rax
  __int64 v96; // r9
  __int64 v97; // rdx
  __int64 v98; // rcx
  unsigned __int16 LFHContext; // ax
  unsigned __int64 v100; // rdi
  __int64 v101; // r14
  unsigned int v102; // r14d
  _OWORD *ExtraStuffPointer; // rdi
  unsigned __int64 v104; // r8
  char *v105; // r9
  unsigned __int64 v106; // r8
  __int64 DeferredCriticalSectionEvent; // r14
  __int64 v108; // rcx
  __int64 v109; // r8
  unsigned __int64 v110; // rcx
  __int64 v111; // rdi
  __int64 v112; // rsi
  __int64 v113; // rcx
  __int64 v114; // rcx
  __int64 v115; // rsi
  __int64 v116; // rcx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 *v119; // rax
  __int64 v120; // rdi
  unsigned __int64 v121; // r15
  _QWORD *v122; // rdi
  _QWORD *v123; // r8
  int v124; // eax
  _QWORD *v125; // rdi
  __int64 *v126; // rax
  unsigned __int64 v127; // rcx
  unsigned int v128; // eax
  int v129; // edx
  char *v130; // r8
  __int64 v131; // r13
  __int64 *v132; // rdx
  __int64 v133; // rax
  __int64 v134; // r9
  __int64 **v135; // r10
  unsigned __int64 v136; // rcx
  unsigned __int64 v137; // rdx
  unsigned __int64 v138; // r8
  unsigned __int64 v139; // r15
  _QWORD *v140; // rdi
  _QWORD *Entry; // r8
  __int64 *v142; // rax
  __int64 v143; // r9
  _DWORD *v144; // r8
  unsigned __int64 v145; // rdx
  char v146; // al
  unsigned __int64 v147; // r13
  int v148; // eax
  _DWORD *v149; // r8
  unsigned __int64 v150; // rdx
  _QWORD *v151; // rdi
  _QWORD *v152; // r8
  int v153; // eax
  __int64 *v154; // rax
  _DWORD *SharedData; // rcx
  __int64 v156; // rcx
  void *v157; // rdi
  __int64 v159; // rax
  unsigned __int64 v160; // r15
  __int64 v161; // rdi
  signed __int32 v163; // esi
  __int64 v164; // r14
  int v165; // [rsp+20h] [rbp-238h]
  int v166; // [rsp+28h] [rbp-230h]
  char v167; // [rsp+30h] [rbp-228h]
  unsigned int v168; // [rsp+34h] [rbp-224h] BYREF
  unsigned __int64 v169; // [rsp+38h] [rbp-220h]
  char v170; // [rsp+40h] [rbp-218h]
  char v171; // [rsp+41h] [rbp-217h]
  void *v172; // [rsp+48h] [rbp-210h]
  __int64 v173; // [rsp+50h] [rbp-208h]
  unsigned __int64 v174; // [rsp+58h] [rbp-200h]
  __int16 v175; // [rsp+60h] [rbp-1F8h]
  __int16 v176; // [rsp+62h] [rbp-1F6h]
  __int16 v177; // [rsp+64h] [rbp-1F4h]
  __int16 v178; // [rsp+66h] [rbp-1F2h]
  unsigned __int64 v179; // [rsp+68h] [rbp-1F0h]
  int v180; // [rsp+70h] [rbp-1E8h]
  unsigned int v181; // [rsp+74h] [rbp-1E4h]
  int v182; // [rsp+78h] [rbp-1E0h]
  __int64 v183; // [rsp+80h] [rbp-1D8h]
  char *v184; // [rsp+90h] [rbp-1C8h]
  __int64 *v185; // [rsp+98h] [rbp-1C0h]
  __int64 v186; // [rsp+A0h] [rbp-1B8h]
  unsigned __int64 v187; // [rsp+A8h] [rbp-1B0h]
  unsigned __int64 v188; // [rsp+B0h] [rbp-1A8h]
  char *v189; // [rsp+B8h] [rbp-1A0h]
  unsigned __int64 v190; // [rsp+C0h] [rbp-198h]
  unsigned __int64 v191; // [rsp+C8h] [rbp-190h]
  unsigned int NtGlobalFlag; // [rsp+D0h] [rbp-188h]
  unsigned int *v193; // [rsp+D8h] [rbp-180h]
  __int64 *v194; // [rsp+E0h] [rbp-178h]
  unsigned __int64 v195; // [rsp+E8h] [rbp-170h]
  unsigned __int64 v196; // [rsp+F0h] [rbp-168h]
  unsigned __int64 v197; // [rsp+F8h] [rbp-160h]
  char *v198; // [rsp+100h] [rbp-158h]
  unsigned int v199; // [rsp+108h] [rbp-150h]
  unsigned int v200; // [rsp+10Ch] [rbp-14Ch]
  unsigned __int64 v201; // [rsp+110h] [rbp-148h]
  unsigned __int64 v202; // [rsp+118h] [rbp-140h]
  unsigned __int64 v203; // [rsp+120h] [rbp-138h]
  char *v204; // [rsp+128h] [rbp-130h]
  unsigned __int64 v205; // [rsp+130h] [rbp-128h]
  void *v206; // [rsp+138h] [rbp-120h]
  _OWORD *v207; // [rsp+140h] [rbp-118h]
  __int64 v208; // [rsp+148h] [rbp-110h] BYREF
  struct _TEB *v209; // [rsp+150h] [rbp-108h]
  struct _TEB *v210; // [rsp+158h] [rbp-100h]
  unsigned __int16 *v211; // [rsp+160h] [rbp-F8h]
  struct _TEB *v212; // [rsp+168h] [rbp-F0h]
  struct _TEB *v213; // [rsp+170h] [rbp-E8h]
  unsigned __int64 v214; // [rsp+178h] [rbp-E0h]
  unsigned __int64 v215; // [rsp+180h] [rbp-D8h]
  unsigned __int64 v216; // [rsp+188h] [rbp-D0h]
  struct _TEB *v217; // [rsp+190h] [rbp-C8h]
  struct _TEB *v218; // [rsp+198h] [rbp-C0h]
  __int64 v219; // [rsp+1A0h] [rbp-B8h]
  int v220; // [rsp+1B0h] [rbp-A8h]
  unsigned int v221; // [rsp+1C0h] [rbp-98h]
  int v222; // [rsp+1D0h] [rbp-88h]
  int v223; // [rsp+1E0h] [rbp-78h]
  int v224; // [rsp+1F0h] [rbp-68h]
  int v225; // [rsp+200h] [rbp-58h]
  int v226; // [rsp+210h] [rbp-48h]
  unsigned int v227; // [rsp+268h] [rbp+10h] BYREF
  unsigned __int64 v228; // [rsp+270h] [rbp+18h]
  unsigned __int64 v229; // [rsp+278h] [rbp+20h] BYREF

  v229 = a4;
  v228 = a3;
  v227 = a2;
  v8 = a2;
  v168 = 1;
  v167 = 0;
  v10 = 0LL;
  v172 = 0LL;
  v173 = 0LL;
  v180 = 0;
  v11 = a4 >> 4;
  if ( (a2 & 0x7D010F60) != 0 || a3 >= 0x80000000 )
  {
    v168 = 0;
    *a6 = 4;
    if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
      return 0LL;
    if ( (a2 & 0x61000000) != 0 && (a2 & 0x10000000) == 0 )
      return RtlDebugAllocateHeap((void *)a1);
    if ( a3 )
      v159 = a3;
    else
      v159 = 1LL;
    v160 = *(_QWORD *)(a1 + 264) & (v159 + *(_QWORD *)(a1 + 256));
    if ( v160 < 0x20 )
      v160 = 32LL;
    v229 = v160;
    v6 = (unsigned int)a2 >> 4;
    LOBYTE(v6) = ((unsigned int)a2 >> 4) & 0xE0 | 1;
    LODWORD(v174) = v6;
    if ( (a2 & 0x3C000100) != 0 || *(_QWORD *)(a1 + 328) )
    {
      LOBYTE(v6) = ((unsigned int)a2 >> 4) & 0xE0 | 3;
      LODWORD(v174) = v6;
      v160 += 16LL;
      v229 = v160;
    }
    v12 = v160 >> 4;
    v169 = v12;
  }
  else
  {
    LOBYTE(v6) = 1;
    LODWORD(v174) = v6;
    v12 = a4 >> 4;
    v169 = a4 >> 4;
    if ( v11 < 2 )
    {
      v229 += 16LL;
      v12 = 2LL;
      v169 = 2LL;
    }
    *a6 = 3;
  }
  if ( (a2 & 0x800000) != 0 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
    LOBYTE(v6) = v6 | 8;
    LODWORD(v174) = v6;
  }
  if ( (a2 & 1) == 0 )
  {
    if ( (unsigned int)RtlTryEnterCriticalSection(*(_QWORD *)(a1 + 352), a2, 0LL) )
    {
      ++*(_DWORD *)(a1 + 616);
    }
    else
    {
      if ( byte_1801843C8 )
      {
        v209 = NtCurrentTeb();
        v209->LastStatusValue = -1073741420;
        v210 = NtCurrentTeb();
        v210->LastErrorValue = RtlNtStatusToDosError(-1073741420);
        goto LABEL_404;
      }
      v180 = 1;
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      RtlpUpdateHeapRates(a1, 1LL);
    }
    v167 = 1;
    if ( (*(_DWORD *)(a1 + 120) & 0x30000000) != 0 )
      RtlpPerformHeapMaintenance(a1);
    v10 = 0LL;
  }
  if ( v12 > *(unsigned int *)(a1 + 148) )
  {
    if ( (*(_BYTE *)(a1 + 112) & 2) != 0 )
    {
      v229 += 56LL;
      if ( (unsigned int)RtlpHpHeapCheckCommitLimit(
                           (v229 + 4095) & 0xFFFFFFFFFFFFF000uLL,
                           *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664),
                           a1,
                           a1 + 376) )
      {
        v219 = (RtlpHeapGenerateRandomValue32(v108, a2, v109) & 0xF) << 12;
        v173 = RtlpHpAllocVirtBlockCommitFirst(a1, &v229, v219, &v208);
        if ( v173 )
        {
          v110 = v229;
          v111 = v173;
          *(_WORD *)(v173 + 56) = v229 - a3;
          *(_BYTE *)(v111 + 58) = v6 | 2;
          *(_QWORD *)(v111 + 32) = v110;
          *(_QWORD *)(v111 + 40) = v208;
          *(_BYTE *)(v111 + 63) = 4;
          *(_QWORD *)(a1 + 592) += v110;
          v112 = 2147353472LL;
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v113 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v113 = 2147353472LL;
          if ( *(_BYTE *)v113 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapCommit(a1, v173, v229, 9LL);
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v114 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v114 = 2147353472LL;
          if ( *(_BYTE *)v114 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          {
            if ( (unsigned int)RtlGetCurrentServiceSessionId() )
              v112 = (__int64)NtCurrentPeb()->SharedData + 550;
            RtlpLogHeapExtendEvent(a1, v173, v229, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v112);
          }
          v115 = 2147353482LL;
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v116 = (__int64)NtCurrentPeb()->SharedData + 560;
          else
            v116 = 2147353482LL;
          if ( *(_BYTE *)v116 )
          {
            if ( (unsigned int)RtlGetCurrentServiceSessionId() )
              v115 = (__int64)NtCurrentPeb()->SharedData + 560;
            RtlpLogHeapExtendEvent(a1, v173, v229, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v115);
          }
          if ( (*(_DWORD *)(a1 + 112) & 0x8000000) != 0 )
            *(_WORD *)(v173 + 16) = RtlLogStackBackTraceEx(1LL, a2);
          NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
          if ( (NtGlobalFlag & 0x800) != 0 )
            *(_WORD *)(v173 + 18) = RtlpUpdateTagEntry(
                                      a1,
                                      (unsigned __int8)(v8 >> 18),
                                      0,
                                      *(_QWORD *)(v111 + 32) >> 4,
                                      1);
          v117 = v173;
          if ( *(_DWORD *)(a1 + 124) )
          {
            *(_BYTE *)(v173 + 59) = *(_BYTE *)(v173 + 56) ^ *(_BYTE *)(v173 + 57) ^ *(_BYTE *)(v173 + 58);
            *(_DWORD *)(v117 + 56) ^= *(_DWORD *)(a1 + 136);
          }
          v118 = a1 + 272;
          v119 = *(__int64 **)(a1 + 280);
          if ( *v119 == a1 + 272 )
          {
            v120 = v173;
            *(_QWORD *)v173 = v118;
            *(_QWORD *)(v120 + 8) = v119;
            *v119 = v120;
            *(_QWORD *)(a1 + 280) = v120;
          }
          else
          {
            RtlpLogHeapFailure(13, 0, v118, 0, *v119, 0LL);
          }
          v172 = (void *)(v173 + 64);
        }
        else
        {
          v172 = 0LL;
          ++*(_DWORD *)(a1 + 632);
        }
        goto LABEL_404;
      }
    }
    goto LABEL_226;
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
        v211 = v15;
        v16 = *v15 + 33;
        *v15 = v16;
        if ( v180 || (v16 & 0x1Fu) > 0x10 || v16 > 0xFF00u )
        {
          if ( a3 )
            v97 = a3;
          else
            v97 = 1LL;
          if ( *(_BYTE *)(a1 + 418) == 2 )
            v98 = *(_QWORD *)(a1 + 408);
          else
            v98 = 0LL;
          LFHContext = RtlpGetLFHContext(v98, v97);
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
      v32 = (char *)(v17 - 2);
      v184 = (char *)(v17 - 2);
      if ( *(_DWORD *)(a1 + 124) )
      {
        v76 = *((_DWORD *)v32 + 2) ^ *(_DWORD *)(a1 + 136);
        *((_DWORD *)v32 + 2) = v76;
        if ( HIBYTE(v76) != ((unsigned __int8)v76 ^ (unsigned __int8)(BYTE1(v76) ^ BYTE2(v76))) )
          RtlpAnalyzeHeapFailure(a1, v17 - 2, v10);
      }
      v77 = *v17;
      v78 = (__int64 *)*((_QWORD *)v32 + 3);
      v79 = *v78;
      v80 = *(_QWORD *)(*v17 + 8);
      if ( *v78 == v80 && (__int64 *)v79 == v17 )
      {
        *(_QWORD *)(a1 + 192) -= *((unsigned __int16 *)v32 + 4);
        v81 = *(unsigned int **)(a1 + 312);
        if ( v81 )
        {
          v82 = *((unsigned __int16 *)v32 + 4);
          while ( 1 )
          {
            v83 = v81[2];
            if ( v82 < v83 )
              break;
            v10 = *(unsigned int **)v81;
            if ( !*(_QWORD *)v81 )
            {
              v82 = (unsigned int)(v83 - 1);
              break;
            }
            v81 = *(unsigned int **)v81;
          }
          v179 = v82;
          LOBYTE(v10) = 1;
          RtlpHeapRemoveListEntry(a1, (_DWORD)v81, (_DWORD)v10, (_DWORD)v17, v82, *((unsigned __int16 *)v32 + 4));
        }
        *v78 = v77;
        *(_QWORD *)(v77 + 8) = v78;
        if ( (v32[10] & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1, v17 - 2) )
        {
LABEL_63:
          v42 = v32 + 10;
          v169 = (unsigned __int64)(v32 + 10);
          v43 = v32[10];
          v170 = v43;
          v44 = v168;
          if ( !v168 && (v43 & 4) != 0 )
          {
            v100 = 16LL * *((unsigned __int16 *)v32 + 4) - 32;
            v196 = v100;
            if ( (v43 & 2) != 0 && v100 > 4 )
            {
              v100 -= 4LL;
              v196 = v100;
            }
            v101 = RtlCompareMemoryUlong(v32 + 32, v100, 4277075694LL);
            if ( v101 != v100 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              v32 = v184;
              DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v184, &v184[v101 + 32]);
              RtlpBreakPointHeap();
              v43 = v170;
            }
            v44 = v168;
          }
          v189 = v32;
          if ( (*v42 & 1) != 0 )
          {
            RtlpLogHeapFailure(3, a1, (_DWORD)v32, 0, 0LL, 0LL);
            goto LABEL_404;
          }
          *v42 = v174;
          v45 = *((unsigned __int16 *)v32 + 4) - v12;
          *((_WORD *)v32 + 4) = v12;
          v46 = v228;
          v47 = v229 - v228;
          v214 = v229 - v228;
          v48 = 16 * v12;
          if ( v229 - v228 >= 0x3F )
          {
            *(_QWORD *)&v32[v48] = v47;
            v32[15] = 63;
          }
          else
          {
            v32[15] = v47;
          }
          v32[11] = 0;
          if ( v45 )
          {
            if ( v45 != 1 )
            {
              v49 = 0LL;
              if ( v44 )
              {
                v50 = 0;
                v182 = 0;
              }
              else
              {
                v50 = 1;
                v182 = 1;
              }
              v51 = (unsigned __int8)v32[14];
              if ( (_BYTE)v51 )
              {
                v52 = ((unsigned __int64)v32 & 0xFFFFFFFFFFFF0000uLL) - (v51 << 16) + 0x10000;
                v197 = v52;
              }
              else
              {
                v52 = a1;
                v197 = a1;
              }
              v202 = v45;
              v53 = &v32[v48];
              LODWORD(v174) = 0;
              v53[10] = v43;
              v53[15] = 0;
              *((_WORD *)v53 + 6) = *(_WORD *)(a1 + 140) ^ v12;
              v54 = *(_QWORD *)(v52 + 40);
              if ( v54 == v52 )
              {
                LOBYTE(v55) = 0;
              }
              else
              {
                v55 = ((unsigned __int64)&v53[-v52] >> 16) + 1;
                v216 = v55;
                if ( v55 >= 0xFE )
                  RtlpLogHeapFailure(3, v54, v48 + (_DWORD)v32, v52, 0LL, 0LL);
              }
              v171 = v55;
              v53[14] = v55;
              v53[11] = 0;
              *((_WORD *)v53 + 4) = v45;
              while ( 1 )
              {
                v56 = &v53[16 * v45];
                if ( (((unsigned __int8)v56[10] ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) != 0 )
                  break;
                if ( *(_DWORD *)(a1 + 124) )
                {
                  v129 = *((_DWORD *)v56 + 2) ^ *(_DWORD *)(a1 + 136);
                  *((_DWORD *)v56 + 2) = v129;
                  if ( HIBYTE(v129) != ((unsigned __int8)v129 ^ (unsigned __int8)(BYTE1(v129) ^ BYTE2(v129))) )
                    RtlpAnalyzeHeapFailure(a1, &v53[16 * v45], v49);
                }
                v130 = v56 + 16;
                v131 = *((_QWORD *)v56 + 2);
                v132 = (__int64 *)*((_QWORD *)v56 + 3);
                v185 = v132;
                v133 = *v132;
                v134 = *(_QWORD *)(v131 + 8);
                if ( *v132 == v134 && (char *)v133 == v130 )
                {
                  *(_QWORD *)(a1 + 192) -= *((unsigned __int16 *)v56 + 4);
                  v135 = *(__int64 ***)(a1 + 312);
                  if ( v135 )
                  {
                    v136 = *((unsigned __int16 *)v56 + 4);
                    while ( 1 )
                    {
                      v137 = *((unsigned int *)v135 + 2);
                      if ( v136 < v137 )
                        break;
                      if ( !*v135 )
                      {
                        v136 = (unsigned int)(v137 - 1);
                        break;
                      }
                      v135 = (__int64 **)*v135;
                    }
                    v186 = v136;
                    LOBYTE(v130) = 1;
                    RtlpHeapRemoveListEntry(
                      a1,
                      (_DWORD)v135,
                      (_DWORD)v130,
                      (_DWORD)v56 + 16,
                      v136,
                      *((unsigned __int16 *)v56 + 4));
                    v132 = v185;
                  }
                  *v132 = v131;
                  *(_QWORD *)(v131 + 8) = v132;
                  if ( (v56[10] & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1, &v53[16 * v45]) )
                  {
                    if ( v50 )
                    {
                      v146 = v56[10];
                      if ( (v146 & 4) != 0 )
                      {
                        v147 = 16LL * *((unsigned __int16 *)v56 + 4) - 32;
                        v201 = v147;
                        if ( (v146 & 2) != 0 && v147 > 4 )
                        {
                          v147 -= 4LL;
                          v201 = v147;
                        }
                        v186 = RtlCompareMemoryUlong(v56 + 32, v147, 4277075694LL);
                        if ( v186 != v147 )
                        {
                          if ( NtCurrentPeb()->Ldr )
                            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
                          else
                            DbgPrint("HEAP: ");
                          DbgPrint(
                            "HEAP: Free Heap block %p modified at %p after it was freed\n",
                            &v53[16 * v45],
                            &v56[v186 + 32]);
                          RtlpBreakPointHeap();
                          v50 = v182;
                        }
                      }
                    }
                    v53[10] = v56[10];
                    v138 = v45 + *((unsigned __int16 *)v56 + 4);
                    v202 = v138;
                    if ( v138 > 0xFF00 )
                    {
                      RtlpInsertFreeBlock(a1, v53);
                      v42 = (_BYTE *)v169;
                      goto LABEL_98;
                    }
                    *((_WORD *)v53 + 4) = v138;
                    *(_WORD *)&v53[16 * v138 + 12] = *(_WORD *)(a1 + 140) ^ v138;
                    v139 = (unsigned __int16)v138;
                    if ( !v50 )
                    {
                      v53[10] = 0;
                      v53[15] = 0;
                      v140 = (_QWORD *)(a1 + 336);
                      if ( *(_QWORD *)(a1 + 312) )
                        Entry = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v138);
                      else
                        Entry = (_QWORD *)*v140;
                      while ( v140 != Entry )
                      {
                        if ( *(_DWORD *)(a1 + 124) )
                        {
                          v148 = *((_DWORD *)Entry - 2);
                          v225 = v148;
                          if ( (v148 & *(_DWORD *)(a1 + 124)) != 0 )
                          {
                            v148 ^= *(_DWORD *)(a1 + 136);
                            v225 = v148;
                          }
                        }
                        else
                        {
                          LOWORD(v148) = *((_WORD *)Entry - 4);
                        }
                        v177 = v148;
                        if ( v139 <= (unsigned __int16)v148 )
                          break;
                        Entry = (_QWORD *)*Entry;
                      }
                      v125 = v53 + 16;
                      v142 = (__int64 *)Entry[1];
                      if ( (_QWORD *)*v142 == Entry )
                      {
                        *v125 = Entry;
                        *((_QWORD *)v53 + 3) = v142;
                        *v142 = (__int64)v125;
                        Entry[1] = v125;
                      }
                      else
                      {
                        RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v142, 0LL);
                      }
                      *(_QWORD *)(a1 + 192) += *((unsigned __int16 *)v53 + 4);
                      v62 = *(__int64 ***)(a1 + 312);
                      if ( v62 )
                      {
                        v127 = *((unsigned __int16 *)v53 + 4);
                        while ( 1 )
                        {
                          v58 = *((unsigned int *)v62 + 2);
                          if ( v127 < v58 )
                            break;
                          if ( !*v62 )
                          {
                            v127 = (unsigned int)(v58 - 1);
                            break;
                          }
                          v62 = (__int64 **)*v62;
                        }
                        v203 = v127;
                        goto LABEL_265;
                      }
LABEL_96:
                      v42 = (_BYTE *)v169;
                      if ( *(_DWORD *)(a1 + 124) )
                      {
                        v53[11] = v53[8] ^ v53[9] ^ v53[10];
                        *((_DWORD *)v53 + 2) ^= *(_DWORD *)(a1 + 136);
                      }
LABEL_98:
                      v46 = v228;
                      v44 = v168;
                      goto LABEL_99;
                    }
                    v53[10] &= 0xF0u;
                    v53[15] = 0;
                    if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
                    {
                      v149 = v53 + 32;
                      v204 = v53 + 32;
                      v150 = (16 * v139 - 32) >> 2;
                      v187 = v150;
                      if ( v150 )
                      {
                        if ( ((unsigned __int8)v149 & 4) != 0 )
                        {
                          *v149 = -17891602;
                          v187 = --v150;
                          if ( v150 )
                          {
                            v149 = v53 + 36;
                            v204 = v53 + 36;
                            goto LABEL_361;
                          }
                        }
                        else
                        {
LABEL_361:
                          memset64(v149, 0xFEEEFEEEFEEEFEEEuLL, v150 >> 1);
                          if ( (v150 & 1) != 0 )
                            v149[v150 - 1] = -17891602;
                        }
                      }
                      v53[10] |= 4u;
                    }
                    v151 = (_QWORD *)(a1 + 336);
                    if ( *(_QWORD *)(a1 + 312) )
                      v152 = (_QWORD *)RtlpFindEntry(a1, v139);
                    else
                      v152 = (_QWORD *)*v151;
                    while ( v151 != v152 )
                    {
                      if ( *(_DWORD *)(a1 + 124) )
                      {
                        v153 = *((_DWORD *)v152 - 2);
                        v226 = v153;
                        if ( (v153 & *(_DWORD *)(a1 + 124)) != 0 )
                        {
                          v153 ^= *(_DWORD *)(a1 + 136);
                          v226 = v153;
                        }
                      }
                      else
                      {
                        LOWORD(v153) = *((_WORD *)v152 - 4);
                      }
                      v178 = v153;
                      if ( v139 <= (unsigned __int16)v153 )
                        break;
                      v152 = (_QWORD *)*v152;
                    }
                    v125 = v53 + 16;
                    v154 = (__int64 *)v152[1];
                    if ( (_QWORD *)*v154 == v152 )
                    {
                      *v125 = v152;
                      *((_QWORD *)v53 + 3) = v154;
                      *v154 = (__int64)v125;
                      v152[1] = v125;
                    }
                    else
                    {
                      RtlpLogHeapFailure(13, 0, (_DWORD)v152, 0, *v154, 0LL);
                    }
                    *(_QWORD *)(a1 + 192) += *((unsigned __int16 *)v53 + 4);
                    v62 = *(__int64 ***)(a1 + 312);
                    if ( !v62 )
                      goto LABEL_96;
                    v127 = *((unsigned __int16 *)v53 + 4);
                    while ( 1 )
                    {
                      v58 = *((unsigned int *)v62 + 2);
                      if ( v127 < v58 )
                        break;
                      if ( !*v62 )
                      {
                        v127 = (unsigned int)(v58 - 1);
                        break;
                      }
                      v62 = (__int64 **)*v62;
                    }
                    v205 = v127;
LABEL_265:
                    v166 = *((unsigned __int16 *)v53 + 4);
                    v165 = v127;
                    v65 = (int)v125;
LABEL_95:
                    LOBYTE(v58) = 1;
                    RtlpHeapAddListEntry(a1, (_DWORD)v62, v58, v65, v165, v166);
                    goto LABEL_96;
                  }
                  LOBYTE(v143) = 1;
                  RtlpDeCommitFreeBlock(a1, &v53[16 * v45], *((unsigned __int16 *)v56 + 4), v143);
                }
                else
                {
                  RtlpLogHeapFailure(13, a1, (_DWORD)v130, v134, v133, 0LL);
                }
                if ( (_DWORD)v174 )
                {
                  v217 = NtCurrentTeb();
                  v217->LastStatusValue = -1073741764;
                  v218 = NtCurrentTeb();
                  v218->LastErrorValue = RtlNtStatusToDosError(-1073741764);
                  goto LABEL_404;
                }
                LODWORD(v174) = 1;
              }
              *((_WORD *)v56 + 6) = *(_WORD *)(a1 + 140) ^ v45;
              if ( !v50 )
              {
                v53[10] = 0;
                v53[15] = 0;
                v57 = (unsigned __int64 *)(a1 + 336);
                if ( *(_QWORD *)(a1 + 312) )
                  v58 = RtlpFindEntry(a1, (unsigned __int16)v45);
                else
                  v58 = *v57;
                while ( v57 != (unsigned __int64 *)v58 )
                {
                  if ( *(_DWORD *)(a1 + 124) )
                  {
                    v59 = *(_DWORD *)(v58 - 8);
                    v223 = v59;
                    if ( (v59 & *(_DWORD *)(a1 + 124)) != 0 )
                    {
                      v59 ^= *(_DWORD *)(a1 + 136);
                      v223 = v59;
                    }
                  }
                  else
                  {
                    LOWORD(v59) = *(_WORD *)(v58 - 8);
                  }
                  v175 = v59;
                  if ( (unsigned __int16)v45 <= (unsigned __int64)(unsigned __int16)v59 )
                    break;
                  v58 = *(_QWORD *)v58;
                }
                v60 = (unsigned __int64 *)(v53 + 16);
                v61 = *(__int64 **)(v58 + 8);
                if ( *v61 == v58 )
                {
                  *v60 = v58;
                  *((_QWORD *)v53 + 3) = v61;
                  *v61 = (__int64)v60;
                  *(_QWORD *)(v58 + 8) = v60;
                }
                else
                {
                  RtlpLogHeapFailure(13, 0, v58, 0, *v61, 0LL);
                }
                *(_QWORD *)(a1 + 192) += *((unsigned __int16 *)v53 + 4);
                v62 = *(__int64 ***)(a1 + 312);
                if ( !v62 )
                  goto LABEL_96;
                v63 = *((unsigned __int16 *)v53 + 4);
                while ( 1 )
                {
                  v64 = *((unsigned int *)v62 + 2);
                  if ( v63 < v64 )
                    break;
                  if ( !*v62 )
                  {
                    v63 = (unsigned int)(v64 - 1);
                    break;
                  }
                  v62 = (__int64 **)*v62;
                }
                v174 = v63;
                v166 = *((unsigned __int16 *)v53 + 4);
                v165 = v63;
                v65 = (_DWORD)v53 + 16;
                goto LABEL_95;
              }
              v121 = (unsigned __int16)v45;
              v53[10] &= 0xF0u;
              v53[15] = 0;
              if ( (*(_BYTE *)(a1 + 112) & 0x40) == 0 )
              {
LABEL_251:
                v122 = (_QWORD *)(a1 + 336);
                if ( *(_QWORD *)(a1 + 312) )
                  v123 = (_QWORD *)RtlpFindEntry(a1, v121);
                else
                  v123 = (_QWORD *)*v122;
                while ( v122 != v123 )
                {
                  if ( *(_DWORD *)(a1 + 124) )
                  {
                    v124 = *((_DWORD *)v123 - 2);
                    v224 = v124;
                    if ( (v124 & *(_DWORD *)(a1 + 124)) != 0 )
                    {
                      v124 ^= *(_DWORD *)(a1 + 136);
                      v224 = v124;
                    }
                  }
                  else
                  {
                    LOWORD(v124) = *((_WORD *)v123 - 4);
                  }
                  v176 = v124;
                  if ( v121 <= (unsigned __int16)v124 )
                    break;
                  v123 = (_QWORD *)*v123;
                }
                v125 = v53 + 16;
                v126 = (__int64 *)v123[1];
                if ( (_QWORD *)*v126 == v123 )
                {
                  *v125 = v123;
                  *((_QWORD *)v53 + 3) = v126;
                  *v126 = (__int64)v125;
                  v123[1] = v125;
                }
                else
                {
                  RtlpLogHeapFailure(13, 0, (_DWORD)v123, 0, *v126, 0LL);
                }
                *(_QWORD *)(a1 + 192) += *((unsigned __int16 *)v53 + 4);
                v62 = *(__int64 ***)(a1 + 312);
                if ( v62 )
                {
                  v127 = *((unsigned __int16 *)v53 + 4);
                  while ( 1 )
                  {
                    v58 = *((unsigned int *)v62 + 2);
                    if ( v127 < v58 )
                      break;
                    if ( !*v62 )
                    {
                      v127 = (unsigned int)(v58 - 1);
                      break;
                    }
                    v62 = (__int64 **)*v62;
                  }
                  v185 = (__int64 *)v127;
                  goto LABEL_265;
                }
                goto LABEL_96;
              }
              v144 = v53 + 32;
              v198 = v53 + 32;
              v145 = (16 * (unsigned __int64)(unsigned __int16)v45 - 32) >> 2;
              v191 = v145;
              if ( v145 )
              {
                if ( ((unsigned __int8)v144 & 4) == 0 )
                  goto LABEL_337;
                *v144 = -17891602;
                v191 = --v145;
                if ( v145 )
                {
                  v144 = v53 + 36;
                  v198 = v53 + 36;
LABEL_337:
                  memset64(v144, 0xFEEEFEEEFEEEFEEEuLL, v145 >> 1);
                  if ( (v145 & 1) != 0 )
                    v144[v145 - 1] = -17891602;
                }
              }
              v53[10] |= 4u;
              goto LABEL_251;
            }
            ++*((_WORD *)v32 + 4);
            v95 = v229 - v46 + 16;
            v215 = v95;
            if ( v95 >= 0x3F )
            {
              *(_QWORD *)&v32[v48 + 16] = v95;
              v32[15] = 63;
            }
            else
            {
              v32[15] = v95;
            }
          }
LABEL_99:
          v172 = v189 + 16;
          v66 = *((_WORD *)v32 + 4);
          a2 = v66;
          LOWORD(a2) = HIBYTE(v66);
          v67 = 16LL * v66;
          v183 = v67;
          if ( (v32[15] & 0x3F) == 0x3F )
          {
            v67 -= 8LL;
            v183 = v67;
          }
          if ( v44 )
          {
            if ( *(_DWORD *)(a1 + 124) )
            {
              v32[11] = *v42 ^ HIBYTE(v66) ^ v66;
              *((_DWORD *)v32 + 2) ^= *(_DWORD *)(a1 + 136);
            }
            if ( v167 )
            {
              if ( (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
              {
                v68 = *(_DWORD *)(a1 + 640) + 1;
                *(_DWORD *)(a1 + 640) = v68;
                v69 = *(_DWORD *)(a1 + 648);
                if ( v68 > v69 )
                {
                  *(_DWORD *)(a1 + 640) = 0;
                  a2 = *(_QWORD *)(a1 + 576) - 16LL * *(_QWORD *)(a1 + 192);
                  if ( a2 > *(_QWORD *)(a1 + 672) )
                    *(_QWORD *)(a1 + 672) = a2;
                  *(_QWORD *)(a1 + 680) = a2;
                }
                v70 = *(_DWORD *)(a1 + 652) + 1;
                *(_DWORD *)(a1 + 652) = v70;
                if ( v70 >= 0x1000 )
                {
                  if ( *(_BYTE *)(a1 + 418) == 2 && *(_DWORD *)(a1 + 656) > 0x10u )
                    v128 = 256;
                  else
                    v128 = 16;
                  if ( *(_DWORD *)(a1 + 644) > v128 && v69 < 0x10000 )
                    *(_DWORD *)(a1 + 648) = 2 * v69;
                  *(_DWORD *)(a1 + 644) = 0;
                  *(_DWORD *)(a1 + 652) = 0;
                }
              }
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
                  DeferredCriticalSectionEvent = *(_QWORD *)(v71 + 24);
                  if ( !DeferredCriticalSectionEvent )
                    DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v71);
                  v168 = 0;
                  while ( 1 )
                  {
                    a2 = v73 + (v73 & 2 | 1u);
                    if ( v73 == _InterlockedCompareExchange((volatile signed __int32 *)(v71 + 8), a2, v73) )
                      break;
                    RtlBackoff(&v168);
                    _m_prefetchw((const void *)(v71 + 8));
                    v73 = *(_DWORD *)(v71 + 8);
                  }
                  if ( (v73 & 2) != 0 )
                    RtlpUnWaitCriticalSectionEx(v71, DeferredCriticalSectionEvent);
                }
                v67 = v183;
              }
              v167 = 0;
            }
            if ( (v227 & 8) != 0 )
              memset_thunk_772440563353939046(v172, 0, v67 - 8);
            goto LABEL_404;
          }
          v102 = v227;
          if ( (v227 & 8) != 0 )
          {
            memset_thunk_772440563353939046(v172, 0, v67 - 8);
          }
          else
          {
            a2 = a1 + 112;
            if ( (*(_BYTE *)(a1 + 112) & 0x40) == 0 )
              goto LABEL_199;
            v104 = v46 & 0xFFFFFFFFFFFFFFFCuLL;
            v105 = (char *)v172;
            v206 = v172;
            v106 = v104 >> 2;
            v188 = v106;
            a2 = a1 + 112;
            if ( !v106 )
              goto LABEL_199;
            if ( ((unsigned __int8)v172 & 4) != 0 )
            {
              *(_DWORD *)v172 = -1163005939;
              v188 = --v106;
              a2 = a1 + 112;
              if ( !v106 )
                goto LABEL_199;
              v105 += 4;
              v206 = v105;
            }
            memset64(v105, 0xBAADF00DBAADF00DuLL, v106 >> 1);
            a2 = a1 + 112;
            if ( (v106 & 1) == 0 )
              goto LABEL_199;
            *(_DWORD *)&v105[4 * v106 - 4] = -1163005939;
          }
          a2 = a1 + 112;
LABEL_199:
          if ( (*(_BYTE *)a2 & 0x20) != 0 )
          {
            *(__m128i *)((char *)v172 + v228) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
            *v42 |= 4u;
          }
          v32[11] = 0;
          if ( (*v42 & 2) != 0 )
          {
            ExtraStuffPointer = (_OWORD *)RtlpGetExtraStuffPointer(v189);
            v207 = ExtraStuffPointer;
            *ExtraStuffPointer = 0LL;
            if ( (*(_DWORD *)a2 & 0x8000000) != 0 )
              *(_WORD *)ExtraStuffPointer = RtlLogStackBackTraceEx(1LL, a2);
            v199 = NtCurrentPeb()->NtGlobalFlag;
            if ( (v199 & 0x800) != 0 )
              *((_WORD *)v207 + 1) = RtlpUpdateTagEntry(a1, (v102 >> 18) & 0xFFF, 0, *((unsigned __int16 *)v32 + 4), 0);
          }
          else
          {
            v200 = NtCurrentPeb()->NtGlobalFlag;
            if ( (v200 & 0x800) != 0 )
              v32[11] = RtlpUpdateTagEntry(a1, (unsigned __int8)(v102 >> 18), 0, *((unsigned __int16 *)v32 + 4), 0);
          }
          if ( *(_DWORD *)(a1 + 124) )
          {
            v32[11] = v32[8] ^ v32[9] ^ v32[10];
            *((_DWORD *)v32 + 2) ^= *(_DWORD *)(a1 + 136);
          }
          goto LABEL_404;
        }
        LOBYTE(v84) = 1;
        RtlpDeCommitFreeBlock(a1, v17 - 2, *((unsigned __int16 *)v32 + 4), v84);
      }
      else
      {
        RtlpLogHeapFailure(13, a1, (_DWORD)v17, v80, v79, 0LL);
      }
      v212 = NtCurrentTeb();
      v212->LastStatusValue = -1073741801;
      v213 = NtCurrentTeb();
      v213->LastErrorValue = RtlNtStatusToDosError(-1073741801);
      goto LABEL_404;
    }
  }
  v194 = (__int64 *)(a1 + 336);
  for ( i = *(__int64 **)(a1 + 312); ; i = (__int64 *)*i )
  {
    v19 = *((unsigned int *)i + 2);
    if ( v12 < v19 )
    {
      v190 = v12;
      v20 = (unsigned int)v12;
      goto LABEL_26;
    }
    if ( !*i )
      break;
  }
  v20 = (unsigned int)(v19 - 1);
  v190 = v20;
LABEL_26:
  v179 = v20;
  while ( 1 )
  {
    v21 = (unsigned int)(v20 - *((_DWORD *)i + 6));
    v22 = 0LL;
    v23 = (__int64 *)i[4];
    v24 = (__int64 *)v23[1];
    v25 = (_DWORD *)(a1 + 124);
    if ( v23 == v24 )
    {
      v22 = (__int64 *)i[4];
    }
    else
    {
      v10 = (unsigned int *)(v24 - 2);
      v26 = *((_DWORD *)v24 - 2);
      v220 = v26;
      if ( *v25 )
      {
        v26 ^= *(_DWORD *)(a1 + 136);
        v220 = v26;
        if ( HIBYTE(v26) != ((unsigned __int8)v26 ^ (unsigned __int8)(BYTE1(v26) ^ BYTE2(v26))) )
        {
          RtlpLogHeapFailure(3, a1, (_DWORD)v10, 0, 0LL, 0LL);
          LODWORD(v20) = v179;
        }
      }
      if ( (int)(v169 - (unsigned __int16)v26) > 0 )
      {
        v22 = v23;
      }
      else
      {
        v10 = (unsigned int *)(*v23 - 16);
        v27 = v10[2];
        v221 = v27;
        if ( *v25 )
        {
          v27 ^= *(_DWORD *)(a1 + 136);
          v221 = v27;
          if ( HIBYTE(v27) != ((unsigned __int8)v27 ^ (unsigned __int8)(BYTE1(v27) ^ BYTE2(v27))) )
          {
            RtlpLogHeapFailure(3, a1, (_DWORD)v10, 0, 0LL, 0LL);
            LODWORD(v20) = v179;
          }
        }
        if ( (int)(v169 - (unsigned __int16)v27) <= 0 )
        {
          v22 = (__int64 *)*v23;
        }
        else if ( *i || (_DWORD)v20 != *((_DWORD *)i + 2) - 1 )
        {
          v28 = (unsigned int)v21 >> 5;
          v181 = (unsigned int)v21 >> 5;
          a4 = ((unsigned int)(*((_DWORD *)i + 2) - *((_DWORD *)i + 6)) >> 5) - 1;
          v10 = (unsigned int *)(i[5] + 4 * v28);
          v193 = v10;
          v29 = *v10 & (-1 << (v21 & 0x1F));
          while ( !v29 )
          {
            if ( (unsigned int)v28 > (unsigned int)a4 )
              goto LABEL_47;
            v193 = ++v10;
            v29 = *v10;
            LODWORD(v28) = v28 + 1;
            v181 = v28;
          }
          if ( (_WORD)v29 )
          {
            if ( (_BYTE)v29 )
              v30 = RtlpBitsClearLow[(unsigned __int8)v29];
            else
              v30 = RtlpBitsClearLow[BYTE1(v29)] + 8;
          }
          else if ( (v29 & 0xFF0000) != 0 )
          {
            v30 = RtlpBitsClearLow[BYTE2(v29)] + 16;
          }
          else
          {
            v30 = RtlpBitsClearLow[(unsigned __int64)v29 >> 24] + 24;
          }
          v31 = (unsigned int)(v30 + 32 * v28);
          v181 = v31;
          if ( *((_DWORD *)i + 3) )
            v31 = (unsigned int)(2 * v31);
          v22 = *(__int64 **)(i[6] + 8 * v31);
        }
        else
        {
          if ( *((_DWORD *)i + 3) )
            v21 = (unsigned int)(2 * v21);
          for ( j = *(__int64 **)(i[6] + 8 * v21); v23 != j; j = (__int64 *)*j )
          {
            v10 = (unsigned int *)(j - 2);
            v75 = *((_DWORD *)j - 2);
            v222 = v75;
            if ( *v25 )
            {
              v75 ^= *(_DWORD *)(a1 + 136);
              v222 = v75;
              if ( HIBYTE(v75) != ((unsigned __int8)v75 ^ (unsigned __int8)(BYTE1(v75) ^ BYTE2(v75))) )
                RtlpLogHeapFailure(3, a1, (_DWORD)v10, 0, 0LL, 0LL);
            }
            if ( (int)(v169 - (unsigned __int16)v75) <= 0 )
            {
              v22 = j;
              break;
            }
          }
        }
      }
    }
LABEL_47:
    if ( v22 )
      break;
    i = (__int64 *)*i;
    v20 = *((unsigned int *)i + 6);
    v179 = v20;
    v190 = v20;
  }
  if ( v194 == v22 )
  {
    v12 = v169;
  }
  else
  {
    v32 = (char *)(v22 - 2);
    v184 = (char *)(v22 - 2);
    if ( *v25 )
    {
      v33 = *((_DWORD *)v32 + 2) ^ *(_DWORD *)(a1 + 136);
      *((_DWORD *)v32 + 2) = v33;
      if ( HIBYTE(v33) != ((unsigned __int8)v33 ^ (unsigned __int8)(BYTE1(v33) ^ BYTE2(v33))) )
        RtlpAnalyzeHeapFailure(a1, v22 - 2, v10);
    }
    v34 = *((unsigned __int16 *)v32 + 4);
    v12 = v169;
    if ( v34 >= v169 )
    {
      v35 = *v22;
      v36 = (__int64 *)*((_QWORD *)v32 + 3);
      v37 = *v36;
      v38 = *(_QWORD *)(*v22 + 8);
      if ( *v36 != v38 || (__int64 *)v37 != v22 )
      {
        RtlpLogHeapFailure(13, a1, (_DWORD)v22, v38, v37, 0LL);
        goto LABEL_404;
      }
      *(_QWORD *)(a1 + 192) -= v34;
      v39 = *(__int64 ***)(a1 + 312);
      if ( v39 )
      {
        v40 = *((unsigned __int16 *)v32 + 4);
        while ( 1 )
        {
          v41 = *((unsigned int *)v39 + 2);
          if ( v40 < v41 )
            break;
          if ( !*v39 )
          {
            v40 = (unsigned int)(v41 - 1);
            break;
          }
          v39 = (__int64 **)*v39;
        }
        v169 = v40;
        LOBYTE(v10) = 1;
        RtlpHeapRemoveListEntry(a1, (_DWORD)v39, (_DWORD)v10, (_DWORD)v22, v40, *((unsigned __int16 *)v32 + 4));
      }
      *v36 = v35;
      *(_QWORD *)(v35 + 8) = v36;
LABEL_62:
      if ( (v32[10] & 8) != 0 && !(unsigned __int8)RtlpCommitBlock(a1, v32) )
      {
        LOBYTE(v96) = 1;
        RtlpDeCommitFreeBlock(a1, v32, *((unsigned __int16 *)v32 + 4), v96);
        goto LABEL_404;
      }
      goto LABEL_63;
    }
    if ( *v25 )
    {
      v32[11] = v34 ^ v32[10] ^ BYTE1(v34);
      *((_DWORD *)v32 + 2) ^= *(_DWORD *)(a1 + 136);
    }
  }
  v85 = (_QWORD *)RtlpExtendHeap(a1, v229, v10, a4);
  v32 = (char *)v85;
  v184 = (char *)v85;
  if ( !v85 )
  {
LABEL_226:
    v172 = 0LL;
    goto LABEL_404;
  }
  v86 = v85 + 2;
  v87 = v85[2];
  v88 = (__int64 *)v85[3];
  v89 = *v88;
  v90 = *(_QWORD *)(v87 + 8);
  if ( *v88 == v90 && (_QWORD *)v89 == v86 )
  {
    *(_QWORD *)(a1 + 192) -= *((unsigned __int16 *)v32 + 4);
    v91 = *(__int64 ***)(a1 + 312);
    if ( v91 )
    {
      v92 = *((unsigned __int16 *)v32 + 4);
      while ( 1 )
      {
        v93 = *((unsigned int *)v91 + 2);
        if ( v92 < v93 )
          break;
        if ( !*v91 )
        {
          v92 = (unsigned int)(v93 - 1);
          break;
        }
        v91 = (__int64 **)*v91;
      }
      v195 = v92;
      v94 = (int)v86;
      LOBYTE(v86) = 1;
      RtlpHeapRemoveListEntry(a1, (_DWORD)v91, (_DWORD)v86, v94, v92, *((unsigned __int16 *)v32 + 4));
    }
    *v88 = v87;
    *(_QWORD *)(v87 + 8) = v88;
    goto LABEL_62;
  }
  RtlpLogHeapFailure(13, a1, (_DWORD)v86, v90, v89, 0LL);
LABEL_404:
  if ( v167 )
  {
    if ( !v173 && v172 )
      RtlpUpdateHeapWatermarks(a1, a2);
    v161 = *(_QWORD *)(a1 + 352);
    if ( (*(_DWORD *)(v161 + 12))-- == 1 )
    {
      *(_QWORD *)(v161 + 16) = 0LL;
      v163 = _InterlockedCompareExchange((volatile signed __int32 *)(v161 + 8), -1, -2);
      if ( v163 != -2 )
      {
        if ( (*(_BYTE *)(v161 + 8) & 1) != 0 )
          RtlpNotOwnerCriticalSection(v161);
        v164 = *(_QWORD *)(v161 + 24);
        if ( !v164 )
          v164 = RtlpCreateDeferredCriticalSectionEvent(v161);
        v227 = 0;
        while ( v163 != _InterlockedCompareExchange((volatile signed __int32 *)(v161 + 8), (v163 & 2 | 1) + v163, v163) )
        {
          RtlBackoff(&v227);
          _m_prefetchw((const void *)(v161 + 8));
          v163 = *(_DWORD *)(v161 + 8);
        }
        if ( (v163 & 2) != 0 )
          RtlpUnWaitCriticalSectionEx(v161, v164);
      }
    }
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v156 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v156 = 2147353480LL;
  v157 = v172;
  if ( *(_BYTE *)v156 && v172 )
  {
    if ( v173 )
      RtlpHeapLogRangeReserve(a1, v173 & 0xFFFFFFFFFFFF0000uLL, *(_QWORD *)(v173 + 40));
  }
  return (__int64)v157;
}
