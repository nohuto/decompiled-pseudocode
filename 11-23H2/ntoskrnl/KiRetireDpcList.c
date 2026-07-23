/*
 * XREFs of KiRetireDpcList @ 0x140245AC0
 * Callers:
 *     KiExecuteDpcDelegate @ 0x1403916F0 (KiExecuteDpcDelegate.c)
 *     KiIdleLoop @ 0x140423D50 (KiIdleLoop.c)
 *     KxSwapStacksAndRetireDpcList @ 0x140428650 (KxSwapStacksAndRetireDpcList.c)
 * Callees:
 *     RtlTimelineBitmapUpdate @ 0x14020E900 (RtlTimelineBitmapUpdate.c)
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiExecuteAllDpcs @ 0x140244590 (KiExecuteAllDpcs.c)
 *     PoGetFrequencyBucket @ 0x140249CF0 (PoGetFrequencyBucket.c)
 *     KiTimer2Expiration @ 0x1402516A0 (KiTimer2Expiration.c)
 *     KiProcessExpiredTimerList @ 0x140252C10 (KiProcessExpiredTimerList.c)
 *     KiStartThreadCycleAccumulation @ 0x1402B2FD0 (KiStartThreadCycleAccumulation.c)
 *     HalpTimerGetInternalData @ 0x1402C4800 (HalpTimerGetInternalData.c)
 *     RtlBackoff @ 0x1402FD540 (RtlBackoff.c)
 *     KiNormalPriorityReadyScan @ 0x140307080 (KiNormalPriorityReadyScan.c)
 *     KiSelectActiveTimerTable @ 0x14033C110 (KiSelectActiveTimerTable.c)
 *     KeSignalGate @ 0x14035D4DC (KeSignalGate.c)
 *     HalpTimerScaleCounter @ 0x1403C4704 (HalpTimerScaleCounter.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KiBeginCounterAccumulation @ 0x140574630 (KiBeginCounterAccumulation.c)
 *     KiUpdateThreadHgsFeedback @ 0x140578BD0 (KiUpdateThreadHgsFeedback.c)
 */

