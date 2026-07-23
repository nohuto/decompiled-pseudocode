/*
 * XREFs of KiDirectSwitchThread @ 0x1402B1B30
 * Callers:
 *     KiExitDispatcher @ 0x14023CE40 (KiExitDispatcher.c)
 * Callees:
 *     KiCompleteRescheduleContext @ 0x140201EB0 (KiCompleteRescheduleContext.c)
 *     KiStartRescheduleContext @ 0x140238FF0 (KiStartRescheduleContext.c)
 *     KiDeferredReadySingleThread @ 0x14023A3A0 (KiDeferredReadySingleThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140242670 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiCommitRescheduleContextEntry @ 0x140242F60 (KiCommitRescheduleContextEntry.c)
 *     KiDoesThreadDominateRescheduleContextEntry @ 0x1402438E0 (KiDoesThreadDominateRescheduleContextEntry.c)
 *     KiEndThreadAccountingPeriodEx @ 0x140248520 (KiEndThreadAccountingPeriodEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1402520F0 (KiAcquireKobjectLockSafe.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252820 (KiFlushSoftwareInterruptBatch.c)
 *     HalRequestSoftwareInterrupt @ 0x140254DD0 (HalRequestSoftwareInterrupt.c)
 *     KiComputePriorityFloor @ 0x1402B10CC (KiComputePriorityFloor.c)
 *     KiComputeEffectivePriority @ 0x1402B2A20 (KiComputeEffectivePriority.c)
 *     PpmPerfGetCurrentFrequency @ 0x1402B2D30 (PpmPerfGetCurrentFrequency.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1402B3290 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1402B34D0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1402B86C0 (KiSetBasePriorityAndClearDecrement.c)
 *     KiInsertDeferredReadyList @ 0x1402B9EE4 (KiInsertDeferredReadyList.c)
 *     KiComputeNewPriority @ 0x1402BAC50 (KiComputeNewPriority.c)
 *     KiComputeThreadAffinity @ 0x1402BFAC4 (KiComputeThreadAffinity.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140307B50 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiUpdateThreadPriority @ 0x140307E20 (KiUpdateThreadPriority.c)
 *     KiAdjustRescheduleContextEntryForThreadRemoval @ 0x14030819C (KiAdjustRescheduleContextEntryForThreadRemoval.c)
 *     KiIsPrcbThread @ 0x140324F90 (KiIsPrcbThread.c)
 *     KiInswapAndReadyThread @ 0x14034DBDC (KiInswapAndReadyThread.c)
 *     KiCanThreadBeReadiedImmediately @ 0x140357F9C (KiCanThreadBeReadiedImmediately.c)
 *     KiGetComparisonRanks @ 0x1403698D8 (KiGetComparisonRanks.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x140410464 (KiReadGuestSchedulerAssistPriority.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KiSetThreadQosLevelUnsafe @ 0x140462A58 (KiSetThreadQosLevelUnsafe.c)
 *     EtwTraceReadyThread @ 0x14046785A (EtwTraceReadyThread.c)
 *     KiCheckAssistDataForBamQosLevelOverride @ 0x14056E53C (KiCheckAssistDataForBamQosLevelOverride.c)
 *     KiBeginCounterAccumulation @ 0x140574630 (KiBeginCounterAccumulation.c)
 *     EtwTraceXSchedulerPriorityUpdate @ 0x1405FDDD8 (EtwTraceXSchedulerPriorityUpdate.c)
 */

