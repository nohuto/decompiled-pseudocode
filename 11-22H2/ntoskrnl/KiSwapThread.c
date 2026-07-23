/*
 * XREFs of KiSwapThread @ 0x14023F3D0
 * Callers:
 *     KiCommitThreadWait @ 0x140241F00 (KiCommitThreadWait.c)
 *     KeTerminateThread @ 0x14030A438 (KeTerminateThread.c)
 *     KiInSwapSingleProcess @ 0x14034D5B4 (KiInSwapSingleProcess.c)
 *     KiExecuteDpcDelegate @ 0x14038F990 (KiExecuteDpcDelegate.c)
 * Callees:
 *     KiRemoveSchedulingGroupQueue @ 0x140206878 (KiRemoveSchedulingGroupQueue.c)
 *     EtwTraceKernelEvent @ 0x140211EFC (EtwTraceKernelEvent.c)
 *     KiSearchForNewThread @ 0x140240330 (KiSearchForNewThread.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140246750 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     PoGetFrequencyBucket @ 0x140249C00 (PoGetFrequencyBucket.c)
 *     KiReadyDeferredReadyList @ 0x140249C70 (KiReadyDeferredReadyList.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x14024C730 (KiAbEntryGetLockedHeadEntry.c)
 *     KiProcessThreadWaitList @ 0x140253CA0 (KiProcessThreadWaitList.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B270 (ExReleaseRundownProtection_0.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x1402A8350 (KiAbTryIncrementIoWaiterCounts.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8BC0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiStartThreadCycleAccumulation @ 0x1402B2D10 (KiStartThreadCycleAccumulation.c)
 *     KiAbProcessThreadLocks @ 0x1402BC320 (KiAbProcessThreadLocks.c)
 *     KiAbDetermineMaxWaiterPriority @ 0x1402BC6F0 (KiAbDetermineMaxWaiterPriority.c)
 *     ObReferenceObjectSafeWithTag @ 0x1402C3620 (ObReferenceObjectSafeWithTag.c)
 *     ExGetExtensionTable @ 0x1402FA440 (ExGetExtensionTable.c)
 *     KiComputeGroupSchedulingRank @ 0x140305708 (KiComputeGroupSchedulingRank.c)
 *     KiCheckMaxOverQuotaTransition @ 0x140305858 (KiCheckMaxOverQuotaTransition.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140307790 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiInsertDeferredPreemptionApc @ 0x140308FF4 (KiInsertDeferredPreemptionApc.c)
 *     KiDeliverApc @ 0x14030F6B0 (KiDeliverApc.c)
 *     KiAbIoBoostOwners @ 0x140318A44 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x140318B48 (KiAbCpuBoostOwners.c)
 *     KiAbSetMinimumThreadPriority @ 0x140318C48 (KiAbSetMinimumThreadPriority.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x140318EE4 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x140318FC0 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x140319010 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x1403190CC (KiAbOwnerComputeCpuPriorityKey.c)
 *     IoBoostThreadIoPriority @ 0x14031B140 (IoBoostThreadIoPriority.c)
 *     KiUpdateVPBackingThreadPriority @ 0x14034DCD8 (KiUpdateVPBackingThreadPriority.c)
 *     KiRecomputeGroupSchedulingRank @ 0x140364F20 (KiRecomputeGroupSchedulingRank.c)
 *     EtwTraceContextSwap @ 0x140388080 (EtwTraceContextSwap.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KiSwapContext @ 0x140427C20 (KiSwapContext.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x140461B06 (KiSendHeteroRescheduleIntRequest.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KiEndCounterAccumulation @ 0x140574364 (KiEndCounterAccumulation.c)
 *     KiUpdateThreadHgsFeedback @ 0x140578770 (KiUpdateThreadHgsFeedback.c)
 */