signed __int16 __fastcall KiRetireDpcList(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r14
  ULONG_PTR v3; // r9
  __int64 v4; // r8
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdi
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  char v9; // bl
  unsigned __int64 v10; // rdx
  __int64 v11; // r9
  unsigned int v12; // eax
  unsigned int v13; // ecx
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // ebx
  __int64 v18; // r8
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rdx
  bool v22; // zf
  signed __int16 result; // ax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 active; // rax
  unsigned __int64 *v29; // r10
  __int64 v30; // rcx
  unsigned __int64 v31; // r13
  __int64 v32; // r8
  unsigned int v33; // r14d
  unsigned __int8 v34; // al
  bool v35; // r12
  int v36; // edi
  unsigned __int64 v37; // r15
  unsigned int v38; // eax
  struct _KPRCB *v39; // rcx
  unsigned __int32 *v40; // r8
  __int64 v41; // rdx
  __int64 v42; // r12
  ULONG_PTR v43; // rsi
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // r11
  signed __int64 v48; // rdx
  __int64 v49; // r13
  __int64 v50; // rax
  unsigned int v51; // ecx
  int v52; // eax
  unsigned __int64 v53; // r8
  unsigned int v54; // esi
  unsigned int v55; // ecx
  unsigned int v56; // r14d
  unsigned int v57; // ebx
  unsigned int v58; // r10d
  int v59; // ecx
  unsigned __int64 v60; // r15
  __int64 **v61; // rdi
  unsigned int v62; // esi
  unsigned __int64 v63; // rdi
  unsigned __int64 *v64; // rbx
  __int64 v65; // r8
  unsigned int v66; // eax
  volatile signed __int64 *v67; // r13
  unsigned __int64 v68; // rax
  ULONG_PTR v69; // r8
  volatile signed __int64 *v70; // r8
  unsigned int v71; // r10d
  __int64 *v72; // rdx
  unsigned __int64 v73; // rax
  __int64 v74; // r9
  ULONG_PTR v75; // rax
  volatile signed __int64 v76; // rcx
  volatile signed __int64 *v77; // r10
  volatile signed __int64 *v78; // rax
  unsigned __int64 v79; // rax
  __int64 v80; // rcx
  ULONG_PTR v81; // r10
  __int64 **v82; // rax
  volatile signed __int32 *v83; // rcx
  __int64 v84; // rdx
  unsigned int v85; // r10d
  volatile signed __int32 *v86; // rdx
  __int64 v87; // r9
  unsigned int FrequencyBucket; // eax
  __int64 v89; // r9
  char v90; // cl
  __int64 v91; // r9
  __int64 v92; // r10
  __int64 v93; // r11
  int v94; // eax
  unsigned int v95; // eax
  char v96; // dl
  _QWORD *v97; // rdx
  unsigned __int32 v98; // eax
  unsigned __int32 v99; // ett
  __int64 InternalData; // rax
  __int64 v101; // rax
  volatile signed __int32 *v102; // rdx
  __int64 v103; // rcx
  unsigned int v104; // r10d
  volatile signed __int32 *v105; // rcx
  _QWORD *i; // rcx
  signed __int16 v107; // tt
  struct _KPRCB *v108; // rcx
  unsigned __int32 *v109; // r8
  struct _KPRCB *v110; // rcx
  unsigned __int32 *v111; // r8
  unsigned __int32 v112; // eax
  unsigned __int32 v113; // ett
  unsigned __int32 v114; // eax
  unsigned __int32 v115; // ett
  __int64 v116; // rax
  unsigned int v117; // r9d
  unsigned int v118; // eax
  int v119; // ecx
  __int64 v120; // rcx
  __int64 v121; // rbx
  __int64 v122; // r9
  unsigned int *v123; // r10
  __int64 v124; // r11
  __int64 v125; // r8
  unsigned __int64 v126; // rax
  __int64 v127; // rax
  signed __int64 v128; // rdx
  __int64 v129; // r13
  __int64 v130; // rdi
  __int64 v131; // rax
  unsigned __int64 v132; // r10
  signed __int64 v133; // rax
  int v134; // r9d
  __int64 v135; // r8
  __int64 v136; // rcx
  unsigned __int64 v137; // r8
  __int64 v138; // rdx
  __int64 v139; // rdi
  __int64 v140; // rax
  unsigned __int64 v141; // r10
  signed __int64 v142; // rax
  __int64 v143; // r8
  __int64 v144; // rcx
  unsigned __int64 v145; // r8
  __int64 v146; // rdx
  __int64 v147; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v150; // eax
  unsigned __int32 v151; // ett
  struct _KPRCB *v152; // rcx
  signed __int32 *v153; // r8
  signed __int32 v154; // eax
  signed __int32 v155; // ett
  __int64 v156; // rax
  __int16 v157; // r9
  signed __int16 v158; // tt
  signed __int32 v159[8]; // [rsp+0h] [rbp-100h] BYREF
  bool v160; // [rsp+30h] [rbp-D0h]
  unsigned int v161; // [rsp+34h] [rbp-CCh]
  unsigned __int64 v162; // [rsp+38h] [rbp-C8h]
  int v163; // [rsp+40h] [rbp-C0h]
  unsigned int v164; // [rsp+44h] [rbp-BCh]
  volatile signed __int32 *v165; // [rsp+48h] [rbp-B8h]
  __int64 v166; // [rsp+50h] [rbp-B0h] BYREF
  int v167; // [rsp+58h] [rbp-A8h]
  int v168; // [rsp+5Ch] [rbp-A4h]
  int v169; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v170; // [rsp+68h] [rbp-98h]
  unsigned __int64 v171; // [rsp+70h] [rbp-90h]
  volatile signed __int64 *v172; // [rsp+78h] [rbp-88h]
  unsigned int v173; // [rsp+80h] [rbp-80h]
  ULONG_PTR BugCheckParameter3; // [rsp+88h] [rbp-78h]
  ULONG_PTR v175; // [rsp+90h] [rbp-70h]
  int v176; // [rsp+98h] [rbp-68h]
  int v177; // [rsp+9Ch] [rbp-64h] BYREF
  int v178; // [rsp+A0h] [rbp-60h] BYREF
  int v179; // [rsp+A4h] [rbp-5Ch] BYREF
  int v180; // [rsp+A8h] [rbp-58h] BYREF
  int v181; // [rsp+ACh] [rbp-54h] BYREF
  int v182; // [rsp+B0h] [rbp-50h] BYREF
  int v183; // [rsp+B4h] [rbp-4Ch] BYREF
  unsigned int v184; // [rsp+B8h] [rbp-48h]
  int v185; // [rsp+BCh] [rbp-44h] BYREF
  unsigned __int64 v186; // [rsp+C0h] [rbp-40h]
  ULONG_PTR BugCheckParameter4; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v188; // [rsp+D0h] [rbp-30h]
  __int128 v189; // [rsp+D8h] [rbp-28h]
  __int64 v190; // [rsp+E8h] [rbp-18h]
  __int128 v191; // [rsp+F0h] [rbp-10h]
  __int64 v192; // [rsp+100h] [rbp+0h]
  __int128 v193; // [rsp+108h] [rbp+8h]
  __int64 v194; // [rsp+118h] [rbp+18h]
  __int128 v195; // [rsp+120h] [rbp+20h]
  __int64 v196; // [rsp+130h] [rbp+30h]
  __int128 v197; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v198[3]; // [rsp+148h] [rbp+48h] BYREF
  _QWORD v199[34]; // [rsp+160h] [rbp+60h] BYREF

  v1 = a1;
  v166 = a1;
  v2 = *(_QWORD *)(a1 + 8);
  memset(v199, 0, sizeof(v199));
  v188 = v2;
  while ( 2 )
  {
    *(_BYTE *)(v1 + 32) = 1;
    v3 = 65527LL;
    v4 = 0xFFFFFFFFLL;
    v5 = __rdtsc();
    v6 = v5 - *(_QWORD *)(v1 + 33152);
    *(_QWORD *)(v2 + 72) += v6;
    v7 = *(unsigned int *)(v2 + 80);
    v8 = v6 * *(unsigned int *)(v1 + 33208);
    *(_QWORD *)(v1 + 33152) = v5;
    v9 = *(_BYTE *)(v2 + 2);
    v10 = (v8 >> 16) + v7;
    if ( v10 > 0xFFFFFFFF )
      v10 = 0xFFFFFFFFLL;
    *(_DWORD *)(v2 + 80) = v10;
    if ( (v9 & 0xBE) != 0 )
    {
      if ( v9 < 0 )
      {
        v4 = *(_QWORD *)(v1 + 34480);
        v11 = (*(_QWORD *)(*(_QWORD *)(v2 + 544) + 1024LL) >> 4) & 0x1FFLL;
        v12 = ((unsigned int)*(_QWORD *)(*(_QWORD *)(v2 + 544) + 1024LL) >> 13) & 0x3FFFF;
        _BitScanReverse(&v13, v12);
        v14 = 1 << v13;
        v15 = v13 - 2;
        v176 = v15;
        v10 = *(_QWORD *)(*(_QWORD *)(v4 + 8 * v15) + 8LL * (v12 ^ v14) + 8);
        *(_QWORD *)(v10 + 8 * v11) += v6;
        v9 &= ~0x80u;
      }
      if ( (v9 & 0x10) != 0 )
      {
        v10 = 8LL * *(unsigned __int8 *)(v2 + 124) + 33160;
        *(_QWORD *)(v1 + v10) += v6;
        v9 &= ~0x10u;
      }
      if ( (v9 & 0x20) != 0 )
      {
        v87 = *(_QWORD *)(v2 + 1608);
        if ( v87 )
        {
          FrequencyBucket = PoGetFrequencyBucket(v1, v10, v4, v87);
          if ( KeHeteroSystem )
            v90 = *(_BYTE *)(v1 + 34056);
          else
            v90 = *(_BYTE *)(v1 + 34059);
          *(_QWORD *)(v89 + 8 * ((v90 != 0) + 2LL * FrequencyBucket)) += v6;
          RtlTimelineBitmapUpdate((unsigned int *)(v89 + 192), KiTimelineBitmapTime);
          if ( !KiEfficiencyClassSystem )
          {
            v94 = (unsigned __int8)*(_DWORD *)(v2 + 512);
            if ( v94 == 2 || (unsigned int)(v94 - 5) <= 1 )
            {
              v10 = 2 * v93;
              *(_QWORD *)(v91 + 16 * v93 + 8) += v6;
            }
          }
          if ( *(_QWORD *)(v2 + 1552) )
          {
            *(_QWORD *)(v91 + 8 * (v92 + 2 * (v93 + 8))) += v6;
            v10 = *(_QWORD *)(*(_QWORD *)(v2 + 1552) + 1608LL) + 8 * (v92 + 8 + 2 * v93);
            _InterlockedExchangeAdd64((volatile signed __int64 *)v10, v6);
          }
        }
        v9 &= ~0x20u;
      }
      if ( (v9 & 0x40) != 0 )
      {
        v116 = *(_QWORD *)(v2 + 968);
        if ( v116 )
          *(_BYTE *)(v116 + 64) = 0;
      }
      if ( KiHgsPlusEnabled )
        KiUpdateThreadHgsFeedback(v1, v2, v6, 0LL);
      v16 = *(_QWORD *)(v1 + 33200);
      if ( v16 )
      {
        if ( *(_BYTE *)(v2 + 125) )
        {
          v117 = (unsigned __int8)*(_DWORD *)(v2 + 512);
          if ( v117 < 7 )
          {
            v118 = *(_DWORD *)(v2 + 84);
            v119 = 0;
            v10 = *(unsigned int *)(v2 + 80);
            if ( (unsigned int)v10 <= v118 )
              v10 = v118;
            LOBYTE(v119) = (unsigned int)v10 >= KiDynamicHeteroCpuPolicyExpectedCycles;
            v120 = *(unsigned __int8 *)(v2 + 516) + (unsigned int)KiHgsPlusConfiguration * (v119 + 2 * v117);
            *(_QWORD *)(v16 + 8 * v120) += v6;
          }
        }
      }
      if ( (v9 & 0xBE) != 0 )
      {
        v24 = *(_QWORD *)(v2 + 104);
        if ( v24 )
        {
          for ( i = (_QWORD *)(*(unsigned int *)(v1 + 216) + v24); i; i = (_QWORD *)i[51] )
            *i += v6;
        }
        if ( (*(_BYTE *)(v2 + 2) & 8) != 0 )
        {
          v25 = *(_QWORD *)(v1 + 192);
          v26 = *(_QWORD *)(v25 + 128);
          v10 = v26 & *(_QWORD *)(*(_QWORD *)(v2 + 576) + 8LL * *(unsigned __int16 *)(v25 + 136) + 8);
          if ( v10 != v26 )
            *(_QWORD *)(v1 + 33192) += v6;
        }
        v27 = *(_QWORD *)(v2 + 360);
        if ( v27 )
        {
          v121 = *(_QWORD *)(v27 + 32);
          if ( v121 )
          {
            v122 = 1LL;
            if ( KiHwCountersCount )
            {
              v123 = (unsigned int *)&KiHwCounters;
              v124 = (unsigned int)KiHwCountersCount;
              v125 = v27 + 48;
              do
              {
                if ( (v121 & v122) != 0 )
                {
                  v126 = __readpmc(*v123);
                  v10 = (unsigned __int64)HIDWORD(v126) << 32;
                  *(_QWORD *)(v125 + 8) += (unsigned int)(v126 - *(_DWORD *)v125);
                  *(_QWORD *)v125 = v126;
                }
                v122 *= 2LL;
                ++v123;
                v125 += 24LL;
                --v124;
              }
              while ( v124 );
            }
          }
        }
      }
      v3 = 65527LL;
    }
    v17 = *(unsigned __int16 *)(v1 + 13244);
    *(_WORD *)(v1 + 13244) = 1;
    if ( (v17 & 8) == 0 )
      goto LABEL_18;
    LOWORD(v17) = v17 & 0xFFF7;
    LOBYTE(v10) = 1;
    v169 = v17;
    active = KiSelectActiveTimerTable(v1, v10);
    v30 = active;
    if ( !active )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v150 = *SchedulerAssist;
        do
        {
          v10 = v150;
          LODWORD(v10) = v150 & 0xFFDFFFFF;
          v151 = v150;
          v150 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v150 & 0xFFDFFFFF, v150);
        }
        while ( v151 != v150 );
        if ( (v150 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      _enable();
      v199[1] = MEMORY[0xFFFFF78000000014];
      goto LABEL_85;
    }
    v31 = *v29;
    v32 = KiLastNonHrTimerExpiration;
    v33 = *(_DWORD *)(active + 16912);
    v171 = *v29;
    if ( KiLastNonHrTimerExpiration == *(_QWORD *)(active + 16904) )
      v34 = 0;
    else
      v34 = v10;
    v10 = KiLastPseudoHrTimerExpiration;
    v35 = KiLastPseudoHrTimerExpiration != *(_QWORD *)(v30 + 16896);
    v36 = v34;
    if ( KiGlobalTimerResolutionRequests )
      v36 = v35;
    v160 = KiLastPseudoHrTimerExpiration != *(_QWORD *)(v30 + 16896);
    v37 = v31 >> 18;
    v167 = v36;
    if ( v35 )
    {
      *(_QWORD *)(v30 + 16896) = KiLastPseudoHrTimerExpiration;
      *(_DWORD *)(v30 + 16912) = v37;
    }
    if ( (_BYTE)v36 )
    {
      v38 = *(_DWORD *)(v30 + 16916);
      *(_QWORD *)(v30 + 16904) = v32;
      if ( v33 >= v38 )
        v33 = v38;
      *(_DWORD *)(v30 + 16916) = v37;
    }
    if ( !v35 && !(_BYTE)v36 )
    {
      v108 = KeGetCurrentPrcb();
      v109 = (unsigned __int32 *)v108->SchedulerAssist;
      if ( v109 )
      {
        _m_prefetchw(v109);
        v112 = *v109;
        do
        {
          v10 = v112;
          LODWORD(v10) = v112 & 0xFFDFFFFF;
          v113 = v112;
          v112 = _InterlockedCompareExchange((volatile signed __int32 *)v109, v112 & 0xFFDFFFFF, v112);
        }
        while ( v113 != v112 );
        if ( (v112 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v108);
      }
      _enable();
      v199[1] = MEMORY[0xFFFFF78000000014];
      goto LABEL_82;
    }
    v39 = KeGetCurrentPrcb();
    v40 = (unsigned __int32 *)v39->SchedulerAssist;
    if ( v40 )
    {
      _m_prefetchw(v40);
      v98 = *v40;
      do
      {
        v10 = v98;
        LODWORD(v10) = v98 & 0xFFDFFFFF;
        v99 = v98;
        v98 = _InterlockedCompareExchange((volatile signed __int32 *)v40, v98 & 0xFFDFFFFF, v98);
      }
      while ( v99 != v98 );
      if ( (v98 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v39);
    }
    _enable();
    v199[1] = MEMORY[0xFFFFF78000000014];
    v197 = 0LL;
    if ( KiSerializeTimerExpiration )
    {
      if ( !*(_BYTE *)(v1 + 33) )
        goto LABEL_82;
      v41 = KiProcessorBlock[0];
    }
    else
    {
      v41 = v1;
    }
    v22 = v41 == -15360;
    v10 = v41 + 15360;
    v162 = v10;
    if ( v22 )
      goto LABEL_82;
    v42 = v1 + 16LL * *(unsigned int *)(v1 + 36032);
    *(_DWORD *)(v1 + 36032) = ((unsigned __int8)*(_DWORD *)(v1 + 36032) + 1) & 0xF;
    v43 = HalpPerformanceCounter;
    *(_QWORD *)(v42 + 36040) = v31;
    if ( *(_DWORD *)(v43 + 228) == 5 )
    {
      v44 = 10000000LL;
      if ( HalpTimerReferencePage )
      {
        InternalData = HalpTimerGetInternalData(v43, v10, v40, v3);
        v101 = (*(__int64 (__fastcall **)(__int64))(v43 + 112))(InternalData);
        v47 = v162;
        v50 = MEMORY[0xFFFFF780000003B8]
            + (((unsigned __int64)v101 * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64);
        goto LABEL_56;
      }
      if ( *(_DWORD *)(v43 + 220) == 64 )
      {
        v127 = HalpTimerGetInternalData(v43, v10, v40, v3);
        v128 = (*(__int64 (__fastcall **)(__int64))(v43 + 112))(v127);
        v129 = *(_QWORD *)(v43 + 208);
      }
      else
      {
        do
        {
          v129 = *(_QWORD *)(v43 + 208);
          do
          {
            v130 = *(_QWORD *)(v43 + 200);
            v131 = HalpTimerGetInternalData(v43, v10, v40, v3);
            v132 = (*(__int64 (__fastcall **)(__int64))(v43 + 112))(v131);
            _InterlockedOr(v159, 0);
            v133 = *(_QWORD *)(v43 + 200);
          }
          while ( v130 != v133 );
        }
        while ( v129 != *(_QWORD *)(v43 + 208) );
        v134 = *(_DWORD *)(v43 + 220);
        if ( ((v130 ^ v132) & (1LL << ((unsigned __int8)v134 - 1))) != 0 )
        {
          if ( v134 == 64 )
            v135 = -1LL;
          else
            v135 = (1LL << v134) - 1;
          v136 = 0LL;
          if ( v134 != 64 )
            v136 = 1LL << v134;
          v137 = v130 & v135;
          v128 = v132 | v130 ^ v137;
          if ( v132 < v137 )
            v128 += v136;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v43 + 200), v128, v133);
        }
        else
        {
          if ( v134 == 64 )
            v138 = -1LL;
          else
            v138 = (1LL << v134) - 1;
          v128 = v132 | v130 & ~v138;
        }
      }
      v50 = HalpTimerScaleCounter(v128 + v129, *(_QWORD *)(v43 + 192), 10000000LL);
    }
    else
    {
      v44 = *(_QWORD *)(v43 + 192);
      if ( *(_DWORD *)(v43 + 220) == 64 )
      {
        v45 = HalpTimerGetInternalData(v43, v10, v40, v3);
        v46 = (*(__int64 (__fastcall **)(__int64))(v43 + 112))(v45);
        v47 = v162;
        v48 = v46;
        v49 = *(_QWORD *)(v43 + 208);
      }
      else
      {
        v162 = v10;
        do
        {
          v49 = *(_QWORD *)(v43 + 208);
          do
          {
            v139 = *(_QWORD *)(v43 + 200);
            v140 = HalpTimerGetInternalData(v43, v10, v40, v3);
            v141 = (*(__int64 (__fastcall **)(__int64))(v43 + 112))(v140);
            _InterlockedOr(v159, 0);
            v142 = *(_QWORD *)(v43 + 200);
          }
          while ( v139 != v142 );
        }
        while ( v49 != *(_QWORD *)(v43 + 208) );
        v3 = *(unsigned int *)(v43 + 220);
        if ( ((v139 ^ v141) & (1LL << ((unsigned __int8)v3 - 1))) != 0 )
        {
          if ( (_DWORD)v3 == 64 )
            v143 = -1LL;
          else
            v143 = (1LL << v3) - 1;
          v144 = 0LL;
          if ( (_DWORD)v3 != 64 )
            v144 = 1LL << v3;
          v145 = v139 & v143;
          v48 = v141 | v139 ^ v145;
          if ( v141 < v145 )
            v48 += v144;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v43 + 200), v48, v142);
          v47 = v162;
        }
        else
        {
          if ( (_DWORD)v3 == 64 )
            v146 = -1LL;
          else
            v146 = (1LL << v3) - 1;
          v47 = v162;
          v48 = v141 | v139 & ~v146;
        }
      }
      v50 = v48 + v49;
    }
    v31 = v171;
LABEL_56:
    if ( v43 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
    {
      v147 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
      if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
        v147 = 10000000LL;
      v50 = HalpTimerScaleCounter(v50, v44, v147);
    }
    *(_QWORD *)(v42 + 36048) = v50;
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    {
      *(_QWORD *)&v197 = v31;
      v198[0] = &v197;
      BYTE8(v197) = 0;
      v198[1] = 16LL;
      EtwTraceKernelEvent((int)v198, 1, 0x40020000u, 3920, 1538);
      v47 = v162;
    }
    v51 = v37 - v33 + 1;
    v173 = v51;
    if ( v51 > 0x100 )
    {
      v65 = (v37 - v51 + 1) << 18;
      goto LABEL_237;
    }
    while ( 2 )
    {
      v168 = v51;
      v52 = 256 - v51;
      v170 = v31;
      v53 = v31;
      if ( 256 - v51 > 0x18 )
        v52 = 24;
LABEL_62:
      v54 = 0;
      v190 = 0LL;
      v55 = v33 + v168;
      v56 = v33 - 1;
      v184 = v55;
      v57 = v56;
      v189 = 0LL;
      v58 = v55 - 1;
      v161 = 0;
      v59 = v55 - 1 + v52;
      v164 = v58;
      v163 = v58 + v52;
      BYTE3(v189) = -64;
      do
      {
        v60 = v47 + 32 * ((unsigned __int8)++v57 + 16LL);
        if ( v54 > v58 && *(_QWORD *)(v60 + 24) > v53 )
          continue;
        v61 = (__int64 **)(v60 + 8);
        if ( v61 == (__int64 **)*v61 )
          goto LABEL_65;
        do
        {
          v177 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)v60, 0LL) )
          {
            do
              KeYieldProcessorEx(&v177);
            while ( *(_QWORD *)v60 );
          }
          v47 = v162;
          v70 = (volatile signed __int64 *)v60;
          v71 = v161;
          v172 = (volatile signed __int64 *)v60;
          do
          {
            v72 = *v61;
            if ( v61 == (__int64 **)*v61 )
              goto LABEL_100;
            v73 = *(v72 - 1);
            v3 = (ULONG_PTR)(v72 - 4);
            BugCheckParameter3 = (ULONG_PTR)(v72 - 4);
            if ( v73 > v170 )
            {
              *(_QWORD *)(v60 + 24) = v73;
LABEL_100:
              _InterlockedAnd64(v70, 0LL);
              goto LABEL_101;
            }
            v193 = 0LL;
            BYTE3(v189) ^= (BYTE3(v189) ^ v71) & 0x3F;
            BYTE3(v193) = *(_BYTE *)(v3 + 3) ^ BYTE3(v189);
            v194 = 0LL;
            _InterlockedXor((volatile signed __int32 *)v3, v193);
            BugCheckParameter4 = _InterlockedExchange64((volatile __int64 *)(v47 + 8LL * v71), v3);
            v79 = *(unsigned __int16 *)(v3 + 58);
            v165 = (volatile signed __int32 *)v79;
            v80 = *v72;
            v81 = v47 + 32 * ((unsigned __int8)v57 + ((unsigned __int64)(unsigned int)v79 << 8) + 16);
            v186 = v47 + 32 * ((unsigned __int8)v57 + ((v79 ^ 1) << 8) + 16);
            v82 = (__int64 **)v72[1];
            v175 = v81;
            if ( *(__int64 **)(v80 + 8) != v72 || *v82 != v72 )
LABEL_295:
              __fastfail(3u);
            *v82 = (__int64 *)v80;
            *(_QWORD *)(v80 + 8) = v82;
            if ( v82 == (__int64 **)v80 )
            {
              v22 = (_WORD)v165 == 0;
              *(_DWORD *)(v81 + 28) = -1;
              if ( v22 )
              {
                v178 = 0;
                v83 = (volatile signed __int32 *)(v47 + 32 * ((unsigned __int8)v57 + 272LL));
                v165 = v83;
                while ( _interlockedbittestandset64(v83, 0LL) )
                {
                  do
                  {
                    KeYieldProcessorEx(&v178);
                    v83 = v165;
                  }
                  while ( *(_QWORD *)v165 );
                }
                v70 = v172;
                goto LABEL_115;
              }
              v83 = (volatile signed __int32 *)v60;
              if ( _interlockedbittestandset64((volatile signed __int32 *)v60, 0LL) )
              {
                _mm_pause();
                goto LABEL_246;
              }
              if ( !v60 )
              {
LABEL_246:
                _InterlockedAnd64(v70, 0LL);
                v179 = 0;
                while ( _interlockedbittestandset64(v83, 0LL) )
                {
                  do
                  {
                    KeYieldProcessorEx(&v179);
                    v83 = (volatile signed __int32 *)v60;
                  }
                  while ( *(_QWORD *)v60 );
                }
                v180 = 0;
                v70 = (volatile signed __int64 *)(v162 + 32 * ((unsigned __int8)v57 + 272LL));
                v172 = v70;
                while ( _interlockedbittestandset64((volatile signed __int32 *)v70, 0LL) )
                {
                  do
                  {
                    KeYieldProcessorEx(&v180);
                    v70 = v172;
                  }
                  while ( *v172 );
                }
                v83 = (volatile signed __int32 *)v60;
LABEL_115:
                v81 = v175;
                v3 = BugCheckParameter3;
                v47 = v162;
              }
              if ( *(_DWORD *)(v81 + 28) == -1 && *(_DWORD *)(v186 + 28) == -1 )
              {
                v84 = KiPendingTimerBitmaps[2 * *(unsigned __int8 *)(v47 - 15152) + 1];
                if ( KiSerializeTimerExpiration )
                {
                  v85 = v57 & 0x3F;
                  v86 = (volatile signed __int32 *)(v84 + 8LL * ((unsigned __int8)v57 >> 6));
                }
                else
                {
                  v85 = *(unsigned __int8 *)(v47 - 15151);
                  v86 = (volatile signed __int32 *)(((unsigned __int64)(unsigned __int8)v57 << 6) + v84);
                }
                _interlockedbittestandreset64(v86, v85);
              }
              _InterlockedAnd64((volatile signed __int64 *)v83, 0LL);
            }
            v71 = ++v161;
            if ( BugCheckParameter4 )
              KeBugCheckEx(0xC7u, 8uLL, 1uLL, v3, BugCheckParameter4);
          }
          while ( v71 != 64 );
          _InterlockedAnd64(v70, 0LL);
          KiProcessExpiredTimerList(v166, v199, v47, 64LL);
          v161 = 0;
        }
        while ( v61 != (__int64 **)*v61 );
        v47 = v162;
LABEL_101:
        v58 = v164;
        v59 = v163;
LABEL_65:
        v53 = v170;
        ++v54;
      }
      while ( v57 != v59 );
      v10 = v161;
      if ( v161 )
      {
        KiProcessExpiredTimerList(v166, v199, v47, v161);
        v59 = v163;
        v47 = v162;
        v58 = v164;
      }
      LOBYTE(v36) = v167;
      if ( !(_BYTE)v167 )
      {
        v1 = v166;
        goto LABEL_78;
      }
      v62 = 0;
      v192 = 0LL;
      v3 = 0LL;
      v191 = 0LL;
      v161 = 0;
      BYTE3(v191) = -64;
      while ( 2 )
      {
        v63 = v47 + 32 * ((unsigned __int8)++v56 + 272LL);
        if ( v62 > v58 && *(_QWORD *)(v63 + 24) > v170 )
          goto LABEL_74;
        v64 = (unsigned __int64 *)(v63 + 8);
        if ( v64 == (unsigned __int64 *)*v64 )
          goto LABEL_73;
        while ( 2 )
        {
          v181 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)v63, 0LL) )
          {
            do
              KeYieldProcessorEx(&v181);
            while ( *(_QWORD *)v63 );
          }
          v47 = v162;
          v67 = (volatile signed __int64 *)v63;
          v3 = v161;
          while ( 2 )
          {
            v10 = *v64;
            if ( v64 == (unsigned __int64 *)*v64 )
              goto LABEL_92;
            v68 = *(_QWORD *)(v10 - 8);
            v69 = v10 - 32;
            v175 = v10 - 32;
            if ( v68 > v170 )
            {
              *(_QWORD *)(v63 + 24) = v68;
LABEL_92:
              _InterlockedAnd64(v67, 0LL);
              goto LABEL_93;
            }
            v195 = 0LL;
            BYTE3(v191) ^= (BYTE3(v191) ^ v3) & 0x3F;
            BYTE3(v195) = *(_BYTE *)(v69 + 3) ^ BYTE3(v191);
            v196 = 0LL;
            _InterlockedXor((volatile signed __int32 *)v69, v195);
            v74 = _InterlockedExchange64((volatile __int64 *)(v47 + 8LL * (unsigned int)v3), v69);
            v75 = *(unsigned __int16 *)(v69 + 58);
            BugCheckParameter4 = v75;
            BugCheckParameter3 = v74;
            v76 = *(_QWORD *)v10;
            v77 = (volatile signed __int64 *)(v47
                                            + 32
                                            * ((unsigned __int8)v56 + ((unsigned __int64)(unsigned int)v75 << 8) + 16));
            v186 = v47 + 32 * ((unsigned __int8)v56 + ((v75 ^ 1) << 8) + 16);
            v78 = *(volatile signed __int64 **)(v10 + 8);
            v172 = v77;
            if ( *(_QWORD *)(v76 + 8) != v10 || *v78 != v10 )
              goto LABEL_295;
            *v78 = v76;
            *(_QWORD *)(v76 + 8) = v78;
            if ( v78 == (volatile signed __int64 *)v76 )
            {
              v22 = (_WORD)BugCheckParameter4 == 0;
              *((_DWORD *)v77 + 7) = -1;
              if ( v22 )
              {
                v182 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)v63, 0LL) )
                {
                  do
                    KeYieldProcessorEx(&v182);
                  while ( *(_QWORD *)v63 );
                }
                v102 = (volatile signed __int32 *)v63;
              }
              else
              {
                v102 = (volatile signed __int32 *)(v47 + 32 * ((unsigned __int8)v56 + 16LL));
                if ( _interlockedbittestandset64(v102, 0LL) )
                {
                  _mm_pause();
                }
                else if ( v102 )
                {
                  goto LABEL_148;
                }
                _InterlockedAnd64(v67, 0LL);
                v165 = (volatile signed __int32 *)(v47 + 32 * ((unsigned __int8)v56 + 16LL));
                v183 = 0;
                while ( _interlockedbittestandset64(v102, 0LL) )
                {
                  do
                  {
                    KeYieldProcessorEx(&v183);
                    v102 = v165;
                  }
                  while ( *(_QWORD *)v165 );
                }
                v67 = (volatile signed __int64 *)v63;
                v185 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)v63, 0LL) )
                {
                  do
                    KeYieldProcessorEx(&v185);
                  while ( *(_QWORD *)v63 );
                }
                v102 = v165;
              }
              v77 = v172;
              v74 = BugCheckParameter3;
              v47 = v162;
              v69 = v175;
