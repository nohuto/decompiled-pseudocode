/*
 * XREFs of KiSearchForNewThreadOnProcessor @ 0x140240D60
 * Callers:
 *     KiSearchForNewThread @ 0x140240420 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadOnSubNode @ 0x14057EC9C (KiSearchForNewThreadOnSubNode.c)
 * Callees:
 *     KiCompleteRescheduleContext @ 0x140201EB0 (KiCompleteRescheduleContext.c)
 *     KiGroupSchedulingMoveThread @ 0x1402066D0 (KiGroupSchedulingMoveThread.c)
 *     KiRemoveThreadFromReadyQueue @ 0x140206BE0 (KiRemoveThreadFromReadyQueue.c)
 *     KiStartRescheduleContext @ 0x140238FF0 (KiStartRescheduleContext.c)
 *     KiMayStealStandbyThread @ 0x140241FB0 (KiMayStealStandbyThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140242670 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiCommitRescheduleContextEntry @ 0x140242F60 (KiCommitRescheduleContextEntry.c)
 *     KiFindRescheduleContextEntryForPrcb @ 0x140243C40 (KiFindRescheduleContextEntryForPrcb.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140246840 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiReadyDeferredReadyList @ 0x140249D60 (KiReadyDeferredReadyList.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252820 (KiFlushSoftwareInterruptBatch.c)
 *     KeIsMultiCoreClassesEnabled @ 0x140256000 (KeIsMultiCoreClassesEnabled.c)
 *     KiComputeHeteroThreadQos @ 0x1402B1080 (KiComputeHeteroThreadQos.c)
 *     KiInsertDeferredReadyList @ 0x1402B9EE4 (KiInsertDeferredReadyList.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140307B50 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiAdjustRescheduleContextEntryForThreadRemoval @ 0x14030819C (KiAdjustRescheduleContextEntryForThreadRemoval.c)
 *     KiCommitRescheduleContext @ 0x140308804 (KiCommitRescheduleContext.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x14030932C (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiCheckForMaxOverQuotaScb @ 0x14030934C (KiCheckForMaxOverQuotaScb.c)
 *     KiDowngradeIsolationUnitLockHandle @ 0x1403097C4 (KiDowngradeIsolationUnitLockHandle.c)
 *     KiIsPrcbThread @ 0x140324F90 (KiIsPrcbThread.c)
 *     KiUpdateVPBackingThreadPriority @ 0x14034E478 (KiUpdateVPBackingThreadPriority.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiAcquireSoftParkElectionLock @ 0x140410424 (KiAcquireSoftParkElectionLock.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KiConvertDynamicHeteroPolicy @ 0x140461A48 (KiConvertDynamicHeteroPolicy.c)
 *     KzReleaseAdditionalPrcbLocks @ 0x14056D7E4 (KzReleaseAdditionalPrcbLocks.c)
 */