struct _KPRCB *__fastcall KiSwapThread(ULONG_PTR BugCheckParameter1, ULONG_PTR a2, _QWORD *a3, __int64 a4)
{
  bool v4; // zf
  ULONG_PTR i; // rdi
  int v7; // r15d
  int v8; // ecx
  __int64 p_AbSelfIoBoostsList; // r12
  int v10; // ecx
  unsigned int v11; // r14d
  __int64 v12; // rcx
  __int64 v13; // rcx
  ULONG_PTR v14; // rbx
  __int64 v15; // rax
  char v16; // cl
  __int64 LockedHeadEntry; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  char v20; // r14
  char v21; // al
  char v22; // dl
  int v23; // r10d
  char CpuPriorityKey; // r12
  __int64 v25; // r14
  _DWORD *v26; // rbx
  __int64 ExtensionTable; // rax
  _QWORD *v28; // rcx
  volatile signed __int16 *v29; // rbx
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  unsigned __int64 v34; // rcx
  char v35; // bl
  unsigned __int64 v36; // rax
  unsigned int v37; // eax
  unsigned int v38; // ecx
  int v39; // edx
  __int64 v40; // rcx
  unsigned int FrequencyBucket; // eax
  char v42; // cl
  __int64 v43; // r8
  _BOOL8 v44; // r10
  unsigned int v45; // ecx
  unsigned int v46; // ecx
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // r9
  unsigned int v50; // r8d
  int v51; // ecx
  unsigned int v52; // edx
  __int64 v53; // rcx
  __int64 v54; // rcx
  _QWORD *j; // rcx
  struct _KPRCB *v56; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v58; // eax
  signed __int32 v59; // ett
  int v60; // ecx
  __int64 v61; // rbx
  __int64 v62; // rsi
  __int64 v63; // rbx
  __int64 v64; // rbx
  char v65; // al
  unsigned __int64 v66; // r9
  unsigned __int64 v67; // r9
  unsigned __int64 *v68; // r8
  int v69; // edx
  unsigned __int8 v70; // si
  struct _KPRCB *v71; // rcx
  signed __int32 *v72; // r8
  signed __int32 v73; // eax
  signed __int32 v74; // ett
  char v75; // di
  struct _KPRCB *v76; // rbx
  unsigned __int8 v77; // cf
  volatile signed __int32 *v78; // rbx
  char v79; // r14
  unsigned int v80; // esi
  __int64 v81; // r10
  __int64 v82; // rax
  __int64 v83; // r11
  unsigned __int64 v84; // rax
  __int64 v85; // r12
  volatile signed __int32 *v86; // rdi
  char v87; // al
  __int64 v88; // r9
  unsigned __int16 v89; // r8
  _QWORD *v90; // rcx
  unsigned __int64 v91; // r14
  _QWORD *v92; // rax
  __int64 v93; // r15
  volatile signed __int32 *v94; // rsi
  __int64 v95; // rcx
  unsigned int v96; // edx
  volatile signed __int32 *v97; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v99; // rcx
  _DWORD *v100; // rdx
  unsigned __int8 v101; // cl
  struct _KPRCB *v102; // r10
  _DWORD *v103; // r9
  int v104; // edx
  signed __int32 v106[8]; // [rsp+0h] [rbp-100h] BYREF
  char v107; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v108; // [rsp+41h] [rbp-BFh]
  int v109; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v110; // [rsp+48h] [rbp-B8h]
  __int64 v111; // [rsp+50h] [rbp-B0h]
  int v112; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v113; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v114; // [rsp+68h] [rbp-98h]
  int v115; // [rsp+70h] [rbp-90h] BYREF
  __int64 v116; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v117; // [rsp+80h] [rbp-80h] BYREF
  struct _KPRCB *CurrentPrcb; // [rsp+88h] [rbp-78h]
  ULONG_PTR v119; // [rsp+90h] [rbp-70h] BYREF
  int v120; // [rsp+98h] [rbp-68h]
  int v121; // [rsp+9Ch] [rbp-64h] BYREF
  int v122; // [rsp+A0h] [rbp-60h] BYREF
  int v123; // [rsp+A4h] [rbp-5Ch] BYREF
  int v124; // [rsp+A8h] [rbp-58h] BYREF
  int v125; // [rsp+ACh] [rbp-54h] BYREF
  int v126; // [rsp+B0h] [rbp-50h] BYREF
  int v127; // [rsp+B4h] [rbp-4Ch] BYREF
  unsigned __int64 v128; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v129; // [rsp+C0h] [rbp-40h]
  _QWORD *v130; // [rsp+C8h] [rbp-38h]
  __int128 v131; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v132; // [rsp+E0h] [rbp-20h]
  __int128 v133; // [rsp+E8h] [rbp-18h]
  _QWORD v134[2]; // [rsp+F8h] [rbp-8h] BYREF

