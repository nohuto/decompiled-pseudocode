/*
 * XREFs of KiSetLegacyAffinityThread @ 0x140201F04
 * Callers:
 *     KeSetAffinityThread @ 0x14056F530 (KeSetAffinityThread.c)
 *     NtSetInformationThread @ 0x1407337A0 (NtSetInformationThread.c)
 * Callees:
 *     KeIsSubsetAffinityEx @ 0x1402031E0 (KeIsSubsetAffinityEx.c)
 *     KiSetAffinityThread @ 0x14020327C (KiSetAffinityThread.c)
 *     KiQueueReadyThread @ 0x1402345E0 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x14023A3A0 (KiDeferredReadySingleThread.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiEndThreadAccountingPeriodEx @ 0x140248520 (KiEndThreadAccountingPeriodEx.c)
 *     KiReadyDeferredReadyList @ 0x140249D60 (KiReadyDeferredReadyList.c)
 *     KiAndAffinityEx @ 0x140252500 (KiAndAffinityEx.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252820 (KiFlushSoftwareInterruptBatch.c)
 *     KeAndGroupAffinityEx @ 0x140254540 (KeAndGroupAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x140255230 (KeIsEmptyAffinityEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x140255270 (KeGetProcessorIndexFromNumber.c)
 *     KeEnumerateNextProcessor @ 0x140257370 (KeEnumerateNextProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x140257460 (KeAddProcessorAffinityEx.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14025AFA0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7E90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiAbPropagateBoosts @ 0x1402BC160 (KiAbPropagateBoosts.c)
 *     KiAbProcessThreadLocks @ 0x1402BC5E0 (KiAbProcessThreadLocks.c)
 *     KiDeliverApc @ 0x14030FB20 (KiDeliverApc.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140428670 (KiSwapContext.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall KiSetLegacyAffinityThread(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  __int64 v5; // r13
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r9
  __int64 v8; // rdx
  unsigned __int64 CurrentPrcb; // rsi
  volatile LONG *v10; // r15
  __int64 v11; // rcx
  int IsSubsetAffinity; // eax
  int v13; // ebp
  _WORD *v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rbx
  char v17; // di
  __int64 v18; // r9
  _KTHREAD *v19; // rbp
  struct _KPRCB *v20; // rdi
  _KTHREAD *v21; // rbx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r10
  __int64 CurrentRunTime; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  struct _KPRCB *v27; // rcx
  signed __int32 *v28; // r8
  signed __int32 v29; // eax
  signed __int32 v30; // ett
  __int64 v31; // r8
  bool v32; // zf
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // rcx
  _DWORD *v35; // rdx
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r9
  _DWORD *v38; // r8
  int v39; // eax
  void (__fastcall *v40)(_QWORD, _DWORD *, int *, _QWORD, _PROCESSOR_NUMBER *); // rax
  __int64 v41; // rdx
  __int16 v42; // r12
  unsigned int *v43; // rbx
  unsigned __int64 v44; // rdi
  unsigned __int8 v45; // si
  __int64 (__fastcall *v46)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v47; // eax
  __int64 (__fastcall *v48)(_QWORD, _DWORD *, __int128 *, _QWORD, int *); // rax
  int v49; // eax
  __int64 (__fastcall *v50)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v51; // eax
  _DWORD v53[2]; // [rsp+40h] [rbp-438h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp-430h] BYREF
  int v55; // [rsp+4Ch] [rbp-42Ch]
  _QWORD *v56; // [rsp+50h] [rbp-428h] BYREF
  __int128 v57; // [rsp+58h] [rbp-420h] BYREF
  int v58; // [rsp+68h] [rbp-410h]
  int v59; // [rsp+70h] [rbp-408h] BYREF
  __int64 v60; // [rsp+78h] [rbp-400h] BYREF
  __int128 v61; // [rsp+80h] [rbp-3F8h] BYREF
  __int64 v62; // [rsp+90h] [rbp-3E8h]
  __int64 v63; // [rsp+98h] [rbp-3E0h] BYREF
  _DWORD v64[2]; // [rsp+A0h] [rbp-3D8h] BYREF
  _DWORD v65[2]; // [rsp+A8h] [rbp-3D0h] BYREF
  int v66; // [rsp+B0h] [rbp-3C8h] BYREF
  int v67; // [rsp+B4h] [rbp-3C4h]
  _DWORD v68[2]; // [rsp+B8h] [rbp-3C0h] BYREF
  _DWORD v69[2]; // [rsp+C0h] [rbp-3B8h] BYREF
  _DWORD v70[2]; // [rsp+C8h] [rbp-3B0h] BYREF
  unsigned __int64 v71; // [rsp+D0h] [rbp-3A8h] BYREF
  int v72; // [rsp+D8h] [rbp-3A0h] BYREF
  __int128 v73; // [rsp+DCh] [rbp-39Ch]
  __int128 v74; // [rsp+F0h] [rbp-388h] BYREF
  _DWORD v75[68]; // [rsp+100h] [rbp-378h] BYREF
  _QWORD v76[34]; // [rsp+210h] [rbp-268h] BYREF
  _QWORD v77[34]; // [rsp+320h] [rbp-158h] BYREF
  int v78; // [rsp+470h] [rbp-8h]

  memset(&v75[2], 0, 0x100uLL);
  v4 = *(_QWORD *)(a1 + 544);
  v5 = 0LL;
  if ( !a2 )
    return v5;
  v75[0] = 2097153;
  memset(&v75[1], 0, 0x104uLL);
  v56 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v8) = 4;
    else
      v8 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v8;
  }
  CurrentPrcb = (unsigned __int64)KeGetCurrentPrcb();
  v10 = (volatile LONG *)(v4 + 64);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  v11 = *(unsigned __int16 *)(a1 + 560);
  if ( LOWORD(v75[0]) <= (unsigned __int16)v11 )
  {
    if ( HIWORD(v75[0]) <= (unsigned __int16)v11 )
      goto LABEL_13;
    LOWORD(v75[0]) = v11 + 1;
  }
  *(_QWORD *)&v75[2 * v11 + 2] |= a2;
LABEL_13:
  KiAndAffinityEx(v75, &KeActiveProcessors, v75, 20LL);
  if ( (unsigned int)KeIsEmptyAffinityEx(v75) )
  {
    v13 = 0;
  }
  else
  {
    IsSubsetAffinity = KeIsSubsetAffinityEx(v75, v4 + 80);
    v13 = 0;
    if ( IsSubsetAffinity )
    {
      v14 = *(_WORD **)(a1 + 552);
      v15 = *(unsigned __int16 *)(a1 + 560);
      if ( (unsigned __int16)v15 < *v14 )
        v5 = *(_QWORD *)&v14[4 * v15 + 4];
      KiSetAffinityThread(a1, &v56, v75);
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(v10);
  v16 = v56;
  v17 = 0;
  if ( v56 )
  {
    v56 = (_QWORD *)*v56;
    do
    {
      KiDeferredReadySingleThread(CurrentPrcb, v16 - 27, &v56);
      v16 = v56;
      ++v17;
      if ( v56 )
        v56 = (_QWORD *)*v56;
      if ( (v17 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch(CurrentPrcb + 12760);
    }
    while ( v16 );
  }
  KiFlushSoftwareInterruptBatch(CurrentPrcb + 12760);
  if ( CurrentIrql < 2u )
  {
    v19 = *(_KTHREAD **)(CurrentPrcb + 8);
    if ( *(_QWORD *)(CurrentPrcb + 16) )
    {
      if ( (v19->AbEntrySummary | v19->AbOrphanedEntrySummary) != 0x3F )
      {
        v60 = 0LL;
        v63 = 0LL;
        v20 = KeGetCurrentPrcb();
        KiAbProcessThreadLocks((_DWORD)v19, 1, 1, 1, (__int64)&v60, (__int64)&v63, (__int64)&v20->AbSelfIoBoostsList);
        KiAbPropagateBoosts(&v63, &v20->AbSelfIoBoostsList, &v60);
        KiReadyDeferredReadyList(v20, &v60);
      }
      v59 = 0;
      v71 = CurrentPrcb & 0xFFFFFFFFFFFFFFFEuLL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentPrcb + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v59);
        while ( *(_QWORD *)(CurrentPrcb + 48) );
      }
      v21 = *(_KTHREAD **)(CurrentPrcb + 16);
      *(_QWORD *)(CurrentPrcb + 16) = 0LL;
      _disable();
      *(_BYTE *)(CurrentPrcb + 32) = 1;
      v22 = __rdtsc();
      v23 = v22 - *(_QWORD *)(CurrentPrcb + 33152);
      v19->CycleTime += v23;
      CurrentRunTime = v19->CurrentRunTime;
      v25 = v23 * *(unsigned int *)(CurrentPrcb + 33208);
      *(_QWORD *)(CurrentPrcb + 33152) = v22;
      v26 = (v25 >> 16) + CurrentRunTime;
      if ( v26 > 0xFFFFFFFF )
        LODWORD(v26) = -1;
      v32 = (v19->Header.Size & 0xBE) == 0;
      v19->CurrentRunTime = v26;
      if ( !v32 )
      {
        LOBYTE(v18) = 1;
        KiEndThreadAccountingPeriodEx(CurrentPrcb, v19, v23, v18);
      }
      v27 = KeGetCurrentPrcb();
      v28 = (signed __int32 *)v27->SchedulerAssist;
      if ( v28 )
      {
        _m_prefetchw(v28);
        v29 = *v28;
        do
        {
          v30 = v29;
          v29 = _InterlockedCompareExchange(v28, v29 & 0xFFDFFFFF, v29);
        }
        while ( v30 != v29 );
        if ( (v29 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v27);
      }
      _enable();
      *(_QWORD *)(CurrentPrcb + 8) = v21;
      if ( v21->WaitBlockFill6[68] == 1 )
        v21->ReadyTime = v21->ReadyTime - v21->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      v21->WaitBlockFill6[68] = 2;
      v19->WaitReason = 32;
      v19->WaitIrql = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, &v71, v19);
      LOBYTE(v31) = CurrentIrql;
      v32 = (unsigned __int8)KiSwapContext(v19, v21, v31) == 0;
    }
    else
    {
      v32 = (v19->MiscFlags & 0x40) == 0;
    }
    if ( !v32 )
    {
      if ( (_DWORD)KiIrqlFlags )
      {
        v33 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v33 - 2) <= 0xDu )
        {
          v34 = KeGetCurrentPrcb();
          v35 = v34->SchedulerAssist;
          v32 = (v35[5] & 0xFFFF0003) == 0;
          v35[5] &= 0xFFFF0003;
          if ( v32 )
            KiRemoveSystemWorkPriorityKick(v34);
        }
      }
      __writecr8(1uLL);
      v19->MiscFlags &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
    }
    if ( (_DWORD)KiIrqlFlags )
    {
      v36 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v36 - 2) <= 0xDu )
      {
        v37 = KeGetCurrentPrcb();
        v38 = v37->SchedulerAssist;
        v39 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v32 = (v39 & v38[5]) == 0;
        v38[5] &= v39;
        if ( v32 )
          KiRemoveSystemWorkPriorityKick(v37);
      }
    }
    __writecr8(CurrentIrql);
    return v5;
  }
  if ( !*(_QWORD *)(CurrentPrcb + 16) || *(_BYTE *)(CurrentPrcb + 13242) )
    return v5;
  if ( *(_BYTE *)(CurrentPrcb + 32) )
  {
    *(_BYTE *)(CurrentPrcb + 6) = 1;
    return v5;
  }
  memset(&v76[1], 0, 0x100uLL);
  v73 = 0LL;
  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) != 0 && !HalpInterruptNoShorthand )
  {
    v72 = 3;
    ProcNumber = (_PROCESSOR_NUMBER)-1;
    v53[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
    v53[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
    v40 = *(void (__fastcall **)(_QWORD, _DWORD *, int *, _QWORD, _PROCESSOR_NUMBER *))(HalpInterruptController + 120);
    v55 = 1;
    _disable();
    v40(*(_QWORD *)(HalpInterruptController + 16), v53, &v72, (unsigned int)(v55 + 46), &ProcNumber);
    if ( (v78 & 0x200) != 0 )
      _enable();
    return v5;
  }
  LODWORD(v76[0]) = 2097153;
  memset((char *)v76 + 4, 0, 0x104uLL);
  LODWORD(v41) = KeGetPcr()->Prcb.Number;
  KeAddProcessorAffinityEx(v76, v41);
  v53[0] = 0;
  v62 = 0LL;
  v74 = 0LL;
  v61 = 0LL;
  memset(&v77[1], 0, 0x100uLL);
  v58 = 0;
  v57 = 0LL;
  if ( qword_140C62548 )
  {
    qword_140C62548(v76, 47LL);
    return v5;
  }
  LODWORD(v77[0]) = 2097153;
  memset((char *)v77 + 4, 0, 0x104uLL);
  KiAndAffinityEx(&HalpInterruptPhysicalTargets, v76, v77, 32LL);
  v42 = v78;
  if ( HalpInterruptClusterModeEnabled )
  {
    v43 = (unsigned int *)HalpInterruptClusterData;
    ProcNumber = 0;
    while ( (unsigned __int64)v43 < HalpInterruptClusterDataEnd )
    {
      if ( (unsigned int)KeAndGroupAffinityEx(v76, v43 + 2, &v74) )
      {
        v44 = v74;
        v45 = 0;
        LODWORD(v57) = 6;
        *((_QWORD *)&v57 + 1) = *v43;
        ProcNumber.Group = WORD4(v74);
        for ( ProcNumber.Number = 0; v44; ProcNumber.Number = v45 )
        {
          if ( (v44 & 1) != 0 )
          {
            v53[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
            v13 |= *(_DWORD *)(HalpInterruptTargets + 24LL * v53[0] + 12);
            HIDWORD(v57) = v13;
          }
          ++v45;
          v44 >>= 1;
        }
        v64[0] = -1;
        v65[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v65[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v64[1] = 1;
        v46 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
        _disable();
        v47 = v46(*(_QWORD *)(HalpInterruptController + 16), v65, &v57, 47LL, v64);
        if ( (v42 & 0x200) != 0 )
          _enable();
        v13 = 0;
        if ( v47 < 0 )
          return v5;
      }
      v43 += 6;
    }
    goto LABEL_82;
  }
  if ( HalpInterruptPhysicalModeOnly )
    goto LABEL_82;
  *((_QWORD *)&v61 + 1) = v76[1];
  *(_QWORD *)&v61 = v76;
  LODWORD(v57) = 5;
  DWORD2(v57) = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(v53, &v61) )
  {
    if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v53[0]) == 5 )
      DWORD2(v57) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v53[0] + 8);
  }
  if ( !DWORD2(v57) )
    goto LABEL_82;
  v66 = -1;
  v67 = 1;
  v68[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
  v68[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
  v48 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, _QWORD, int *))(HalpInterruptController + 120);
  _disable();
  v49 = v48(*(_QWORD *)(HalpInterruptController + 16), v68, &v57, (unsigned int)(v67 + 46), &v66);
  if ( (v42 & 0x200) != 0 )
    _enable();
  if ( v49 >= 0 )
  {
LABEL_82:
    *((_QWORD *)&v61 + 1) = v77[1];
    *(_QWORD *)&v61 = v77;
    v53[0] = 0;
    LOWORD(v62) = 0;
    do
    {
      if ( (unsigned int)KeEnumerateNextProcessor(v53, &v61) )
        break;
      LODWORD(v57) = 4;
      v69[0] = -1;
      v69[1] = 1;
      DWORD2(v57) = *(_DWORD *)(HalpInterruptTargets + 24LL * v53[0] + 8);
      v70[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v70[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v50 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
      _disable();
      v51 = v50(*(_QWORD *)(HalpInterruptController + 16), v70, &v57, 47LL, v69);
      if ( (v42 & 0x200) != 0 )
        _enable();
    }
    while ( v51 >= 0 );
  }
  return v5;
}
