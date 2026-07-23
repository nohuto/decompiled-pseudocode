/*
 * XREFs of KiExecuteAllDpcs @ 0x140244590
 * Callers:
 *     KiRetireDpcList @ 0x140245AC0 (KiRetireDpcList.c)
 *     KiExecuteDpc @ 0x14039ABF0 (KiExecuteDpc.c)
 * Callees:
 *     KiCompleteRescheduleContext @ 0x140201EB0 (KiCompleteRescheduleContext.c)
 *     KiAdvanceReadyQueueEnumeratorToNextList @ 0x140206900 (KiAdvanceReadyQueueEnumeratorToNextList.c)
 *     KiAdvanceReadyQueueEnumeratorToNextScb @ 0x140206A00 (KiAdvanceReadyQueueEnumeratorToNextScb.c)
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     EtwpLogKernelEvent @ 0x140233D70 (EtwpLogKernelEvent.c)
 *     KiDeferredReadySingleThread @ 0x14023A3A0 (KiDeferredReadySingleThread.c)
 *     KiStartReadyQueueEnumeratorForRescheduleContext @ 0x140242980 (KiStartReadyQueueEnumeratorForRescheduleContext.c)
 *     KiReadyQueueEnumeratorStartNormalQueuesPhase @ 0x140242C70 (KiReadyQueueEnumeratorStartNormalQueuesPhase.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiCommitRescheduleContextEntry @ 0x140242F60 (KiCommitRescheduleContextEntry.c)
 *     KiCheckThreadAffinity @ 0x140243660 (KiCheckThreadAffinity.c)
 *     KiRemoveCurrentlyEnumeratedThreadFromReadyQueue @ 0x140243690 (KiRemoveCurrentlyEnumeratedThreadFromReadyQueue.c)
 *     KiCanLocalReadyThreadBeScheduledToRescheduleContext @ 0x140243810 (KiCanLocalReadyThreadBeScheduledToRescheduleContext.c)
 *     KiDoesThreadDominateRescheduleContextEntry @ 0x1402438E0 (KiDoesThreadDominateRescheduleContextEntry.c)
 *     KiScheduleThreadToRescheduleContext @ 0x140243B10 (KiScheduleThreadToRescheduleContext.c)
 *     KiFindRescheduleContextEntryForPrcb @ 0x140243C40 (KiFindRescheduleContextEntryForPrcb.c)
 *     KiEnterLongDpcProcessing @ 0x140247AD0 (KiEnterLongDpcProcessing.c)
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140250FE0 (KxWaitForSpinLockAndAcquire.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252820 (KiFlushSoftwareInterruptBatch.c)
 *     EtwGetKernelTraceTimestampSilo @ 0x1402A3240 (EtwGetKernelTraceTimestampSilo.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1402B34D0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiInsertDeferredReadyList @ 0x1402B9EE4 (KiInsertDeferredReadyList.c)
 *     KiAddThreadToScbQueue @ 0x140305CB0 (KiAddThreadToScbQueue.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140307B50 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiAdjustRescheduleContextEntryForThreadRemoval @ 0x14030819C (KiAdjustRescheduleContextEntryForThreadRemoval.c)
 *     KiIsPrcbThread @ 0x140324F90 (KiIsPrcbThread.c)
 *     KiUpdateVPBackingThreadPriority @ 0x14034E478 (KiUpdateVPBackingThreadPriority.c)
 *     KiInsertNewDpcRuntime @ 0x14035AF94 (KiInsertNewDpcRuntime.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KiAcquireSpinLockInstrumented @ 0x140460830 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140571D88 (KiReleaseSpinLockInstrumented.c)
 *     EtwTraceLongDpcDetectionEvent @ 0x1405FD46C (EtwTraceLongDpcDetectionEvent.c)
 */

