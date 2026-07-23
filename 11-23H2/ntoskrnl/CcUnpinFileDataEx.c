/*
 * XREFs of CcUnpinFileDataEx @ 0x14025DAA0
 * Callers:
 *     CcReleaseByteRangeFromWrite @ 0x14025D990 (CcReleaseByteRangeFromWrite.c)
 *     CcPinFileData @ 0x140263B20 (CcPinFileData.c)
 *     CcAcquireByteRangeForWrite @ 0x14029D2C0 (CcAcquireByteRangeForWrite.c)
 *     CcZeroDataInCache @ 0x1402FC1A8 (CcZeroDataInCache.c)
 *     CcMapDataForOverwrite @ 0x1402FC614 (CcMapDataForOverwrite.c)
 *     CcGetDirtyPagesHelper @ 0x140338AD0 (CcGetDirtyPagesHelper.c)
 *     CcUnpinRepinnedBcb @ 0x140394370 (CcUnpinRepinnedBcb.c)
 *     CcUnpinData @ 0x1406F5A50 (CcUnpinData.c)
 *     CcMapData @ 0x1406F6220 (CcMapData.c)
 *     CcUnpinDataForThread @ 0x140936E10 (CcUnpinDataForThread.c)
 * Callees:
 *     CcAdjustVacbLevelLockCount @ 0x1402075C0 (CcAdjustVacbLevelLockCount.c)
 *     PsBoostThreadIoEx @ 0x140230040 (PsBoostThreadIoEx.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231280 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KiTryUnwaitThread @ 0x140238DA0 (KiTryUnwaitThread.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x14023CE40 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x1402520F0 (KiAcquireKobjectLockSafe.c)
 *     KiInsertQueueDpc @ 0x140254850 (KiInsertQueueDpc.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     ExpReleaseResourceForThreadLite @ 0x140260890 (ExpReleaseResourceForThreadLite.c)
 *     KxWaitForLockOwnerShip @ 0x1402611B0 (KxWaitForLockOwnerShip.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8F70 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExDeleteResourceLite @ 0x1402A9050 (ExDeleteResourceLite.c)
 *     KiWakeQueueWaiter @ 0x1402B8A10 (KiWakeQueueWaiter.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402BAFD0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KiRemoveBoostThread @ 0x1402BB4E0 (KiRemoveBoostThread.c)
 *     KeCaptureWaitChainHeadEx @ 0x1402BBA2C (KeCaptureWaitChainHeadEx.c)
 *     ExpReleaseFastMutexContended @ 0x1402BC1F0 (ExpReleaseFastMutexContended.c)
 *     CcDeductDirtyPagesInternal @ 0x1402F4248 (CcDeductDirtyPagesInternal.c)
 *     ExpAcquireFastMutexContended @ 0x1402FCFDC (ExpAcquireFastMutexContended.c)
 *     KxWaitForLockChainValid @ 0x14031A960 (KxWaitForLockChainValid.c)
 *     PsBoostThreadIoQoS @ 0x14031A99C (PsBoostThreadIoQoS.c)
 *     KiWakeOtherQueueWaiters @ 0x14031AF28 (KiWakeOtherQueueWaiters.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x140346CEC (CcInsertIntoCleanSharedCacheMapList.c)
 *     ExpFastResourceLegacyRelease @ 0x1403CA980 (ExpFastResourceLegacyRelease.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14046058E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeIsThreadRunning @ 0x14056F310 (KeIsThreadRunning.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140571A88 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14058045C (KiHaltOnAddressWakeEntireList.c)
 *     EtwTraceEnqueueWork @ 0x1405FD27C (EtwTraceEnqueueWork.c)
 *     PerfLogExecutiveResourceRelease @ 0x140600DC4 (PerfLogExecutiveResourceRelease.c)
 *     ExAreApcsDisabledForThread @ 0x14060A098 (ExAreApcsDisabledForThread.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall CcUnpinFileDataEx(char *P, char a2, int a3)
{
  ULONG_PTR v3; // r15
  __int64 v6; // rdi
  struct _KEVENT *v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // r13
  struct _KTHREAD *CurrentThread; // r14
  __int64 v11; // rsi
  unsigned int AbEntrySummary; // eax
  unsigned int v13; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  int SessionId; // eax
  unsigned __int8 CurrentIrql; // r14
  ULONG_PTR v20; // rsi
  volatile __int64 *v21; // r9
  unsigned int v22; // esi
  __int64 v23; // r8
  _DWORD *v24; // r11
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // r9
  unsigned int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // rax
  unsigned __int8 v31; // cl
  unsigned __int64 v32; // rsi
  unsigned __int8 v33; // cl
  struct _KPRCB *v34; // r10
  _DWORD *v35; // r9
  int v36; // eax
  bool v37; // zf
  int v38; // eax
  __int64 v39; // rdi
  struct _KEVENT *v40; // rcx
  __int16 v41; // cx
  char *v42; // r14
  __int16 v43; // ax
  unsigned __int8 v44; // al
  struct _KTHREAD *v45; // rdx
  unsigned __int8 v46; // al
  struct _KTHREAD *v47; // rcx
  ULONG_PTR v48; // rdi
  volatile __int64 *v49; // r9
  __int64 v50; // r8
  _DWORD *v51; // r11
  int v52; // r10d
  __int64 v53; // rdx
  struct _KTHREAD *v54; // r8
  __int16 v55; // cx
  unsigned int v56; // eax
  int v57; // r13d
  __int64 v58; // rdx
  char *v59; // rbx
  struct _KTHREAD *v60; // rcx
  __int64 v61; // rdx
  ULONG_PTR v62; // rbx
  ULONG_PTR v63; // r9
  char *v64; // rdx
  unsigned int v65; // eax
  unsigned int v66; // edi
  unsigned int v67; // r12d
  unsigned int v68; // esi
  unsigned __int64 v69; // rbx
  unsigned __int8 v70; // al
  struct _KPRCB *v71; // r10
  _DWORD *v72; // r9
  int v73; // eax
  __int64 v74; // rdi
  _DWORD *v75; // rbx
  bool v76; // cc
  int v77; // ecx
  volatile signed __int32 *v78; // rax
  __int64 v79; // rax
  unsigned __int8 v80; // cl
  unsigned __int64 v81; // rbx
  unsigned __int8 v82; // cl
  struct _KPRCB *v83; // r10
  _DWORD *v84; // r9
  int v85; // eax
  int v86; // eax
  __int64 v87; // rcx
  _DWORD *v88; // r9
  __int64 v89; // rdx
  struct _KPRCB *v90; // rdi
  volatile signed __int32 *v91; // rbx
  volatile signed __int32 *i; // rax
  __int64 v93; // r13
  volatile signed __int32 *v94; // r12
  volatile signed __int32 *v95; // rcx
  __int64 v96; // rbx
  volatile signed __int32 **v97; // rax
  char v98; // al
  __int64 v99; // rdi
  _QWORD *v100; // r15
  unsigned __int8 v101; // cl
  _DWORD *v102; // r9
  __int64 v103; // rdx
  struct _KPRCB *v104; // r14
  _KTHREAD *v105; // rsi
  unsigned __int8 IsThreadRunning; // al
  int v107; // r8d
  __int64 *v108; // rdx
  __int64 v109; // rbx
  char v110; // al
  unsigned int v111; // ecx
  _PROCESSOR_NUMBER v112; // edx
  PFAST_MUTEX v113; // rdi
  unsigned __int64 OldIrql_low; // rbx
  unsigned __int32 v115; // eax
  unsigned __int8 v116; // cl
  struct _KPRCB *v117; // r9
  int v118; // eax
  _DWORD *v119; // r8
  ULONG_PTR v120; // rcx
  char **v121; // rdx
  PVOID *v122; // rcx
  __int64 v123; // rdi
  struct _KEVENT *v124; // rcx
  __int16 v125; // r8
  char *v126; // rbx
  __int16 v127; // ax
  unsigned __int8 v128; // al
  struct _KTHREAD *v129; // rdx
  char v130; // r8
  unsigned __int8 v131; // al
  struct _KTHREAD *v132; // rcx
  unsigned __int64 v133; // rbx
  unsigned __int32 v134; // eax
  unsigned __int8 v135; // cl
  struct _KPRCB *v136; // r9
  int v137; // eax
  _DWORD *v138; // r8
  signed __int32 v139[8]; // [rsp+0h] [rbp-89h] BYREF
  __int64 v140; // [rsp+30h] [rbp-59h] BYREF
  volatile signed __int64 *v141; // [rsp+38h] [rbp-51h]
  __int64 v142; // [rsp+40h] [rbp-49h]
  volatile signed __int32 *v143; // [rsp+48h] [rbp-41h] BYREF
  __int128 v144; // [rsp+50h] [rbp-39h] BYREF
  __int64 v145; // [rsp+60h] [rbp-29h]
  int v146; // [rsp+68h] [rbp-21h]
  int v147; // [rsp+6Ch] [rbp-1Dh]
  unsigned int v148; // [rsp+70h] [rbp-19h]
  int v149; // [rsp+74h] [rbp-15h]
  __int64 v150; // [rsp+78h] [rbp-11h] BYREF
  struct _KPRCB *v151; // [rsp+80h] [rbp-9h]
  volatile signed __int32 *v152; // [rsp+88h] [rbp-1h]
  PFAST_MUTEX FastMutex; // [rsp+90h] [rbp+7h]
  __int64 v154; // [rsp+A0h] [rbp+17h]
  char *v155; // [rsp+A8h] [rbp+1Fh]
  void *retaddr; // [rsp+E8h] [rbp+5Fh]
  unsigned int v157; // [rsp+F0h] [rbp+67h]
  unsigned int v158; // [rsp+108h] [rbp+7Fh]

  v3 = a3;
  v145 = 0LL;
  v144 = 0LL;
  if ( *(_WORD *)P != 765 )
  {
    v6 = *((_QWORD *)P + 1);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)P + 4) )
    {
      v7 = *(struct _KEVENT **)(v6 + 192);
      if ( v7 )
        KeSetEvent(v7, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 552));
    }
    return;
  }
  v8 = *((_QWORD *)P + 22);
  v9 = *(_QWORD *)(v8 + 536);
  if ( (*(_DWORD *)(v8 + 152) & 0x200) == 0 || a3 == 1 )
    a2 = 1;
  CurrentThread = KeGetCurrentThread();
  FastMutex = (PFAST_MUTEX)(v8 + 288);
  v11 = 0LL;
  _disable();
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(P, CurrentThread)) != 0 )
  {
    _BitScanForward(&v13, AbEntrySummary);
    v157 = v13;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v13);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v16 = *SchedulerAssist;
      do
      {
        v17 = v16;
        v16 = _InterlockedCompareExchange(SchedulerAssist, v16 & 0xFFDFFFFF, v16);
      }
      while ( v17 != v16 );
      if ( (v16 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v11 = (__int64)(&CurrentThread[1].Process + 12 * v157);
    if ( (unsigned __int64)(v8 + 288 - qword_140C659E8) >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    *(_DWORD *)(v11 + 8) = SessionId;
    *(_QWORD *)v11 = (v8 + 288) & 0x7FFFFFFFFFFFFFFCLL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)(v8 + 288), 0) )
    ExpAcquireFastMutexContended(v8 + 288, v11);
  if ( v11 )
    *(_BYTE *)(v11 + 18) = 1;
  v20 = v8 + 288;
  *(_QWORD *)(v8 + 296) = KeGetCurrentThread();
  *(_DWORD *)(v8 + 336) = CurrentIrql;
  if ( (unsigned int)v3 < 2 )
  {
    v38 = *((_DWORD *)P + 16);
    if ( !v38 )
      KeBugCheckEx(0x34u, 0x460uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *((_DWORD *)P + 16) = v38 - 1;
  }
  else
  {
    if ( (_DWORD)v3 != 2 )
      KeBugCheckEx(0x34u, 0x20497uLL, v3, 0LL, 0LL);
    if ( P[2] )
    {
      v21 = (volatile __int64 *)(v9 + 768);
      v22 = *((_DWORD *)P + 1) >> 12;
      P[2] = 0;
      *((_QWORD *)P + 5) = 0LL;
      *((_QWORD *)P + 6) = 0LL;
      *(_QWORD *)&v144 = 0LL;
      *((_QWORD *)&v144 + 1) = v9 + 768;
      v23 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)v23 <= 0xFu )
      {
        v24 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( (_BYTE)v23 == 2 )
          LODWORD(v25) = 4;
        else
          v25 = (-1LL << ((unsigned __int8)v23 + 1)) & 4;
        v24[5] |= v25;
      }
      LOBYTE(v145) = v23;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v144, v9 + 768);
      }
      else
      {
        v26 = _InterlockedExchange64(v21, (__int64)&v144);
        if ( v26 )
          KxWaitForLockOwnerShip(&v144, v26, v23, v21);
      }
      v27 = 0LL;
      if ( CcEnablePerVolumeLazyWriter )
        v27 = *(_QWORD *)(v8 + 600);
      CcDeductDirtyPagesInternal(v8, v22, *(_QWORD *)(v8 + 536), v27);
      v28 = *(_DWORD *)(v9 + 976);
      if ( v28 <= v22 )
        v29 = 0;
      else
        v29 = v28 - v22;
      *(_DWORD *)(v9 + 976) = v29;
      if ( !*(_DWORD *)(v8 + 112) && *(_DWORD *)(v8 + 4) )
        CcInsertIntoCleanSharedCacheMapList(v8);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&v144, retaddr);
        goto LABEL_53;
      }
      _m_prefetchw(&v144);
      v30 = v144;
      if ( !(_QWORD)v144 )
      {
        if ( (__int128 *)_InterlockedCompareExchange64(
                           *((volatile signed __int64 **)&v144 + 1),
                           0LL,
                           (signed __int64)&v144) == &v144 )
        {
LABEL_53:
          v32 = (unsigned __int8)v145;
          if ( (_DWORD)KiIrqlFlags )
          {
            v33 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v33 <= 0xFu && (unsigned __int8)v145 <= 0xFu && v33 >= 2u )
            {
              v34 = KeGetCurrentPrcb();
              v35 = v34->SchedulerAssist;
              v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v145 + 1));
              v37 = (v36 & v35[5]) == 0;
              v35[5] &= v36;
              if ( v37 )
                KiRemoveSystemWorkPriorityKick(v34);
            }
          }
          __writecr8(v32);
          v20 = v8 + 288;
          goto LABEL_63;
        }
        v30 = KxWaitForLockChainValid(&v144);
      }
      *(_QWORD *)&v144 = 0LL;
      v31 = BYTE8(v144);
      if ( ((v31 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v30 + 8), *((__int64 *)&v144 + 1))) & 4) != 0 )
      {
        _InterlockedOr(v139, 0);
        KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v30 + 8) >> 5) & 0x7F], 0LL));
      }
      goto LABEL_53;
    }
  }
LABEL_63:
  if ( *((_DWORD *)P + 16) )
  {
    if ( a2 )
    {
LABEL_264:
      v133 = *(unsigned __int8 *)(v20 + 48);
      *(_QWORD *)(v20 + 8) = 0LL;
      v134 = _InterlockedCompareExchange((volatile signed __int32 *)v20, 1, 0);
      if ( v134 )
        ExpReleaseFastMutexContended(v20, v134);
      if ( (_DWORD)KiIrqlFlags )
      {
        v135 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v135 <= 0xFu && (unsigned __int8)v133 <= 0xFu && v135 >= 2u )
        {
          v136 = KeGetCurrentPrcb();
          v137 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v133 + 1));
          v138 = v136->SchedulerAssist;
          v37 = (v137 & v138[5]) == 0;
          v138[5] &= v137;
          if ( v37 )
            KiRemoveSystemWorkPriorityKick(v136);
        }
      }
      __writecr8(v133);
      v120 = v20;
      goto LABEL_232;
    }
    v125 = *((_WORD *)P + 49);
    v126 = P + 72;
    v127 = v125 & 0x41;
    if ( FeatureFastResource2 )
    {
      if ( v127 != 1 )
      {
        if ( (v125 & 1) != 0 )
        {
          v128 = KeGetCurrentIrql();
          v129 = KeGetCurrentThread();
          if ( v128 > 2u )
            KeBugCheckEx(0x1C6u, 0LL, v128, 2uLL, 0LL);
          if ( !(unsigned __int8)ExAreApcsDisabledForThread(v128, v129) )
            goto LABEL_284;
          if ( (v130 & 1) != 0 )
          {
LABEL_255:
            ExpFastResourceLegacyRelease((ULONG_PTR)v126);
            goto LABEL_264;
          }
        }
        goto LABEL_263;
      }
    }
    else if ( v127 != 1 )
    {
      if ( (v125 & 1) != 0 )
      {
        v131 = KeGetCurrentIrql();
        v132 = KeGetCurrentThread();
        if ( v131 > 2u )
          KeBugCheckEx(0x1C6u, 0LL, v131, 2uLL, 0LL);
        if ( !v131 && (v132->MiscFlags & 0x400) == 0 && !v132->WaitBlock[3].SpareLong )
          goto LABEL_284;
        goto LABEL_255;
      }
LABEL_263:
      ExpReleaseResourceForThreadLite((ULONG_PTR)v126, (ULONG_PTR)KeGetCurrentThread());
      goto LABEL_264;
    }
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)v126, 0LL, 0LL);
  }
  if ( P[2] )
  {
    if ( *((_QWORD *)P + 23) )
    {
      v39 = *(_QWORD *)(*((_QWORD *)P + 7) + 8LL);
      if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)P + 7) + 16LL)) )
      {
        v40 = *(struct _KEVENT **)(v39 + 192);
        if ( v40 )
          KeSetEvent(v40, 0, 0);
        _InterlockedDecrement((volatile signed __int32 *)(v39 + 552));
      }
      *((_QWORD *)P + 23) = 0LL;
      *((_QWORD *)P + 7) = 0LL;
    }
    if ( a2 )
      goto LABEL_222;
    v41 = *((_WORD *)P + 49);
    v42 = P + 72;
    v155 = P + 72;
    v43 = v41 & 0x41;
    if ( FeatureFastResource2 )
    {
      if ( v43 != 1 )
      {
        if ( (v41 & 1) == 0 )
          goto LABEL_88;
        v44 = KeGetCurrentIrql();
        v45 = KeGetCurrentThread();
        if ( v44 > 2u )
          KeBugCheckEx(0x1C6u, 0LL, v44, 2uLL, 0LL);
        if ( v44 || (v45->MiscFlags & 0x400) != 0 || v45->WaitBlock[3].SpareLong )
        {
          if ( (v41 & 1) != 0 )
          {
LABEL_80:
            ExpFastResourceLegacyRelease((ULONG_PTR)(P + 72));
LABEL_222:
            v113 = FastMutex;
            OldIrql_low = LOBYTE(FastMutex->OldIrql);
            FastMutex->Owner = 0LL;
            v115 = _InterlockedCompareExchange(&v113->Count, 1, 0);
            if ( v115 )
              ExpReleaseFastMutexContended(v113, v115);
            if ( (_DWORD)KiIrqlFlags )
            {
              v116 = KeGetCurrentIrql();
              if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
                && v116 <= 0xFu
                && (unsigned __int8)OldIrql_low <= 0xFu
                && v116 >= 2u )
              {
                v117 = KeGetCurrentPrcb();
                v118 = ~(unsigned __int16)(-1LL << ((unsigned __int8)OldIrql_low + 1));
                v119 = v117->SchedulerAssist;
                v37 = (v118 & v119[5]) == 0;
                v119[5] &= v118;
                if ( v37 )
                  KiRemoveSystemWorkPriorityKick(v117);
              }
            }
            __writecr8(OldIrql_low);
            v120 = (ULONG_PTR)v113;
LABEL_232:
            KeAbPostRelease(v120);
            return;
          }
LABEL_88:
          v48 = (ULONG_PTR)KeGetCurrentThread();
          v49 = (volatile __int64 *)(P + 168);
          v141 = (volatile signed __int64 *)(P + 168);
          v140 = 0LL;
          v142 = 0LL;
          v50 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)v50 <= 0xFu )
          {
            v51 = KeGetCurrentPrcb()->SchedulerAssist;
            v52 = v51[5];
            if ( (_BYTE)v50 == 2 )
              v51[5] = v52 | 4;
            else
              v51[5] = (-1 << (v50 + 1)) & 4 | v52;
          }
          LOBYTE(v142) = v50;
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireQueuedSpinLockInstrumented(&v140, P + 168);
          }
          else
          {
            v53 = _InterlockedExchange64(v49, (__int64)&v140);
            if ( v53 )
              KxWaitForLockOwnerShip(&v140, v53, v50, v49);
          }
          v54 = KeGetCurrentThread();
          v55 = *((_WORD *)P + 49);
          if ( ((v55 & 1) != 0 || ExpResourceEnforceOwnerTransfer) && (v48 & 3) != 3 && (struct _KTHREAD *)v48 != v54 )
            KeBugCheckEx(0x16Eu, (ULONG_PTR)(P + 72), (ULONG_PTR)v54, v48, 0LL);
          if ( (v55 & 0x80u) != 0 )
          {
            ExpReleaseResourceExclusiveForThreadLite((ULONG_PTR)(P + 72), v48);
            goto LABEL_222;
          }
          v56 = 0;
          v57 = DWORD1(PerfGlobalGroupMask) & 0x20000;
          v143 = 0LL;
          v149 = DWORD1(PerfGlobalGroupMask) & 0x20000;
          if ( (v48 & 3) == 0 )
            v56 = *(unsigned __int8 *)(v48 + 1120);
          v58 = *((_QWORD *)P + 15);
          v59 = P + 120;
          if ( v58 != v48 )
          {
            v60 = (struct _KTHREAD *)(v58 != 0);
            if ( !v56
              || (v61 = *((_QWORD *)v42 + 2)) == 0
              || v56 >= *(_DWORD *)(v61 + 8)
              || (v59 = (char *)(v61 + 16LL * v56), *(_QWORD *)v59 != v48) )
            {
              v62 = *((_QWORD *)v42 + 2);
              v63 = v62;
              v54 = (struct _KTHREAD *)(*((unsigned int *)v42 + 16) + (unsigned __int64)*((unsigned int *)v42 + 18));
              if ( !v62
                || (v64 = (char *)(v62 + 16LL * *(unsigned int *)(v62 + 8)), v59 = (char *)(v62 + 16), v60 >= v54) )
              {
LABEL_280:
                KeBugCheckEx(0xE3u, (ULONG_PTR)v42, v48, v63, 2uLL);
              }
              while ( *(_QWORD *)v59 != v48 )
              {
                if ( !*(_QWORD *)v59 || (v60 = (struct _KTHREAD *)((char *)v60 + 1), v60 != v54) )
                {
                  v59 += 16;
                  if ( v59 != v64 )
                    continue;
                }
                goto LABEL_280;
              }
              KeGetCurrentThread()->ResourceIndex = (__int64)&v59[-v63] >> 4;
            }
          }
          v65 = *((_DWORD *)v59 + 2) & 7 | (8 * (*((_DWORD *)v59 + 2) >> 3) - 8);
          *((_DWORD *)v59 + 2) = v65;
          v66 = v65 >> 3;
          if ( v65 >> 3 )
          {
            v67 = *((_DWORD *)v42 + 17);
            v68 = 65618;
            KxReleaseQueuedSpinLock(&v140);
            v69 = (unsigned __int8)v142;
            if ( (_DWORD)KiIrqlFlags )
            {
              v70 = KeGetCurrentIrql();
              if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v70 <= 0xFu && (unsigned __int8)v142 <= 0xFu && v70 >= 2u )
              {
                v71 = KeGetCurrentPrcb();
                v72 = v71->SchedulerAssist;
                v73 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v142 + 1));
                v37 = (v73 & v72[5]) == 0;
                v72[5] &= v73;
                if ( v37 )
                  KiRemoveSystemWorkPriorityKick(v71);
              }
            }
            __writecr8(v69);
            goto LABEL_220;
          }
          v74 = *(_QWORD *)v59;
          if ( (v65 & 2) != 0 )
          {
            v74 &= 0xFFFFFFFFFFFFFFFCuLL;
          }
          else if ( (v74 & 3) != 0 )
          {
LABEL_138:
            *(_QWORD *)v59 = 0LL;
            v75 = v42 + 76;
            v76 = *((_DWORD *)v42 + 16) <= 1u;
            v67 = *((_DWORD *)v42 + 17);
            v148 = v67;
            v150 = 0LL;
            if ( !v76 )
              goto LABEL_143;
            if ( *v75 )
            {
              KeCaptureWaitChainHeadEx(v42 + 40, &v143, &v150);
              --*v75;
              *((_WORD *)v42 + 13) |= 0x80u;
              v77 = 1;
              goto LABEL_144;
            }
            v77 = *((_DWORD *)v42 + 18);
            if ( v77 )
            {
              v78 = (volatile signed __int32 *)*((_QWORD *)v42 + 4);
              *((_QWORD *)v42 + 4) = 0LL;
              v143 = v78;
              *((_DWORD *)v42 + 18) = 0;
            }
            else
            {
LABEL_143:
              v77 = 0;
            }
LABEL_144:
            v37 = v77 - 1 + *((_DWORD *)v42 + 16) == 0;
            *((_DWORD *)v42 + 16) += v77 - 1;
            if ( v37 )
              *((_WORD *)v42 + 12) = 0;
            if ( !*v75 && !*((_DWORD *)v42 + 18) )
              *((_WORD *)v42 + 13) &= 0xF9u;
            v158 = (unsigned __int8)v42[27];
            if ( v150 )
            {
              *((_QWORD *)v42 + 6) = v150;
              *((_DWORD *)v42 + 14) = *((_DWORD *)v42 + 14) & 7 | 8;
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            {
              KiReleaseQueuedSpinLockInstrumented(&v140, retaddr);
              goto LABEL_158;
            }
            _m_prefetchw(&v140);
            v79 = v140;
            if ( !v140 )
            {
              if ( (__int64 *)_InterlockedCompareExchange64(v141, 0LL, (signed __int64)&v140) == &v140 )
              {
LABEL_158:
                v81 = (unsigned __int8)v142;
                if ( (_DWORD)KiIrqlFlags )
                {
                  v82 = KeGetCurrentIrql();
                  if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
                    && v82 <= 0xFu
                    && (unsigned __int8)v142 <= 0xFu
                    && v82 >= 2u )
                  {
                    v83 = KeGetCurrentPrcb();
                    v84 = v83->SchedulerAssist;
                    v85 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v142 + 1));
                    v37 = (v85 & v84[5]) == 0;
                    v84[5] &= v85;
                    if ( v37 )
                      KiRemoveSystemWorkPriorityKick(v83);
                  }
                }
                __writecr8(v81);
                v86 = 1;
                v146 = 1;
                if ( v150 )
                  v86 = 3;
                v147 = v86;
                if ( !v143 )
                {
LABEL_219:
                  v68 = 65602;
                  v66 = 0;
LABEL_220:
                  __incgsdword(0x8A70u);
                  if ( v57 )
                    PerfLogExecutiveResourceRelease(v68, v42, v66, v67);
                  goto LABEL_222;
                }
                v87 = KeGetCurrentIrql();
                v154 = v87;
                __writecr8(2uLL);
                if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)v87 <= 0xFu )
                {
                  v88 = KeGetCurrentPrcb()->SchedulerAssist;
                  if ( (_BYTE)v87 == 2 )
                    LODWORD(v89) = 4;
                  else
                    v89 = (-1LL << ((unsigned __int8)v87 + 1)) & 4;
                  v88[5] |= v89;
                }
                v90 = KeGetCurrentPrcb();
                v91 = v143;
                v151 = v90;
                for ( i = *(volatile signed __int32 **)v143; ; i = *(volatile signed __int32 **)v152 )
                {
                  v93 = (__int64)(v91 + 6);
                  v152 = i;
                  KiAcquireKobjectLockSafe(v91 + 6);
                  v94 = (volatile signed __int32 *)*((_QWORD *)v91 + 4);
                  *((_DWORD *)v91 + 7) = 1;
                  if ( v94 != v91 + 8 )
                    break;
LABEL_209:
                  _InterlockedAnd((volatile signed __int32 *)v93, 0xFFFFFF7F);
                  if ( v152 == v143 )
                  {
                    v109 = (__int64)v151;
                    v110 = KiRemoveBoostThread(v151, v151->CurrentThread);
                    v111 = v158;
                    if ( v158 )
                    {
                      v112 = (_PROCESSOR_NUMBER)2;
                      if ( v110 > (char)v158 )
                        v111 = v110;
                    }
                    else
                    {
                      v112 = (_PROCESSOR_NUMBER)v146;
                    }
                    if ( (v147 & 2) != 0 && v112 == 1 )
                      v111 = 1;
                    KiExitDispatcher(v109, 0, v112, v111, v154);
                    v42 = v155;
                    v67 = v148;
                    v57 = v149;
                    v143 = 0LL;
                    goto LABEL_219;
                  }
                  v90 = v151;
                  v91 = v152;
                }
                while ( 1 )
                {
                  v95 = *(volatile signed __int32 **)v94;
                  v96 = (__int64)v94;
                  v94 = v95;
                  v97 = *(volatile signed __int32 ***)(v96 + 8);
                  if ( *((_QWORD *)v95 + 1) != v96 || *v97 != (volatile signed __int32 *)v96 )
                    break;
                  *v97 = v95;
                  *((_QWORD *)v95 + 1) = v97;
                  v98 = *(_BYTE *)(v96 + 16);
                  switch ( v98 )
                  {
                    case 1:
                      if ( (unsigned __int8)KiTryUnwaitThread((__int64)v90, v96, *(unsigned __int16 *)(v96 + 18), 0LL) )
                      {
                        v37 = (*(_DWORD *)(v93 + 4))-- == 1;
                        if ( v37 )
                          goto LABEL_209;
                      }
                      break;
                    case 2:
                      *(_BYTE *)(v96 + 17) = 5;
                      v99 = *(_QWORD *)(v96 + 24);
                      *(_QWORD *)v96 = 0LL;
                      v100 = (_QWORD *)(v99 + 8);
                      v101 = KeGetCurrentIrql();
                      __writecr8(2uLL);
                      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v101 <= 0xFu )
                      {
                        v102 = KeGetCurrentPrcb()->SchedulerAssist;
                        if ( v101 == 2 )
                          LODWORD(v103) = 4;
                        else
                          v103 = (-1LL << (v101 + 1)) & 4;
                        v102[5] |= v103;
                      }
                      v104 = KeGetCurrentPrcb();
                      v105 = v104->CurrentThread;
                      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                      {
                        IsThreadRunning = KeIsThreadRunning(v104->CurrentThread);
                        EtwTraceEnqueueWork(v105, v96, IsThreadRunning);
                      }
                      KiAcquireKobjectLockSafe((volatile signed __int32 *)v99);
                      if ( (_QWORD *)*v100 == v100
                        || *(_DWORD *)(v99 + 40) >= *(_DWORD *)(v99 + 44)
                        || v105->Queue == (_DISPATCHER_HEADER *volatile)v99 && v105->WaitReason == 15
                        || !(unsigned __int8)KiWakeQueueWaiter(v104, v99, v96) )
                      {
                        v107 = *(_DWORD *)(v99 + 4);
                        *(_DWORD *)(v99 + 4) = v107 + 1;
                        v108 = *(__int64 **)(v99 + 32);
                        if ( *v108 != v99 + 24 )
                          goto LABEL_247;
                        *(_QWORD *)v96 = v99 + 24;
                        *(_QWORD *)(v96 + 8) = v108;
                        *v108 = v96;
                        *(_QWORD *)(v99 + 32) = v96;
                        if ( !v107 && (_QWORD *)*v100 != v100 )
                          KiWakeOtherQueueWaiters(v104, v99);
                      }
                      else
                      {
                        *(_QWORD *)v96 = 0LL;
                      }
                      _InterlockedAnd((volatile signed __int32 *)v99, 0xFFFFFF7F);
                      v37 = (*(_DWORD *)(v93 + 4))-- == 1;
                      if ( v37 )
                        goto LABEL_209;
                      v90 = v151;
                      break;
                    case 4:
                      *(_BYTE *)(v96 + 17) = 5;
                      *(_DWORD *)(v93 + 4) = 0;
                      KiInsertQueueDpc(*(_QWORD *)(v96 + 24), v93, v96, 0LL, 0);
                      break;
                    default:
                      KiTryUnwaitThread((__int64)v90, v96, 256LL, 0LL);
                      break;
                  }
                  if ( v94 == (volatile signed __int32 *)(v93 + 8) )
                    goto LABEL_209;
                }
LABEL_247:
                __fastfail(3u);
              }
              v79 = KxWaitForLockChainValid(&v140);
            }
            v140 = 0LL;
            v80 = (unsigned __int8)v141;
            if ( ((v80 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v79 + 8), (__int64)v141)) & 4) != 0 )
            {
              _InterlockedOr(v139, 0);
              KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v79 + 8) >> 5) & 0x7F], 0LL));
            }
            goto LABEL_158;
          }
          if ( v74 )
          {
            if ( (v65 & 1) != 0 )
            {
              PsBoostThreadIoEx(v74, 1, 0, 0LL);
              *((_DWORD *)v59 + 2) &= ~1u;
              v65 = *((_DWORD *)v59 + 2);
            }
            if ( (v65 & 4) != 0 )
            {
              PsBoostThreadIoQoS(v74, 1LL, v54);
              *((_DWORD *)v59 + 2) &= ~4u;
              v65 = *((_DWORD *)v59 + 2);
            }
            if ( (v65 & 2) != 0 )
            {
              ObDereferenceObjectDeferDeleteWithTag((PVOID)v74, 0x746C6644u);
              *((_DWORD *)v59 + 2) &= ~2u;
            }
          }
          goto LABEL_138;
        }
LABEL_284:
        KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
      }
    }
    else if ( v43 != 1 )
    {
      if ( (v41 & 1) == 0 )
        goto LABEL_88;
      v46 = KeGetCurrentIrql();
      v47 = KeGetCurrentThread();
      if ( v46 > 2u )
        KeBugCheckEx(0x1C6u, 0LL, v46, 2uLL, 0LL);
      if ( v46 || (v47->MiscFlags & 0x400) != 0 || v47->WaitBlock[3].SpareLong )
        goto LABEL_80;
      goto LABEL_284;
    }
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)(P + 72), 0LL, 0LL);
  }
  ExAcquirePushLockExclusiveEx(v8 + 104, 0LL);
  v121 = (char **)*((_QWORD *)P + 2);
  v122 = (PVOID *)*((_QWORD *)P + 3);
  if ( v121[1] != P + 16 || *v122 != P + 16 )
    goto LABEL_247;
  *v122 = v121;
  v121[1] = (char *)v122;
  if ( *(__int64 *)(v8 + 32) > 0x2000000 && (*(_DWORD *)(v8 + 152) & 0x200) != 0 )
    CcAdjustVacbLevelLockCount(v8, *((_QWORD *)P + 1), -1);
  ExReleasePushLockEx((__int64 *)(v8 + 104), 0LL);
  if ( *((_QWORD *)P + 23) )
  {
    v123 = *(_QWORD *)(*((_QWORD *)P + 7) + 8LL);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)P + 7) + 16LL)) )
    {
      v124 = *(struct _KEVENT **)(v123 + 192);
      if ( v124 )
        KeSetEvent(v124, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v123 + 552));
    }
  }
  ExReleaseFastMutex(FastMutex);
  if ( *(_WORD *)P == 765 )
    ExDeleteResourceLite((PERESOURCE)(P + 72));
  ExFreePoolWithTag(P, 0);
}