LABEL_148:
              if ( *((_DWORD *)v77 + 7) == -1 && *(_DWORD *)(v186 + 28) == -1 )
              {
                v103 = KiPendingTimerBitmaps[2 * *(unsigned __int8 *)(v47 - 15152) + 1];
                if ( KiSerializeTimerExpiration )
                {
                  v104 = v56 & 0x3F;
                  v105 = (volatile signed __int32 *)(v103 + 8LL * ((unsigned __int8)v56 >> 6));
                }
                else
                {
                  v104 = *(unsigned __int8 *)(v47 - 15151);
                  v105 = (volatile signed __int32 *)(((unsigned __int64)(unsigned __int8)v56 << 6) + v103);
                }
                _interlockedbittestandreset64(v105, v104);
              }
              _InterlockedAnd64((volatile signed __int64 *)v102, 0LL);
            }
            ++v161;
            if ( v74 )
              KeBugCheckEx(0xC7u, 8uLL, 1uLL, v69, v74);
            v3 = v161;
            if ( v161 != 64 )
              continue;
            break;
          }
          _InterlockedAnd64(v67, 0LL);
          KiProcessExpiredTimerList(v166, v199, v47, 64LL);
          v3 = 0LL;
          v161 = 0;
          if ( v64 != (unsigned __int64 *)*v64 )
            continue;
          break;
        }
        v47 = v162;
