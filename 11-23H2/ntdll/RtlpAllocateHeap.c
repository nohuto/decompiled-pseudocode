/*
 * XREFs of RtlpAllocateHeap @ 0x18003F1C0
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18003CC00 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x180029FB0 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlBackoff @ 0x180033E20 (RtlBackoff.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x180041C90 (RtlpHeapGenerateRandomValue32.c)
 *     RtlTryEnterCriticalSection @ 0x180043ED0 (RtlTryEnterCriticalSection.c)
 *     RtlpFindEntry @ 0x180044770 (RtlpFindEntry.c)
 *     RtlpInsertFreeBlock @ 0x1800447F0 (RtlpInsertFreeBlock.c)
 *     RtlpHeapAddListEntry @ 0x180044D74 (RtlpHeapAddListEntry.c)
 *     RtlpDeCommitFreeBlock @ 0x180044F5C (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x180045D18 (RtlpExtendHeap.c)
 *     RtlpCommitBlock @ 0x1800467BC (RtlpCommitBlock.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x180047224 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpHeapRemoveListEntry @ 0x180048FDC (RtlpHeapRemoveListEntry.c)
 *     RtlpPerformHeapMaintenance @ 0x18004A524 (RtlpPerformHeapMaintenance.c)
 *     RtlNtStatusToDosError @ 0x1800536B0 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180053910 (DbgPrint.c)
 *     RtlLogStackBackTraceEx @ 0x18005CDB4 (RtlLogStackBackTraceEx.c)
 *     RtlpGetLFHContext @ 0x1800737B4 (RtlpGetLFHContext.c)
 *     RtlpGetExtraStuffPointer @ 0x180076BA4 (RtlpGetExtraStuffPointer.c)
 *     RtlpUpdateHeapRates @ 0x18007DA78 (RtlpUpdateHeapRates.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x180082D7C (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180083460 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpUpdateHeapWatermarks @ 0x18008A3D4 (RtlpUpdateHeapWatermarks.c)
 *     RtlCompareMemoryUlong @ 0x1800A5AA0 (RtlCompareMemoryUlong.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F4D50 (RtlpNotOwnerCriticalSection.c)
 *     RtlpUpdateTagEntry @ 0x18010143C (RtlpUpdateTagEntry.c)
 *     RtlDebugAllocateHeap @ 0x180105270 (RtlDebugAllocateHeap.c)
 *     RtlpBreakPointHeap @ 0x180107DF8 (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1801163A4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapLogRangeReserve @ 0x1801168F4 (RtlpHeapLogRangeReserve.c)
 *     RtlpLogHeapCommit @ 0x180118440 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x1801186D4 (RtlpLogHeapExtendEvent.c)
 *     RtlpLogHeapFailure @ 0x1801229C0 (RtlpLogHeapFailure.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
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
  unsigned int v29; // r9d
  unsigned int v30; // edx
  int v31; // ecx
  __int64 v32; // rdi
  char *v33; // rsi
  int v34; // edx
  unsigned __int64 v35; // rcx
  __int64 v36; // r13
  __int64 *v37; // r12
  __int64 v38; // rax
  __int64 v39; // r9
  __int64 **v40; // rdx
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rax
  _BYTE *v43; // r12
  char v44; // r13
  unsigned int v45; // r10d
  unsigned __int64 v46; // rdi
  unsigned __int64 v47; // r9
  unsigned __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  char v51; // r12
  __int64 v52; // rax
  unsigned __int64 v53; // r9
  char *v54; // r14
  __int64 v55; // rdx
  unsigned __int64 v56; // r15
  char *v57; // r15
  unsigned __int64 *v58; // r15
  unsigned __int64 v59; // r8
  int v60; // eax
  unsigned __int64 *v61; // r15
  __int64 *v62; // rax
  __int64 **v63; // rdx
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rdi
  int v66; // r9d
  unsigned __int16 v67; // cx
  __int64 v68; // r8
  unsigned int v69; // eax
  unsigned int v70; // ecx
  unsigned int v71; // eax
  __int64 v72; // rdi
  int v73; // eax
  signed __int32 v74; // esi
  __int64 *j; // r15
  int v76; // edi
  int v77; // edx
  __int64 v78; // r14
  __int64 *v79; // r12
  __int64 v80; // rax
  __int64 v81; // r9
  unsigned int *v82; // rdx
  unsigned __int64 v83; // rcx
  unsigned __int64 v84; // rax
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
  __int64 v96; // rdx
  __int64 v97; // rcx
  unsigned __int16 LFHContext; // ax
  SIZE_T v99; // rdi
  SIZE_T v100; // r14
  unsigned int v101; // r14d
  _OWORD *ExtraStuffPointer; // rdi
  unsigned __int64 v103; // r8
  char *v104; // r9
  unsigned __int64 v105; // r8
  void *DeferredCriticalSectionEvent; // r14
  __int64 v107; // rcx
  __int64 v108; // r8
  unsigned __int64 v109; // rcx
  __int64 v110; // rdi
  __int64 v111; // rsi
  __int64 v112; // rcx
  __int64 v113; // rcx
  __int64 v114; // rsi
  __int64 v115; // rcx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 *v118; // rax
  __int64 v119; // rdi
  unsigned __int64 v120; // r15
  _QWORD *v121; // rdi
  _QWORD *v122; // r8
  int v123; // eax
  _QWORD *v124; // rdi
  __int64 *v125; // rax
  unsigned __int64 v126; // rcx
  unsigned int v127; // eax
  int v128; // edx
  char *v129; // r8
  __int64 v130; // r13
  __int64 *v131; // rdx
  __int64 v132; // rax
  __int64 v133; // r9
  __int64 **v134; // r10
  SIZE_T v135; // rcx
  SIZE_T v136; // rdx
  unsigned __int64 v137; // r8
  unsigned __int64 v138; // r15
  _QWORD *v139; // rdi
  _QWORD *Entry; // r8
  __int64 *v141; // rax
  _DWORD *v142; // r8
  unsigned __int64 v143; // rdx
  char v144; // al
  SIZE_T v145; // r13
  int v146; // eax
  _DWORD *v147; // r8
  unsigned __int64 v148; // rdx
  _QWORD *v149; // rdi
  _QWORD *v150; // r8
  int v151; // eax
  __int64 *v152; // rax
  _DWORD *SharedData; // rcx
  __int64 v154; // rcx
  void *v155; // rdi
  __int64 v157; // rax
  unsigned __int64 v158; // r15
  __int64 v159; // rdi
  signed __int32 v161; // esi
  void *v162; // r14
  int TraceHandle; // [rsp+20h] [rbp-238h]
  int v164; // [rsp+28h] [rbp-230h]
  char v165; // [rsp+30h] [rbp-228h]
  unsigned int v166; // [rsp+34h] [rbp-224h] BYREF
  unsigned __int64 v167; // [rsp+38h] [rbp-220h]
  char v168; // [rsp+40h] [rbp-218h]
  char v169; // [rsp+41h] [rbp-217h]
  void *v170; // [rsp+48h] [rbp-210h]
  int v171[2]; // [rsp+50h] [rbp-208h]
  unsigned __int64 v172; // [rsp+58h] [rbp-200h]
  __int16 v173; // [rsp+60h] [rbp-1F8h]
  __int16 v174; // [rsp+62h] [rbp-1F6h]
  __int16 v175; // [rsp+64h] [rbp-1F4h]
  __int16 v176; // [rsp+66h] [rbp-1F2h]
  unsigned __int64 v177; // [rsp+68h] [rbp-1F0h]
  int v178; // [rsp+70h] [rbp-1E8h]
  unsigned int v179; // [rsp+74h] [rbp-1E4h]
  int v180; // [rsp+78h] [rbp-1E0h]
  __int64 v181; // [rsp+80h] [rbp-1D8h]
  char *v182; // [rsp+90h] [rbp-1C8h]
  __int64 *v183; // [rsp+98h] [rbp-1C0h]
  SIZE_T v184; // [rsp+A0h] [rbp-1B8h]
  unsigned __int64 v185; // [rsp+A8h] [rbp-1B0h]
  unsigned __int64 v186; // [rsp+B0h] [rbp-1A8h]
  char *v187; // [rsp+B8h] [rbp-1A0h]
  unsigned __int64 v188; // [rsp+C0h] [rbp-198h]
  unsigned __int64 v189; // [rsp+C8h] [rbp-190h]
  unsigned int NtGlobalFlag; // [rsp+D0h] [rbp-188h]
  unsigned int *v191; // [rsp+D8h] [rbp-180h]
  __int64 *v192; // [rsp+E0h] [rbp-178h]
  unsigned __int64 v193; // [rsp+E8h] [rbp-170h]
  SIZE_T v194; // [rsp+F0h] [rbp-168h]
  unsigned __int64 v195; // [rsp+F8h] [rbp-160h]
  char *v196; // [rsp+100h] [rbp-158h]
  unsigned int v197; // [rsp+108h] [rbp-150h]
  unsigned int v198; // [rsp+10Ch] [rbp-14Ch]
  SIZE_T v199; // [rsp+110h] [rbp-148h]
  unsigned __int64 v200; // [rsp+118h] [rbp-140h]
  unsigned __int64 v201; // [rsp+120h] [rbp-138h]
  char *v202; // [rsp+128h] [rbp-130h]
  unsigned __int64 v203; // [rsp+130h] [rbp-128h]
  void *v204; // [rsp+138h] [rbp-120h]
  _OWORD *v205; // [rsp+140h] [rbp-118h]
  __int64 v206; // [rsp+148h] [rbp-110h] BYREF
  struct _TEB *v207; // [rsp+150h] [rbp-108h]
  struct _TEB *v208; // [rsp+158h] [rbp-100h]
  unsigned __int16 *v209; // [rsp+160h] [rbp-F8h]
  struct _TEB *v210; // [rsp+168h] [rbp-F0h]
  struct _TEB *v211; // [rsp+170h] [rbp-E8h]
  unsigned __int64 v212; // [rsp+178h] [rbp-E0h]
  unsigned __int64 v213; // [rsp+180h] [rbp-D8h]
  unsigned __int64 v214; // [rsp+188h] [rbp-D0h]
  struct _TEB *v215; // [rsp+190h] [rbp-C8h]
  struct _TEB *v216; // [rsp+198h] [rbp-C0h]
  __int64 v217; // [rsp+1A0h] [rbp-B8h]
  int v218; // [rsp+1B0h] [rbp-A8h]
  unsigned int v219; // [rsp+1C0h] [rbp-98h]
  int v220; // [rsp+1D0h] [rbp-88h]
  int v221; // [rsp+1E0h] [rbp-78h]
  int v222; // [rsp+1F0h] [rbp-68h]
  int v223; // [rsp+200h] [rbp-58h]
  int v224; // [rsp+210h] [rbp-48h]
  unsigned int v225; // [rsp+268h] [rbp+10h] BYREF
  unsigned __int64 v226; // [rsp+270h] [rbp+18h]
  unsigned __int64 v227; // [rsp+278h] [rbp+20h] BYREF

  v227 = a4;
  v226 = a3;
  v225 = a2;
  v8 = a2;
  v166 = 1;
  v165 = 0;
  v10 = 0LL;
  v170 = 0LL;
  *(_QWORD *)v171 = 0LL;
  v178 = 0;
  v11 = a4 >> 4;
  if ( (a2 & 0x7D010F60) != 0 || a3 >= 0x80000000 )
  {
    v166 = 0;
    *a6 = 4;
    if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
      return 0LL;
    if ( (a2 & 0x61000000) != 0 && (a2 & 0x10000000) == 0 )
      return (void *)RtlDebugAllocateHeap((void *)a1);
    if ( a3 )
      v157 = a3;
    else
      v157 = 1LL;
    v158 = *(_QWORD *)(a1 + 264) & (v157 + *(_QWORD *)(a1 + 256));
    if ( v158 < 0x20 )
      v158 = 32LL;
    v227 = v158;
    v6 = (unsigned int)a2 >> 4;
    LOBYTE(v6) = ((unsigned int)a2 >> 4) & 0xE0 | 1;
    LODWORD(v172) = v6;
    if ( (a2 & 0x3C000100) != 0 || *(_QWORD *)(a1 + 328) )
    {
      LOBYTE(v6) = ((unsigned int)a2 >> 4) & 0xE0 | 3;
      LODWORD(v172) = v6;
      v158 += 16LL;
      v227 = v158;
    }
    v12 = v158 >> 4;
    v167 = v12;
  }
  else
  {
    LOBYTE(v6) = 1;
    LODWORD(v172) = v6;
    v12 = a4 >> 4;
    v167 = a4 >> 4;
    if ( v11 < 2 )
    {
      v227 += 16LL;
      v12 = 2LL;
      v167 = 2LL;
    }
    *a6 = 3;
  }
  if ( (a2 & 0x800000) != 0 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
    LOBYTE(v6) = v6 | 8;
    LODWORD(v172) = v6;
  }
  if ( (a2 & 1) == 0 )
  {
    if ( RtlTryEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352)) )
    {
      ++*(_DWORD *)(a1 + 616);
    }
    else
    {
      if ( byte_180187488 )
      {
        v207 = NtCurrentTeb();
        v207->LastStatusValue = -1073741420;
        v208 = NtCurrentTeb();
        v208->LastErrorValue = RtlNtStatusToDosError(-1073741420);
        goto LABEL_404;
      }
      v178 = 1;
      RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      RtlpUpdateHeapRates(a1, 1LL);
    }
    v165 = 1;
    if ( (*(_DWORD *)(a1 + 120) & 0x30000000) != 0 )
      RtlpPerformHeapMaintenance(a1);
    v10 = 0LL;
  }
  if ( v12 > *(unsigned int *)(a1 + 148) )
  {
    if ( (*(_BYTE *)(a1 + 112) & 2) != 0 )
    {
      v227 += 56LL;
      if ( (unsigned int)RtlpHpHeapCheckCommitLimit(
                           (v227 + 4095) & 0xFFFFFFFFFFFFF000uLL,
                           *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664),
                           a1,
                           a1 + 376) )
      {
        v217 = (RtlpHeapGenerateRandomValue32(v107, a2, v108) & 0xF) << 12;
        *(_QWORD *)v171 = RtlpHpAllocVirtBlockCommitFirst(a1, &v227, v217, &v206);
        if ( *(_QWORD *)v171 )
        {
          v109 = v227;
          v110 = *(_QWORD *)v171;
          *(_WORD *)(*(_QWORD *)v171 + 56LL) = v227 - a3;
          *(_BYTE *)(v110 + 58) = v6 | 2;
          *(_QWORD *)(v110 + 32) = v109;
          *(_QWORD *)(v110 + 40) = v206;
          *(_BYTE *)(v110 + 63) = 4;
          *(_QWORD *)(a1 + 592) += v109;
          v111 = 2147353472LL;
          if ( RtlGetCurrentServiceSessionId() )
            v112 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v112 = 2147353472LL;
          if ( *(_BYTE *)v112 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapCommit(a1, *(_QWORD *)v171, v227, 9LL);
          if ( RtlGetCurrentServiceSessionId() )
            v113 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v113 = 2147353472LL;
          if ( *(_BYTE *)v113 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          {
            if ( RtlGetCurrentServiceSessionId() )
              v111 = (__int64)NtCurrentPeb()->SharedData + 550;
            RtlpLogHeapExtendEvent(a1, v171[0], v227, 16 * *(_QWORD *)(a1 + 192), (HANDLE)*(unsigned __int8 *)v111);
          }
          v114 = 2147353482LL;
          if ( RtlGetCurrentServiceSessionId() )
            v115 = (__int64)NtCurrentPeb()->SharedData + 560;
          else
            v115 = 2147353482LL;
          if ( *(_BYTE *)v115 )
          {
            if ( RtlGetCurrentServiceSessionId() )
              v114 = (__int64)NtCurrentPeb()->SharedData + 560;
            RtlpLogHeapExtendEvent(a1, v171[0], v227, 16 * *(_QWORD *)(a1 + 192), (HANDLE)*(unsigned __int8 *)v114);
          }
          if ( (*(_DWORD *)(a1 + 112) & 0x8000000) != 0 )
            *(_WORD *)(*(_QWORD *)v171 + 16LL) = RtlLogStackBackTraceEx(1LL, a2);
          NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
          if ( (NtGlobalFlag & 0x800) != 0 )
            *(_WORD *)(*(_QWORD *)v171 + 18LL) = RtlpUpdateTagEntry(
                                                   a1,
                                                   (unsigned __int8)(v8 >> 18),
                                                   0,
                                                   *(_QWORD *)(v110 + 32) >> 4,
                                                   1);
          v116 = *(_QWORD *)v171;
          if ( *(_DWORD *)(a1 + 124) )
          {
            *(_BYTE *)(*(_QWORD *)v171 + 59LL) = *(_BYTE *)(*(_QWORD *)v171 + 56LL) ^ *(_BYTE *)(*(_QWORD *)v171 + 57LL) ^ *(_BYTE *)(*(_QWORD *)v171 + 58LL);
            *(_DWORD *)(v116 + 56) ^= *(_DWORD *)(a1 + 136);
          }
          v117 = a1 + 272;
          v118 = *(__int64 **)(a1 + 280);
          if ( *v118 == a1 + 272 )
          {
            v119 = *(_QWORD *)v171;
            **(_QWORD **)v171 = v117;
            *(_QWORD *)(v119 + 8) = v118;
            *v118 = v119;
            *(_QWORD *)(a1 + 280) = v119;
          }
          else
          {
            RtlpLogHeapFailure(13, 0, v117, 0, *v118, 0LL);
          }
          v170 = (void *)(*(_QWORD *)v171 + 64LL);
        }
        else
        {
          v170 = 0LL;
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
        v209 = v15;
        v16 = *v15 + 33;
        *v15 = v16;
        if ( v178 || (v16 & 0x1Fu) > 0x10 || v16 > 0xFF00u )
        {
          if ( a3 )
            v96 = a3;
          else
            v96 = 1LL;
          if ( *(_BYTE *)(a1 + 418) == 2 )
            v97 = *(_QWORD *)(a1 + 408);
          else
            v97 = 0LL;
          LFHContext = RtlpGetLFHContext(v97, v96);
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
      v33 = (char *)(v17 - 2);
      v182 = (char *)(v17 - 2);
      if ( *(_DWORD *)(a1 + 124) )
      {
        v77 = *((_DWORD *)v33 + 2) ^ *(_DWORD *)(a1 + 136);
        *((_DWORD *)v33 + 2) = v77;
        if ( HIBYTE(v77) != ((unsigned __int8)v77 ^ (unsigned __int8)(BYTE1(v77) ^ BYTE2(v77))) )
          RtlpAnalyzeHeapFailure(a1, v17 - 2, v10);
      }
      v78 = *v17;
      v79 = (__int64 *)*((_QWORD *)v33 + 3);
      v80 = *v79;
      v81 = *(_QWORD *)(*v17 + 8);
      if ( *v79 == v81 && (__int64 *)v80 == v17 )
      {
        *(_QWORD *)(a1 + 192) -= *((unsigned __int16 *)v33 + 4);
        v82 = *(unsigned int **)(a1 + 312);
        if ( v82 )
        {
          v83 = *((unsigned __int16 *)v33 + 4);
          while ( 1 )
          {
            v84 = v82[2];
            if ( v83 < v84 )
              break;
            v10 = *(unsigned int **)v82;
            if ( !*(_QWORD *)v82 )
            {
              v83 = (unsigned int)(v84 - 1);
              break;
            }
            v82 = *(unsigned int **)v82;
          }
          v177 = v83;
          LOBYTE(v10) = 1;
          RtlpHeapRemoveListEntry(a1, (_DWORD)v82, (_DWORD)v10, (_DWORD)v17, v83, *((unsigned __int16 *)v33 + 4));
        }
        *v79 = v78;
        *(_QWORD *)(v78 + 8) = v79;
        if ( (v33[10] & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1) )
        {
LABEL_63:
          v43 = v33 + 10;
          v167 = (unsigned __int64)(v33 + 10);
          v44 = v33[10];
          v168 = v44;
          v45 = v166;
          if ( !v166 && (v44 & 4) != 0 )
          {
            v99 = 16LL * *((unsigned __int16 *)v33 + 4) - 32;
            v194 = v99;
            if ( (v44 & 2) != 0 && v99 > 4 )
            {
              v99 -= 4LL;
              v194 = v99;
            }
            v100 = RtlCompareMemoryUlong(v33 + 32, v99, 0xFEEEFEEE);
            if ( v100 != v99 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              v33 = v182;
              DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v182, &v182[v100 + 32]);
              RtlpBreakPointHeap();
              v44 = v168;
            }
            v45 = v166;
          }
          v187 = v33;
          if ( (*v43 & 1) != 0 )
          {
            RtlpLogHeapFailure(3, a1, (_DWORD)v33, 0, 0LL, 0LL);
            goto LABEL_404;
          }
          *v43 = v172;
          v46 = *((unsigned __int16 *)v33 + 4) - v12;
          *((_WORD *)v33 + 4) = v12;
          v47 = v226;
          v48 = v227 - v226;
          v212 = v227 - v226;
          v49 = 16 * v12;
          if ( v227 - v226 >= 0x3F )
          {
            *(_QWORD *)&v33[v49] = v48;
            v33[15] = 63;
          }
          else
          {
            v33[15] = v48;
          }
          v33[11] = 0;
          if ( v46 )
          {
            if ( v46 != 1 )
            {
              v50 = 0LL;
              if ( v45 )
              {
                v51 = 0;
                v180 = 0;
              }
              else
              {
                v51 = 1;
                v180 = 1;
              }
              v52 = (unsigned __int8)v33[14];
              if ( (_BYTE)v52 )
              {
                v53 = ((unsigned __int64)v33 & 0xFFFFFFFFFFFF0000uLL) - (v52 << 16) + 0x10000;
                v195 = v53;
              }
              else
              {
                v53 = a1;
                v195 = a1;
              }
              v200 = v46;
              v54 = &v33[v49];
              LODWORD(v172) = 0;
              v54[10] = v44;
              v54[15] = 0;
              *((_WORD *)v54 + 6) = *(_WORD *)(a1 + 140) ^ v12;
              v55 = *(_QWORD *)(v53 + 40);
              if ( v55 == v53 )
              {
                LOBYTE(v56) = 0;
              }
              else
              {
                v56 = ((unsigned __int64)&v54[-v53] >> 16) + 1;
                v214 = v56;
                if ( v56 >= 0xFE )
                  RtlpLogHeapFailure(3, v55, v49 + (_DWORD)v33, v53, 0LL, 0LL);
              }
              v169 = v56;
              v54[14] = v56;
              v54[11] = 0;
              *((_WORD *)v54 + 4) = v46;
              while ( 1 )
              {
                v57 = &v54[16 * v46];
                if ( (((unsigned __int8)v57[10] ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) != 0 )
                  break;
                if ( *(_DWORD *)(a1 + 124) )
                {
                  v128 = *((_DWORD *)v57 + 2) ^ *(_DWORD *)(a1 + 136);
                  *((_DWORD *)v57 + 2) = v128;
                  if ( HIBYTE(v128) != ((unsigned __int8)v128 ^ (unsigned __int8)(BYTE1(v128) ^ BYTE2(v128))) )
                    RtlpAnalyzeHeapFailure(a1, &v54[16 * v46], v50);
                }
                v129 = v57 + 16;
                v130 = *((_QWORD *)v57 + 2);
                v131 = (__int64 *)*((_QWORD *)v57 + 3);
                v183 = v131;
                v132 = *v131;
                v133 = *(_QWORD *)(v130 + 8);
                if ( *v131 == v133 && (char *)v132 == v129 )
                {
                  *(_QWORD *)(a1 + 192) -= *((unsigned __int16 *)v57 + 4);
                  v134 = *(__int64 ***)(a1 + 312);
                  if ( v134 )
                  {
                    v135 = *((unsigned __int16 *)v57 + 4);
                    while ( 1 )
                    {
                      v136 = *((unsigned int *)v134 + 2);
                      if ( v135 < v136 )
                        break;
                      if ( !*v134 )
                      {
                        v135 = (unsigned int)(v136 - 1);
                        break;
                      }
                      v134 = (__int64 **)*v134;
                    }
                    v184 = v135;
                    LOBYTE(v129) = 1;
                    RtlpHeapRemoveListEntry(
                      a1,
                      (_DWORD)v134,
                      (_DWORD)v129,
                      (_DWORD)v57 + 16,
                      v135,
                      *((unsigned __int16 *)v57 + 4));
                    v131 = v183;
                  }
                  *v131 = v130;
                  *(_QWORD *)(v130 + 8) = v131;
                  if ( (v57[10] & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1) )
                  {
                    if ( v51 )
                    {
                      v144 = v57[10];
                      if ( (v144 & 4) != 0 )
                      {
                        v145 = 16LL * *((unsigned __int16 *)v57 + 4) - 32;
                        v199 = v145;
                        if ( (v144 & 2) != 0 && v145 > 4 )
                        {
                          v145 -= 4LL;
                          v199 = v145;
                        }
                        v184 = RtlCompareMemoryUlong(v57 + 32, v145, 0xFEEEFEEE);
                        if ( v184 != v145 )
                        {
                          if ( NtCurrentPeb()->Ldr )
                            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
                          else
                            DbgPrint("HEAP: ");
                          DbgPrint(
                            "HEAP: Free Heap block %p modified at %p after it was freed\n",
                            &v54[16 * v46],
                            &v57[v184 + 32]);
                          RtlpBreakPointHeap();
                          v51 = v180;
                        }
                      }
                    }
                    v54[10] = v57[10];
                    v137 = v46 + *((unsigned __int16 *)v57 + 4);
                    v200 = v137;
                    if ( v137 > 0xFF00 )
                    {
                      RtlpInsertFreeBlock(a1, v54);
                      v43 = (_BYTE *)v167;
                      goto LABEL_98;
                    }
                    *((_WORD *)v54 + 4) = v137;
                    *(_WORD *)&v54[16 * v137 + 12] = *(_WORD *)(a1 + 140) ^ v137;
                    v138 = (unsigned __int16)v137;
                    if ( !v51 )
                    {
                      v54[10] = 0;
                      v54[15] = 0;
                      v139 = (_QWORD *)(a1 + 336);
                      if ( *(_QWORD *)(a1 + 312) )
                        Entry = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v137);
                      else
                        Entry = (_QWORD *)*v139;
                      while ( v139 != Entry )
                      {
                        if ( *(_DWORD *)(a1 + 124) )
                        {
                          v146 = *((_DWORD *)Entry - 2);
                          v223 = v146;
                          if ( (v146 & *(_DWORD *)(a1 + 124)) != 0 )
                          {
                            v146 ^= *(_DWORD *)(a1 + 136);
                            v223 = v146;
                          }
                        }
                        else
                        {
                          LOWORD(v146) = *((_WORD *)Entry - 4);
                        }
                        v175 = v146;
                        if ( v138 <= (unsigned __int16)v146 )
                          break;
                        Entry = (_QWORD *)*Entry;
                      }
                      v124 = v54 + 16;
                      v141 = (__int64 *)Entry[1];
                      if ( (_QWORD *)*v141 == Entry )
                      {
                        *v124 = Entry;
                        *((_QWORD *)v54 + 3) = v141;
                        *v141 = (__int64)v124;
                        Entry[1] = v124;
                      }
                      else
                      {
                        RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v141, 0LL);
                      }
                      *(_QWORD *)(a1 + 192) += *((unsigned __int16 *)v54 + 4);
                      v63 = *(__int64 ***)(a1 + 312);
                      if ( v63 )
                      {
                        v126 = *((unsigned __int16 *)v54 + 4);
                        while ( 1 )
                        {
                          v59 = *((unsigned int *)v63 + 2);
                          if ( v126 < v59 )
                            break;
                          if ( !*v63 )
                          {
                            v126 = (unsigned int)(v59 - 1);
                            break;
                          }
                          v63 = (__int64 **)*v63;
                        }
                        v201 = v126;
                        goto LABEL_265;
                      }
LABEL_96:
                      v43 = (_BYTE *)v167;
                      if ( *(_DWORD *)(a1 + 124) )
                      {
                        v54[11] = v54[8] ^ v54[9] ^ v54[10];
                        *((_DWORD *)v54 + 2) ^= *(_DWORD *)(a1 + 136);
                      }
LABEL_98:
                      v47 = v226;
                      v45 = v166;
                      goto LABEL_99;
                    }
                    v54[10] &= 0xF0u;
                    v54[15] = 0;
                    if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
                    {
                      v147 = v54 + 32;
                      v202 = v54 + 32;
                      v148 = (16 * v138 - 32) >> 2;
                      v185 = v148;
                      if ( v148 )
                      {
                        if ( ((unsigned __int8)v147 & 4) != 0 )
                        {
                          *v147 = -17891602;
                          v185 = --v148;
                          if ( v148 )
                          {
                            v147 = v54 + 36;
                            v202 = v54 + 36;
                            goto LABEL_361;
                          }
                        }
                        else
                        {
LABEL_361:
                          memset64(v147, 0xFEEEFEEEFEEEFEEEuLL, v148 >> 1);
                          if ( (v148 & 1) != 0 )
                            v147[v148 - 1] = -17891602;
                        }
                      }
                      v54[10] |= 4u;
                    }
                    v149 = (_QWORD *)(a1 + 336);
                    if ( *(_QWORD *)(a1 + 312) )
                      v150 = (_QWORD *)RtlpFindEntry(a1, v138);
                    else
                      v150 = (_QWORD *)*v149;
                    while ( v149 != v150 )
                    {
                      if ( *(_DWORD *)(a1 + 124) )
                      {
                        v151 = *((_DWORD *)v150 - 2);
                        v224 = v151;
                        if ( (v151 & *(_DWORD *)(a1 + 124)) != 0 )
                        {
                          v151 ^= *(_DWORD *)(a1 + 136);
                          v224 = v151;
                        }
                      }
                      else
                      {
                        LOWORD(v151) = *((_WORD *)v150 - 4);
                      }
                      v176 = v151;
                      if ( v138 <= (unsigned __int16)v151 )
                        break;
                      v150 = (_QWORD *)*v150;
                    }
                    v124 = v54 + 16;
                    v152 = (__int64 *)v150[1];
                    if ( (_QWORD *)*v152 == v150 )
                    {
                      *v124 = v150;
                      *((_QWORD *)v54 + 3) = v152;
                      *v152 = (__int64)v124;
                      v150[1] = v124;
                    }
                    else
                    {
                      RtlpLogHeapFailure(13, 0, (_DWORD)v150, 0, *v152, 0LL);
                    }
                    *(_QWORD *)(a1 + 192) += *((unsigned __int16 *)v54 + 4);
                    v63 = *(__int64 ***)(a1 + 312);
                    if ( !v63 )
                      goto LABEL_96;
                    v126 = *((unsigned __int16 *)v54 + 4);
                    while ( 1 )
                    {
                      v59 = *((unsigned int *)v63 + 2);
                      if ( v126 < v59 )
                        break;
                      if ( !*v63 )
                      {
                        v126 = (unsigned int)(v59 - 1);
                        break;
                      }
                      v63 = (__int64 **)*v63;
                    }
                    v203 = v126;
LABEL_265:
                    v164 = *((unsigned __int16 *)v54 + 4);
                    TraceHandle = v126;
                    v66 = (int)v124;
LABEL_95:
                    LOBYTE(v59) = 1;
                    RtlpHeapAddListEntry(a1, (_DWORD)v63, v59, v66, TraceHandle, v164);
                    goto LABEL_96;
                  }
                  RtlpDeCommitFreeBlock(a1);
                }
                else
                {
                  RtlpLogHeapFailure(13, a1, (_DWORD)v129, v133, v132, 0LL);
                }
                if ( (_DWORD)v172 )
                {
                  v215 = NtCurrentTeb();
                  v215->LastStatusValue = -1073741764;
                  v216 = NtCurrentTeb();
                  v216->LastErrorValue = RtlNtStatusToDosError(-1073741764);
                  goto LABEL_404;
                }
                LODWORD(v172) = 1;
              }
              *((_WORD *)v57 + 6) = *(_WORD *)(a1 + 140) ^ v46;
              if ( !v51 )
              {
                v54[10] = 0;
                v54[15] = 0;
                v58 = (unsigned __int64 *)(a1 + 336);
                if ( *(_QWORD *)(a1 + 312) )
                  v59 = RtlpFindEntry(a1, (unsigned __int16)v46);
                else
                  v59 = *v58;
                while ( v58 != (unsigned __int64 *)v59 )
                {
                  if ( *(_DWORD *)(a1 + 124) )
                  {
                    v60 = *(_DWORD *)(v59 - 8);
                    v221 = v60;
                    if ( (v60 & *(_DWORD *)(a1 + 124)) != 0 )
                    {
                      v60 ^= *(_DWORD *)(a1 + 136);
                      v221 = v60;
                    }
                  }
                  else
                  {
                    LOWORD(v60) = *(_WORD *)(v59 - 8);
                  }
                  v173 = v60;
                  if ( (unsigned __int16)v46 <= (unsigned __int64)(unsigned __int16)v60 )
                    break;
                  v59 = *(_QWORD *)v59;
                }
                v61 = (unsigned __int64 *)(v54 + 16);
                v62 = *(__int64 **)(v59 + 8);
                if ( *v62 == v59 )
                {
                  *v61 = v59;
                  *((_QWORD *)v54 + 3) = v62;
                  *v62 = (__int64)v61;
                  *(_QWORD *)(v59 + 8) = v61;
                }
                else
                {
                  RtlpLogHeapFailure(13, 0, v59, 0, *v62, 0LL);
                }
                *(_QWORD *)(a1 + 192) += *((unsigned __int16 *)v54 + 4);
                v63 = *(__int64 ***)(a1 + 312);
                if ( !v63 )
                  goto LABEL_96;
                v64 = *((unsigned __int16 *)v54 + 4);
                while ( 1 )
                {
                  v65 = *((unsigned int *)v63 + 2);
                  if ( v64 < v65 )
                    break;
                  if ( !*v63 )
                  {
                    v64 = (unsigned int)(v65 - 1);
                    break;
                  }
                  v63 = (__int64 **)*v63;
                }
                v172 = v64;
                v164 = *((unsigned __int16 *)v54 + 4);
                TraceHandle = v64;
                v66 = (_DWORD)v54 + 16;
                goto LABEL_95;
              }
              v120 = (unsigned __int16)v46;
              v54[10] &= 0xF0u;
              v54[15] = 0;
              if ( (*(_BYTE *)(a1 + 112) & 0x40) == 0 )
              {
LABEL_251:
                v121 = (_QWORD *)(a1 + 336);
                if ( *(_QWORD *)(a1 + 312) )
                  v122 = (_QWORD *)RtlpFindEntry(a1, v120);
                else
                  v122 = (_QWORD *)*v121;
                while ( v121 != v122 )
                {
                  if ( *(_DWORD *)(a1 + 124) )
                  {
                    v123 = *((_DWORD *)v122 - 2);
                    v222 = v123;
                    if ( (v123 & *(_DWORD *)(a1 + 124)) != 0 )
                    {
                      v123 ^= *(_DWORD *)(a1 + 136);
                      v222 = v123;
                    }
                  }
                  else
                  {
                    LOWORD(v123) = *((_WORD *)v122 - 4);
                  }
                  v174 = v123;
                  if ( v120 <= (unsigned __int16)v123 )
                    break;
                  v122 = (_QWORD *)*v122;
                }
                v124 = v54 + 16;
                v125 = (__int64 *)v122[1];
                if ( (_QWORD *)*v125 == v122 )
                {
                  *v124 = v122;
                  *((_QWORD *)v54 + 3) = v125;
                  *v125 = (__int64)v124;
                  v122[1] = v124;
                }
                else
                {
                  RtlpLogHeapFailure(13, 0, (_DWORD)v122, 0, *v125, 0LL);
                }
                *(_QWORD *)(a1 + 192) += *((unsigned __int16 *)v54 + 4);
                v63 = *(__int64 ***)(a1 + 312);
                if ( v63 )
                {
                  v126 = *((unsigned __int16 *)v54 + 4);
                  while ( 1 )
                  {
                    v59 = *((unsigned int *)v63 + 2);
                    if ( v126 < v59 )
                      break;
                    if ( !*v63 )
                    {
                      v126 = (unsigned int)(v59 - 1);
                      break;
                    }
                    v63 = (__int64 **)*v63;
                  }
                  v183 = (__int64 *)v126;
                  goto LABEL_265;
                }
                goto LABEL_96;
              }
              v142 = v54 + 32;
              v196 = v54 + 32;
              v143 = (16 * (unsigned __int64)(unsigned __int16)v46 - 32) >> 2;
              v189 = v143;
              if ( v143 )
              {
                if ( ((unsigned __int8)v142 & 4) == 0 )
                  goto LABEL_337;
                *v142 = -17891602;
                v189 = --v143;
                if ( v143 )
                {
                  v142 = v54 + 36;
                  v196 = v54 + 36;
LABEL_337:
                  memset64(v142, 0xFEEEFEEEFEEEFEEEuLL, v143 >> 1);
                  if ( (v143 & 1) != 0 )
                    v142[v143 - 1] = -17891602;
                }
              }
              v54[10] |= 4u;
              goto LABEL_251;
            }
            ++*((_WORD *)v33 + 4);
            v95 = v227 - v47 + 16;
            v213 = v95;
            if ( v95 >= 0x3F )
            {
              *(_QWORD *)&v33[v49 + 16] = v95;
              v33[15] = 63;
            }
            else
            {
              v33[15] = v95;
            }
          }
LABEL_99:
          v170 = v187 + 16;
          v67 = *((_WORD *)v33 + 4);
          a2 = v67;
          LOWORD(a2) = HIBYTE(v67);
          v68 = 16LL * v67;
          v181 = v68;
          if ( (v33[15] & 0x3F) == 0x3F )
          {
            v68 -= 8LL;
            v181 = v68;
          }
          if ( v45 )
          {
            if ( *(_DWORD *)(a1 + 124) )
            {
              v33[11] = *v43 ^ HIBYTE(v67) ^ v67;
              *((_DWORD *)v33 + 2) ^= *(_DWORD *)(a1 + 136);
            }
            if ( v165 )
            {
              if ( (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
              {
                v69 = *(_DWORD *)(a1 + 640) + 1;
                *(_DWORD *)(a1 + 640) = v69;
                v70 = *(_DWORD *)(a1 + 648);
                if ( v69 > v70 )
                {
                  *(_DWORD *)(a1 + 640) = 0;
                  a2 = *(_QWORD *)(a1 + 576) - 16LL * *(_QWORD *)(a1 + 192);
                  if ( a2 > *(_QWORD *)(a1 + 672) )
                    *(_QWORD *)(a1 + 672) = a2;
                  *(_QWORD *)(a1 + 680) = a2;
                }
                v71 = *(_DWORD *)(a1 + 652) + 1;
                *(_DWORD *)(a1 + 652) = v71;
                if ( v71 >= 0x1000 )
                {
                  if ( *(_BYTE *)(a1 + 418) == 2 && *(_DWORD *)(a1 + 656) > 0x10u )
                    v127 = 256;
                  else
                    v127 = 16;
                  if ( *(_DWORD *)(a1 + 644) > v127 && v70 < 0x10000 )
                    *(_DWORD *)(a1 + 648) = 2 * v70;
                  *(_DWORD *)(a1 + 644) = 0;
                  *(_DWORD *)(a1 + 652) = 0;
                }
              }
              v72 = *(_QWORD *)(a1 + 352);
              v73 = *(_DWORD *)(v72 + 12) - 1;
              *(_DWORD *)(v72 + 12) = v73;
              if ( !v73 )
              {
                *(_QWORD *)(v72 + 16) = 0LL;
                v74 = _InterlockedCompareExchange((volatile signed __int32 *)(v72 + 8), -1, -2);
                if ( v74 != -2 )
                {
                  if ( (*(_BYTE *)(v72 + 8) & 1) != 0 )
                    RtlpNotOwnerCriticalSection(v72);
                  DeferredCriticalSectionEvent = *(void **)(v72 + 24);
                  if ( !DeferredCriticalSectionEvent )
                    DeferredCriticalSectionEvent = (void *)RtlpCreateDeferredCriticalSectionEvent(v72);
                  v166 = 0;
                  while ( 1 )
                  {
                    a2 = v74 + (v74 & 2 | 1u);
                    if ( v74 == _InterlockedCompareExchange((volatile signed __int32 *)(v72 + 8), a2, v74) )
                      break;
                    RtlBackoff(&v166);
                    _m_prefetchw((const void *)(v72 + 8));
                    v74 = *(_DWORD *)(v72 + 8);
                  }
                  if ( (v74 & 2) != 0 )
                    RtlpUnWaitCriticalSectionEx(v72, DeferredCriticalSectionEvent);
                }
                v68 = v181;
              }
              v165 = 0;
            }
            if ( (v225 & 8) != 0 )
              memset_thunk_772440563353939046(v170, 0, v68 - 8);
            goto LABEL_404;
          }
          v101 = v225;
          if ( (v225 & 8) != 0 )
          {
            memset_thunk_772440563353939046(v170, 0, v68 - 8);
          }
          else
          {
            a2 = a1 + 112;
            if ( (*(_BYTE *)(a1 + 112) & 0x40) == 0 )
              goto LABEL_199;
            v103 = v47 & 0xFFFFFFFFFFFFFFFCuLL;
            v104 = (char *)v170;
            v204 = v170;
            v105 = v103 >> 2;
            v186 = v105;
            a2 = a1 + 112;
            if ( !v105 )
              goto LABEL_199;
            if ( ((unsigned __int8)v170 & 4) != 0 )
            {
              *(_DWORD *)v170 = -1163005939;
              v186 = --v105;
              a2 = a1 + 112;
              if ( !v105 )
                goto LABEL_199;
              v104 += 4;
              v204 = v104;
            }
            memset64(v104, 0xBAADF00DBAADF00DuLL, v105 >> 1);
            a2 = a1 + 112;
            if ( (v105 & 1) == 0 )
              goto LABEL_199;
            *(_DWORD *)&v104[4 * v105 - 4] = -1163005939;
          }
          a2 = a1 + 112;
LABEL_199:
          if ( (*(_BYTE *)a2 & 0x20) != 0 )
          {
            *(__m128i *)((char *)v170 + v226) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
            *v43 |= 4u;
          }
          v33[11] = 0;
          if ( (*v43 & 2) != 0 )
          {
            ExtraStuffPointer = (_OWORD *)RtlpGetExtraStuffPointer(v187);
            v205 = ExtraStuffPointer;
            *ExtraStuffPointer = 0LL;
            if ( (*(_DWORD *)a2 & 0x8000000) != 0 )
              *(_WORD *)ExtraStuffPointer = RtlLogStackBackTraceEx(1LL, a2);
            v197 = NtCurrentPeb()->NtGlobalFlag;
            if ( (v197 & 0x800) != 0 )
              *((_WORD *)v205 + 1) = RtlpUpdateTagEntry(a1, (v101 >> 18) & 0xFFF, 0, *((unsigned __int16 *)v33 + 4), 0);
          }
          else
          {
            v198 = NtCurrentPeb()->NtGlobalFlag;
            if ( (v198 & 0x800) != 0 )
              v33[11] = RtlpUpdateTagEntry(a1, (unsigned __int8)(v101 >> 18), 0, *((unsigned __int16 *)v33 + 4), 0);
          }
          if ( *(_DWORD *)(a1 + 124) )
          {
            v33[11] = v33[8] ^ v33[9] ^ v33[10];
            *((_DWORD *)v33 + 2) ^= *(_DWORD *)(a1 + 136);
          }
          goto LABEL_404;
        }
        RtlpDeCommitFreeBlock(a1);
      }
      else
      {
        RtlpLogHeapFailure(13, a1, (_DWORD)v17, v81, v80, 0LL);
      }
      v210 = NtCurrentTeb();
      v210->LastStatusValue = -1073741801;
      v211 = NtCurrentTeb();
      v211->LastErrorValue = RtlNtStatusToDosError(-1073741801);
      goto LABEL_404;
    }
  }
  v192 = (__int64 *)(a1 + 336);
  for ( i = *(__int64 **)(a1 + 312); ; i = (__int64 *)*i )
  {
    v19 = *((unsigned int *)i + 2);
    if ( v12 < v19 )
    {
      v188 = v12;
      v20 = (unsigned int)v12;
      goto LABEL_26;
    }
    if ( !*i )
      break;
  }
  v20 = (unsigned int)(v19 - 1);
  v188 = v20;
LABEL_26:
  v177 = v20;
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
      v218 = v26;
      if ( *v25 )
      {
        v26 ^= *(_DWORD *)(a1 + 136);
        v218 = v26;
        if ( HIBYTE(v26) != ((unsigned __int8)v26 ^ (unsigned __int8)(BYTE1(v26) ^ BYTE2(v26))) )
        {
          RtlpLogHeapFailure(3, a1, (_DWORD)v10, 0, 0LL, 0LL);
          LODWORD(v20) = v177;
        }
      }
      if ( (int)(v167 - (unsigned __int16)v26) > 0 )
      {
        v22 = v23;
      }
      else
      {
        v10 = (unsigned int *)(*v23 - 16);
        v27 = v10[2];
        v219 = v27;
        if ( *v25 )
        {
          v27 ^= *(_DWORD *)(a1 + 136);
          v219 = v27;
          if ( HIBYTE(v27) != ((unsigned __int8)v27 ^ (unsigned __int8)(BYTE1(v27) ^ BYTE2(v27))) )
          {
            RtlpLogHeapFailure(3, a1, (_DWORD)v10, 0, 0LL, 0LL);
            LODWORD(v20) = v177;
          }
        }
        if ( (int)(v167 - (unsigned __int16)v27) <= 0 )
        {
          v22 = (__int64 *)*v23;
        }
        else if ( *i || (_DWORD)v20 != *((_DWORD *)i + 2) - 1 )
        {
          v28 = (unsigned int)v21 >> 5;
          v179 = (unsigned int)v21 >> 5;
          v29 = ((unsigned int)(*((_DWORD *)i + 2) - *((_DWORD *)i + 6)) >> 5) - 1;
          v10 = (unsigned int *)(i[5] + 4 * v28);
          v191 = v10;
          v30 = *v10 & (-1 << (v21 & 0x1F));
          while ( !v30 )
          {
            if ( (unsigned int)v28 > v29 )
              goto LABEL_47;
            v191 = ++v10;
            v30 = *v10;
            LODWORD(v28) = v28 + 1;
            v179 = v28;
          }
          if ( (_WORD)v30 )
          {
            if ( (_BYTE)v30 )
              v31 = RtlpBitsClearLow[(unsigned __int8)v30];
            else
              v31 = RtlpBitsClearLow[BYTE1(v30)] + 8;
          }
          else if ( (v30 & 0xFF0000) != 0 )
          {
            v31 = RtlpBitsClearLow[BYTE2(v30)] + 16;
          }
          else
          {
            v31 = RtlpBitsClearLow[(unsigned __int64)v30 >> 24] + 24;
          }
          v32 = (unsigned int)(v31 + 32 * v28);
          v179 = v32;
          if ( *((_DWORD *)i + 3) )
            v32 = (unsigned int)(2 * v32);
          v22 = *(__int64 **)(i[6] + 8 * v32);
        }
        else
        {
          if ( *((_DWORD *)i + 3) )
            v21 = (unsigned int)(2 * v21);
          for ( j = *(__int64 **)(i[6] + 8 * v21); v23 != j; j = (__int64 *)*j )
          {
            v10 = (unsigned int *)(j - 2);
            v76 = *((_DWORD *)j - 2);
            v220 = v76;
            if ( *v25 )
            {
              v76 ^= *(_DWORD *)(a1 + 136);
              v220 = v76;
              if ( HIBYTE(v76) != ((unsigned __int8)v76 ^ (unsigned __int8)(BYTE1(v76) ^ BYTE2(v76))) )
                RtlpLogHeapFailure(3, a1, (_DWORD)v10, 0, 0LL, 0LL);
            }
            if ( (int)(v167 - (unsigned __int16)v76) <= 0 )
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
    v177 = v20;
    v188 = v20;
  }
  if ( v192 == v22 )
  {
    v12 = v167;
  }
  else
  {
    v33 = (char *)(v22 - 2);
    v182 = (char *)(v22 - 2);
    if ( *v25 )
    {
      v34 = *((_DWORD *)v33 + 2) ^ *(_DWORD *)(a1 + 136);
      *((_DWORD *)v33 + 2) = v34;
      if ( HIBYTE(v34) != ((unsigned __int8)v34 ^ (unsigned __int8)(BYTE1(v34) ^ BYTE2(v34))) )
        RtlpAnalyzeHeapFailure(a1, v22 - 2, v10);
    }
    v35 = *((unsigned __int16 *)v33 + 4);
    v12 = v167;
    if ( v35 >= v167 )
    {
      v36 = *v22;
      v37 = (__int64 *)*((_QWORD *)v33 + 3);
      v38 = *v37;
      v39 = *(_QWORD *)(*v22 + 8);
      if ( *v37 != v39 || (__int64 *)v38 != v22 )
      {
        RtlpLogHeapFailure(13, a1, (_DWORD)v22, v39, v38, 0LL);
        goto LABEL_404;
      }
      *(_QWORD *)(a1 + 192) -= v35;
      v40 = *(__int64 ***)(a1 + 312);
      if ( v40 )
      {
        v41 = *((unsigned __int16 *)v33 + 4);
        while ( 1 )
        {
          v42 = *((unsigned int *)v40 + 2);
          if ( v41 < v42 )
            break;
          if ( !*v40 )
          {
            v41 = (unsigned int)(v42 - 1);
            break;
          }
          v40 = (__int64 **)*v40;
        }
        v167 = v41;
        LOBYTE(v10) = 1;
        RtlpHeapRemoveListEntry(a1, (_DWORD)v40, (_DWORD)v10, (_DWORD)v22, v41, *((unsigned __int16 *)v33 + 4));
      }
      *v37 = v36;
      *(_QWORD *)(v36 + 8) = v37;
LABEL_62:
      if ( (v33[10] & 8) != 0 && !(unsigned __int8)RtlpCommitBlock(a1) )
      {
        RtlpDeCommitFreeBlock(a1);
        goto LABEL_404;
      }
      goto LABEL_63;
    }
    if ( *v25 )
    {
      v33[11] = v35 ^ v33[10] ^ BYTE1(v35);
      *((_DWORD *)v33 + 2) ^= *(_DWORD *)(a1 + 136);
    }
  }
  v85 = (_QWORD *)RtlpExtendHeap(a1);
  v33 = (char *)v85;
  v182 = (char *)v85;
  if ( !v85 )
  {
LABEL_226:
    v170 = 0LL;
    goto LABEL_404;
  }
  v86 = v85 + 2;
  v87 = v85[2];
  v88 = (__int64 *)v85[3];
  v89 = *v88;
  v90 = *(_QWORD *)(v87 + 8);
  if ( *v88 == v90 && (_QWORD *)v89 == v86 )
  {
    *(_QWORD *)(a1 + 192) -= *((unsigned __int16 *)v33 + 4);
    v91 = *(__int64 ***)(a1 + 312);
    if ( v91 )
    {
      v92 = *((unsigned __int16 *)v33 + 4);
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
      v193 = v92;
      v94 = (int)v86;
      LOBYTE(v86) = 1;
      RtlpHeapRemoveListEntry(a1, (_DWORD)v91, (_DWORD)v86, v94, v92, *((unsigned __int16 *)v33 + 4));
    }
    *v88 = v87;
    *(_QWORD *)(v87 + 8) = v88;
    goto LABEL_62;
  }
  RtlpLogHeapFailure(13, a1, (_DWORD)v86, v90, v89, 0LL);
LABEL_404:
  if ( v165 )
  {
    if ( !*(_QWORD *)v171 && v170 )
      RtlpUpdateHeapWatermarks(a1, a2);
    v159 = *(_QWORD *)(a1 + 352);
    if ( (*(_DWORD *)(v159 + 12))-- == 1 )
    {
      *(_QWORD *)(v159 + 16) = 0LL;
      v161 = _InterlockedCompareExchange((volatile signed __int32 *)(v159 + 8), -1, -2);
      if ( v161 != -2 )
      {
        if ( (*(_BYTE *)(v159 + 8) & 1) != 0 )
          RtlpNotOwnerCriticalSection(v159);
        v162 = *(void **)(v159 + 24);
        if ( !v162 )
          v162 = (void *)RtlpCreateDeferredCriticalSectionEvent(v159);
        v225 = 0;
        while ( v161 != _InterlockedCompareExchange((volatile signed __int32 *)(v159 + 8), (v161 & 2 | 1) + v161, v161) )
        {
          RtlBackoff(&v225);
          _m_prefetchw((const void *)(v159 + 8));
          v161 = *(_DWORD *)(v159 + 8);
        }
        if ( (v161 & 2) != 0 )
          RtlpUnWaitCriticalSectionEx(v159, v162);
      }
    }
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v154 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v154 = 2147353480LL;
  v155 = v170;
  if ( *(_BYTE *)v154 && v170 )
  {
    if ( *(_QWORD *)v171 )
      RtlpHeapLogRangeReserve(a1, *(_QWORD *)v171 & 0xFFFFFFFFFFFF0000uLL, *(_QWORD *)(*(_QWORD *)v171 + 40LL));
  }
  return v155;
}