unsigned __int64 *__fastcall KiSearchForNewThreadOnProcessor(
        __int64 a1,
        __int64 a2,
        struct _KPRCB **a3,
        unsigned __int64 *a4)
{
  struct _KPRCB **v4; // rbx
  __int64 v5; // r14
  unsigned __int64 *v7; // rsi
  unsigned __int64 *v8; // r11
  __int64 *v9; // rdi
  __int64 *v10; // rsi
  unsigned __int64 v11; // rbx
  unsigned __int64 *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r8
  _WORD *v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // ecx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  int v20; // r12d
  __int64 v21; // rax
  _QWORD *v22; // rsi
  _WORD *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rbx
  int v26; // r15d
  __int64 v27; // r14
  int v28; // eax
  unsigned int v29; // eax
  int v30; // ecx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rax
  unsigned __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned int v42; // ecx
  __int64 v43; // rax
  _QWORD *v44; // rdx
  int v45; // r12d
  __int64 v46; // rax
  _QWORD *v47; // r14
  _WORD *v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rbx
  int v51; // r15d
  __int64 v52; // rsi
  __int64 v53; // rdx
  int v54; // eax
  unsigned int v55; // eax
  int v56; // ecx
  __int64 v57; // rax
  __int64 v58; // rcx
  int v59; // eax
  unsigned __int64 v60; // rcx
  unsigned __int64 v61; // rcx
  _QWORD *v62; // rcx
  _QWORD *v63; // rax
  __int64 v64; // rcx
  int v65; // r15d
  unsigned __int64 v66; // rdx
  struct _KPRCB **v67; // r8
  unsigned int v68; // r13d
  unsigned __int64 v69; // rcx
  bool v70; // zf
  __int64 v71; // r9
  unsigned __int8 *v72; // rax
  unsigned int v73; // r12d
  __int64 v74; // r9
  _QWORD *v75; // rbx
  struct _KPRCB *v76; // r14
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rdx
  ULONG_PTR NextThread; // rsi
  char v79; // cl
  char v80; // cl
  char v81; // al
  char v82; // dl
  unsigned __int8 v83; // cl
  unsigned __int64 *v84; // r8
  unsigned __int64 *v85; // rdx
  _BYTE *v86; // rcx
  __int64 v87; // rdx
  unsigned __int64 *v88; // r14
  unsigned __int64 v89; // rbx
  __int64 RescheduleContextEntryForPrcb; // rax
  __int64 v91; // rdx
  __int64 v92; // rdx
  unsigned __int8 *v93; // r11
  char v94; // r10
  __int64 i; // r10
  unsigned __int8 *v96; // rcx
  __int64 v97; // rdx
  char v98; // r12
  unsigned __int64 v99; // r8
  unsigned __int64 *v100; // r10
  unsigned int v101; // ecx
  unsigned __int64 *v102; // rax
  unsigned int v103; // r13d
  unsigned int v104; // esi
  __int64 v105; // rbx
  _QWORD *v106; // r10
  __int64 v107; // rcx
  unsigned __int64 v108; // rax
  __int64 v109; // rcx
  char v110; // cl
  int v111; // eax
  __int64 v112; // r11
  __int64 v113; // rcx
  char v114; // cl
  __int64 v115; // r11
  unsigned __int64 v116; // rcx
  unsigned __int64 v117; // r11
  __int64 v118; // rcx
  char v119; // cl
  int v120; // eax
  unsigned int v121; // ebx
  __int64 v122; // r11
  _QWORD *v123; // r10
  __int64 v124; // rcx
  unsigned __int64 v125; // rax
  __int64 v126; // rcx
  char v127; // cl
  int v128; // eax
  __int64 v129; // r11
  __int64 v130; // rsi
  __int64 v131; // rcx
  char v132; // al
  char v133; // al
  char v134; // cl
  char v135; // al
  __int64 v136; // r11
  __int64 v137; // r13
  char v138; // si
  unsigned int v139; // r12d
  unsigned int j; // ebx
  unsigned __int8 *v141; // rdx
  unsigned __int8 v142; // al
  unsigned __int64 *v143; // rbx
  unsigned __int64 v144; // rcx
  unsigned __int64 v145; // rdx
  unsigned __int64 *v146; // rdi
  unsigned __int64 *v147; // r8
  unsigned __int64 v148; // r9
  int v149; // edx
  unsigned __int64 *v150; // r9
  unsigned __int64 v151; // rcx
  unsigned __int64 v152; // r8
  unsigned __int64 *v153; // r11
  int v154; // edx
  char v156; // [rsp+30h] [rbp-D0h]
  char v157; // [rsp+31h] [rbp-CFh]
  char v158; // [rsp+32h] [rbp-CEh]
  __int64 v159; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v160; // [rsp+40h] [rbp-C0h] BYREF
  struct _KPRCB **v161; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v162; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 *v163; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v164; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v165; // [rsp+68h] [rbp-98h]
  int v166; // [rsp+70h] [rbp-90h] BYREF
  int v167; // [rsp+74h] [rbp-8Ch]
  int v168; // [rsp+78h] [rbp-88h] BYREF
  int v169; // [rsp+7Ch] [rbp-84h]
  __int64 v170; // [rsp+80h] [rbp-80h]
  int v171; // [rsp+88h] [rbp-78h] BYREF
  int v172; // [rsp+8Ch] [rbp-74h] BYREF
  _DWORD v173[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v174; // [rsp+98h] [rbp-68h] BYREF
  __int64 v175; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v176; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD **v177; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v178; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v179; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v180[42]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v181[336]; // [rsp+220h] [rbp+120h] BYREF

  v4 = a3;
  v164 = a2;
  v5 = a2;
  v160 = a1;
  v161 = a3;
  v163 = a4;
  v7 = a4;
  memset(v180, 0, sizeof(v180));
  memset(v181, 0, sizeof(v181));
  v8 = 0LL;
  v159 = 0LL;
  v157 = 0;
  v162 = 0LL;
  while ( 1 )
  {
    if ( v5 )
    {
      if ( !*(_DWORD *)(v5 + 32472) && !(unsigned __int8)KiMayStealStandbyThread(v5, a1) && !*(_QWORD *)(v5 + 32560) )
        return v8;
      v175 = v5;
      v174 = a1;
      *v7 = a1 & 0xFFFFFFFFFFFFFFFEuLL;
      v9 = &v174;
      v10 = &v175;
      v162 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
      while ( 1 )
      {
        if ( v9 >= &v175 && v10 >= (__int64 *)&v176 )
        {
          v4 = v161;
          v7 = v163;
          goto LABEL_33;
        }
        if ( v9 >= &v175 )
          break;
        v11 = *v9;
        if ( v10 < (__int64 *)&v176 )
        {
          if ( v11 >= *v10 )
          {
            v11 = *v10;
            goto LABEL_16;
          }
          ++v9;
        }
        else
        {
          ++v9;
        }
LABEL_17:
        v171 = (int)v8;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 48), 0LL) )
        {
          do
            KeYieldProcessorEx(&v171);
          while ( *(_QWORD *)(v11 + 48) );
        }
        v8 = 0LL;
      }
      v11 = *v10;
LABEL_16:
      ++v10;
      goto LABEL_17;
    }
    if ( ((_DWORD)v4[1] & 0xFFFFFFFE) == 0 )
      return v8;
    v172 = 0;
    *v7 = a1 & 0xFFFFFFFFFFFFFFFEuLL;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
    {
      do
        KeYieldProcessorEx(&v172);
      while ( *(_QWORD *)(a1 + 48) );
    }
    v173[0] = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    {
      do
        KeYieldProcessorEx(v173);
      while ( *v4 );
    }
    v8 = 0LL;