LABEL_93:
        v58 = v164;
        v59 = v163;
LABEL_73:
        ++v62;
LABEL_74:
        if ( v56 != v59 )
          continue;
        break;
      }
      v1 = v166;
      if ( (_DWORD)v3 )
        KiProcessExpiredTimerList(v166, v199, v47, v3);
      LOBYTE(v36) = v167;
LABEL_78:
      v22 = v173 == v168;
      v51 = v173 - v168;
      v33 = v184;
      v47 = v162;
      v65 = v170;
      v31 = v171;
      v173 -= v168;
      if ( !v22 )
      {
LABEL_237:
        if ( v51 <= 0x100 )
          continue;
        v53 = v65 + 0x4000000;
        v168 = 256;
        v170 = v53;
        v52 = 0;
        goto LABEL_62;
      }
      break;
    }
    LOWORD(v17) = v169;
    v35 = v160;
    if ( (*(_BYTE *)(v1 + 13244) & 8) == 0 )
    {
      v66 = *(_DWORD *)(v1 + 33128);
      *(_DWORD *)(v1 + 33124) = 0;
      if ( v66 >= KeTimeIncrement )
        *(_DWORD *)(v1 + 33128) = v66 - KeTimeIncrement;
      else
        *(_DWORD *)(v1 + 33128) = 0;
    }