  v4 = *(_QWORD *)(a2 + 11528) == 0LL;
  i = a2;
  v130 = a3;
  v119 = a2;
  if ( !v4 )
    KiProcessThreadWaitList(a2, 1LL, 0LL, 2LL);
  v7 = 0;
  v8 = *(unsigned __int8 *)(BugCheckParameter1 + 792) | *(unsigned __int8 *)(BugCheckParameter1 + 870);
  v116 = 0LL;
  if ( v8 == 63 )
    goto LABEL_59;
  CurrentPrcb = KeGetCurrentPrcb();
  v113 = 0LL;
  v110 = 0;
  p_AbSelfIoBoostsList = (__int64)&CurrentPrcb->AbSelfIoBoostsList;
  v10 = *(unsigned __int8 *)(BugCheckParameter1 + 792) | *(unsigned __int8 *)(BugCheckParameter1 + 870);
  v114 = (__int64)&CurrentPrcb->AbSelfIoBoostsList;
  if ( v10 == 63 )
    goto LABEL_58;
  v11 = (*(unsigned __int8 *)(BugCheckParameter1 + 792) | *(unsigned __int8 *)(BugCheckParameter1 + 870)) ^ 0x3F;
  v4 = !_BitScanForward((unsigned int *)&v12, v11);
  v110 = v12;
  if ( v4 )
    goto LABEL_58;
  do
  {
    v11 &= v11 - 1;
    v13 = 96 * v12;
    v14 = v13 + BugCheckParameter1 + 1696;
    v110 = v11;
    v133 = 0LL;
    v15 = *(_QWORD *)v14;
    *(_QWORD *)&v133 = v15;
    if ( v15 && (v15 & 2) == 0 && (v15 & 1) == 0 )
    {
      if ( v15 >= 0 )
        goto LABEL_17;
      if ( (*(_BYTE *)(v14 + 19) & 1) != 0 )
        goto LABEL_53;
      if ( *(_BYTE *)(v14 + 17) )
      {
        v16 = *(_BYTE *)(v14 - 96LL * *(unsigned __int8 *)(v14 + 16) - 1501);
        if ( v16 > 30 )
          v16 = 30;
        if ( v16 != *(_BYTE *)(v14 + 48) )
        {
LABEL_17:
          v109 = 0;
          v132 = 0LL;
          v112 = 0;
          v131 = 0LL;
          LockedHeadEntry = KiAbEntryGetLockedHeadEntry(v14, 1LL, &v131);
          v18 = LockedHeadEntry;
          if ( !LockedHeadEntry )
            goto LABEL_52;
          if ( !*(_BYTE *)(v14 + 17) )
          {
            if ( v14 != LockedHeadEntry )
              KiAbEntryUpdateOwnerTreePosition(v14, LockedHeadEntry);
            KiAbDetermineMaxWaiterPriority(v18, &v109);
            if ( v109 )
            {
              if ( (unsigned int)KiAbSetMinimumThreadPriority(
                                   v14,
                                   (unsigned int)&v109,
                                   (unsigned int)&v116,
                                   (unsigned int)&v113,
                                   p_AbSelfIoBoostsList,
                                   (__int64)&v112)
                && v14 != v18 )
              {
                KiAbEntryUpdateOwnerTreePosition(v14, v18);
              }
              v7 = v112;
LABEL_43:
              KxReleaseQueuedSpinLock(&v131);
              if ( v7 )
              {
                v26 = (_DWORD *)(v14 - 96LL * *(unsigned __int8 *)(v14 + 16) - 1696);
                if ( (unsigned __int8)ObReferenceObjectSafeWithTag(v26, 1953261124LL) )
                {
                  if ( (v7 & 1) != 0 )
                    IoBoostThreadIoPriority(v26, 2LL, 0x80000000LL);
                  if ( (v7 & 2) != 0 )
                  {
                    if ( v26[362] )
                    {
                      ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
                      if ( ExtensionTable )
                      {
                        (*(void (__fastcall **)(_DWORD *))(ExtensionTable + 16))(v26);
                        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
                      }
                    }
                  }
                  ObDereferenceObjectDeferDeleteWithTag(v26, 0x746C6644u);
                }
              }
LABEL_52:
              v7 = 0;
              goto LABEL_53;
            }
LABEL_38:
            KxReleaseQueuedSpinLock(&v131);
            goto LABEL_52;
          }
          if ( v14 != LockedHeadEntry )
            KiAbEntryUpdateWaiterTreePosition(v14, LockedHeadEntry);
          v19 = *(_QWORD *)(v18 + 56);
          if ( v19 )
            v20 = *(_BYTE *)(v19 + 24);
          else
            v20 = 30;
          v4 = *(_BYTE *)(v18 + 17) == 0;
          LOBYTE(v109) = v20;
          if ( v4 )
          {
            v21 = KiAbOwnerComputeCpuPriorityKey(v18);
            v22 = v20;
            if ( v21 < v20 )
              v22 = v21;
            v20 = v22;
            LOBYTE(v109) = v22;
          }
          KiAbTryIncrementIoWaiterCounts(v14, v18);
          CpuPriorityKey = KiAbEntryGetCpuPriorityKey(v14);
          if ( v20 < CpuPriorityKey )
          {
            if ( v23 )
              goto LABEL_40;
            v25 = v114;
          }
          else
          {
            if ( !v23 )
            {
              v11 = v110;
              p_AbSelfIoBoostsList = v114;
              goto LABEL_38;
            }
LABEL_40:
            v25 = v114;
            KiAbIoBoostOwners(v18, v23, (unsigned int)&v116, (unsigned int)&v113, v114);
          }
          KiAbCpuBoostOwners(v18, (unsigned __int8)CpuPriorityKey, (unsigned int)&v116, (unsigned int)&v113, v25);
          v11 = v110;
          p_AbSelfIoBoostsList = v114;
          goto LABEL_43;
        }
      }
      else if ( (unsigned __int8)KiAbOwnerComputeCpuPriorityKey(v13 + BugCheckParameter1 + 1696) != *(_BYTE *)(v14 + 48) )
      {
        goto LABEL_17;
      }
    }
LABEL_53:
    v4 = !_BitScanForward((unsigned int *)&v12, v11);
    v110 = v12;
  }
  while ( !v4 );
  v28 = v113;
  for ( i = v119; v113; v28 = v113 )
  {
    v29 = (volatile signed __int16 *)(v28 - 101);
    v113 = (_QWORD *)*v28;
    *v28 = 1LL;
    _InterlockedOr(v106, 0);
    if ( *((_BYTE *)v28 - 15) )
      KiAbProcessThreadLocks((_DWORD)v28 - 808, 0, 1, 0, (__int64)&v116, (__int64)&v113, p_AbSelfIoBoostsList);
    _InterlockedDecrement16(v29 + 434);
  }
LABEL_58:
  KiReadyDeferredReadyList(CurrentPrcb, &v116);
LABEL_59:
  _disable();
  *(_BYTE *)(i + 32) = 1;
  v30 = __rdtsc();
  v31 = v30 - *(_QWORD *)(i + 33152);
  v32 = v31 + *(_QWORD *)(BugCheckParameter1 + 72);
  *(_QWORD *)(BugCheckParameter1 + 72) = v32;
  v33 = *(unsigned int *)(BugCheckParameter1 + 80);
  v34 = v31 * *(unsigned int *)(i + 33208);
  *(_QWORD *)(i + 33152) = v30;
  v35 = *(_BYTE *)(BugCheckParameter1 + 2);
  v36 = (v34 >> 16) + v33;
  if ( v36 > 0xFFFFFFFF )
    LODWORD(v36) = -1;
  *(_DWORD *)(BugCheckParameter1 + 80) = v36;
  if ( (v35 & 0xBE) != 0 )
  {
    if ( v35 < 0 )
    {
      v30 = *(_QWORD *)(i + 34480);
      a4 = (*(_QWORD *)(*(_QWORD *)(BugCheckParameter1 + 544) + 1024LL) >> 4) & 0x1FFLL;
      v37 = ((unsigned int)*(_QWORD *)(*(_QWORD *)(BugCheckParameter1 + 544) + 1024LL) >> 13) & 0x3FFFF;
      _BitScanReverse(&v38, v37);
      v39 = 1 << v38;
      v40 = v38 - 2;
      v120 = v40;
      v32 = *(_QWORD *)(*(_QWORD *)(v30 + 8 * v40) + 8LL * (v37 ^ v39) + 8);
      *(_QWORD *)(v32 + 8 * a4) += v31;
      v35 &= ~0x80u;
    }
    if ( (v35 & 0x10) != 0 )
    {
      v32 = i + 8LL * *(unsigned __int8 *)(BugCheckParameter1 + 124);
      *(_QWORD *)(v32 + 33160) += v31;
      v35 &= ~0x10u;
    }
    if ( (v35 & 0x20) != 0 )
    {
      a4 = *(_QWORD *)(BugCheckParameter1 + 1608);
      if ( a4 )
      {
        FrequencyBucket = PoGetFrequencyBucket(i, v32, v30, a4);
        if ( KeHeteroSystem )
          v42 = *(_BYTE *)(i + 34056);
        else
          v42 = *(_BYTE *)(i + 34059);
        v43 = FrequencyBucket;
        v44 = v42 != 0;
        *(_QWORD *)(a4 + 8 * (v44 + 2LL * FrequencyBucket)) += v31;
        v45 = *(_DWORD *)(a4 + 192);
        if ( KiTimelineBitmapTime <= v45 )
        {
          v46 = v45 - KiTimelineBitmapTime;
          if ( v46 < 0x20 )
            *(_DWORD *)(a4 + 196) |= 1 << v46;
        }
        else
        {
          LODWORD(v111) = KiTimelineBitmapTime;
          if ( KiTimelineBitmapTime - v45 >= 0x20 )
            HIDWORD(v111) = 1;
          else
            HIDWORD(v111) = (*(_DWORD *)(a4 + 196) << (KiTimelineBitmapTime - v45)) | 1;
          *(_QWORD *)(a4 + 192) = v111;
        }
        if ( !KiEfficiencyClassSystem )
        {
          v47 = (unsigned __int8)*(_DWORD *)(BugCheckParameter1 + 512);
          if ( v47 == 2 || (unsigned int)(v47 - 5) <= 1 )
            *(_QWORD *)(a4 + 16 * v43 + 8) += v31;
        }
        if ( *(_QWORD *)(BugCheckParameter1 + 1552) )
        {
          *(_QWORD *)(a4 + 8 * (v44 + 2 * (v43 + 8))) += v31;
          _InterlockedExchangeAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter1 + 1552) + 1608LL)
                                      + 8 * (v44 + 2 * (v43 + 4))),
            v31);
        }
      }
      v35 &= ~0x20u;
    }
    if ( (v35 & 0x40) != 0 )
    {
      v48 = *(_QWORD *)(BugCheckParameter1 + 968);
      if ( v48 )
        *(_BYTE *)(v48 + 64) = 0;
    }
    if ( KiHgsPlusEnabled )
    {
      LOBYTE(a4) = 1;
      KiUpdateThreadHgsFeedback(i, BugCheckParameter1, v31, a4);
    }
    v49 = *(_QWORD *)(i + 33200);
    if ( v49 )
    {
      if ( *(_BYTE *)(BugCheckParameter1 + 125) )
      {
        v50 = (unsigned __int8)*(_DWORD *)(BugCheckParameter1 + 512);
        if ( v50 < 7 )
        {
          v51 = 0;
          v52 = *(_DWORD *)(BugCheckParameter1 + 80);
          if ( v52 <= *(_DWORD *)(BugCheckParameter1 + 84) )
            v52 = *(_DWORD *)(BugCheckParameter1 + 84);
          LOBYTE(v51) = v52 >= KiDynamicHeteroCpuPolicyExpectedCycles;
          v53 = *(unsigned __int8 *)(BugCheckParameter1 + 516) + (unsigned int)KiHgsPlusConfiguration * (v51 + 2 * v50);
          *(_QWORD *)(v49 + 8 * v53) += v31;
        }
      }
    }
    if ( (v35 & 0xBE) != 0 )
    {
      v54 = *(_QWORD *)(BugCheckParameter1 + 104);
      if ( v54 )
      {
        for ( j = (_QWORD *)(*(unsigned int *)(i + 216) + v54); j; j = (_QWORD *)j[51] )
          *j += v31;
      }
      if ( (*(_BYTE *)(BugCheckParameter1 + 2) & 8) != 0
        && (*(_QWORD *)(*(_QWORD *)(i + 192) + 128LL) & *(_QWORD *)(*(_QWORD *)(BugCheckParameter1 + 576)
                                                                  + 8LL
                                                                  * *(unsigned __int16 *)(*(_QWORD *)(i + 192) + 136LL)
                                                                  + 8)) != *(_QWORD *)(*(_QWORD *)(i + 192) + 128LL) )
      {
        *(_QWORD *)(i + 33192) += v31;
      }
      if ( *(_QWORD *)(BugCheckParameter1 + 360) )
        KiEndCounterAccumulation(BugCheckParameter1);
    }
  }
  v56 = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)v56->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v58 = *SchedulerAssist;
    do
    {
      v59 = v58;
      v58 = _InterlockedCompareExchange(SchedulerAssist, v58 & 0xFFDFFFFF, v58);
    }
    while ( v59 != v58 );
    if ( (v58 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(v56);
  }
  _enable();
  v60 = (*(_DWORD *)(BugCheckParameter1 + 80) >> 1) + (*(_DWORD *)(BugCheckParameter1 + 84) >> 1);
  *(_DWORD *)(BugCheckParameter1 + 80) = 0;
  *(_DWORD *)(BugCheckParameter1 + 84) = v60;
  v121 = 0;
  v117 = i & 0xFFFFFFFFFFFFFFFEuLL;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(i + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(&v121);
    while ( *(_QWORD *)(i + 48) );
  }
  v61 = *(_QWORD *)(BugCheckParameter1 + 104);
  v62 = v61;
  if ( v61 )
  {
    v63 = *(unsigned int *)(i + 216) + v61;
    if ( v63 )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)(v63 + 112) & 4) != 0 )
        {
          if ( (unsigned __int8)KiCheckMaxOverQuotaTransition(v63, v62) )
          {
            if ( (*(_BYTE *)(v63 + 112) & 1) != 0 )
              KiRemoveSchedulingGroupQueue((_RTL_RB_TREE *)i, v63, 1);
          }
          else if ( *(_QWORD *)v63 >= *(_QWORD *)(v63 + 24) && (*(_BYTE *)(v63 + 112) & 2) == 0 )
          {
            KiRecomputeGroupSchedulingRank(v62, v63, i);
          }
        }
        else
        {
          KiComputeGroupSchedulingRank(v62, i, SchedulerAssist, v63);
        }
        v63 = *(_QWORD *)(v63 + 408);
        if ( !v63 )
          break;
        v62 = v63 - *(unsigned int *)(i + 216);
      }
    }
  }
  v64 = KiSearchForNewThread(i, 0LL, &v117);
  if ( v64 == *(_QWORD *)(i + 24) && KeHeteroSystem && !KeHeteroSystemVirtual )
  {
    KiReleasePrcbLocksForIsolationUnit(&v117);
    KiSendHeteroRescheduleIntRequest(i);
    KiAcquirePrcbLocksForIsolationUnit(i, 0LL, &v117);
    v64 = *(_QWORD *)(i + 16);
  }
  if ( v64 == *(_QWORD *)(i + 24) || v64 == BugCheckParameter1 || !*(_BYTE *)(v64 + 113) )
    *(_QWORD *)(i + 16) = 0LL;
  else
    v64 = *(_QWORD *)(i + 24);
  *(_QWORD *)(i + 8) = v64;
  if ( *(_BYTE *)(v64 + 388) == 1 )
    *(_DWORD *)(v64 + 132) = *(_DWORD *)(v64 + 132) - *(_DWORD *)(v64 + 436) + MEMORY[0xFFFFF78000000320];
  v65 = v117;
  v66 = v117;
  *(_BYTE *)(v64 + 388) = 2;
  v67 = v66 & 0xFFFFFFFFFFFFFFFEuLL;
  v128 = v67;
  if ( (v65 & 1) != 0 )
  {
    v68 = (unsigned __int64 *)(*(_QWORD *)(v67 + 34904) + 8LL);
    v69 = **(unsigned __int8 **)(v67 + 34904);
    if ( **(_BYTE **)(v67 + 34904) )
      goto LABEL_141;
  }
  else
  {
    v68 = &v128;
    v69 = 1;
    do
LABEL_141:
      _InterlockedAnd64((volatile signed __int64 *)(v68[--v69] + 48), 0LL);
    while ( v69 );
  }
  v70 = *(_BYTE *)(BugCheckParameter1 + 390);
  v108 = v70;
  v117 = 0LL;
  if ( BugCheckParameter1 == v64 )
  {
    if ( !*(_BYTE *)(v64 + 193) || *(_WORD *)(v64 + 486) || (v107 = 1, v70) )
      v107 = 0;
    _disable();
    KiStartThreadCycleAccumulation(i, v64, 0LL);
    v71 = KeGetCurrentPrcb();
    v72 = (signed __int32 *)v71->SchedulerAssist;
    if ( v72 )
    {
      _m_prefetchw(v72);
      v73 = *v72;
      do
      {
        v74 = v73;
        v73 = _InterlockedCompareExchange(v72, v73 & 0xFFDFFFFF, v73);
      }
      while ( v74 != v73 );
      if ( (v73 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v71);
    }
    _enable();
    if ( (*(_DWORD *)(v64 + 120) & 0x800) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(v64 + 120), 0xBu);
      KiInsertDeferredPreemptionApc(i, v64, 0LL);
    }
    if ( (BYTE4(PerfGlobalGroupMask) & 4) != 0 )
      EtwTraceContextSwap(BugCheckParameter1, BugCheckParameter1);
  }
  else
  {
    v75 = 0;
    if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 && *(_BYTE *)(BugCheckParameter1 + 388) == 5 )
    {
      if ( !*(_BYTE *)(BugCheckParameter1 + 793) )
      {
        v107 = KiSwapContext(BugCheckParameter1, v64, v70);
        goto LABEL_172;
      }
      v122 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
      {
        do
          KeYieldProcessorEx(&v122);
        while ( *(_QWORD *)(BugCheckParameter1 + 64) );
      }
      if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 && *(_BYTE *)(BugCheckParameter1 + 388) == 5 )
      {
        if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
          _InterlockedOr(*(volatile signed __int32 **)(BugCheckParameter1 + 968), 0x40000u);
        KiUpdateVPBackingThreadPriority(BugCheckParameter1);
        v75 = 1;
      }
      *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
    }
    v107 = KiSwapContext(BugCheckParameter1, v64, v70);
    if ( v75 && (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
      _InterlockedAnd(*(volatile signed __int32 **)(BugCheckParameter1 + 968), 0xFFFBFFFF);
  }
LABEL_172:
  v76 = *(struct _KPRCB **)(BugCheckParameter1 + 200);
  v77 = _bittestandreset((signed __int32 *)(BugCheckParameter1 + 116), 9u);
  CurrentPrcb = v76;
  if ( v77 )
  {
    v78 = (volatile signed __int32 *)(BugCheckParameter1 + 256);
    v119 = 0LL;
    v115 = 0;
    v79 = 0;
    v80 = -129;
    while ( 1 )
    {
      v123 = 0;
      while ( _interlockedbittestandset(v78, 7u) )
      {
        do
          KeYieldProcessorEx(&v123);
        while ( (*v78 & 0x80u) != 0 );
      }
      if ( (*(_BYTE *)(BugCheckParameter1 + 259) & 0xC0) == 0 )
        break;
      v81 = *(unsigned __int8 *)(BugCheckParameter1 + 258);
      v82 = *(unsigned __int16 *)(BugCheckParameter1 + 312);
      LODWORD(v114) = *(unsigned __int8 *)(BugCheckParameter1 + 258);
      v111 = v81;
      v124 = 0;
      v83 = KiProcessorBlock[v82];
      v84 = (unsigned __int64)*(unsigned __int16 *)(BugCheckParameter1 + 314) << 8;
      v129 = v83;
      v85 = v83 + 15360;
      v86 = (volatile signed __int32 *)(v83 + 15360 + 32 * (v84 + v81 + 16));
      while ( _interlockedbittestandset64(v86, 0LL) )
      {
        do
          KeYieldProcessorEx(&v124);
        while ( *(_QWORD *)v86 );
      }
      if ( *(char *)(BugCheckParameter1 + 259) >= 0 )
      {
        v88 = v111;
        v89 = *(_WORD *)(BugCheckParameter1 + 314);
        v90 = *(_QWORD **)(BugCheckParameter1 + 288);
        v91 = 32 * (((unsigned __int64)v89 << 8) + v111 + 16);
        v92 = *(_QWORD **)(BugCheckParameter1 + 296);
        v93 = 32 * (((v89 ^ 1LL) << 8) + v111 + 16);
        if ( v90[1] != BugCheckParameter1 + 288 || *v92 != BugCheckParameter1 + 288 )
          __fastfail(3u);
        *v92 = v90;
        v90[1] = v92;
        if ( v92 == v90 )
        {
          *(_DWORD *)(v91 + v85 + 28) = -1;
          if ( !v89 )
          {
            v125 = 0;
            v94 = (volatile signed __int32 *)(v85 + 32 * (v88 + 272));
            while ( _interlockedbittestandset64(v94, 0LL) )
            {
              do
                KeYieldProcessorEx(&v125);
              while ( *(_QWORD *)v94 );
            }
            goto LABEL_211;
          }
          v94 = (volatile signed __int32 *)(v85 + 32 * (v88 + 16));
          if ( _interlockedbittestandset64(v94, 0LL) )
          {
            _mm_pause();
            goto LABEL_203;
          }
          if ( !v94 )
          {
LABEL_203:
            _InterlockedAnd64((volatile signed __int64 *)v86, 0LL);
            v126 = 0;
            while ( _interlockedbittestandset64(v94, 0LL) )
            {
              do
                KeYieldProcessorEx(&v126);
              while ( *(_QWORD *)v94 );
            }
            v127 = 0;
            v86 = (volatile signed __int32 *)(v85 + 32 * (v111 + 272));
            while ( _interlockedbittestandset64(v86, 0LL) )
            {
              do
                KeYieldProcessorEx(&v127);
              while ( *(_QWORD *)v86 );
            }
LABEL_211:
            v88 = v111;
          }
          if ( *(_DWORD *)(v91 + v85 + 28) == -1 && *(_DWORD *)(v93 + v85 + 28) == -1 )
          {
            v95 = qword_140D20278[2 * *(unsigned __int8 *)(v129 + 208)];
            if ( KiSerializeTimerExpiration )
            {
              v96 = v114 & 0x3F;
              v97 = (volatile signed __int32 *)(v95 + 8LL * ((unsigned int)v114 >> 6));
            }
            else
            {
              v96 = *(unsigned __int8 *)(v129 + 209);
              v97 = (volatile signed __int32 *)((v88 << 6) + v95);
            }
            _interlockedbittestandreset64(v97, v96);
          }
          _InterlockedAnd64((volatile signed __int64 *)v94, 0LL);
        }
        _InterlockedAnd64((volatile signed __int64 *)v86, 0LL);
        v79 = 1;
        v80 = -1073741953;
        break;
      }
      _InterlockedAnd64((volatile signed __int64 *)v86, 0LL);
      if ( _InterlockedExchange64((volatile __int64 *)(v85 + 8LL * (*(_BYTE *)(BugCheckParameter1 + 259) & 0x3F)), 0LL) )
      {
        v79 = 1;
        v80 = 16777087;
        break;
      }
      _InterlockedAnd(v78, 0xFFFFFF7F);
      v87 = *(_BYTE *)(BugCheckParameter1 + 259);
      v115 = 0;
      if ( v87 < 0 )
      {
        do
          KeYieldProcessorEx(&v115);
        while ( *(char *)(BugCheckParameter1 + 259) < 0 );
      }
    }
    _InterlockedAnd(v78, v80);
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    {
      if ( v79 )
      {
        v119 = BugCheckParameter1 + 256;
        v134[0] = &v119;
        v134[1] = 8LL;
        EtwTraceKernelEvent((int)v134, 1, 0x40020000u, 3925, 1538);
        v70 = v108;
        v76 = CurrentPrcb;
        goto LABEL_224;
      }
LABEL_222:
      *(_BYTE *)(BugCheckParameter1 + 481) = 4;
      *(_QWORD *)(BugCheckParameter1 + 264) = BugCheckParameter1 + 464;
      *(_QWORD *)(BugCheckParameter1 + 272) = BugCheckParameter1 + 464;
    }
    else if ( !v79 )
    {
      goto LABEL_222;
    }
    v76 = CurrentPrcb;
    v70 = v108;
  }
LABEL_224:
  if ( v130 )
    *v130 = *(_QWORD *)(BugCheckParameter1 + 976);
  if ( v107 )
  {
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(CurrentIrql - 2) <= 0xDu )
      {
        v99 = KeGetCurrentPrcb();
        v100 = v99->SchedulerAssist;
        v4 = (v100[5] & 0xFFFF0003) == 0;
        v100[5] &= 0xFFFF0003;
        if ( v4 )
          KiRemoveSystemWorkPriorityKick(v99);
      }
    }
    __writecr8(1uLL);
    KiDeliverApc(0LL, 0LL, 0LL);
  }
  if ( (_DWORD)KiIrqlFlags )
  {
    v101 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v101 <= 0xFu && v70 <= 0xFu && v101 >= 2u )
    {
      v102 = KeGetCurrentPrcb();
      v103 = v102->SchedulerAssist;
      v104 = ~(unsigned __int16)(-1LL << (v70 + 1));
      v4 = (v104 & v103[5]) == 0;
      v103[5] &= v104;
      if ( v4 )
        KiRemoveSystemWorkPriorityKick(v102);
    }
  }
  __writecr8(v70);
  return v76;
}