bool __fastcall KiDirectSwitchThread(__int64 a1, unsigned int a2, char a3)
{
  unsigned __int8 v3; // bl
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rsi
  char v8; // r13
  ULONG_PTR v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rax
  bool v13; // zf
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v17; // rbx
  __int64 *v18; // rbx
  __int64 *v19; // r15
  volatile signed __int32 *v20; // rdi
  __int64 *v21; // rcx
  __int64 **v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r11
  unsigned int CurrentFrequency; // eax
  __int64 v30; // r10
  unsigned int v31; // edx
  unsigned __int16 *v32; // r8
  __int64 v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v40; // eax
  signed __int32 v41; // ett
  unsigned __int64 v42; // rdi
  __int64 v43; // r12
  int v44; // eax
  int v45; // edx
  int v46; // ebx
  ULONG_PTR v47; // rcx
  char v48; // al
  ULONG_PTR v49; // rcx
  char v50; // al
  char v51; // al
  int v52; // r15d
  int v53; // edi
  int v54; // edx
  __int64 v55; // rdx
  int v56; // ebx
  int v57; // ebx
  unsigned __int64 v58; // r11
  int v59; // r12d
  __int64 v60; // r10
  unsigned int v61; // ecx
  int v62; // r15d
  unsigned int v63; // edi
  char v64; // al
  bool v65; // cc
  unsigned int v66; // ebx
  unsigned int v67; // r9d
  unsigned int v68; // r8d
  unsigned int v69; // eax
  unsigned int v70; // edx
  __int64 v71; // rcx
  __int64 v72; // rax
  _WORD *v73; // rdx
  __int64 v74; // rax
  int v75; // eax
  __int64 v76; // rdx
  unsigned __int64 v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rdx
  _QWORD *v82; // r11
  unsigned int v83; // ecx
  _QWORD *v84; // rax
  char v85; // di
  __int64 v86; // rax
  __int64 v87; // rcx
  unsigned int i; // r10d
  _QWORD *v89; // rcx
  int v90; // eax
  unsigned int v91; // r15d
  _QWORD *v92; // r12
  unsigned int v93; // ecx
  _QWORD *v94; // rax
  char DoesThreadDominateRescheduleContextEntry; // al
  char v96; // cl
  char v97; // al
  unsigned int v98; // ecx
  unsigned int v99; // edi
  _QWORD *v100; // rcx
  _QWORD *v101; // r10
  unsigned int v102; // ecx
  _QWORD *v103; // rax
  unsigned __int8 v104; // r11
  unsigned int v105; // ecx
  unsigned int v106; // r12d
  __int64 v107; // rdi
  _QWORD *v108; // r10
  __int64 v109; // rcx
  unsigned __int64 v110; // rax
  __int64 v111; // rcx
  int v112; // ecx
  char v113; // al
  __int64 v114; // r11
  __int64 v115; // rcx
  char v116; // al
  bool v117; // cl
  __int64 v118; // r11
  int v119; // edi
  __int64 v120; // rdx
  __int64 v121; // rdi
  int v122; // eax
  unsigned int v123; // r12d
  __int64 v124; // r11
  _QWORD *v125; // r10
  __int64 v126; // rcx
  unsigned __int64 v127; // rax
  __int64 v128; // rcx
  int v129; // ecx
  char v130; // al
  __int64 v131; // r11
  __int64 v132; // rdi
  __int64 v133; // rcx
  char v134; // al
  bool v135; // cl
  char v136; // al
  char v137; // cl
  char v138; // al
  __int64 v139; // r11
  unsigned int v140; // edi
  char v141; // r15
  char v142; // r12
  unsigned int v143; // ebx
  unsigned __int8 *v144; // rdx
  unsigned __int8 v145; // al
  unsigned __int64 *v146; // r8
  unsigned __int64 v147; // r9
  int v148; // edx
  unsigned __int8 *v149; // r12
  _QWORD *v150; // rdi
  char v151; // r15
  _QWORD *v152; // rdi
  _QWORD *v155; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v156; // [rsp+40h] [rbp-C0h]
  int ThreadEffectiveRankNonZero; // [rsp+44h] [rbp-BCh] BYREF
  int v158; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v159; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD *v160; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v161; // [rsp+60h] [rbp-A0h]
  int v162; // [rsp+68h] [rbp-98h] BYREF
  int v163; // [rsp+6Ch] [rbp-94h] BYREF
  int v164; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v165; // [rsp+78h] [rbp-88h]
  __int64 v166; // [rsp+80h] [rbp-80h]
  __int64 v167; // [rsp+88h] [rbp-78h] BYREF
  __int64 v168; // [rsp+90h] [rbp-70h]
  unsigned __int64 v169; // [rsp+98h] [rbp-68h]
  __int64 v170; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v171; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v172[42]; // [rsp+B0h] [rbp-50h] BYREF

  v3 = a2;
  v156 = a2;
  memset(v172, 0, sizeof(v172));
  v7 = *(_QWORD **)(a1 + 11528);
  v8 = 0;
  v159 = 0LL;
  v155 = 0LL;
  v160 = v7;
  if ( v7 )
    *(_QWORD *)(a1 + 11528) = *v7;
  v9 = (ULONG_PTR)(v7 - 27);
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    EtwTraceReadyThread(v9, 1LL, v3, 1LL);
  v10 = *(_QWORD *)(v9 + 104);
  v11 = *(_QWORD *)(a1 + 8);
  v168 = v11;
  ThreadEffectiveRankNonZero = 0;
  v161 = v10;
  if ( v10 )
  {
    v12 = *(unsigned int *)(a1 + 216);
    v13 = v12 + v10 == 0;
    v14 = v12 + v10;
    v161 = v14;
    if ( !v13 )
    {
      LOBYTE(v5) = 1;
      ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v9, v14, v5, 0LL);
      if ( ThreadEffectiveRankNonZero )
      {
        v16 = *(_QWORD *)(v11 + 104);
        if ( v16 )
        {
          v17 = *(unsigned int *)(a1 + 216) + v16;
          if ( v17 )
          {
            v162 = KiGetThreadEffectiveRankNonZero(v11, v17, v15, v6);
            if ( v162 )
              KiGetComparisonRanks(v14, v17, &ThreadEffectiveRankNonZero, &v162);
          }
        }
      }
    }
  }
  v18 = *(__int64 **)(v9 + 208);
  v19 = &v18[6 * *(unsigned __int8 *)(v9 + 587)];
  do
  {
    if ( *((_BYTE *)v18 + 17) < 5u )
    {
      v20 = (volatile signed __int32 *)v18[4];
      KiAcquireKobjectLockSafe(v20);
      if ( *((_BYTE *)v18 + 17) == 4 )
      {
        v21 = (__int64 *)*v18;
        v22 = (__int64 **)v18[1];
        if ( *(__int64 **)(*v18 + 8) != v18 || *v22 != v18 )
          __fastfail(3u);
        *v22 = v21;
        v21[1] = (__int64)v22;
      }
      _InterlockedAnd(v20, 0xFFFFFF7F);
    }
    v18 += 6;
  }
  while ( v18 != v19 );
  _disable();
  *(_BYTE *)(a1 + 32) = 1;
  v23 = __rdtsc();
  v24 = v23 - *(_QWORD *)(a1 + 33152);
  v25 = v24 + *(_QWORD *)(v11 + 72);
  *(_QWORD *)(v11 + 72) = v25;
  v26 = v24 * *(unsigned int *)(a1 + 33208);
  v169 = v25;
  v27 = (v26 >> 16) + *(unsigned int *)(v11 + 80);
  *(_QWORD *)(a1 + 33152) = v23;
  if ( v27 > 0xFFFFFFFF )
    LODWORD(v27) = -1;
  v13 = (*(_BYTE *)(v11 + 2) & 0xBE) == 0;
  *(_DWORD *)(v11 + 80) = v27;
  if ( !v13 )
    KiEndThreadAccountingPeriodEx(a1, v11, v24, 0);
  v28 = __rdtsc();
  *(_QWORD *)(a1 + 33400) += v28 - *(_QWORD *)(a1 + 33152);
  if ( (*(_BYTE *)(v11 + 2) & 0x20) != 0 )
  {
    CurrentFrequency = PpmPerfGetCurrentFrequency(a1, 0LL);
    v31 = 0;
    v32 = (unsigned __int16 *)(a1 + 34154);
    do
    {
      if ( CurrentFrequency <= *v32 )
        break;
      ++v31;
      ++v32;
    }
    while ( v31 < 3 );
    if ( KeHeteroSystem )
      v24 = *(unsigned __int8 *)(a1 + 34056);
    else
      v24 = *(unsigned __int8 *)(a1 + 34059);
    v33 = ((_BYTE)v24 != 0) + 2LL * v31 + 4176;
    v34 = *(_QWORD *)(a1 + 8 * v33);
    v35 = (_QWORD *)(a1 + 8 * v33);
    v36 = v161;
    *v35 = v30 + v34;
    v161 = v36;
  }
  if ( (*(_BYTE *)(v11 + 2) & 0x40) != 0 )
  {
    v37 = *(_QWORD *)(v11 + 968);
    if ( v37 )
      *(_BYTE *)(v37 + 64) = 1;
  }
  *(_QWORD *)(a1 + 33152) = v28;
  if ( (*(_BYTE *)(v11 + 2) & 2) != 0 )
    KiBeginCounterAccumulation(v11, 0LL, v24, v6);
  *(_BYTE *)(a1 + 32) = 0;
  if ( *(_BYTE *)(a1 + 6) )
  {
    *(_BYTE *)(a1 + 6) = 0;
    HalRequestSoftwareInterrupt(2);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v40 = *SchedulerAssist;
    do
    {
      v41 = v40;
      v40 = _InterlockedCompareExchange(SchedulerAssist, v40 & 0xFFDFFFFF, v40);
    }
    while ( v41 != v40 );
    if ( (v40 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  _enable();
  v42 = *(_QWORD *)(v11 + 32);
  v43 = *(_QWORD *)(v9 + 72);
  v166 = v43;
  v165 = v42;
  v163 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v163);
    while ( *(_QWORD *)(v9 + 64) );
  }
  v13 = (*(_DWORD *)(v9 + 120) & 0x400000) == 0;
  v167 = 0LL;
  if ( v13 )
  {
    LOBYTE(v6) = 0;
  }
  else
  {
    _InterlockedOr(*(volatile signed __int32 **)(v9 + 968), 0x100000u);
    v44 = KiReadGuestSchedulerAssistPriority(v9, &v167);
    v45 = *(_DWORD *)(v9 + 1024);
    v46 = v44;
    if ( v44 != v45 )
    {
      v47 = (char)v44 + v9;
      v48 = *(_BYTE *)(v47 + 824);
      if ( v48 == -1 )
        KeBugCheckEx(0x157u, v9, (char)v46, 1uLL, 0LL);
      *(_BYTE *)(v47 + 824) = v48 + 1;
      *(_DWORD *)(v9 + 856) |= 1 << v46;
      if ( v45 != 32 )
      {
        v49 = (char)v45 + v9;
        v50 = *(_BYTE *)(v49 + 824);
        if ( !v50 )
          KeBugCheckEx(0x157u, v9, (char)v45, 2uLL, 0LL);
        v51 = v50 - 1;
        *(_BYTE *)(v49 + 824) = v51;
        if ( !v51 )
          *(_DWORD *)(v9 + 856) ^= 1 << v45;
      }
      *(_DWORD *)(v9 + 1024) = v46;
    }
    v52 = *(char *)(v9 + 195);
    v53 = KiComputePriorityFloor(v9, v46);
    if ( v53 != v52 )
    {
      KiSetBasePriorityAndClearDecrement(v9, 0LL, 0LL);
      KiUpdateThreadPriority(0, v54, v9, v53, 0);
    }
    v158 = *(unsigned __int8 *)(v9 + 1122);
    KiCheckAssistDataForBamQosLevelOverride(v9, &v158);
    if ( v158 != (unsigned __int8)*(_DWORD *)(v9 + 512) )
      KiSetThreadQosLevelUnsafe(v9);
    if ( (*(_DWORD *)(v9 + 120) & 0x400000) != 0 )
      _InterlockedAnd(*(volatile signed __int32 **)(v9 + 968), 0xFFEFFFFF);
    if ( v52 != v53 && (BYTE4(xmmword_140D1EAD0) & 0x20) != 0 )
      EtwTraceXSchedulerPriorityUpdate(v9, v52, v46, v53, (__int64)&v167);
    v42 = v165;
    LOBYTE(v6) = 1;
  }
  v56 = 32 * (KiComputeEffectivePriority(v9, (unsigned __int8)v156, v43, v6) & 1);
  if ( *(_QWORD *)(v9 + 568) != KiCpuSetSequence && (*(_DWORD *)(v9 + 116) & 8) == 0 )
    KiComputeThreadAffinity(v9);
  v164 = 0;
  v159 = a1 & 0xFFFFFFFFFFFFFFFEuLL;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(&v164);
    while ( *(_QWORD *)(a1 + 48) );
  }
  v57 = v56 | 0xF;
  v58 = v169;
  v59 = *(char *)(v9 + 195);
  v60 = v168;
  v61 = v57 & 0xFFFFFFFA;
  v62 = *(char *)(v168 + 195);
  if ( v169 + (unsigned int)KiDirectQuantumTarget <= v42 )
    v61 = v57;
  v63 = v61 & 0xFFFFFFF3;
  if ( a3 )
    v63 = v61;
  if ( v59 <= v62 )
  {
    if ( (v63 & 4) == 0 )
    {
      if ( (v63 & 8) == 0 )
      {
        v62 = 0;
        goto LABEL_90;
      }
      LOBYTE(v55) = 1;
      v64 = KiComputeNewPriority(v168, v55);
      v60 = v168;
      v58 = v169;
      v62 = v64;
    }
    if ( v62 >= 16 )
    {
      if ( v59 >= 16 )
      {
        v65 = v62 < v59;
        if ( v62 > v59 )
          goto LABEL_92;
LABEL_91:
        if ( !v65 )
          goto LABEL_93;
        goto LABEL_92;
      }
      v62 = 15;
    }
LABEL_90:
    v65 = v62 < v59;
    goto LABEL_91;
  }
  v63 &= ~1u;
  *(_BYTE *)(v168 + 565) = 1;