LABEL_82:
    if ( *(_BYTE *)(v1 + 33) )
      KiTimer2Expiration(v1, v31, v35, (unsigned __int8)v36, (__int64)v199);
    v2 = v188;
LABEL_85:
    _disable();
LABEL_18:
    if ( (v17 & 0x40) != 0 )
    {
      v110 = KeGetCurrentPrcb();
      LOWORD(v17) = v17 & 0xFFBF;
      v111 = (unsigned __int32 *)v110->SchedulerAssist;
      if ( v111 )
      {
        _m_prefetchw(v111);
        v114 = *v111;
        do
        {
          v10 = v114;
          LODWORD(v10) = v114 & 0xFFDFFFFF;
          v115 = v114;
          v114 = _InterlockedCompareExchange((volatile signed __int32 *)v111, v114 & 0xFFDFFFFF, v114);
        }
        while ( v115 != v114 );
        if ( (v114 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v110);
      }
      _enable();
      KiNormalPriorityReadyScan(v1, v10, v111, v3);
      _disable();
    }
    if ( KiExecuteAllDpcs(v1, v2, v199, 0) )
    {
      if ( (v17 & 4) != 0 )
      {
        v152 = KeGetCurrentPrcb();
        v153 = (signed __int32 *)v152->SchedulerAssist;
        if ( v153 )
        {
          _m_prefetchw(v153);
          v154 = *v153;
          do
          {
            v155 = v154;
            v154 = _InterlockedCompareExchange(v153, v154 & 0xFFDFFFFF, v154);
          }
          while ( v155 != v154 );
          if ( (v154 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v152);
        }
        _enable();
        KeSignalGate(v1 + 32320, 0LL);
        _disable();
      }
      v19 = __rdtsc();
      v20 = v19 - *(_QWORD *)(v1 + 33152);
      v21 = v20 + *(_QWORD *)(v1 + 33400);
      *(_QWORD *)(v1 + 33400) = v21;
      if ( (*(_BYTE *)(v2 + 2) & 0x20) != 0 )
      {
        v95 = PoGetFrequencyBucket(v1, v21, v18, v20);
        if ( KeHeteroSystem )
          v96 = *(_BYTE *)(v1 + 34056);
        else
          v96 = *(_BYTE *)(v1 + 34059);
        v97 = (_QWORD *)(v1 + 8 * ((v96 != 0) + 2LL * v95 + 4176));
        *v97 += v20;
      }
      if ( (*(_BYTE *)(v2 + 2) & 0x40) != 0 )
      {
        v156 = *(_QWORD *)(v2 + 968);
        if ( v156 )
          *(_BYTE *)(v156 + 64) = 1;
      }
      *(_QWORD *)(v1 + 33152) = v19;
      if ( (*(_BYTE *)(v2 + 2) & 2) != 0 )
        KiBeginCounterAccumulation(v2, 0LL, v18, v20);
      v22 = *(_BYTE *)(v1 + 6) == 0;
      *(_BYTE *)(v1 + 32) = 0;
      if ( !v22 )
        *(_BYTE *)(v1 + 6) = 0;
      result = _InterlockedCompareExchange16((volatile signed __int16 *)(v1 + 13244), 0, 1);
      if ( result == 1 )
        goto LABEL_28;
      continue;
    }
    break;
  }
  LOBYTE(v18) = 1;
  KiStartThreadCycleAccumulation(v1, v2, v18);
  LODWORD(v166) = 0;
  _m_prefetchw((const void *)(v1 + 13244));
  v107 = *(_WORD *)(v1 + 13244);
  result = _InterlockedCompareExchange16((volatile signed __int16 *)(v1 + 13244), (v107 | v17) & 0xFF7E | 0x80, v107);
  if ( v107 != result )
  {
    do
    {
      RtlBackoff(&v166);
      _m_prefetchw((const void *)(v1 + 13244));
      v158 = *(_WORD *)(v1 + 13244);
      result = _InterlockedCompareExchange16(
                 (volatile signed __int16 *)(v1 + 13244),
                 v157 | (v17 | v158) & 0xFFFE,
                 v158);
    }
    while ( v158 != result );
  }
LABEL_28:
  *(_QWORD *)(v1 + 13152) = 0LL;
  return result;
}