char __fastcall KiExecuteAllDpcs(__int64 a1, unsigned __int64 a2, _DWORD *a3, unsigned int a4)
{
  unsigned int v4; // r13d
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rbx
  __int64 v7; // rsi
  int *v8; // r15
  __int64 *v9; // r12
  __int64 v10; // rcx
  int v11; // eax
  bool v12; // di
  volatile signed __int32 *v14; // rdi
  _QWORD **v15; // rcx
  _QWORD *v16; // r14
  _QWORD *v17; // rax
  unsigned __int64 v18; // r14
  ULONG_PTR v19; // r13
  _QWORD *v20; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v23; // eax
  signed __int32 v24; // ett
  _DWORD *v25; // rdx
  __int64 v26; // rdi
  ULONG_PTR v27; // rdi
  _QWORD *v28; // r12
  unsigned __int64 v29; // r15
  void (__fastcall *v30)(unsigned __int64, ULONG_PTR, ULONG_PTR, ULONG_PTR); // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // r9
  __int64 v34; // r15
  unsigned int v35; // r11d
  __int64 v36; // r10
  ULONG_PTR v37; // r8
  unsigned int v38; // r11d
  unsigned __int64 *v39; // rcx
  unsigned __int64 v40; // r14
  __int64 v41; // rax
  unsigned int v42; // esi
  unsigned __int16 v43; // r14
  unsigned int v44; // edi
  bool v45; // zf
  unsigned int v46; // ecx
  __int64 v47; // r8
  __int64 v48; // rcx
  _QWORD *v49; // r15
  struct _KPRCB *v50; // rcx
  signed __int32 *v51; // r8
  signed __int32 v52; // eax
  signed __int32 v53; // ett
  __int64 v54; // rax
  struct _KPRCB **v55; // r8
  unsigned int v56; // r12d
  unsigned __int64 v57; // rcx
  int v58; // edi
  unsigned int v59; // r13d
  _QWORD *v60; // rsi
  unsigned __int64 *v61; // r9
  struct _KPRCB *v62; // r15
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rdx
  ULONG_PTR NextThread; // r14
  char v65; // cl
  char v66; // cl
  char v67; // cl
  bool v68; // dl
  char v69; // al
  char v70; // dl
  unsigned __int8 v71; // cl
  _QWORD *v72; // r8
  unsigned int v73; // r9d
  _QWORD *v74; // rdx
  _BYTE *v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // r14
  __int64 v78; // rsi
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // r9
  _QWORD *v82; // r15
  char v83; // r10
  unsigned int v84; // edi
  _QWORD *v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rcx
  char v88; // dl
  unsigned int j; // r14d
  _QWORD *v90; // r10
  __int64 v91; // rdi
  __int64 v92; // rcx
  unsigned __int64 v93; // rax
  __int64 v94; // r11
  __int64 v95; // rcx
  char v96; // al
  char v97; // cl
  char v98; // al
  __int64 v99; // r13
  _QWORD *v100; // rax
  int v101; // edi
  __int64 v102; // r8
  __int64 v103; // rdx
  __int64 v104; // rdx
  __int64 v105; // r8
  _QWORD *v106; // r11
  int v107; // edi
  unsigned int k; // r10d
  _QWORD *v109; // rcx
  __int64 v110; // rcx
  char v111; // cl
  __int64 v112; // r11
  int v113; // eax
  _QWORD *RescheduleContextEntryForPrcb; // rax
  int v115; // edi
  __int64 v116; // r8
  __int64 v117; // rdx
  __int64 v118; // rdx
  __int64 v119; // r8
  _QWORD *v120; // r11
  int v121; // edi
  unsigned int i; // r10d
  _QWORD *v123; // rcx
  volatile signed __int32 *m; // r8
  volatile signed __int32 *v125; // rdi
  volatile signed __int32 **v126; // rcx
  __int64 v127; // rdx
  __int64 CanLocalReadyThreadBeScheduledToRescheduleContext; // r12
  char v129; // di
  int ready; // eax
  char v131; // dl
  unsigned __int8 n; // dl
  _QWORD *v133; // r8
  unsigned int v134; // r9d
  __int64 v135; // rcx
  __int64 v136; // rax
  __int64 v137; // rax
  unsigned __int8 v138; // r10
  __int64 v139; // r8
  unsigned __int8 v140; // dl
  __int64 v141; // r9
  unsigned int v142; // ecx
  unsigned int v143; // eax
  __int64 v144; // rdi
  __int64 v145; // r14
  __int64 v146; // r15
  __int64 v147; // rsi
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // rsi
  __int64 v151; // rsi
  __int64 v152; // rsi
  volatile signed __int64 *ii; // r9
  volatile signed __int64 *v154; // rax
  volatile signed __int64 **v155; // rdx
  __int64 v156; // r8
  char v157; // si
  char v158; // r14
  unsigned int jj; // edi
  unsigned __int8 *v160; // rdx
  unsigned __int8 v161; // al
  unsigned __int64 *v162; // r8
  int v163; // edx
  unsigned __int64 v164; // r9
  __int64 v165; // r14
  _QWORD *v166; // rdi
  char v167; // si
  struct _KPRCB **v170; // [rsp+40h] [rbp-4F8h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-4F0h] BYREF
  _QWORD *v172; // [rsp+50h] [rbp-4E8h] BYREF
  char v173; // [rsp+58h] [rbp-4E0h]
  unsigned __int64 v174; // [rsp+60h] [rbp-4D8h]
  unsigned int BugCheckParameter3; // [rsp+6Ch] [rbp-4CCh]
  unsigned int BugCheckParameter3_4; // [rsp+70h] [rbp-4C8h]
  __int64 v177; // [rsp+78h] [rbp-4C0h] BYREF
  unsigned __int64 v178; // [rsp+80h] [rbp-4B8h] BYREF
  unsigned __int64 *v179; // [rsp+88h] [rbp-4B0h]
  int v180; // [rsp+90h] [rbp-4A8h] BYREF
  _DWORD v181[3]; // [rsp+94h] [rbp-4A4h] BYREF
  ULONG_PTR v182; // [rsp+A0h] [rbp-498h]
  unsigned int v183; // [rsp+A8h] [rbp-490h]
  __int64 v184; // [rsp+B0h] [rbp-488h] BYREF
  __int64 v185; // [rsp+B8h] [rbp-480h]
  ULONG_PTR v186; // [rsp+C0h] [rbp-478h]
  ULONG_PTR v187; // [rsp+C8h] [rbp-470h]
  ULONG_PTR v188; // [rsp+D0h] [rbp-468h]
  unsigned __int64 v189; // [rsp+D8h] [rbp-460h]
  _DWORD *v190; // [rsp+E0h] [rbp-458h]
  __int64 v191; // [rsp+E8h] [rbp-450h]
  __int64 *v192; // [rsp+F0h] [rbp-448h]
  __int64 v193; // [rsp+F8h] [rbp-440h]
  unsigned __int64 v194; // [rsp+100h] [rbp-438h] BYREF
  _QWORD **v195; // [rsp+110h] [rbp-428h]
  ULONG_PTR v196; // [rsp+118h] [rbp-420h]
  unsigned __int64 v197; // [rsp+120h] [rbp-418h]
  _DWORD *v198; // [rsp+130h] [rbp-408h]
  _DWORD *v199; // [rsp+150h] [rbp-3E8h]
  int *v200; // [rsp+158h] [rbp-3E0h]
  __int64 v201; // [rsp+160h] [rbp-3D8h]
  unsigned __int64 v202; // [rsp+168h] [rbp-3D0h] BYREF
  __int128 v203; // [rsp+170h] [rbp-3C8h] BYREF
  __int64 v204; // [rsp+188h] [rbp-3B0h]
  ULONG_PTR v205; // [rsp+190h] [rbp-3A8h]
  __int128 *v206; // [rsp+1A0h] [rbp-398h] BYREF
  __int64 v207; // [rsp+1A8h] [rbp-390h] BYREF
  _OWORD v208[2]; // [rsp+1B0h] [rbp-388h] BYREF
  _QWORD v209[42]; // [rsp+1D0h] [rbp-368h] BYREF
  _QWORD v210[54]; // [rsp+320h] [rbp-218h] BYREF
  _QWORD v211[4]; // [rsp+4D0h] [rbp-68h] BYREF
  void *retaddr; // [rsp+538h] [rbp+0h]

  v4 = a4;
  v190 = a3;
  v5 = a2;
  v174 = a2;
  v191 = a1;
  v185 = a1;
  v197 = a2;
  v198 = a3;
  v6 = 0LL;
  BugCheckParameter2 = 0LL;
  v203 = 0LL;
  v177 = 0LL;
  memset(v208, 0, sizeof(v208));
  v201 = a4;
  v7 = 48LL * a4 + a1 + 13120;
  v193 = v7;
  v8 = (int *)(v7 + 24);
  v200 = (int *)(v7 + 24);
  if ( !*(_DWORD *)(v7 + 24) )
    return 1;
  if ( (SBYTE4(PerfGlobalGroupMask) & 0x80u) == 0 )
  {
    v9 = 0LL;
  }
  else
  {
    if ( a4 )
    {
      HIDWORD(v177) = 4200450;
      LOWORD(v177) = 3906;
    }
    else
    {
      HIDWORD(v177) = 4196866;
      LOWORD(v177) = 3908;
    }
    v9 = &v177;
  }
  v192 = v9;
  v179 = (unsigned __int64 *)(a1 + 11664);
  v189 = *(_QWORD *)(a1 + 11664);
  v195 = (_QWORD **)(48LL * a4 + a1 + 13120);
  while ( 1 )
  {
    v10 = (unsigned int)*v8;
    v11 = *(_DWORD *)(v7 + 40);
    v12 = !v4 && (v11 || (unsigned int)v10 >= KiLongDpcQueueThreshold);
    if ( (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0 )
    {
      if ( !v12 )
        goto LABEL_20;
      LOBYTE(a2) = v11 != 0;
      EtwTraceLongDpcDetectionEvent(v10, a2);
    }
    if ( v12 && (unsigned __int8)KiEnterLongDpcProcessing(a1, v5) )
      return 0;
LABEL_20:
    v14 = (volatile signed __int32 *)(v7 + 16);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v7 + 16);
    }
    else if ( _interlockedbittestandset64(v14, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(v7 + 16);
    }
    if ( *v8 <= 1 )
    {
      _InterlockedAnd16((volatile signed __int16 *)(v191 + 2 * v201 + 13244), 0xFFEDu);
      *(_DWORD *)(v7 + 40) = 0;
      if ( !*v8 )
        break;
    }
    v15 = v195;
    v16 = *v195;
    v17 = (_QWORD *)**v195;
    *v195 = v17;
    if ( !v17 )
      v15[1] = v15;
    v18 = (unsigned __int64)(v16 - 1);
    BugCheckParameter2 = *(_QWORD *)(v18 + 24);
    v19 = *(_QWORD *)(v18 + 32);
    v186 = *(_QWORD *)(v18 + 40);
    v196 = *(_QWORD *)(v18 + 48);
    v20 = *(_QWORD **)(v18 + 56);
    v182 = (ULONG_PTR)v20;
    *(_QWORD *)(v18 + 56) = 0LL;
    --*v8;
    v15[4] = (_QWORD *)v18;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v14, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v14, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v23 = *SchedulerAssist;
      do
      {
        v24 = v23;
        v23 = _InterlockedCompareExchange(SchedulerAssist, v23 & 0xFFDFFFFF, v23);
      }
      while ( v24 != v23 );
      if ( (v23 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    if ( (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0 )
    {
      *(_QWORD *)&v203 = BugCheckParameter2;
      *((_QWORD *)&v203 + 1) = 0x7E35C6C7F3DD7277LL
                             * (KiWaitNever ^ __ROR8__(
                                                BugCheckParameter2 ^ _byteswap_uint64(KiWaitAlways ^ v18),
                                                KiWaitNever));
      v206 = &v203;
      v207 = 16LL;
      EtwTraceKernelEvent((int)&v206, 1, 0x20040000u, 3941, 4196866);
    }
    if ( v9 )
      EtwGetKernelTraceTimestampSilo(v208, 536871040LL, 0LL);
    v25 = v190;
    v26 = (*v190)++ & 0xF;
    v27 = (ULONG_PTR)&v25[4 * v26 + 4];
    v188 = v27;
    *(_QWORD *)v27 = BugCheckParameter2;
    *(_DWORD *)(v27 + 8) = MEMORY[0xFFFFF78000000320];
    v199 = (_DWORD *)(v174 + 484);
    BugCheckParameter3 = *(_DWORD *)(v174 + 484);
    v183 = BugCheckParameter3;
    v28 = (_QWORD *)a1;
    *(_DWORD *)(a1 + 33116) = 0;
    v29 = __rdtsc();
    v187 = v29;
    *v179 = (unsigned __int64)v20;
    if ( v20 != (_QWORD *)1 )
      v20[4] = v29;
    v30 = (void (__fastcall *)(unsigned __int64, ULONG_PTR, ULONG_PTR, ULONG_PTR))BugCheckParameter2;
    if ( !a4 )
    {
      *(_QWORD *)(a1 + 13088) = BugCheckParameter2;
      *(_QWORD *)(a1 + 13104) = v29;
      *(_BYTE *)(a1 + 13242) = 1;
    }
    v30(v18, v19, v186, v196);
    v4 = a4;
    v31 = __rdtsc();
    a2 = (unsigned __int64)HIDWORD(v31) << 32;
    v32 = v31;
    if ( !v4 )
    {
      *(_BYTE *)(a1 + 13242) = 0;
      v33 = v31 - v29;
      v34 = *(_QWORD *)(a1 + 13072);
      if ( v34 )
      {
        v35 = *(_DWORD *)(v34 + 4);
        v36 = -1LL << (*(_BYTE *)(v34 + 4) & 0x1F);
        v37 = BugCheckParameter2 & v36;
        v186 = (BugCheckParameter2 & v36) >> 40;
        v187 = (BugCheckParameter2 & v36) >> 32;
        v182 = (BugCheckParameter2 & v36) >> 24;
        v188 = (BugCheckParameter2 & v36) >> 16;
        v38 = v35 >> 5;
        if ( v38 )
        {
          v205 = BugCheckParameter2 & v36;
          v39 = (unsigned __int64 *)(*(_QWORD *)(v34 + 8)
                                   + 8
                                   * ((((BugCheckParameter2 & v36) >> 56)
                                     + 37
                                     * ((unsigned __int8)((BugCheckParameter2 & v36) >> 48)
                                      + 37
                                      * ((unsigned __int8)v186
                                       + 37
                                       * ((unsigned __int8)v187
                                        + 37
                                        * ((unsigned __int8)v182
                                         + 37
                                         * ((unsigned __int8)v188
                                          + 37
                                          * ((unsigned __int8)((unsigned __int16)(BugCheckParameter2 & v36) >> 8)
                                           + 37 * ((unsigned int)(unsigned __int8)v37 + 11623883)))))))) & (v38 - 1)));
          while ( 1 )
          {
            a2 = *v39;
            v39 = (unsigned __int64 *)a2;
            if ( (a2 & 1) != 0 )
              break;
            if ( v37 == (v36 & *(_QWORD *)(a2 + 8)) )
            {
              *(_QWORD *)(a2 + 16) = (*(_QWORD *)(a2 + 16) >> 2) + ((3 * v33) >> 2);
              *(_BYTE *)(a2 + 24) = 1;
              goto LABEL_53;
            }
          }
        }
        KiInsertNewDpcRuntime(v34, BugCheckParameter2, v33);
LABEL_53:
        v28 = (_QWORD *)a1;
        v4 = a4;
      }
      v28[1636] = 0LL;
      v28[1637] = -1LL;
      v28[1638] = 0LL;
    }
    if ( v20 != (_QWORD *)1 )
    {
      v40 = v32 - v20[4];
      v20[3] += v40;
      ++v20[5];
      v20[10] += v40;
      ++v20[11];
    }
    *(_DWORD *)(v27 + 12) = MEMORY[0xFFFFF78000000320];
    if ( BugCheckParameter3 != *v199 )
      KeBugCheckEx(0xC7u, 4uLL, BugCheckParameter2, BugCheckParameter3, (unsigned int)*v199);
    v41 = v28[4375];
    if ( v41 && !v4 )
      _InterlockedDecrement((volatile signed __int32 *)(v41 + 28));
    v9 = v192;
    if ( v192 )
    {
      v42 = *((_DWORD *)v192 + 1);
      v43 = *(_WORD *)v192;
      v211[2] = &BugCheckParameter2;
      v211[3] = 8LL;
      v44 = *(_DWORD *)(EtwpHostSiloState + 4248);
      v45 = !_BitScanForward(&v46, v44);
      BugCheckParameter3_4 = v46;
      if ( !v45 )
      {
        do
        {
          v44 &= v44 - 1;
          v47 = v46;
          a2 = EtwpHostSiloState;
          v48 = 32LL * v46 + EtwpHostSiloState + 4284;
          if ( v48 && (*(_DWORD *)(v48 + 4) & 0x80u) != 0 )
          {
            v211[0] = &v207 + *(unsigned __int8 *)(EtwpHostSiloState + 2 * v47 + 4233);
            v211[1] = 8LL;
            EtwpLogKernelEvent(
              (__int64)v211,
              EtwpHostSiloState,
              *(unsigned __int8 *)(EtwpHostSiloState + 2 * v47 + 4232),
              2u,
              v43,
              v42);
          }
          v45 = !_BitScanForward(&v46, v44);
        }
        while ( !v45 );
        BugCheckParameter3_4 = v46;
      }
    }
    _disable();
    v8 = v200;
    v7 = v193;
    v5 = v174;
    if ( !*v200 )
      goto LABEL_69;
  }
  KxReleaseSpinLock(v7 + 16);
LABEL_69:
  *v179 = v189;
  v49 = (_QWORD *)a1;
  if ( (*(_DWORD *)(a1 + 236) & 0x1000) == 0 )
    return 1;
  memset(v209, 0, sizeof(v209));
  if ( v5 == *(_QWORD *)(a1 + 13112) )
    return 1;
  v50 = KeGetCurrentPrcb();
  v51 = (signed __int32 *)v50->SchedulerAssist;
  if ( v51 )
  {
    _m_prefetchw(v51);
    v52 = *v51;
    do
    {
      v53 = v52;
      v52 = _InterlockedCompareExchange(v51, v52 & 0xFFDFFFFF, v52);
    }
    while ( v53 != v52 );
    if ( (v52 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(v50);
  }
  _enable();
  v204 = a1;
  v178 = v185 & 0xFFFFFFFFFFFFFFFEuLL;
  v180 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(&v180);
    while ( *(_QWORD *)(a1 + 48) );
  }
  *(_DWORD *)(a1 + 236) &= ~0x1000u;
  v54 = *(_QWORD *)(a1 + 13112);
  if ( !v54 || *(_QWORD *)(a1 + 16) != v54 )
  {
    v6 = v178;
    goto LABEL_293;
  }
  v172 = 0LL;
  v55 = 0LL;
  v170 = 0LL;
  v56 = 0;
  v57 = v178 & 0xFFFFFFFFFFFFFFFEuLL;
  v194 = v178 & 0xFFFFFFFFFFFFFFFEuLL;
  v58 = v178 & 1;
  v189 = v178 & 1;
  if ( (v178 & 1) != 0 )
  {
    if ( v58 == 1 )
    {
      v55 = (struct _KPRCB **)(*(_QWORD *)(v57 + 34904) + 8LL);
      v56 = **(unsigned __int8 **)(v57 + 34904);
      goto LABEL_86;
    }
  }
  else
  {
    v55 = (struct _KPRCB **)&v194;
    v56 = 1;
LABEL_86:
    v170 = v55;
  }
  v59 = 0;
  if ( !v56 )
    goto LABEL_118;
  v60 = &v209[6];
  v61 = (unsigned __int64 *)v56;
  v179 = (unsigned __int64 *)v56;
  while ( 2 )
  {
    *((_OWORD *)v60 - 2) = 0LL;
    *((_OWORD *)v60 - 1) = 0LL;
    *v60 = 0LL;
    *(v60 - 1) = -1LL;
    *((_BYTE *)v60 + 4) = 63;
    v62 = *v55;
    *(v60 - 4) = *v55;
    SharedReadyQueue = v62->SharedReadyQueue;
    if ( (v62->IdleState & 8) != 0 && (v62->SchedulerSubNode->NonParkedSet & SharedReadyQueue->Affinity) != 0 )
      SharedReadyQueue = 0LL;
    *(v60 - 3) = SharedReadyQueue;
    NextThread = (ULONG_PTR)v62->NextThread;
    *(v60 - 2) = NextThread;
    if ( !NextThread )
    {
      NextThread = (ULONG_PTR)v62->CurrentThread;
      *(v60 - 2) = NextThread;
    }
    if ( v62->NextThread == (_KTHREAD *)NextThread )
    {
      *(_BYTE *)v60 |= 4u;
    }
    else
    {
      v65 = *(_BYTE *)v60;
      if ( v62 == KeGetCurrentPrcb() )
        v66 = v65 | 4;
      else
        v66 = v65 & 0xFB;
      *(_BYTE *)v60 = v66;
    }
    v67 = 0;
    if ( (*(_DWORD *)(NextThread + 120) & 0x400000) == 0 )
      goto LABEL_112;
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(NextThread + 64), 0LL) )
    {
      v173 = 1;
      if ( (*(_DWORD *)(NextThread + 120) & 0x400000) != 0 )
      {
        v68 = 0;
        if ( *(_DWORD *)(NextThread + 536) != v62->Number )
          goto LABEL_109;
        if ( *(_BYTE *)(NextThread + 388) == 2 || *(_BYTE *)(NextThread + 388) == 3 )
          goto LABEL_110;
        if ( *(_BYTE *)(NextThread + 388) == 5 )
        {
          v69 = *(_BYTE *)(NextThread + 112) & 7;
          if ( v69 != 1 )
            v68 = (unsigned __int8)(v69 - 3) > 3u;
        }
LABEL_109:
        if ( v68 )
        {
LABEL_110:
          KiUpdateVPBackingThreadPriority(NextThread);
          v55 = v170;
          v61 = v179;
        }
      }
      v67 = 1;
LABEL_112:
      if ( v67 )
        *(_QWORD *)(NextThread + 64) = 0LL;
    }
    v70 = ((v62->IdleState & 1) == 0) | *(_BYTE *)v60 & 0xFE;
    *(_BYTE *)v60 = v70;
    v71 = v70 ^ (v70 ^ (v62->PriorityState->AllFields >> 6)) & 2;
    *(_BYTE *)v60 = v71;
    if ( ((v71 >> 1) & 1u) > v59 )
      v59 = (v71 >> 1) & 1;
    v60 += 5;
    v170 = ++v55;
    v61 = (unsigned __int64 *)((char *)v61 - 1);
    v179 = v61;
    if ( v61 )
      continue;
    break;
  }
  v57 = v194;
  v58 = v189;
  v49 = (_QWORD *)a1;
LABEL_118:
  HIDWORD(v209[0]) = v59;
  LODWORD(v209[1]) = v58;
  LOBYTE(v209[0]) = v56;
  if ( v58 )
    BYTE1(v209[0]) = *(_BYTE *)(*(_QWORD *)(v57 + 34904) + 1LL);
  else
    BYTE1(v209[0]) = 0;
  if ( v59 )
  {
    v72 = 0LL;
    v73 = 0;
    if ( v56 )
    {
      v74 = &v209[2];
      while ( v74[2] == *(_QWORD *)(*v74 + 34944LL) )
      {
        ++v73;
        v74 += 5;
        if ( v73 >= v56 )
          goto LABEL_128;
      }
      v72 = v74;
LABEL_128:
      v75 = &v209[6];
      v76 = v56;
      do
      {
        if ( v75 - 32 != (_BYTE *)v72 )
        {
          *((_QWORD *)v75 - 2) = v72[2];
          *v75 = *((_BYTE *)v72 + 32) | 0x20;
        }
        v75 += 40;
        --v76;
      }
      while ( v76 );
      LOBYTE(v56) = v209[0];
    }
  }
  v77 = v49[1639];
  v184 = 0LL;
  v78 = v49[1];
  if ( (*(_DWORD *)(v78 + 120) & 0x1000) != 0 || v78 == v49[4368] )
  {
    RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(v209, (__int64)v49);
    v115 = *((unsigned __int8 *)RescheduleContextEntryForPrcb + 32) >> 1;
    LOBYTE(v116) = 1;
    KiAdjustRescheduleContextEntryForThreadRemoval(RescheduleContextEntryForPrcb, v117, v116, 0LL);
    v121 = v115 & 1;
    if ( v121 )
    {
      for ( i = 0; i < LOBYTE(v209[0]); ++i )
      {
        v123 = &v209[5 * i + 2];
        if ( v123 != v120 )
        {
          LOBYTE(v119) = 1;
          KiAdjustRescheduleContextEntryForThreadRemoval(v123, v118, v119, 0LL);
        }
      }
    }
    v113 = HIDWORD(v209[0]);
    if ( v121 )
      v113 = 0;
    goto LABEL_178;
  }
  v82 = KiFindRescheduleContextEntryForPrcb(v209, (__int64)v49);
  if ( (unsigned __int8)(v83 & 2) <= (unsigned __int8)(*(_BYTE *)(v77 + 120) & 2) || (v84 = 0, !(_BYTE)v56) )
  {
LABEL_141:
    v86 = *v82;
    v87 = *(_QWORD *)(*v82 + 8LL);
    v82[2] = v87;
    v88 = v82[4] & 0xFE | (v87 == *(_QWORD *)(v86 + 24));
    *((_BYTE *)v82 + 32) = v88;
    LOBYTE(v79) = v88 & 0xC5;
    *((_BYTE *)v82 + 32) = v79 | (2 * (((*(_DWORD *)(v87 + 120) & 2) != 0) | 2));
    v82[3] = 0LL;
    *((_BYTE *)v82 + 33) &= ~1u;
    *((_BYTE *)v82 + 34) |= 1u;
    if ( (*(_DWORD *)(v78 + 120) & 2) != 0 || (*(_DWORD *)(v77 + 120) & 2) != 0 )
    {
      for ( j = 0; j < LOBYTE(v209[0]); ++j )
      {
        v90 = &v209[5 * j + 2];
        if ( v82 != v90 )
        {
          v184 = 0LL;
          v91 = *v90;
          v92 = v90[3];
          v93 = v92 - 1;
          if ( (*(_DWORD *)(v78 + 120) & 2) != 0 )
          {
            v94 = *(_QWORD *)(v91 + 34944);
            if ( v93 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v92, v79, v80, v81) )
            {
              if ( (*((_BYTE *)v90 + 33) & 1) != 0 )
                *(_DWORD *)(v95 + 116) |= 2u;
              *(_BYTE *)(v95 + 565) = 1;
              KiInsertDeferredReadyList(&v184, v95);
            }
            v90[2] = v78;
            v96 = v90[4] & 0xFE;
            *((_BYTE *)v90 + 32) = v96;
            v97 = v96 & 0xE5 | (2 * (((*(_DWORD *)(v78 + 120) & 2) != 0) | 2)) | 0x20;
            v98 = v96 & 0xC5 | (2 * (((*(_DWORD *)(v78 + 120) & 2) != 0) | 2)) & 0xDF;
            if ( v78 == v94 )
              v97 = v98;
            *((_BYTE *)v90 + 32) = v97;
          }
          else
          {
            v94 = *(_QWORD *)(v91 + 24);
            if ( v93 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v92, v79, v80, v81) )
            {
              if ( (*((_BYTE *)v90 + 33) & 1) != 0 )
                *(_DWORD *)(v110 + 116) |= 2u;
              *(_BYTE *)(v110 + 565) = 1;
              KiInsertDeferredReadyList(&v184, v110);
            }
            v90[2] = v94;
            v111 = *((_BYTE *)v90 + 32) | 1;
            *((_BYTE *)v90 + 32) = v111;
            *((_BYTE *)v90 + 32) = v111 & 0xC5 | (2 * (((*(_DWORD *)(v94 + 120) & 2) != 0) | 2));
          }
          v90[3] = v94;
          *((_BYTE *)v90 + 33) &= ~1u;
          if ( !(unsigned __int8)KiIsPrcbThread(v94, v79, v80, v81) )
            *(_DWORD *)(v112 + 536) = *(_DWORD *)(v91 + 36);
        }
      }
    }
    v113 = (*(_DWORD *)(v78 + 120) >> 1) & 1;
LABEL_178:
    v99 = a1;
    HIDWORD(v209[0]) = v113;
    goto LABEL_179;
  }
  while ( 1 )
  {
    v85 = &v209[5 * v84 + 2];
    if ( v82 != v85 )
      break;
LABEL_140:
    if ( ++v84 >= (unsigned __int8)v56 )
      goto LABEL_141;
  }
  if ( KiDoesThreadDominateRescheduleContextEntry((__int64)v85, v78, 2LL, 0LL) )
  {
    LOBYTE(v56) = v209[0];
    goto LABEL_140;
  }
  v99 = a1;
  v100 = KiFindRescheduleContextEntryForPrcb(v209, a1);
  v101 = *((unsigned __int8 *)v100 + 32) >> 1;
  LOBYTE(v102) = 1;
  KiAdjustRescheduleContextEntryForThreadRemoval(v100, v103, v102, 0LL);
  v107 = v101 & 1;
  if ( v107 )
  {
    for ( k = 0; k < LOBYTE(v209[0]); ++k )
    {
      v109 = &v209[5 * k + 2];
      if ( v109 != v106 )
      {
        LOBYTE(v105) = 1;
        KiAdjustRescheduleContextEntryForThreadRemoval(v109, v104, v105, 0LL);
      }
    }
  }
  if ( v107 )
    HIDWORD(v209[0]) = 0;
LABEL_179:
  for ( m = 0LL; ; m = v125 )
  {
    v125 = 0LL;
    if ( LOBYTE(v209[0]) )
    {
      v126 = (volatile signed __int32 **)&v209[3];
      v127 = LOBYTE(v209[0]);
      do
      {
        if ( *v126 > m && (!v125 || *v126 < v125) )
          v125 = *v126;
        v126 += 5;
        --v127;
      }
      while ( v127 );
    }
    if ( !v125 )
      break;
    v181[0] = 0;
    while ( _interlockedbittestandset64(v125, 0LL) )
    {
      do
        KeYieldProcessorEx(v181);
      while ( *(_QWORD *)v125 );
    }
  }
  while ( 2 )
  {
    memset(v210, 0, sizeof(v210));
    KiStartReadyQueueEnumeratorForRescheduleContext((__int64)v210, (unsigned __int8 *)v209);
    CanLocalReadyThreadBeScheduledToRescheduleContext = 0LL;
    while ( 2 )
    {
      if ( BYTE5(v210[1]) == 4 )
        goto LABEL_254;
      if ( BYTE5(v210[1]) )
        goto LABEL_236;
      v129 = 1;
      while ( 2 )
      {
        switch ( v129 )
        {
          case 1:
            v131 = 0;
            goto LABEL_232;
          case 2:
            for ( n = 0; (unsigned int)n < LODWORD(v210[0]); ++n )
            {
              v133 = &v210[6 * n + 6];
              v134 = *((_DWORD *)v133 + 8);
              if ( v134 )
              {
                v135 = *(_QWORD *)(*v133 + 32568LL);
                if ( (v135 & 1) != 0 )
                {
                  if ( v135 == 1 )
                    v136 = 0LL;
                  else
                    v136 = v135 ^ ((*v133 + 32560LL) | 1);
                }
                else
                {
                  v136 = *(_QWORD *)(*v133 + 32568LL);
                }
                if ( v136 )
                {
                  v137 = v136 - 88;
                  if ( *(_DWORD *)(v137 + 116) > v134 )
                    v137 = 0LL;
                }
                else
                {
                  v137 = 0LL;
                }
                v133[2] = v137;
              }
            }
            v138 = 0;
            v139 = 0LL;
            v140 = BYTE1(v210[1]);
            do
            {
              v141 = v210[6 * v140 + 8];
              if ( v141 && (!v139 || *(_DWORD *)(v139 + 116) < *(_DWORD *)(v141 + 116)) )
              {
                v138 = v140;
                v139 = v210[6 * v140 + 8];
              }
              if ( (unsigned int)++v140 >= LODWORD(v210[0]) )
                v140 = 0;
            }
            while ( v140 != BYTE1(v210[1]) );
            if ( !v139 )
            {
              ready = -2147483622;
              goto LABEL_233;
            }
            BYTE2(v210[1]) = v138;
            v210[3] = v139;
            v210[2] = v139;
            v142 = *(unsigned __int16 *)(v139 + 114);
            HIDWORD(v210[0]) = v142;
            if ( *(_DWORD *)(v139 + 116) == LODWORD(v210[6 * v138 + 10]) )
            {
              v142 &= HIDWORD(v210[6 * v138 + 10]);
              HIDWORD(v210[0]) = v142;
            }
            if ( !v142 )
            {
              if ( (int)KiAdvanceReadyQueueEnumeratorToNextScb((__int64)v210) < 0 )
                goto LABEL_234;
              v142 = HIDWORD(v210[0]);
            }
            _BitScanReverse(&v143, v142);
            v181[1] = v143;
            LOBYTE(v210[1]) = v143;
            v210[4] = v210[2] + 136LL + 16LL * (unsigned __int8)v143;
            v210[5] = v210[4];
            ready = 0;
            goto LABEL_233;
          case 3:
            v131 = 1;
LABEL_232:
            ready = KiReadyQueueEnumeratorStartNormalQueuesPhase((__int64)v210, v131);
            goto LABEL_233;
        }
        ready = -2147483622;
LABEL_233:
        if ( ready >= 0 )
          break;
LABEL_234:
        if ( (unsigned __int8)++v129 < 4u )
          continue;
        break;
      }
      BYTE5(v210[1]) = v129;
      if ( v129 == 4 )
        goto LABEL_254;
LABEL_236:
      v210[5] = *(_QWORD *)v210[5];
      if ( v210[5] != v210[4] )
      {
LABEL_239:
        v144 = v210[5] - 216LL;
        v145 = v210[6 * BYTE2(v210[1]) + 6];
        if ( BYTE5(v210[1]) == 2 )
        {
          v146 = 0LL;
          v147 = v210[2];
        }
        else
        {
          if ( BYTE4(v210[1]) == 1 )
            v146 = v210[6 * BYTE2(v210[1]) + 7];
          else
            v146 = 0LL;
          v147 = 0LL;
        }
        if ( !KiCheckThreadAffinity(v210[5] - 216LL) )
        {
          KiRemoveCurrentlyEnumeratedThreadFromReadyQueue((__int64)v210, v144);
          KiInsertDeferredReadyList(&v172, v144);
          continue;
        }
        if ( !v147 )
        {
          v150 = *(_QWORD *)(v144 + 104);
          if ( v150 )
          {
            v151 = *(unsigned int *)(v145 + 216) + v150;
            if ( v151 )
            {
              LOBYTE(v149) = 1;
              if ( (unsigned int)KiGetThreadEffectiveRankNonZero(v148, v151, v149, 0LL) )
              {
                KiRemoveCurrentlyEnumeratedThreadFromReadyQueue((__int64)v210, v144);
                *(_DWORD *)(v144 + 536) = *(_DWORD *)(v145 + 36);
                KiAddThreadToScbQueue(v145, v151, v144, 0LL);
                continue;
              }
            }
          }
        }
        CanLocalReadyThreadBeScheduledToRescheduleContext = KiCanLocalReadyThreadBeScheduledToRescheduleContext(
                                                              (unsigned __int8 *)v209,
                                                              v144,
                                                              v145,
                                                              v146);
        if ( CanLocalReadyThreadBeScheduledToRescheduleContext )
        {
          KiRemoveCurrentlyEnumeratedThreadFromReadyQueue((__int64)v210, v144);
          v152 = v144;
          goto LABEL_255;
        }
        continue;
      }
      break;
    }
    while ( (int)KiAdvanceReadyQueueEnumeratorToNextList((__int64)v210) >= 0 )
    {
      v210[5] = *(_QWORD *)v210[5];
      if ( v210[5] != v210[4] )
        goto LABEL_239;
    }
LABEL_254:
    v152 = 0LL;
LABEL_255:
    if ( v152 )
    {
      KiScheduleThreadToRescheduleContext(
        (unsigned __int8 *)v209,
        v152,
        CanLocalReadyThreadBeScheduledToRescheduleContext,
        0,
        (__int64)&v172);
      continue;
    }
    break;
  }
  for ( ii = 0LL; ; ii = v154 )
  {
    v154 = 0LL;
    if ( LOBYTE(v209[0]) )
    {
      v155 = (volatile signed __int64 **)&v209[3];
      v156 = LOBYTE(v209[0]);
      do
      {
        if ( *v155 > ii && (!v154 || *v155 < v154) )
          v154 = *v155;
        v155 += 5;
        --v156;
      }
      while ( v156 );
    }
    if ( !v154 )
      break;
    _InterlockedAnd64(v154, 0LL);
  }
  v157 = 0;
  v158 = 0;
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    v158 = 2;
  for ( jj = 0; jj < LOBYTE(v209[0]); v157 |= KiCommitRescheduleContextEntry(&v209[5 * jj++ + 2], v99, v158, &v172) )
    ;
  if ( LODWORD(v209[1]) == 1 )
  {
    v160 = *(unsigned __int8 **)(v209[2] + 34904LL);
    v161 = v160[1] + 1;
    if ( v161 >= *v160 )
      v161 = 0;
    v160[1] = v161;
  }
  v162 = 0LL;
  v163 = 0;
  v164 = v178 & 0xFFFFFFFFFFFFFFFEuLL;
  v202 = v178 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v178 & 1) != 0 )
  {
    if ( (v178 & 1) == 1 )
    {
      v162 = (unsigned __int64 *)(*(_QWORD *)(v164 + 34904) + 8LL);
      v163 = **(unsigned __int8 **)(v164 + 34904);
    }
  }
  else
  {
    v162 = &v202;
    v163 = 1;
  }
  while ( v163 )
    _InterlockedAnd64((volatile signed __int64 *)(v162[--v163] + 48), 0LL);
  v178 = 0LL;
  if ( v157 )
  {
    KiCompleteRescheduleContext(v209, v99);
    v165 = v99 + 12760;
    KiFlushSoftwareInterruptBatch(v99 + 12760);
  }
  else
  {
    v165 = v185 + 12760;
  }
  v166 = v172;
  if ( v172 )
  {
    v167 = 0;
    v172 = (_QWORD *)*v172;
    do
    {
      KiDeferredReadySingleThread(v99, (unsigned __int64)(v166 - 27), (__int64)&v172);
      ++v167;
      v166 = v172;
      if ( v172 )
        v172 = (_QWORD *)*v172;
      if ( (v167 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch(v165);
    }
    while ( v166 );
    KiFlushSoftwareInterruptBatch(v165);
  }
LABEL_293:
  if ( v6 )
    KiReleasePrcbLocksForIsolationUnit(&v178);
  _disable();
  return 1;
}