LABEL_92:
  v62 = v59;
LABEL_93:
  v66 = v63 & 0xFFFFFFFD;
  if ( !*(_QWORD *)(a1 + 16) )
    v66 = v63;
  v67 = 1 << v62;
  v68 = *(_DWORD *)(*(_QWORD *)(a1 + 34888) + 8LL) | *(_DWORD *)(a1 + 32472);
  if ( (v66 & 1) == 0 )
  {
    v69 = v66 & 0xFFFFFFFD;
    if ( v67 > v68 )
      v69 = v66;
    v66 = v69;
    if ( ThreadEffectiveRankNonZero )
    {
      if ( v68 > 1 )
        goto LABEL_109;
      v70 = *(_DWORD *)(*(_QWORD *)(v161 + 416) + 116LL);
      v71 = *(_QWORD *)(a1 + 32568);
      if ( (v71 & 1) != 0 )
      {
        if ( v71 == 1 )
          goto LABEL_110;
        v72 = v71 ^ ((a1 + 32560) | 1);
      }
      else
      {
        v72 = *(_QWORD *)(a1 + 32568);
      }
      if ( v72 )
      {
        if ( *(_DWORD *)(v72 + 28) != v70 )
        {
          if ( *(_DWORD *)(v72 + 28) > v70 )
            goto LABEL_110;
          goto LABEL_109;
        }
        if ( *(unsigned __int16 *)(v72 + 26) >= v67 )
LABEL_109:
          v66 &= ~2u;
      }
    }
  }
