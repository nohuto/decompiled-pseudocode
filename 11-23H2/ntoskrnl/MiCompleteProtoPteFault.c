/*
 * XREFs of MiCompleteProtoPteFault @ 0x140268E70
 * Callers:
 *     MiResolveTransitionFault @ 0x140262760 (MiResolveTransitionFault.c)
 *     MiResolveProtoPteFault @ 0x140268160 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140269FD0 (MiResolveDemandZeroFault.c)
 *     MiIssueHardFault @ 0x1402A1340 (MiIssueHardFault.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140211BAC (MiLockAndDecrementShareCount.c)
 *     MiLocateAddress @ 0x140217240 (MiLocateAddress.c)
 *     ObpFastReplenishReference @ 0x1402246EC (ObpFastReplenishReference.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     MiAllocateWsle @ 0x14026BA60 (MiAllocateWsle.c)
 *     MiCopyOnWrite @ 0x140270030 (MiCopyOnWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPagePrivilege @ 0x140282FF0 (MiGetPagePrivilege.c)
 *     MiGetSystemRegionType @ 0x140284B00 (MiGetSystemRegionType.c)
 *     MiUnlockVadTree @ 0x140287B08 (MiUnlockVadTree.c)
 *     MiOffsetToProtos @ 0x1402887D0 (MiOffsetToProtos.c)
 *     MiLockVadTree @ 0x14028AB50 (MiLockVadTree.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B5F0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     MiLocateCloneAddress @ 0x140294828 (MiLocateCloneAddress.c)
 *     MiReleasePageFileInfo @ 0x14029556C (MiReleasePageFileInfo.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     MiGetSubsectionDriverProtos @ 0x1402A2974 (MiGetSubsectionDriverProtos.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7E90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8F70 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6B50 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     MiPrivateFixup @ 0x1402ED908 (MiPrivateFixup.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     MiGetPagingFileOffset @ 0x1402F2AF4 (MiGetPagingFileOffset.c)
 *     ExAcquireRundownProtectionEx @ 0x1402F5F70 (ExAcquireRundownProtectionEx.c)
 *     PfSnTraceBufferAllocate @ 0x1402F5F9C (PfSnTraceBufferAllocate.c)
 *     PfSnGetFileInformation @ 0x140314550 (PfSnGetFileInformation.c)
 *     ExAcquireSpinLockShared @ 0x1403148B0 (ExAcquireSpinLockShared.c)
 *     PfSnTraceGetLogEntry @ 0x140314C6C (PfSnTraceGetLogEntry.c)
 *     MiCheckAndUpdateIoAttribution @ 0x140333D90 (MiCheckAndUpdateIoAttribution.c)
 *     MiMakeTransitionPteValid @ 0x140335260 (MiMakeTransitionPteValid.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x140339F60 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiUserPdeOrAbove @ 0x14033C8C0 (MiUserPdeOrAbove.c)
 *     MiSystemImageHasPrivateFixups @ 0x14033E010 (MiSystemImageHasPrivateFixups.c)
 *     MiOkToSetPteDirtyForNotValidFault @ 0x14033F4D8 (MiOkToSetPteDirtyForNotValidFault.c)
 *     MiCapturePageFileInfoInline @ 0x140348F44 (MiCapturePageFileInfoInline.c)
 *     MiGetSharedProtos @ 0x140369F2C (MiGetSharedProtos.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     ObpPushStackInfo @ 0x1405830C8 (ObpPushStackInfo.c)
 *     MiIsAddressInDriverView @ 0x14063440C (MiIsAddressInDriverView.c)
 *     MiSetFaultPacketDirectives @ 0x140646CAC (MiSetFaultPacketDirectives.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCompleteProtoPteFault(ULONG_PTR *a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // r12
  unsigned int v6; // edi
  ULONG_PTR v7; // r15
  unsigned __int64 v8; // rsi
  __int64 v9; // r13
  __int64 v10; // r13
  __int64 v11; // r9
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  struct _KTHREAD *v14; // rbx
  __int64 v15; // r8
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  char v18; // al
  int v19; // ebx
  __int64 v20; // rcx
  char v21; // al
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // rcx
  int v25; // eax
  unsigned __int64 v26; // rbx
  __int64 HasPrivateFixups; // rsi
  int v28; // r8d
  unsigned int v29; // r15d
  __int64 v30; // rax
  int v31; // edx
  unsigned __int64 v32; // r9
  unsigned int v33; // r13d
  int v34; // esi
  int v35; // eax
  _BYTE *v36; // r12
  _BYTE *v37; // rcx
  ULONG_PTR *v38; // r10
  char v39; // dl
  volatile signed __int64 *v41; // rbx
  signed __int64 v42; // rdx
  signed __int64 v43; // rax
  signed __int64 v44; // rax
  unsigned int v45; // edx
  void *v46; // rax
  unsigned __int64 v47; // rbx
  _KPROCESS *v48; // rcx
  unsigned __int64 v49; // rdx
  unsigned int SessionId; // r10d
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // rbx
  unsigned __int64 v53; // rbx
  _KPROCESS *Process; // r8
  signed __int64 v55; // rdx
  signed __int64 v56; // rax
  unsigned __int64 v57; // r9
  unsigned int v58; // edx
  BOOLEAN v59; // al
  signed __int64 *v60; // roff
  signed __int64 v61; // rax
  signed __int64 v62; // rtt
  int v63; // ecx
  unsigned __int64 v64; // r8
  struct _KTHREAD *v65; // rax
  unsigned __int64 v66; // rbx
  BOOL v67; // r8d
  int v68; // eax
  __int64 v69; // rcx
  signed __int32 v70; // eax
  char v71; // cc
  signed __int32 v72; // eax
  unsigned __int64 *v73; // rdx
  signed __int64 *v74; // roff
  signed __int64 v75; // rax
  signed __int64 v76; // rtt
  _KPROCESS *v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rcx
  int v82; // eax
  __int16 v83; // ax
  __int64 v84; // rbx
  ULONG_PTR v85; // rax
  int PagingFileOffset; // eax
  int v87; // eax
  _QWORD *v88; // rcx
  __int64 **Address; // rax
  __int64 v90; // rdx
  __int64 **v91; // rbx
  int v92; // eax
  __int64 v93; // r9
  ULONG_PTR v94; // rbx
  int LogEntry; // eax
  unsigned __int64 *v96; // rcx
  int v97; // eax
  KIRQL v98; // al
  void *v99; // rcx
  KIRQL v100; // bl
  _QWORD *v101; // rdx
  _QWORD *v102; // r8
  signed __int32 v103; // eax
  unsigned __int8 v104; // al
  struct _KPRCB *v105; // r10
  _DWORD *v106; // r9
  int v107; // eax
  bool v108; // zf
  __int64 SharedProtos; // rax
  unsigned __int8 CurrentIrql; // dl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v113; // eax
  signed __int64 v114; // rdx
  signed __int64 v115; // rax
  unsigned __int64 v116; // rdx
  unsigned __int8 v117; // dl
  struct _KPRCB *v118; // r10
  _DWORD *v119; // r9
  int v120; // eax
  unsigned __int8 v121; // al
  struct _KPRCB *v122; // r10
  _DWORD *v123; // r9
  int v124; // eax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v126; // rcx
  struct _LIST_ENTRY *v127; // r8
  __int64 v128; // rcx
  char PagePrivilege; // al
  __int64 v130; // rbx
  unsigned __int8 v131; // al
  unsigned __int64 v132; // r15
  unsigned __int8 v133; // al
  __int64 v134; // rax
  unsigned __int8 v135; // cl
  struct _KPRCB *v136; // r10
  _DWORD *v137; // r9
  int v138; // eax
  KIRQL v139; // [rsp+40h] [rbp-C0h]
  KIRQL v140; // [rsp+40h] [rbp-C0h]
  KIRQL v141; // [rsp+40h] [rbp-C0h]
  int v142; // [rsp+44h] [rbp-BCh]
  bool v143; // [rsp+44h] [rbp-BCh]
  unsigned int v144; // [rsp+44h] [rbp-BCh]
  __int64 v145; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v146; // [rsp+48h] [rbp-B8h]
  BOOLEAN v147; // [rsp+50h] [rbp-B0h]
  __int64 v148; // [rsp+58h] [rbp-A8h]
  __int64 TransitionPteValid; // [rsp+68h] [rbp-98h] BYREF
  int v150; // [rsp+70h] [rbp-90h] BYREF
  __int64 v151; // [rsp+78h] [rbp-88h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-80h]
  PVOID P; // [rsp+88h] [rbp-78h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-70h]
  unsigned __int64 v155; // [rsp+98h] [rbp-68h] BYREF
  PVOID Object; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v157; // [rsp+A8h] [rbp-58h]
  ULONG_PTR *v158; // [rsp+B0h] [rbp-50h]
  __int64 v159; // [rsp+B8h] [rbp-48h] BYREF
  int v160; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 *v161; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v162; // [rsp+D0h] [rbp-30h]
  ULONG_PTR v163; // [rsp+D8h] [rbp-28h]
  volatile signed __int64 *v164; // [rsp+E0h] [rbp-20h]
  __int64 v165; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v166; // [rsp+F0h] [rbp-10h]
  __int64 v167; // [rsp+100h] [rbp+0h]
  __int64 v169; // [rsp+168h] [rbp+68h] BYREF
  __int64 v170; // [rsp+170h] [rbp+70h]
  int v171; // [rsp+178h] [rbp+78h]

  v171 = a4;
  v170 = a3;
  v169 = a2;
  v5 = a5;
  v158 = a1 + 7;
  v6 = 0;
  v163 = a1[7];
  BugCheckParameter2 = *a1;
  TransitionPteValid = 0LL;
  v150 = 0;
  v7 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v157 = v7;
  v155 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v169) >> 12) & 0xFFFFFFFFFFLL;
  v148 = 48 * v155 - 0x220000000000LL;
  v8 = *(_QWORD *)(v148 + 16);
  v159 = *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v148 + 40) >> 43) & 0x3FFLL));
  if ( (v8 & 0x400) == 0 )
  {
    v10 = 0LL;
    v151 = 0LL;
    goto LABEL_6;
  }
  v9 = v8;
  if ( qword_140C65B40 && (v8 & 0x10) == 0 )
    v9 = v8 & ~qword_140C65B40;
  v10 = v9 >> 16;
  v11 = *(_QWORD *)v10;
  v151 = *(_QWORD *)v10;
  if ( PfSnNumActiveTraces )
  {
    v41 = (volatile signed __int64 *)(v11 + 64);
    _m_prefetchw((const void *)(v11 + 64));
    v42 = *(_QWORD *)(v11 + 64);
    if ( (v42 & 0xF) != 0 )
    {
      do
      {
        v43 = _InterlockedCompareExchange64(v41, v42 - 1, v42);
        if ( v42 == v43 )
          break;
        v42 = v43;
      }
      while ( (v43 & 0xF) != 0 );
    }
    v44 = v42;
    v45 = v42 & 0xF;
    v46 = (void *)(v44 & 0xFFFFFFFFFFFFFFF0uLL);
    Object = v46;
    if ( v45 <= 1 )
    {
      if ( !v45 )
        goto LABEL_202;
      ObpFastReplenishReference((signed __int64 *)(v11 + 64), (__int64)v46);
      v46 = Object;
      v11 = v151;
    }
    if ( ObpTraceFlags )
    {
      ObpPushStackInfo((_DWORD)v46 - 48);
      v46 = Object;
      v11 = v151;
    }
    if ( v46 )
    {
LABEL_59:
      v47 = *(_QWORD *)(v148 + 8) | 0x8000000000000000uLL;
      if ( BugCheckParameter2 >= 0xFFFF800000000000uLL )
      {
        if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
        {
          SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
LABEL_63:
          v51 = *(_QWORD *)(v10 + 8);
          if ( (*(_DWORD *)(*(_QWORD *)v10 + 56LL) & 0x20) != 0 )
          {
            if ( v47 < v51 || v47 >= v51 + 8LL * *(unsigned int *)(v10 + 44) )
            {
              if ( (*(_BYTE *)(v10 + 34) & 2) != 0 )
                SharedProtos = MiGetSharedProtos(*(_QWORD *)v10, SessionId, v10);
              else
                SharedProtos = MiGetSubsectionDriverProtos(v10);
              v52 = (v47 << 9) - (*(_QWORD *)(SharedProtos + 72) << 9);
            }
            else
            {
              v52 = (v47 << 9) - (v51 << 9);
            }
            v53 = ((unsigned __int64)*(unsigned int *)(v10 + 36) << 9) + (v52 & 0xFFFFFFFFFFFFF000uLL);
          }
          else
          {
            if ( v51 )
              v84 = (__int64)(v47 - v51) >> 3 << 12;
            else
              v84 = 0LL;
            v53 = ((*(unsigned int *)(v10 + 36) | ((unsigned __int64)(*(_WORD *)(v10 + 32) & 0xFFC0) << 26)) << 12)
                + v84;
          }
          v143 = (*(_DWORD *)(v151 + 56) & 0x20) != 0;
          CurrentThread = KeGetCurrentThread();
          Process = CurrentThread->ApcState.Process;
          P = Process;
          _m_prefetchw(&Process[1].ActiveProcessors.StaticBitmap[10]);
          v55 = Process[1].ActiveProcessors.StaticBitmap[10];
          if ( (v55 & 0xF) != 0 )
          {
            do
            {
              v56 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)&Process[1].ActiveProcessors.StaticBitmap[10],
                      v55 - 1,
                      v55);
              if ( v55 == v56 )
                break;
              v55 = v56;
            }
            while ( (v56 & 0xF) != 0 );
          }
          v57 = v55 & 0xFFFFFFFFFFFFFFF0uLL;
          v146 = v55 & 0xFFFFFFFFFFFFFFF0uLL;
          if ( (v55 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
          {
            v58 = v55 & 0xF;
            if ( v58 > 1 )
              goto LABEL_84;
            if ( v58 )
            {
              v59 = ExAcquireRundownProtectionEx((PEX_RUNDOWN_REF)(v57 + 360), 0xFu);
              v57 = v146;
              if ( v59 )
              {
                v60 = (signed __int64 *)((char *)P + 1536);
                _m_prefetchw((char *)P + 1536);
                v61 = *v60;
                while ( (v61 & 0xF) == 0 )
                {
                  if ( v146 != (v61 & 0xFFFFFFFFFFFFFFF0uLL) )
                    break;
                  v62 = v61;
                  v61 = _InterlockedCompareExchange64((volatile signed __int64 *)P + 192, v61 + 15, v61);
                  if ( v62 == v61 )
                    goto LABEL_84;
                }
                v166 = 0LL;
                v167 = 0LL;
                _m_prefetchw((const void *)(v146 + 360));
                v114 = *(_QWORD *)(v146 + 360);
                if ( (v114 & 1) != 0 )
                {
LABEL_252:
                  v116 = v114 & 0xFFFFFFFFFFFFFFFEuLL;
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v116, 0xFFFFFFFFFFFFFFF1uLL) == 15
                    && !_interlockedbittestandreset((volatile signed __int32 *)(v116 + 32), 0) )
                  {
                    KeSetEvent((PRKEVENT)(v116 + 8), 0, 0);
                    v57 = v146;
                  }
                }
                else
                {
                  while ( 1 )
                  {
                    v115 = _InterlockedCompareExchange64((volatile signed __int64 *)(v146 + 360), v114 - 30, v114);
                    v108 = v114 == v115;
                    v114 = v115;
                    if ( v108 )
                      break;
                    if ( (v115 & 1) != 0 )
                      goto LABEL_252;
                  }
                }
              }
              goto LABEL_84;
            }
            v147 = 1;
            v139 = KeAcquireSpinLockRaiseToDpc(&qword_140C6A610);
            v146 = *((_QWORD *)P + 192) & 0xFFFFFFFFFFFFFFF0uLL;
            if ( v146 )
              v147 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)((*((_QWORD *)P + 192) & 0xFFFFFFFFFFFFFFF0uLL) + 360));
            KxReleaseSpinLock((volatile signed __int64 *)&qword_140C6A610);
            if ( (_DWORD)KiIrqlFlags )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v139 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v113 = ~(unsigned __int16)(-1LL << (v139 + 1));
                v108 = (v113 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v113;
                if ( v108 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            __writecr8(v139);
            if ( v147 )
            {
              v57 = v146;
            }
            else
            {
              v57 = 0LL;
              v146 = 0LL;
            }
          }
          if ( !v57 )
          {
LABEL_100:
            v74 = (signed __int64 *)(v151 + 64);
            _m_prefetchw((const void *)(v151 + 64));
            v75 = *v74;
            if ( ((unsigned __int64)Object ^ *v74) >= 0xF )
            {
LABEL_226:
              ObDereferenceObjectDeferDeleteWithTag(Object, 0x63536D4Du);
            }
            else
            {
              while ( 1 )
              {
                v76 = v75;
                v75 = _InterlockedCompareExchange64((volatile signed __int64 *)(v151 + 64), v75 + 1, v75);
                if ( v76 == v75 )
                  break;
                if ( ((unsigned __int64)Object ^ v75) >= 0xF )
                  goto LABEL_226;
              }
              if ( ObpTraceFlags )
                ObpPushStackInfo((_DWORD)Object - 48);
            }
            goto LABEL_6;
          }
LABEL_84:
          if ( (((v143 & 2) == 0) & (LOBYTE(CurrentThread[1].Queue) >> 6)) == 0 )
          {
            v63 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
            v64 = CurrentThread->Process[1].Affinity.StaticBitmap[16];
            if ( v64 && v63 >= *(_DWORD *)(v64 + 1068) )
              v63 = *(_DWORD *)(v64 + 1068);
            if ( v63 >= 2
              || CurrentThread == KeGetCurrentThread() && LODWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
            {
              v65 = *(struct _KTHREAD **)(v57 + 432);
              if ( !v65 || v65 == CurrentThread && *(_QWORD *)(v57 + 440) == *(_QWORD *)&CurrentThread[1].CurrentRunTime )
              {
                CurrentThread = (struct _KTHREAD *)*((_QWORD *)Object + 3);
                PfSnGetFileInformation(v57, Object);
                v57 = v146;
                if ( (*(_BYTE *)(v146 + 484) & 1) == 0 && *(_BYTE *)(*(_QWORD *)(v146 + 352) + 1850LL) == 2 )
                  _InterlockedOr16((volatile signed __int16 *)(v146 + 484), 1u);
                if ( v53 < 0x20000000000LL )
                {
                  v66 = v53 >> 9;
                  v67 = v143;
                  v68 = *(_DWORD *)(v146 + 404);
                  v144 = v67;
                  v161 = 0LL;
                  LODWORD(P) = dword_140D0C190;
                  if ( dword_140D0C190 != v68 )
                  {
                    LogEntry = PfSnTraceGetLogEntry(v146, 1LL, &v161);
                    v57 = v146;
                    v67 = v144;
                    if ( LogEntry >= 0 )
                    {
                      v96 = v161;
                      *v161 = *v161 & 0xFFFFFFFFFFFFFFF8uLL | 2;
                      v97 = (int)P;
                      *((_DWORD *)v96 + 2) = (_DWORD)P;
                      *(_DWORD *)(v146 + 404) = v97;
                      *(_QWORD *)(v146 + 408) = v146 + 416;
                    }
                  }
                  if ( v67
                    || (v88 = *(_QWORD **)(v57 + 408), *v88 >> 3 != v66)
                    || (struct _KTHREAD *)v88[1] != CurrentThread )
                  {
                    if ( _InterlockedIncrement((volatile signed __int32 *)(v57 + 344)) > *(_DWORD *)(v57 + 340) )
                    {
                      _InterlockedExchangeAdd((volatile signed __int32 *)(v57 + 344), 0xFFFFFFFF);
                      if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v57 + 400), 3, 0) )
                      {
                        ExQueueWorkItem((PWORK_QUEUE_ITEM)(v57 + 368), DelayedWorkQueue);
                        v57 = v146;
                      }
                    }
                    else
                    {
                      v69 = *(_QWORD *)(v57 + 96);
                      v162 = v69;
                      v70 = _InterlockedExchangeAdd((volatile signed __int32 *)(v69 + 16), 1u);
                      v71 = (v70 + 1 < 0) ^ __OFADD__(1, v70) | (v70 == -1);
                      v72 = v70 + 1;
                      if ( v71 )
                      {
LABEL_276:
                        _InterlockedExchangeAdd((volatile signed __int32 *)(v57 + 344), 0xFFFFFFFF);
                      }
                      else
                      {
                        while ( v72 > *(_DWORD *)(v69 + 20) )
                        {
                          _InterlockedExchangeAdd((volatile signed __int32 *)(v69 + 16), 0xFFFFFFFF);
                          P = (PVOID)PfSnTraceBufferAllocate();
                          if ( !P )
                          {
                            v57 = v146;
                            goto LABEL_276;
                          }
                          v164 = (volatile signed __int64 *)(v146 + 128);
                          v141 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v146 + 128));
                          if ( *(_QWORD *)(v146 + 96) == v162 )
                          {
                            v101 = *(_QWORD **)(v146 + 112);
                            if ( *v101 != v146 + 104 )
                              __fastfail(3u);
                            v102 = P;
                            *(_QWORD *)P = v146 + 104;
                            v102[1] = v101;
                            *v101 = v102;
                            *(_QWORD *)(v146 + 112) = v102;
                            ++*(_DWORD *)(v146 + 120);
                            *(_QWORD *)(v146 + 96) = v102;
                            KxReleaseSpinLock((volatile signed __int64 *)(v146 + 128));
                            if ( (_DWORD)KiIrqlFlags )
                            {
                              v121 = KeGetCurrentIrql();
                              if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v121 <= 0xFu && v141 <= 0xFu && v121 >= 2u )
                              {
                                v122 = KeGetCurrentPrcb();
                                v123 = v122->SchedulerAssist;
                                v124 = ~(unsigned __int16)(-1LL << (v141 + 1));
                                v108 = (v124 & v123[5]) == 0;
                                v123[5] &= v124;
                                if ( v108 )
                                  KiRemoveSystemWorkPriorityKick(v122);
                              }
                            }
                            __writecr8(v141);
                          }
                          else
                          {
                            KxReleaseSpinLock(v164);
                            if ( (_DWORD)KiIrqlFlags )
                            {
                              v117 = KeGetCurrentIrql();
                              if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v117 <= 0xFu && v141 <= 0xFu && v117 >= 2u )
                              {
                                v118 = KeGetCurrentPrcb();
                                v119 = v118->SchedulerAssist;
                                v120 = ~(unsigned __int16)(-1LL << (v141 + 1));
                                v108 = (v120 & v119[5]) == 0;
                                v119[5] &= v120;
                                if ( v108 )
                                  KiRemoveSystemWorkPriorityKick(v118);
                              }
                            }
                            __writecr8(v141);
                            ExFreePoolWithTag(P, 0);
                          }
                          v57 = v146;
                          v69 = *(_QWORD *)(v146 + 96);
                          v162 = v69;
                          v103 = _InterlockedExchangeAdd((volatile signed __int32 *)(v69 + 16), 1u);
                          v71 = (v103 + 1 < 0) ^ __OFADD__(1, v103) | (v103 == -1);
                          v72 = v103 + 1;
                          if ( v71 )
                            goto LABEL_276;
                        }
                        v73 = (unsigned __int64 *)(16LL * v72 + v69 + 8);
                        v73[1] = (unsigned __int64)CurrentThread;
                        *v73 = v144 | (8 * v66);
                        _InterlockedIncrement((volatile signed __int32 *)(v57 + 332));
                        if ( !v144 )
                          *(_QWORD *)(v57 + 408) = v73;
                      }
                    }
                  }
                }
              }
            }
            else
            {
              _InterlockedIncrement((volatile signed __int32 *)(v57 + 336));
            }
          }
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v57 + 360));
          goto LABEL_100;
        }
      }
      else
      {
        v48 = KeGetCurrentThread()->ApcState.Process;
        v49 = v48[1].Affinity.StaticBitmap[25];
        if ( v49 && (HIDWORD(v48[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          SessionId = *(_DWORD *)(v49 + 8);
          goto LABEL_63;
        }
      }
      SessionId = -1;
      goto LABEL_63;
    }
LABEL_202:
    v98 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v11 + 72));
    v99 = (void *)(*v41 & 0xFFFFFFFFFFFFFFF0uLL);
    v140 = v98;
    Object = v99;
    if ( v99 )
      ObfReferenceObjectWithTag(v99, 0x63536D4Du);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v151 + 72));
    if ( (_DWORD)KiIrqlFlags && (v104 = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) != 0) && v104 <= 0xFu )
    {
      v100 = v140;
      if ( v140 <= 0xFu && v104 >= 2u )
      {
        v105 = KeGetCurrentPrcb();
        v106 = v105->SchedulerAssist;
        v107 = ~(unsigned __int16)(-1LL << (v140 + 1));
        v108 = (v107 & v106[5]) == 0;
        v106[5] &= v107;
        if ( v108 )
          KiRemoveSystemWorkPriorityKick(v105);
      }
    }
    else
    {
      v100 = v140;
    }
    __writecr8(v100);
    goto LABEL_59;
  }
LABEL_6:
  v12 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = *(_QWORD *)v12;
  if ( v12 >= 0xFFFFF6FB7DBED000uLL
    && v12 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v13 & 1) != 0
    && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v126 = *((_QWORD *)&Flink->Flink + ((v12 >> 3) & 0x1FF));
      if ( (v126 & 0x20) != 0 )
        v13 |= 0x20uLL;
      if ( (v126 & 0x42) != 0 )
        v13 |= 0x42uLL;
    }
  }
  v165 = v13;
  v14 = (struct _KTHREAD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v165) >> 12) & 0xFFFFFFFFFFLL)
                          - 0x220000000000LL);
  v160 = 0;
  CurrentThread = v14;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&v14->SListFaultAddress, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v160);
    while ( (__int64)v14->SListFaultAddress < 0 );
  }
  v15 = 0x7FFFFFFFFFFFFFFFLL;
  v14->SListFaultAddress = (void *)((__int64)v14->SListFaultAddress ^ ((__int64)v14->SListFaultAddress ^ ((__int64)v14->SListFaultAddress + 1)) & 0x3FFFFFFFFFFFFFFFLL);
  _InterlockedAnd64((volatile signed __int64 *)&v14->SListFaultAddress, 0x7FFFFFFFFFFFFFFFuLL);
  v16 = *(_QWORD *)v7;
  if ( v7 >= 0xFFFFF6FB7DBED000uLL
    && v7 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v16 & 1) != 0
    && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
  {
    v127 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v127 )
    {
      v128 = *((_QWORD *)&v127->Flink + ((v7 >> 3) & 0x1FF));
      if ( (v128 & 0x20) != 0 )
        v16 |= 0x20uLL;
      if ( (v128 & 0x42) != 0 )
        v16 |= 0x42uLL;
    }
    v15 = 0x7FFFFFFFFFFFFFFFLL;
  }
  if ( (v16 & 0x400) == 0 )
    goto LABEL_14;
  v17 = v16;
  if ( qword_140C65B40 && (v16 & 0x10) == 0 )
    v17 = v16 & ~qword_140C65B40;
  if ( HIDWORD(v17) == 0xFFFFFFFF )
  {
    LODWORD(v145) = (v16 >> 5) & 0x1F;
  }
  else
  {
LABEL_14:
    v145 = (v8 >> 5) & 0x1F;
    v6 = 1;
    if ( (v16 & 8) != 0 )
    {
      v18 = 1;
      LODWORD(v145) = 1;
    }
    else
    {
      v18 = (v8 >> 5) & 0x1F;
    }
    if ( v170 && (v18 & 4) == 0 )
      v170 = 0LL;
  }
  if ( (MiFlags & 0x8000) == 0
    || BugCheckParameter2 < 0xFFFF800000000000uLL
    || BugCheckParameter2 >= 0xFFFFF68000000000uLL && BugCheckParameter2 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v19 = v145;
    goto LABEL_19;
  }
  v19 = v145;
  if ( (v145 & 2) != 0 )
  {
    PagePrivilege = MiGetPagePrivilege(v148);
    if ( _bittest((const signed __int32 *)&MiFlags, 0x10u)
      || (PagePrivilege & 1) != 0
      || *(__int64 *)(v148 + 40) >= 0
      || (*(_DWORD *)(v148 + 16) & 0x400LL) != 0 )
    {
      if ( (PagePrivilege & 1) == 0 )
      {
        if ( (PagePrivilege & 8) == 0 )
        {
LABEL_307:
          v19 = v145 & 0xFFFFFFFD;
          if ( (v145 & 0xFFFFFFFD) == 0 )
            v19 = 1;
          goto LABEL_309;
        }
        v19 = 1;
LABEL_314:
        v170 = 0LL;
LABEL_309:
        LODWORD(v145) = v19;
        v15 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_19;
      }
    }
    else if ( !(unsigned int)MiIsAddressInDriverView(BugCheckParameter2) )
    {
      goto LABEL_307;
    }
    v19 = 3;
    goto LABEL_314;
  }
LABEL_19:
  v20 = v19 & 0xFFFFFFE7;
  v21 = *(_BYTE *)(v148 + 34) >> 6;
  if ( v21 != 1 )
  {
    if ( v21 )
    {
      if ( v21 == 2 )
        v20 = (unsigned int)v20 | 0x18;
    }
    else
    {
      v20 = (unsigned int)v20 | 8;
    }
  }
  v22 = (v155 << 12) | MmProtectToPteMask[v20] & 0xFFF0000000000E7FuLL | 0x21;
  if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
  {
LABEL_321:
    v22 |= 0x100uLL;
    goto LABEL_28;
  }
  v23 = (__int64)(v7 << 25) >> 16;
  if ( v157 >= 0xFFFFF6FB40000000uLL && v157 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    v22 = v157 == 0xFFFFF6FB7DBEDF68uLL
        ? (v155 << 12) | MmProtectToPteMask[v20] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL
        : (v155 << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v20] & 0x7FF0000000000E7FLL | 0x21;
    if ( (unsigned int)MiUserPdeOrAbove(v157, 0xFFFFF6FFFFFFFFFFuLL, 0x7FFFFFFFFFFFFFFFLL) )
      v22 |= 4uLL;
  }
  v24 = v22;
  v22 |= 4uLL;
  if ( v157 > 0xFFFFF6BFFFFFFF78uLL )
    v22 = v24;
  if ( v23 < 0xFFFF800000000000uLL )
  {
    v25 = HIBYTE(word_140C66CFC);
    goto LABEL_27;
  }
  if ( (unsigned int)MiGetSystemRegionType(v23) != 1 && (v23 < 0xFFFFF68000000000uLL || v23 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( v23 < qword_140C6A558 || v23 > qword_140C67070 )
      v25 = (unsigned __int8)word_140C66CFC;
    else
      v25 = HIBYTE(word_140C66CFC);
LABEL_27:
    if ( !v25 )
      goto LABEL_28;
    goto LABEL_321;
  }
LABEL_28:
  v26 = v22 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  TransitionPteValid = v26;
  if ( v170 )
  {
    if ( (unsigned int)MiOkToSetPteDirtyForNotValidFault(v26, *a1, v15) )
    {
      if ( (v145 & 5) != 5 )
      {
        v26 |= 0x42uLL;
        TransitionPteValid = v26;
        if ( (!_bittest64((const signed __int64 *)(v148 + 16), 0xAu) & (unsigned __int8)~(*(_BYTE *)(v148 + 34) >> 4)) != 0 )
        {
          PagingFileOffset = MiGetPagingFileOffset(v148 + 16, v78, v79, v80);
          v81 = v148;
          if ( PagingFileOffset )
          {
            v130 = 0LL;
            v131 = MiLockPageInline(v148);
            v81 = v148;
            v132 = v131;
            v133 = *(_BYTE *)(v148 + 34);
            if ( (!_bittest64((const signed __int64 *)(v148 + 16), 0xAu) & (unsigned __int8)~(v133 >> 4)) != 0 )
            {
              if ( (v133 & 8) == 0 )
              {
                v134 = MiCapturePageFileInfoInline(v148 + 16, 1LL, 0LL);
                v81 = v148;
                v130 = v134;
              }
              *(_BYTE *)(v81 + 34) |= 0x10u;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v81 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v130 )
            {
              MiReleasePageFileInfo(v159, v130, 1LL);
              v81 = v148;
            }
            if ( (_DWORD)KiIrqlFlags )
            {
              v135 = KeGetCurrentIrql();
              if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
                && v135 <= 0xFu
                && (unsigned __int8)v132 <= 0xFu
                && v135 >= 2u )
              {
                v136 = KeGetCurrentPrcb();
                v137 = v136->SchedulerAssist;
                v138 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v132 + 1));
                v108 = (v138 & v137[5]) == 0;
                v137[5] &= v138;
                if ( v108 )
                  KiRemoveSystemWorkPriorityKick(v136);
              }
              v81 = v148;
            }
            __writecr8(v132);
            v26 = TransitionPteValid;
          }
        }
        else
        {
          v81 = v148;
        }
        if ( (v8 & 0x400) != 0 && (*(_BYTE *)(v163 + 184) & 7) != 2 )
          MiCheckAndUpdateIoAttribution(v81);
      }
    }
    else
    {
      v170 = 0LL;
    }
  }
  HasPrivateFixups = 0LL;
  v150 = 0;
  v28 = 0;
  v142 = 0;
  v29 = 0;
  if ( v171 )
  {
    v32 = v148;
    goto LABEL_41;
  }
  v155 = 0LL;
  if ( !_bittest64((const signed __int64 *)(v148 + 40), 0x28u) )
  {
    v30 = *(_QWORD *)(v148 + 8);
    if ( v30 >= 0 )
    {
      if ( v30 )
        goto LABEL_109;
    }
  }
  if ( BugCheckParameter2 >= 0xFFFF800000000000uLL )
  {
    if ( !v151 || (*(_DWORD *)(v151 + 56) & 0x20) != 0 )
    {
      HasPrivateFixups = MiSystemImageHasPrivateFixups(BugCheckParameter2, &v155, &v150);
      if ( HasPrivateFixups )
      {
        LODWORD(v10) = v155;
        v31 = 1;
        LOBYTE(v6) = v6 | 2;
        goto LABEL_39;
      }
    }
LABEL_109:
    v31 = 0;
    goto LABEL_39;
  }
  if ( v10 )
  {
    if ( (*(_DWORD *)(v151 + 56) & 0x20) != 0 )
      v6 |= 4u;
  }
  else
  {
    v6 |= 4u;
    v77 = KeGetCurrentThread()->ApcState.Process;
    if ( v77[1].Affinity.StaticBitmap[12]
      && MiLocateCloneAddress(v77, *(_QWORD *)(v148 + 8) | 0x8000000000000000uLL, 0LL) )
    {
      v6 &= ~4u;
    }
    v26 = TransitionPteValid;
  }
  if ( v6 < 4 )
    goto LABEL_109;
  v31 = 0;
  v159 = 0LL;
  if ( !*(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 368) )
  {
LABEL_38:
    v26 = TransitionPteValid;
    goto LABEL_39;
  }
  MiLockVadTree(1LL);
  Address = MiLocateAddress(BugCheckParameter2);
  LOBYTE(v90) = 17;
  v155 = (unsigned __int64)Address;
  v91 = Address;
  MiUnlockVadTree(1LL, v90);
  if ( !v91
    || (v92 = *((_DWORD *)v91 + 12), (v92 & 0x70) != 0x20)
    || (v92 & 0x200000) != 0
    || (v92 & 0x400000) == 0
    || (v93 = *v91[9],
        v94 = (BugCheckParameter2 >> 12)
            + (((__int64)v91[10] - *(_QWORD *)(v93 + 136)) >> 3)
            - (*((unsigned int *)v91 + 6) | ((unsigned __int64)*((unsigned __int8 *)v91 + 32) << 32)),
        ((*(char *)(((unsigned __int64)(unsigned int)v94 >> 3) + *(_QWORD *)(v155 + 160)) >> (v94 & 7)) & 1) == 0) )
  {
    v31 = 0;
    goto LABEL_38;
  }
  LODWORD(v10) = MiOffsetToProtos(v93, v94 << 12, &v159);
  v150 = v94;
  LOBYTE(v6) = v6 | 2;
  v26 = TransitionPteValid;
  HasPrivateFixups = *(_QWORD *)(v155 + 144);
  v31 = *(_DWORD *)(v155 + 136);
LABEL_39:
  v32 = v148;
  if ( (v6 & 2) == 0 )
  {
    v28 = 0;
LABEL_41:
    v33 = v157;
    goto LABEL_42;
  }
  v29 = MiPrivateFixup((_DWORD)a1, v10, v150, v148, HasPrivateFixups, v31);
  MiLockAndDecrementShareCount(v148, 0);
  if ( v29 == 297 || v29 == -1073741670 )
  {
    MiLockAndDecrementShareCount((__int64)CurrentThread, 0);
    if ( v29 == 297 )
      return (unsigned int)-1073740748;
    return v29;
  }
  if ( (v29 & 0x80000000) != 0 )
    return v29;
  v33 = v157;
  TransitionPteValid = MiMakeTransitionPteValid(v157);
  v26 = TransitionPteValid;
  v32 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&TransitionPteValid) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v148 = v32;
  if ( BugCheckParameter2 >= 0xFFFF800000000000uLL && (*(_BYTE *)(v32 + 35) & 8) != 0 )
  {
    v28 = 2;
    v142 = 2;
  }
  else
  {
    v28 = 0;
  }
  LODWORD(v145) = 0;
  LOBYTE(v6) = v6 & 0xFE;
LABEL_42:
  v34 = 0;
  if ( (v6 & 1) == 0 )
    v34 = v145;
  v35 = v5 & 1;
  if ( (v5 & 1) != 0 )
  {
    v36 = (_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *v36 == 5 )
      goto LABEL_47;
  }
  else
  {
    v36 = (_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL);
  }
  v37 = v36;
  v36 = 0LL;
  if ( v35 && *v37 == 3 )
  {
    v28 |= 1u;
    v142 = v28;
  }
LABEL_47:
  if ( v170 && (v26 & 0x800) == 0 && (v26 & 0x200) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[10] )
    {
      v26 = TransitionPteValid;
    }
    else
    {
      if ( v36 || (MiFlags & 0x2000000) != 0 || (byte_140C65A8F & 1) == 0 )
      {
        v26 = TransitionPteValid;
      }
      else
      {
        v26 = TransitionPteValid & 0xFFFFFFFFFFFFFFDFuLL;
        LOBYTE(v6) = v6 | 0x10;
      }
      LOBYTE(v6) = v6 | 8;
    }
  }
  v38 = v158;
  v39 = *((_BYTE *)v158 + 13);
  if ( (v39 & 8) != 0 )
  {
    v85 = a1[2];
    if ( (v85 & 1) == 0 || *(_BYTE *)(v85 & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
      v26 &= ~0x20uLL;
  }
  if ( (v39 & 5) != 4 || (v39 & 2) != 0 )
    goto LABEL_50;
  v82 = *((unsigned __int16 *)v158 + 5);
  if ( (_WORD)v82 )
  {
    if ( v82 + *((unsigned __int16 *)v158 + 4) == ((v33 >> 3) & 0x1FF) )
    {
      if ( *(__int64 *)(v32 + 40) >= 0 )
      {
        if ( (v39 & 0x10) != 0 )
          goto LABEL_138;
      }
      else if ( (v39 & 0x10) == 0 )
      {
        goto LABEL_138;
      }
    }
    MiEmptyDeferredWorkingSetEntries(v158);
    v38 = v158;
  }
LABEL_138:
  v83 = *((_WORD *)v38 + 5);
  if ( v83 )
  {
    *((_WORD *)v38 + 5) = v83 + 1;
LABEL_140:
    v28 = v142 | 4;
    LOBYTE(v142) = v142 | 4;
    goto LABEL_50;
  }
  *((_WORD *)v38 + 5) = 1;
  *((_WORD *)v38 + 4) = (v33 >> 3) & 0x1FF;
  if ( *(__int64 *)(v148 + 40) >= 0 )
  {
    *((_BYTE *)v38 + 13) |= 0x10u;
    goto LABEL_140;
  }
  *((_BYTE *)v38 + 13) &= ~0x10u;
  v28 = v142 | 4;
  LOBYTE(v142) = v142 | 4;
LABEL_50:
  if ( !(unsigned int)MiAllocateWsle(v163, v33, v148, v34, v26, v28, (__int64)v36) )
  {
    if ( (v142 & 4) != 0 )
      --*((_WORD *)v158 + 5);
    MiLockAndDecrementShareCount(v148, 0);
    if ( (v6 & 2) == 0 )
      MiLockAndDecrementShareCount((__int64)CurrentThread, 0);
    return (unsigned int)-1073741801;
  }
  if ( (v6 & 8) == 0 )
    return v29;
  if ( v158[2] && (*((_BYTE *)v158 + 13) & 1) == 0 )
  {
    if ( *((_WORD *)v158 + 5) )
      MiEmptyDeferredWorkingSetEntries(v158);
  }
  v87 = MiCopyOnWrite(BugCheckParameter2);
  v29 = v87;
  if ( v87 >= 0 )
    return v29;
  MiSetFaultPacketDirectives(a1, (unsigned int)v87);
  return 3221226548LL;
}