LABEL_33:
    v12 = *(unsigned __int64 **)(a1 + 16);
    if ( v12 && v12 != *(unsigned __int64 **)(a1 + 24) )
    {
      if ( v4 )
      {
        _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
        KiDowngradeIsolationUnitLockHandle(v7, 0LL);
        return v12;
      }
      if ( v162 )
      {
        v65 = (int)v8;
        v66 = v162 & 0xFFFFFFFFFFFFFFFEuLL;
        v163 = (unsigned __int64 *)(v162 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( (v162 & 1) == 0 )
        {
          v8 = (unsigned __int64 *)&v163;
          v65 = 1;
          goto LABEL_136;
        }
        if ( (v162 & 1) == 1 )
        {
          v8 = (unsigned __int64 *)(*(_QWORD *)(v66 + 34904) + 8LL);
          v65 = **(unsigned __int8 **)(v66 + 34904);
        }
        while ( v65 )
LABEL_136:
          _InterlockedAnd64((volatile signed __int64 *)(v8[--v65] + 48), 0LL);
      }
      KiDowngradeIsolationUnitLockHandle(v7, 0LL);
      return v12;
    }
    v12 = v8;
    if ( v4 )
    {
      v42 = (_DWORD)v4[1] & 0xFFFFFFFE;
      if ( v42 )
      {
        v43 = *(_QWORD *)(a1 + 200);
        v44 = v4 + 2;
        v176 = (unsigned __int64)(v4 + 2);
        v45 = 64;
        v170 = v43;
        v168 = (int)v8;
        while ( 2 )
        {
          _BitScanReverse((unsigned int *)&v46, v42);
          v169 = v46;
          LODWORD(v165) = v42 ^ (1 << v46);
          v177 = (_QWORD **)&v44[2 * v46];
          v47 = *v177;
          do
          {
            v48 = (_WORD *)v47[45];
            v12 = v47 - 27;
            v49 = *(unsigned __int8 *)(a1 + 208);
            if ( (unsigned __int16)v49 < *v48 )
            {
              v50 = *(_QWORD *)&v48[4 * v49 + 4];
              if ( v50 )
              {
                v51 = *((unsigned __int8 *)v12 + 516);
                v52 = *(_QWORD *)(a1 + 192);
                if ( (unsigned int)KeIsMultiCoreClassesEnabled() )
                {
                  v54 = KiComputeHeteroThreadQos(v47 - 27, &v168);
                  v53 = v50 & *(_QWORD *)(*(_QWORD *)(v52 + 192)
                                        + 24LL
                                        * (v51 + (unsigned int)*(unsigned __int8 *)(v52 + 185) * (v168 + 2 * v54))
                                        + 16);
                  if ( v53 )
                    v50 &= *(_QWORD *)(*(_QWORD *)(v52 + 192)
                                     + 24LL * (v51 + (unsigned int)*(unsigned __int8 *)(v52 + 185) * (v168 + 2 * v54))
                                     + 16);
                }
                else
                {
                  v55 = *((unsigned __int8 *)v12 + 125);
                  if ( v55 >= 5 )
                    v55 = KiConvertDynamicHeteroPolicy(v47 - 27);
                  if ( v55 )
                  {
                    v56 = v55 * *(unsigned __int8 *)(v52 + 185);
                    v57 = *(_QWORD *)(v52 + 192);
                    v58 = 3LL * (unsigned int)(v51 + v56);
                    v53 = v50 & *(_QWORD *)(v57 + 8 * v58 + 16);
                    if ( v53 )
                      v50 &= *(_QWORD *)(v57 + 8 * v58 + 16);
                  }
                }
                if ( (v50 & v170) != 0 )
                {
                  v59 = *((_DWORD *)v12 + 30);
                  if ( (v59 & 2) == 0
                    && (*((char *)v12 + 195) >= 16
                     || (v59 & 0x200) != 0
                     || (v60 = v12[13]) == 0
                     || (v61 = *(unsigned int *)(a1 + 216) + v60) == 0
                     || !(unsigned __int8)KiCheckForMaxOverQuotaScb(v61, v53)) )
                  {
                    if ( (v12[15] & 0x400000) != 0 )
                      _InterlockedAnd((volatile signed __int32 *)v12[121], 0xFFFBFFFF);
                    v62 = (_QWORD *)*v47;
                    v63 = (_QWORD *)v47[1];
                    if ( *(_QWORD **)(*v47 + 8LL) != v47 || (_QWORD *)*v63 != v47 )
                      __fastfail(3u);
                    v4 = v161;
                    *v63 = v62;
                    v62[1] = v63;
                    if ( v63 == v62 )
                      *((_DWORD *)v4 + 2) ^= 1 << v169;
                    --*((_DWORD *)v4 + 168);
                    v4[85] = (struct _KPRCB *)((char *)v4[85] - *((unsigned int *)v12 + 572));
                    if ( (struct _KPRCB *)v12[287] == v4[87] )
                    {
                      KiAcquireSoftParkElectionLock(v4);
                      if ( (struct _KPRCB *)v12[287] == v4[87] )
                      {
                        --*((_DWORD *)v4 + 176);
                        v4[89] = (struct _KPRCB *)((char *)v4[89] - *((unsigned int *)v12 + 573));
                        if ( !*((_DWORD *)v4 + 176) )
                          v4[210] = 0LL;
                        v64 = *((unsigned __int8 *)v12 + 1649)
                            + 8 * (*((unsigned __int8 *)v12 + 1650) + 2LL * *((unsigned __int8 *)v12 + 1648));
                        v4[v64 + 98] = (struct _KPRCB *)((char *)v4[v64 + 98] - *((unsigned int *)v12 + 573));
                      }
                      _InterlockedAnd64((volatile signed __int64 *)v4 + 86, 0LL);
                    }
                    *((_DWORD *)v12 + 134) = *(_DWORD *)(a1 + 36);
                    goto LABEL_119;
                  }
                }
              }
            }
            v47 = (_QWORD *)*v47;
            --v45;
          }
          while ( v47 != v177 && v45 );
          v42 = v165;
          if ( (_DWORD)v165 && v45 )
          {
            v44 = (_QWORD *)v176;
            continue;
          }
          break;
        }
        v4 = v161;
        v12 = 0LL;
LABEL_119:
        v5 = v164;
      }
      _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
      goto LABEL_121;
    }
    if ( *(_BYTE *)(v5 + 34057) == *(_BYTE *)(a1 + 34057) )
    {
      v13 = *(_QWORD *)(v5 + 16);
      if ( v13 )
      {
        if ( v13 != *(_QWORD *)(v5 + 24) && (**(_BYTE **)(v5 + 56) & 0x7Fu) >= 0x10 )
        {
          v14 = *(_QWORD *)(v5 + 16);
          if ( (((*(_DWORD *)(v14 + 120) >> 1) & 1) != 1 || *(_QWORD *)(a1 + 34904) == *(_QWORD *)(v5 + 34904))
            && (*(_QWORD *)(v14 + 568) == KiCpuSetSequence || (*(_DWORD *)(v14 + 116) & 8) != 0) )
          {
            v15 = *(_WORD **)(v14 + 576);
            v16 = *(unsigned __int8 *)(a1 + 208);
            if ( (unsigned __int16)v16 < *v15 )
              break;
          }
        }
      }
    }
LABEL_47:
    v17 = *(_DWORD *)(v5 + 32472);
    if ( v17 )
    {
      v18 = *(_QWORD **)(a1 + 200);
      v19 = v5 + 32576;
      v170 = v5 + 32576;
      v20 = 64;
      v176 = (unsigned __int64)v18;
      v166 = (int)v8;
      while ( 2 )
      {
        _BitScanReverse((unsigned int *)&v21, v17);
        v167 = v21;
        LODWORD(v165) = v17 ^ (1 << v21);
        v177 = (_QWORD **)(v19 + 16 * v21);
        v22 = *v177;
        do
        {
          v23 = (_WORD *)v22[45];
          v12 = v22 - 27;
          v24 = *(unsigned __int8 *)(a1 + 208);
          if ( (unsigned __int16)v24 < *v23 )
          {
            v25 = *(_QWORD *)&v23[4 * v24 + 4];
            if ( v25 )
            {
              v26 = *((unsigned __int8 *)v12 + 516);
              v27 = *(_QWORD *)(a1 + 192);
              if ( (unsigned int)KeIsMultiCoreClassesEnabled() )
              {
                v28 = KiComputeHeteroThreadQos(v22 - 27, &v166);
                if ( (v25 & *(_QWORD *)(*(_QWORD *)(v27 + 192)
                                      + 24LL * (v26 + (unsigned int)*(unsigned __int8 *)(v27 + 185) * (v166 + 2 * v28))
                                      + 16)) != 0 )
                  v25 &= *(_QWORD *)(*(_QWORD *)(v27 + 192)
                                   + 24LL * (v26 + (unsigned int)*(unsigned __int8 *)(v27 + 185) * (v166 + 2 * v28))
                                   + 16);
              }
              else
              {
                v29 = *((unsigned __int8 *)v12 + 125);
                if ( v29 >= 5 )
                  v29 = KiConvertDynamicHeteroPolicy(v22 - 27);
                if ( v29 )
                {
                  v30 = v29 * *(unsigned __int8 *)(v27 + 185);
                  v31 = *(_QWORD *)(v27 + 192);
                  v32 = 3LL * (unsigned int)(v26 + v30);
                  if ( (v25 & *(_QWORD *)(v31 + 8 * v32 + 16)) != 0 )
                    v25 &= *(_QWORD *)(v31 + 8 * v32 + 16);
                }
              }
              if ( (v25 & v176) != 0
                && (v12[15] & 2) == 0
                && (!(unsigned __int8)KiIsThreadConstrainedBySchedulingGroup(v22 - 27)
                 || (v34 = v12[13]) == 0
                 || (v35 = *(unsigned int *)(a1 + 216) + v34) == 0
                 || !(unsigned __int8)KiCheckForMaxOverQuotaScb(v35, v33)) )
              {
                v5 = v164;
                KiRemoveThreadFromReadyQueue(v164, (__int64)v22, v167);
                v8 = 0LL;
                v4 = v161;
                *((_DWORD *)v12 + 134) = *(_DWORD *)(a1 + 36);
                goto LABEL_72;
              }
            }
          }
          v22 = (_QWORD *)*v22;
          --v20;
        }
        while ( v22 != v177 && v20 );
        v17 = v165;
        if ( (_DWORD)v165 && v20 )
        {
          v19 = v170;
          continue;
        }
        break;
      }
      v8 = 0LL;
      v12 = 0LL;
    }
    else
    {
LABEL_72:
      if ( v12 )
        goto LABEL_122;
    }
    if ( KiPerfIsoEnabled )
    {
      v36 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL)
          - ((*(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL) >> 1) & 0x5555555555555555LL);
      if ( (unsigned int)((0x101010101010101LL
                         * (((v36 & 0x3333333333333333LL)
                           + ((v36 >> 2) & 0x3333333333333333LL)
                           + (((v36 & 0x3333333333333333LL) + ((v36 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 < KiPerfIsoEnabled )
        goto LABEL_280;
      v37 = *(_QWORD *)(a1 + 200);
      v38 = *(_QWORD *)(a1 + 34912);
      if ( v37 != v38 )
      {
        v39 = v38 & ~v37;
        if ( (*(_QWORD *)(*(_QWORD *)(a1 + 192) + 16LL) & v39) == 0 )
        {
          _BitScanForward64(&v39, v39);
          v40 = (unsigned int)v39 + (*(unsigned __int8 *)(a1 + 208) << 6);
          v173[1] = v39;
          if ( (*(_DWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v40]] + 236) & 0x400) == 0 )
            goto LABEL_280;
        }
      }
    }
    v5 = v164;
    v41 = KiGroupSchedulingMoveThread(a1, v164, v164 + 32560, 0);
    v4 = v161;
    v12 = (unsigned __int64 *)v41;
LABEL_121:
    if ( !v12 )
    {
      v8 = 0LL;
LABEL_280:
      if ( v162 )
      {
        v147 = v8;
        v148 = v162 & 0xFFFFFFFFFFFFFFFEuLL;
        v149 = (int)v8;
        v160 = v162 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( (v162 & 1) == 0 )
        {
          v147 = &v160;
          v149 = 1;
          goto LABEL_287;
        }
        if ( (v162 & 1) == 1 )
        {
          v147 = (unsigned __int64 *)(*(_QWORD *)(v148 + 34904) + 8LL);
          v149 = **(unsigned __int8 **)(v148 + 34904);
        }
        while ( v149 )
LABEL_287:
          _InterlockedAnd64((volatile signed __int64 *)(v147[--v149] + 48), 0LL);
      }
      v150 = v163;
      v151 = *v163;
      v152 = *v163 & 0xFFFFFFFFFFFFFFFEuLL;
      v179 = v152;
      if ( (v151 & 1) != 0 )
      {
        v153 = (unsigned __int64 *)(*(_QWORD *)(v152 + 34904) + 8LL);
        v154 = **(unsigned __int8 **)(v152 + 34904);
        if ( **(_BYTE **)(v152 + 34904) )
          goto LABEL_292;
      }
      else
      {
        v153 = &v179;
        v154 = 1;
        do
LABEL_292:
          _InterlockedAnd64((volatile signed __int64 *)(v153[--v154] + 48), 0LL);
        while ( v154 );
      }
      *v150 = 0LL;
      return v12;
    }
LABEL_122:
    if ( v12[71] == KiCpuSetSequence || (*((_DWORD *)v12 + 29) & 8) != 0 )
    {
      v8 = 0LL;
      goto LABEL_142;
    }
    KiInsertDeferredReadyList(&v159, v12);
    if ( v162 )
      KiReleasePrcbLocksForIsolationUnit(&v162);
    v7 = v163;
    KiReleasePrcbLocksForIsolationUnit(v163);
    KiReadyDeferredReadyList(a1, &v159);
    v8 = 0LL;
  }
  if ( ((*(_QWORD *)&v15[4 * v16 + 4] >> *(_BYTE *)(a1 + 209)) & 1) == 0 )
  {
    if ( v8 )
      goto LABEL_139;
    goto LABEL_47;
  }
  v12 = *(unsigned __int64 **)(v5 + 16);
  *(_DWORD *)(v14 + 536) = *(_DWORD *)(a1 + 36);
LABEL_139:
  v157 = 1;
LABEL_142:
  v67 = (struct _KPRCB **)v8;
  v161 = (struct _KPRCB **)v8;
  v68 = (unsigned int)v8;
  v69 = *v163 & 0xFFFFFFFFFFFFFFFEuLL;
  v70 = (*v163 & 1) == 0;
  v71 = *v163 & 1;
  v178 = v69;
  v170 = v71;
  if ( v70 )
  {
    v67 = (struct _KPRCB **)&v178;
    v68 = 1;
    v161 = (struct _KPRCB **)&v178;
    v73 = (unsigned int)v8;
    goto LABEL_148;
  }
  if ( (_DWORD)v71 == 1 )
  {
    v72 = *(unsigned __int8 **)(v69 + 34904);
    v67 = (struct _KPRCB **)(v72 + 8);
    v161 = (struct _KPRCB **)(v72 + 8);
    v68 = *v72;
  }
  v73 = (unsigned int)v8;
  if ( v68 )
  {
LABEL_148:
    v74 = v68;
    v75 = &v180[6];
    v165 = v68;
    do
    {
      *((_OWORD *)v75 - 2) = 0LL;
      *((_OWORD *)v75 - 1) = 0LL;
      *v75 = 0LL;
      *(v75 - 1) = -1LL;
      *((_BYTE *)v75 + 4) = 63;
      v76 = *v67;
      *(v75 - 4) = *v67;
      SharedReadyQueue = v76->SharedReadyQueue;
      if ( (v76->IdleState & 8) != 0 && (v76->SchedulerSubNode->NonParkedSet & SharedReadyQueue->Affinity) != 0 )
        SharedReadyQueue = (_KSHARED_READY_QUEUE *)v8;
      *(v75 - 3) = SharedReadyQueue;
      NextThread = (ULONG_PTR)v76->NextThread;
      *(v75 - 2) = NextThread;
      if ( !NextThread )
      {
        NextThread = (ULONG_PTR)v76->CurrentThread;
        *(v75 - 2) = NextThread;
      }
      if ( v76->NextThread == (_KTHREAD *)NextThread )
      {
        *(_BYTE *)v75 |= 4u;
      }
      else
      {
        v79 = *(_BYTE *)v75;
        if ( v76 == KeGetCurrentPrcb() )
          v80 = v79 | 4;
        else
          v80 = v79 & 0xFB;
        *(_BYTE *)v75 = v80;
      }
      if ( (*(_DWORD *)(NextThread + 120) & 0x400000) != 0
        && !_interlockedbittestandset64((volatile signed __int32 *)(NextThread + 64), 0LL) )
      {
        if ( (*(_DWORD *)(NextThread + 120) & 0x400000) != 0 && *(_DWORD *)(NextThread + 536) == v76->Number )
        {
          if ( *(_BYTE *)(NextThread + 388) == 2
            || *(_BYTE *)(NextThread + 388) == 3
            || *(_BYTE *)(NextThread + 388) == 5
            && (v81 = *(_BYTE *)(NextThread + 112) & 7, v81 != 1)
            && (unsigned __int8)(v81 - 3) > 3u )
          {
            KiUpdateVPBackingThreadPriority(NextThread);
            v67 = v161;
            v8 = 0LL;
            v74 = v165;
          }
        }
        *(_QWORD *)(NextThread + 64) = v8;
      }
      v82 = ((v76->IdleState & 1) == 0) | *(_BYTE *)v75 & 0xFE;
      *(_BYTE *)v75 = v82;
      v83 = v82 ^ (v82 ^ (v76->PriorityState->AllFields >> 6)) & 2;
      *(_BYTE *)v75 = v83;
      if ( ((v83 >> 1) & 1u) > v73 )
        v73 = (v83 >> 1) & 1;
      ++v67;
      v75 += 5;
      v161 = v67;
      v165 = --v74;
    }
    while ( v74 );
    v69 = v178;
    v71 = v170;
  }
  HIDWORD(v180[0]) = v73;
  LODWORD(v180[1]) = v71;
  LOBYTE(v180[0]) = v68;
  if ( (_DWORD)v71 )
    BYTE1(v180[0]) = *(_BYTE *)(*(_QWORD *)(v69 + 34904) + 1LL);
  else
    BYTE1(v180[0]) = 0;
  if ( v73 )
  {
    v84 = v8;
    v71 = (unsigned int)v8;
    if ( v68 )
    {
      v85 = &v180[2];
      while ( v85[2] == *(_QWORD *)(*v85 + 34944) )
      {
        v71 = (unsigned int)(v71 + 1);
        v85 += 5;
        if ( (unsigned int)v71 >= v68 )
          goto LABEL_185;
      }
      v84 = v85;
LABEL_185:
      v86 = &v180[6];
      v87 = v68;
      do
      {
        if ( v86 - 32 != (_BYTE *)v84 )
        {
          *((_QWORD *)v86 - 2) = v84[2];
          *v86 = *((_BYTE *)v84 + 32) | 0x20;
        }
        v86 += 40;
        --v87;
      }
      while ( v87 );
    }
  }
  v88 = v8;
  v89 = v162;
  v158 = 0;
  v156 = 0;
  if ( v157 )
  {
    if ( v162 )
    {
      v88 = (unsigned __int64 *)v181;
      KiStartRescheduleContext((__int64)v181, (__int64 *)&v162, 0LL);
    }
    else
    {
      v88 = v180;
    }
    RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(v88, v164);
    KiAdjustRescheduleContextEntryForThreadRemoval(RescheduleContextEntryForPrcb, v91, 1LL, 1LL);
    if ( (v94 & 2) != 0 )
    {
      for ( i = 0LL; (unsigned int)i < *(unsigned __int8 *)v88; i = (unsigned int)(i + 1) )
      {
        v96 = (unsigned __int8 *)&v88[4 * i + 2 + (unsigned int)i];
        if ( v96 != v93 )
          KiAdjustRescheduleContextEntryForThreadRemoval(v96, v92, 1LL, 1LL);
      }
      v8 = 0LL;
      *((_DWORD *)v88 + 1) = 0;
    }
    else
    {
      v8 = 0LL;
    }
    if ( v88 == v180 )
    {
      v158 = 1;
    }
    else
    {
      KiSearchForNewThreadsForRescheduleContext(v88, &v159);
      v156 = KiCommitRescheduleContext(v88, v160, 0LL, &v159);
      v8 = 0LL;
    }
  }
  if ( v89 )
    KiReleasePrcbLocksForIsolationUnit(&v162);
  v97 = LOBYTE(v180[0]);
  v98 = 0;
  v99 = v160;
  v100 = v8;
  v101 = (unsigned int)v8;
  if ( LOBYTE(v180[0]) )
  {
    v102 = &v180[2];
    while ( *v102 != v160 )
    {
      ++v101;
      v102 += 5;
      if ( v101 >= LOBYTE(v180[0]) )
        goto LABEL_211;
    }
    v100 = v102;
  }
LABEL_211:
  v103 = (*((_DWORD *)v12 + 30) >> 1) & 1;
  if ( v103 >= ((*((unsigned __int8 *)v100 + 32) >> 1) & 1u) )
  {
    if ( v103 )
    {
      v121 = (unsigned int)v8;
      if ( LOBYTE(v180[0]) )
      {
        do
        {
          v122 = v180[5 * v121 + 2];
          v123 = &v180[5 * v121 + 2];
          v124 = v123[3];
          v125 = v124 - 1;
          if ( v122 == v99 )
          {
            if ( v125 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v124, v97, v99, v71) )
            {
              if ( (*((_BYTE *)v123 + 33) & 1) != 0 )
                *(_DWORD *)(v126 + 116) |= 2u;
              *(_BYTE *)(v126 + 565) = 1;
              KiInsertDeferredReadyList(&v159, v126);
              v99 = v160;
            }
            v127 = v123[4] & 0xFE;
            v123[2] = v12;
            *((_BYTE *)v123 + 32) = v127;
            v128 = *((_DWORD *)v12 + 30);
            *((_BYTE *)v123 + 33) &= ~1u;
            v123[3] = v12;
            *((_BYTE *)v123 + 32) = v127 & 0xC5 | (2 * (((v128 & 2) != 0) | 2));
            if ( !(unsigned __int8)KiIsPrcbThread(v12, v97, v99, v71) )
              *((_DWORD *)v12 + 134) = *(_DWORD *)(v129 + 36);
          }
          else
          {
            v130 = *(_QWORD *)(v122 + 34944);
            if ( v125 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v124, v97, v99, v71) )
            {
              if ( (*((_BYTE *)v123 + 33) & 1) != 0 )
                *(_DWORD *)(v131 + 116) |= 2u;
              *(_BYTE *)(v131 + 565) = 1;
              KiInsertDeferredReadyList(&v159, v131);
              v99 = v160;
            }
            v132 = v123[4] & 0xFE;
            v123[2] = v12;
            *((_BYTE *)v123 + 32) = v132;
            v133 = v132 & 0xE5 | (2 * (((v12[15] & 2) != 0) | 2));
            v134 = v133 | 0x20;
            v135 = v133 & 0xDF;
            if ( v12 == (unsigned __int64 *)v130 )
              v134 = v135;
            *((_BYTE *)v123 + 32) = v134;
            *((_BYTE *)v123 + 33) &= ~1u;
            v123[3] = v130;
            if ( !(unsigned __int8)KiIsPrcbThread(v130, v97, v99, v71) )
              *(_DWORD *)(v130 + 536) = *(_DWORD *)(v136 + 36);
          }
          ++v121;
        }
        while ( v121 < LOBYTE(v180[0]) );
      }
    }
    else
    {
      v116 = v100[3];
      v117 = *v100;
      if ( v116 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v116, LOBYTE(v180[0]), v160, v71) )
      {
        if ( (*((_BYTE *)v100 + 33) & 1) != 0 )
          *(_DWORD *)(v118 + 116) |= 2u;
        *(_BYTE *)(v118 + 565) = 1;
        KiInsertDeferredReadyList(&v159, v118);
      }
      *((_BYTE *)v100 + 32) &= ~1u;
      v119 = *((_BYTE *)v100 + 32);
      v100[2] = (unsigned __int64)v12;
      v120 = *((_DWORD *)v12 + 30);
      *((_BYTE *)v100 + 33) &= ~1u;
      v100[3] = (unsigned __int64)v12;
      *((_BYTE *)v100 + 32) = v119 & 0xC5 | (2 * (((v120 & 2) != 0) | 2));
      if ( (_UNKNOWN *)v12[68] != &KiInitialProcess )
        *((_DWORD *)v12 + 134) = *(_DWORD *)(v117 + 36);
    }
  }
  else
  {
    v104 = (unsigned int)v8;
    if ( LOBYTE(v180[0]) )
    {
      do
      {
        v105 = v180[5 * v104 + 2];
        v106 = &v180[5 * v104 + 2];
        v107 = v106[3];
        v108 = v107 - 1;
        if ( v105 == v99 )
        {
          if ( v108 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v107, v97, v99, v71) )
          {
            if ( (*((_BYTE *)v106 + 33) & 1) != 0 )
              *(_DWORD *)(v109 + 116) |= 2u;
            *(_BYTE *)(v109 + 565) = 1;
            KiInsertDeferredReadyList(&v159, v109);
            v99 = v160;
          }
          v110 = v106[4] & 0xFE;
          v106[2] = v12;
          *((_BYTE *)v106 + 32) = v110;
          v111 = *((_DWORD *)v12 + 30);
          *((_BYTE *)v106 + 33) &= ~1u;
          v106[3] = v12;
          *((_BYTE *)v106 + 32) = v110 & 0xC5 | (2 * (((v111 & 2) != 0) | 2));
          if ( !(unsigned __int8)KiIsPrcbThread(v12, v97, v99, v71) )
            *((_DWORD *)v12 + 134) = *(_DWORD *)(v105 + 36);
        }
        else
        {
          v112 = *(_QWORD *)(v105 + 24);
          if ( v108 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v107, v97, v99, v71) )
          {
            if ( (*((_BYTE *)v106 + 33) & 1) != 0 )
              *(_DWORD *)(v113 + 116) |= 2u;
            *(_BYTE *)(v113 + 565) = 1;
            KiInsertDeferredReadyList(&v159, v113);
            v99 = v160;
          }
          v114 = *((_BYTE *)v106 + 32) | 1;
          v106[2] = v112;
          *((_BYTE *)v106 + 32) = v114;
          *((_BYTE *)v106 + 32) = v114 & 0xC5 | (2 * (((*(_DWORD *)(v112 + 120) & 2) != 0) | 2));
          *((_BYTE *)v106 + 33) &= ~1u;
          v106[3] = v112;
          if ( !(unsigned __int8)KiIsPrcbThread(v112, v97, v99, v71) )
            *(_DWORD *)(v115 + 536) = *(_DWORD *)(v105 + 36);
        }
        ++v104;
      }
      while ( v104 < LOBYTE(v180[0]) );
    }
    v98 = 1;
  }
  HIDWORD(v180[0]) = v103;
  if ( (unsigned __int8)v158 | (unsigned __int8)v98 )
    KiSearchForNewThreadsForRescheduleContext(v180, &v159);
  v137 = v160;
  v138 = 0;
  v139 = 1;
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    v139 = 3;
  for ( j = 0; j < LOBYTE(v180[0]); v138 |= KiCommitRescheduleContextEntry(&v180[5 * j++ + 2], v137, v139, &v159) )
    ;
  if ( LODWORD(v180[1]) == 1 )
  {
    v141 = *(unsigned __int8 **)(v180[2] + 34904LL);
    v142 = v141[1] + 1;
    if ( v142 >= *v141 )
      v142 = 0;
    v141[1] = v142;
  }
  if ( v138 || v156 || v159 )
  {
    v146 = v163;
    KiReleasePrcbLocksForIsolationUnit(v163);
    if ( v138 )
      KiCompleteRescheduleContext(v180, v137);
    if ( v156 )
      KiCompleteRescheduleContext(v88, v137);
    KiFlushSoftwareInterruptBatch(v137 + 12760);
    if ( v159 )
      KiReadyDeferredReadyList(v137, &v159);
    KiAcquirePrcbLocksForIsolationUnit(v137, 0LL, v146);
    return *(unsigned __int64 **)(v137 + 16);
  }
  else
  {
    v143 = v163;
    v144 = *v163;
    v145 = *v163 & 0xFFFFFFFFFFFFFFFEuLL;
    v164 = v145;
    if ( (v144 & 1) != 0 )
    {
      KzReleaseAdditionalPrcbLocks(*(_QWORD *)(v145 + 34904) + 8LL, **(unsigned __int8 **)(v145 + 34904), &v164, 1LL);
      *v143 &= ~1uLL;
    }
  }
  return v12;
}