LABEL_110:
  v73 = *(_WORD **)(v9 + 576);
  v74 = *(unsigned __int8 *)(a1 + 208);
  if ( (unsigned __int16)v74 >= *v73 || ((*(_QWORD *)&v73[4 * v74 + 4] >> *(_BYTE *)(a1 + 209)) & 1) == 0 )
    v66 &= ~2u;
  v75 = *(_DWORD *)(v9 + 120);
  if ( (v75 & 0x20000) == 0 || (v75 & 0x100000) != 0 )
    v66 &= ~2u;
  if ( (v66 & 1) != 0 )
  {
    if ( (v66 & 2) == 0 || (v68 & v67) != 0 )
    {
      v76 = v166;
      v58 = v165 - (unsigned int)KiDirectQuantumTarget;
      v77 = (unsigned int)KiDirectQuantumTarget + v166;
      if ( (v66 & 2) == 0 )
        *(_BYTE *)(v9 + 565) = 1;
    }
    else
    {
      v76 = v166;
      v77 = v165 + v166 - v58;
    }
    v66 &= ~0x20u;
    _interlockedbittestandset((volatile signed __int32 *)(v9 + 120), 5u);
    *(_QWORD *)(v9 + 32) = v77;
    *(_QWORD *)(v60 + 32) = v58;
  }
  else
  {
    v76 = v166;
  }
  if ( v66 >= 0x20 )
  {
    v78 = v76 + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v9 + 651);
    if ( (*(_DWORD *)(v9 + 120) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(v9 + 120), 5u);
    *(_QWORD *)(v9 + 32) = v78;
  }
  if ( v62 != v59 )
  {
    KiUpdateThreadPriority(0, v76, v9, v62, 0);
    *(_BYTE *)(v9 + 564) += 16 * (v62 - v59);
  }
  *(_BYTE *)(v9 + 567) = v156;
  *(_BYTE *)(v9 + 566) = 0;
  if ( (v66 & 2) != 0 )
  {
    KiStartRescheduleContext((__int64)v172, (__int64 *)&v159, v9);
    v81 = LOBYTE(v172[0]);
    v82 = 0LL;
    v83 = 0;
    if ( LOBYTE(v172[0]) )
    {
      v84 = &v172[2];
      while ( *v84 != a1 )
      {
        ++v83;
        v84 += 5;
        if ( v83 >= LOBYTE(v172[0]) )
          goto LABEL_137;
      }
      v82 = v84;
    }
LABEL_137:
    v85 = *((_BYTE *)v82 + 32);
    v86 = *v82;
    *((_BYTE *)v82 + 34) |= 2u;
    *((_BYTE *)v82 + 33) &= ~1u;
    v87 = *(_QWORD *)(v86 + 24);
    v82[2] = v87;
    v82[3] = v87;
    *((_BYTE *)v82 + 32) = v85 & 0xC0 | 5;
    if ( (v85 & 2) != 0 )
    {
      for ( i = 0; i < LOBYTE(v172[0]); ++i )
      {
        v89 = &v172[5 * i + 2];
        if ( v89 != v82 )
        {
          LOBYTE(v80) = 1;
          KiAdjustRescheduleContextEntryForThreadRemoval(v89, v81, 0LL, v80);
        }
      }
      v90 = HIDWORD(v172[0]);
      if ( (v85 & 2) != 0 )
        v90 = 0;
      HIDWORD(v172[0]) = v90;
    }
    v91 = LOBYTE(v172[0]);
    v92 = 0LL;
    v93 = 0;
    if ( LOBYTE(v172[0]) )
    {
      v94 = &v172[2];
      while ( *v94 != a1 )
      {
        ++v93;
        v94 += 5;
        if ( v93 >= LOBYTE(v172[0]) )
          goto LABEL_151;
      }
      v92 = v94;
    }
LABEL_151:
    v170 = 0LL;
    if ( KiGroupSchedulingEnabled )
    {
      DoesThreadDominateRescheduleContextEntry = KiEvaluateGroupSchedulingPreemption(v92, v9, 0LL, &v170);
      if ( !DoesThreadDominateRescheduleContextEntry )
        goto LABEL_169;
    }
    else
    {
      v96 = *((_BYTE *)v92 + 32);
      if ( (v96 & 1) == 0 )
      {
        v81 = *(unsigned __int8 *)(v92[2] + 195LL);
        v97 = *(_BYTE *)(v9 + 195);
        if ( v97 <= (char)v81 && (v97 != (_BYTE)v81 || (v96 & 0x18) == 0) && ((v96 & 0x10) == 0 || !v97) )
        {
          DoesThreadDominateRescheduleContextEntry = 0;
          goto LABEL_169;
        }
      }
    }
    v98 = (*(_DWORD *)(v9 + 120) >> 1) & 1;
    if ( v98 < ((*((unsigned __int8 *)v92 + 32) >> 1) & 1u) )
      v98 = (*((unsigned __int8 *)v92 + 32) >> 1) & 1;
    if ( v98 == 1 && (v99 = 0, v91) )
    {
      while ( 1 )
      {
        v100 = &v172[5 * v99 + 2];
        if ( v100 != v92 )
        {
          DoesThreadDominateRescheduleContextEntry = KiDoesThreadDominateRescheduleContextEntry(
                                                       (__int64)v100,
                                                       v9,
                                                       0LL,
                                                       0LL);
          if ( !DoesThreadDominateRescheduleContextEntry )
            break;
        }
        if ( ++v99 >= v91 )
          goto LABEL_167;
      }
    }
    else
    {
LABEL_167:
      DoesThreadDominateRescheduleContextEntry = 1;
    }
LABEL_169:
    v66 ^= ((unsigned __int8)v66 ^ (unsigned __int8)(2 * DoesThreadDominateRescheduleContextEntry)) & 2;
    if ( (v66 & 2) == 0 )
      goto LABEL_251;
    *(_BYTE *)(v9 + 565) = 0;
    v101 = 0LL;
    v102 = 0;
    if ( v91 )
    {
      v103 = &v172[2];
      while ( *v103 != a1 )
      {
        ++v102;
        v103 += 5;
        if ( v102 >= v91 )
          goto LABEL_176;
      }
      v101 = v103;
    }
LABEL_176:
    v104 = *((_BYTE *)v101 + 32);
    v105 = (*(_DWORD *)(v9 + 120) >> 1) & 1;
    v156 = v105;
    if ( v105 >= ((v104 >> 1) & 1u) )
    {
      if ( v105 )
      {
        v123 = 0;
        v119 = 0;
        if ( !v91 )
          goto LABEL_223;
        do
        {
          v124 = v172[5 * v123 + 2];
          v125 = &v172[5 * v123 + 2];
          v126 = v125[3];
          v127 = v126 - 1;
          if ( v124 == a1 )
          {
            if ( v127 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v126, v81, v79, v80) )
            {
              if ( (*((_BYTE *)v125 + 33) & 1) != 0 )
                *(_DWORD *)(v128 + 116) |= 2u;
              *(_BYTE *)(v128 + 565) = 1;
              KiInsertDeferredReadyList(&v155, v128);
            }
            v129 = *(_DWORD *)(v9 + 120);
            v130 = v125[4] & 0xC4;
            *((_BYTE *)v125 + 33) &= ~1u;
            v125[2] = v9;
            v125[3] = v9;
            *((_BYTE *)v125 + 32) = v130 | (2 * (((v129 & 2) != 0) | 2));
            if ( !(unsigned __int8)KiIsPrcbThread(v9, v81, v79, v80) )
              *(_DWORD *)(v9 + 536) = *(_DWORD *)(v131 + 36);
          }
          else
          {
            v132 = *(_QWORD *)(v124 + 34944);
            if ( v127 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v126, v81, v79, v80) )
            {
              if ( (*((_BYTE *)v125 + 33) & 1) != 0 )
                *(_DWORD *)(v133 + 116) |= 2u;
              *(_BYTE *)(v133 + 565) = 1;
              KiInsertDeferredReadyList(&v155, v133);
            }
            v134 = v125[4] & 0xE4;
            v135 = (*(_DWORD *)(v9 + 120) & 2) != 0;
            v125[2] = v9;
            v136 = v134 | (2 * (v135 | 2));
            v137 = v136 | 0x20;
            v138 = v136 & 0xDF;
            if ( v9 == v132 )
              v137 = v138;
            *((_BYTE *)v125 + 32) = v137;
            *((_BYTE *)v125 + 33) &= ~1u;
            v125[3] = v132;
            if ( !(unsigned __int8)KiIsPrcbThread(v132, v81, v79, v80) )
              *(_DWORD *)(v132 + 536) = *(_DWORD *)(v139 + 36);
          }
          ++v123;
        }
        while ( v123 < LOBYTE(v172[0]) );
      }
      else
      {
        v120 = v101[3];
        v121 = *v101;
        if ( (unsigned __int64)(v120 - 1) <= 0xFFFFFFFFFFFFFFFDuLL && *(_UNKNOWN **)(v120 + 544) != &KiInitialProcess )
        {
          if ( (*((_BYTE *)v101 + 33) & 1) != 0 )
            *(_DWORD *)(v120 + 116) |= 2u;
          *(_BYTE *)(v120 + 565) = 1;
          KiInsertDeferredReadyList(&v155, v120);
        }
        v122 = *(_DWORD *)(v9 + 120);
        *((_BYTE *)v101 + 33) &= ~1u;
        v101[2] = v9;
        v101[3] = v9;
        *((_BYTE *)v101 + 32) = v104 & 0xC4 | (2 * (((v122 & 2) != 0) | 2));
        if ( *(_UNKNOWN **)(v9 + 544) != &KiInitialProcess )
          *(_DWORD *)(v9 + 536) = *(_DWORD *)(v121 + 36);
      }
      v119 = 0;
    }
    else
    {
      v106 = 0;
      if ( v91 )
      {
        do
        {
          v107 = v172[5 * v106 + 2];
          v108 = &v172[5 * v106 + 2];
          v109 = v108[3];
          v110 = v109 - 1;
          if ( v107 == a1 )
          {
            if ( v110 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v109, v81, v79, v80) )
            {
              if ( (*((_BYTE *)v108 + 33) & 1) != 0 )
                *(_DWORD *)(v111 + 116) |= 2u;
              *(_BYTE *)(v111 + 565) = 1;
              KiInsertDeferredReadyList(&v155, v111);
            }
            v112 = *(_DWORD *)(v9 + 120);
            v113 = v108[4] & 0xC4;
            *((_BYTE *)v108 + 33) &= ~1u;
            v108[2] = v9;
            v108[3] = v9;
            *((_BYTE *)v108 + 32) = v113 | (2 * (((v112 & 2) != 0) | 2));
            if ( !(unsigned __int8)KiIsPrcbThread(v9, v81, v79, v80) )
              *(_DWORD *)(v9 + 536) = *(_DWORD *)(v107 + 36);
          }
          else
          {
            v114 = *(_QWORD *)(v107 + 24);
            if ( v110 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v109, v81, v79, v80) )
            {
              if ( (*((_BYTE *)v108 + 33) & 1) != 0 )
                *(_DWORD *)(v115 + 116) |= 2u;
              *(_BYTE *)(v115 + 565) = 1;
              KiInsertDeferredReadyList(&v155, v115);
            }
            v116 = v108[4] & 0xC5;
            v117 = (*(_DWORD *)(v114 + 120) & 2) != 0;
            v108[2] = v114;
            *((_BYTE *)v108 + 32) = v116 | (2 * v117) | 5;
            *((_BYTE *)v108 + 33) &= ~1u;
            v108[3] = v114;
            if ( !(unsigned __int8)KiIsPrcbThread(v114, v81, v79, v80) )
              *(_DWORD *)(v118 + 536) = *(_DWORD *)(v107 + 36);
          }
          ++v106;
        }
        while ( v106 < LOBYTE(v172[0]) );
      }
      v119 = 1;
    }
LABEL_223:
    v140 = v66 | (v119 << 7);
    HIDWORD(v172[0]) = v156;
    if ( v140 >= 0x80 )
      KiSearchForNewThreadsForRescheduleContext(v172, (__int64)&v155);
    v141 = 0;
    v142 = 0;
    v143 = 0;
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      v142 = 2;
    if ( LOBYTE(v172[0]) )
    {
      do
        v141 |= KiCommitRescheduleContextEntry(&v172[5 * v143++ + 2], a1, v142, &v155);
      while ( v143 < LOBYTE(v172[0]) );
    }
    if ( LODWORD(v172[1]) == 1 )
    {
      v144 = *(unsigned __int8 **)(v172[2] + 34904LL);
      v145 = v144[1] + 1;
      if ( v145 >= *v144 )
        v145 = 0;
      v144[1] = v145;
    }
    v146 = 0LL;
    v147 = v159 & 0xFFFFFFFFFFFFFFFEuLL;
    v148 = 0;
    v171 = v159 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v159 & 1) != 0 )
    {
      if ( (v159 & 1) == 1 )
      {
        v146 = (unsigned __int64 *)(*(_QWORD *)(v147 + 34904) + 8LL);
        v148 = **(unsigned __int8 **)(v147 + 34904);
      }
      if ( !v148 )
        goto LABEL_240;
    }
    else
    {
      v146 = &v171;
      v148 = 1;
    }
    do
      _InterlockedAnd64((volatile signed __int64 *)(v146[--v148] + 48), 0LL);
    while ( v148 );
LABEL_240:
    v66 = v140 | ((v141 & 1) << 8) | 0x50;
    v159 = 0LL;
    *(_QWORD *)(v9 + 64) = 0LL;
    if ( v66 < 0x100 )
    {
      v149 = (unsigned __int8 *)(a1 + 12760);
    }
    else
    {
      KiCompleteRescheduleContext(v172, a1);
      v149 = (unsigned __int8 *)(a1 + 12760);
      KiFlushSoftwareInterruptBatch((unsigned __int8 *)(a1 + 12760));
    }
    v150 = v155;
    if ( v155 )
    {
      v151 = 0;
      v155 = (_QWORD *)*v155;
      do
      {
        KiDeferredReadySingleThread(a1, (unsigned __int64)(v150 - 27), (__int64)&v155);
        v150 = v155;
        ++v151;
        if ( v155 )
          v155 = (_QWORD *)*v155;
        if ( (v151 & 0xF) == 0 )
          KiFlushSoftwareInterruptBatch(v149);
      }
      while ( v150 );
      KiFlushSoftwareInterruptBatch(v149);
    }
  }
LABEL_251:
  if ( (v66 & 0x40) == 0 )
  {
    KiReleasePrcbLocksForIsolationUnit(&v159);
    *(_QWORD *)(v9 + 64) = 0LL;
  }
  if ( (v66 & 0x10) == 0 )
  {
    if ( (unsigned __int8)KiCanThreadBeReadiedImmediately(v9) )
    {
      v152 = v160;
      v160 = 0LL;
      *v152 = 0LL;
      do
      {
        KiDeferredReadySingleThread(a1, (unsigned __int64)(v152 - 27), (__int64)&v160);
        v152 = v160;
        ++v8;
        if ( v160 )
          v160 = (_QWORD *)*v160;
        if ( (v8 & 0xF) == 0 )
          KiFlushSoftwareInterruptBatch((unsigned __int8 *)(a1 + 12760));
      }
      while ( v152 );
      KiFlushSoftwareInterruptBatch((unsigned __int8 *)(a1 + 12760));
    }
    else
    {
      KiInswapAndReadyThread(a1, v9);
    }
  }
  return *(_QWORD *)(a1 + 11528) == 0LL;
}
