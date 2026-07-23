/*
 * XREFs of KeSetUserAffinityThread @ 0x1402028C4
 * Callers:
 *     ExpWorkerThread @ 0x1402BEE20 (ExpWorkerThread.c)
 *     NtSetInformationThread @ 0x1407337A0 (NtSetInformationThread.c)
 *     ExpWorkQueueManagerThread @ 0x1408390C0 (ExpWorkQueueManagerThread.c)
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
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiAbPropagateBoosts @ 0x1402BC160 (KiAbPropagateBoosts.c)
 *     KiAbProcessThreadLocks @ 0x1402BC5E0 (KiAbProcessThreadLocks.c)
 *     KiDeliverApc @ 0x14030FB20 (KiDeliverApc.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140428670 (KiSwapContext.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KiExtendProcessAffinity @ 0x14057EE54 (KiExtendProcessAffinity.c)
 */

char __fastcall KeSetUserAffinityThread(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // rdx
  unsigned __int64 CurrentPrcb; // rsi
  _QWORD *v9; // rbx
  char v10; // di
  int v11; // eax
  _KTHREAD *v12; // rbp
  struct _KPRCB *v13; // rdi
  _KTHREAD *v14; // rbx
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r8
  __int64 CurrentRunTime; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  struct _KPRCB *v20; // rcx
  signed __int32 *v21; // r8
  signed __int32 v22; // eax
  signed __int32 v23; // ett
  __int64 v24; // r8
  bool v25; // zf
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // rcx
  _DWORD *v28; // rdx
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r9
  _DWORD *v31; // r8
  int v32; // eax
  __int64 (__fastcall *v33)(_QWORD, _DWORD *, int *, __int64, _PROCESSOR_NUMBER *); // rax
  __int64 v34; // rdx
  __int16 v35; // r12
  unsigned int *v36; // rbx
  unsigned __int64 v37; // rdi
  int v38; // ebp
  unsigned __int8 v39; // si
  __int64 (__fastcall *v40)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v41)(_QWORD, _DWORD *, __int128 *, _QWORD, int *); // rax
  __int64 (__fastcall *v42)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  _DWORD v44[2]; // [rsp+40h] [rbp-328h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp-320h] BYREF
  int v46; // [rsp+4Ch] [rbp-31Ch]
  _QWORD *v47; // [rsp+50h] [rbp-318h] BYREF
  __int128 v48; // [rsp+58h] [rbp-310h] BYREF
  int v49; // [rsp+68h] [rbp-300h]
  int v50; // [rsp+70h] [rbp-2F8h] BYREF
  __int64 v51; // [rsp+78h] [rbp-2F0h] BYREF
  __int128 v52; // [rsp+80h] [rbp-2E8h] BYREF
  __int64 v53; // [rsp+90h] [rbp-2D8h]
  __int64 v54; // [rsp+98h] [rbp-2D0h] BYREF
  _DWORD v55[2]; // [rsp+A0h] [rbp-2C8h] BYREF
  _DWORD v56[2]; // [rsp+A8h] [rbp-2C0h] BYREF
  int v57; // [rsp+B0h] [rbp-2B8h] BYREF
  int v58; // [rsp+B4h] [rbp-2B4h]
  _DWORD v59[2]; // [rsp+B8h] [rbp-2B0h] BYREF
  _DWORD v60[2]; // [rsp+C0h] [rbp-2A8h] BYREF
  _DWORD v61[2]; // [rsp+C8h] [rbp-2A0h] BYREF
  unsigned __int64 v62; // [rsp+D0h] [rbp-298h] BYREF
  int v63; // [rsp+D8h] [rbp-290h] BYREF
  __int128 v64; // [rsp+DCh] [rbp-28Ch]
  __int128 v65; // [rsp+F0h] [rbp-278h] BYREF
  _QWORD v66[34]; // [rsp+100h] [rbp-268h] BYREF
  _QWORD v67[34]; // [rsp+210h] [rbp-158h] BYREF
  int v68; // [rsp+360h] [rbp-8h]

  v2 = *(_QWORD *)(a1 + 544);
  v47 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v7) = 4;
    else
      v7 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v7;
  }
  CurrentPrcb = (unsigned __int64)KeGetCurrentPrcb();
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
  if ( !(unsigned int)KeIsSubsetAffinityEx(a2, v2 + 80) )
    KiExtendProcessAffinity(v2, a2);
  if ( (unsigned int)KeIsEmptyAffinityEx(a2) )
    a2 = v2 + 80;
  KiSetAffinityThread(a1, &v47, a2);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
  v9 = v47;
  v10 = 0;
  if ( v47 )
  {
    v47 = (_QWORD *)*v47;
    do
    {
      KiDeferredReadySingleThread(CurrentPrcb, v9 - 27, &v47);
      v9 = v47;
      ++v10;
      if ( v47 )
        v47 = (_QWORD *)*v47;
      if ( (v10 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch(CurrentPrcb + 12760);
    }
    while ( v9 );
  }
  LOBYTE(v11) = KiFlushSoftwareInterruptBatch(CurrentPrcb + 12760);
  if ( CurrentIrql < 2u )
  {
    v12 = *(_KTHREAD **)(CurrentPrcb + 8);
    if ( *(_QWORD *)(CurrentPrcb + 16) )
    {
      if ( (v12->AbEntrySummary | v12->AbOrphanedEntrySummary) != 0x3F )
      {
        v13 = KeGetCurrentPrcb();
        v51 = 0LL;
        v54 = 0LL;
        KiAbProcessThreadLocks((_DWORD)v12, 1, 1, 1, (__int64)&v51, (__int64)&v54, (__int64)&v13->AbSelfIoBoostsList);
        KiAbPropagateBoosts(&v54, &v13->AbSelfIoBoostsList, &v51);
        KiReadyDeferredReadyList(v13, &v51);
      }
      v50 = 0;
      v62 = CurrentPrcb & 0xFFFFFFFFFFFFFFFEuLL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentPrcb + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v50);
        while ( *(_QWORD *)(CurrentPrcb + 48) );
      }
      v14 = *(_KTHREAD **)(CurrentPrcb + 16);
      *(_QWORD *)(CurrentPrcb + 16) = 0LL;
      _disable();
      *(_BYTE *)(CurrentPrcb + 32) = 1;
      v15 = __rdtsc();
      v16 = v15 - *(_QWORD *)(CurrentPrcb + 33152);
      v12->CycleTime += v16;
      CurrentRunTime = v12->CurrentRunTime;
      v18 = v16 * *(unsigned int *)(CurrentPrcb + 33208);
      *(_QWORD *)(CurrentPrcb + 33152) = v15;
      v19 = (v18 >> 16) + CurrentRunTime;
      if ( v19 > 0xFFFFFFFF )
        LODWORD(v19) = -1;
      v25 = (v12->Header.Size & 0xBE) == 0;
      v12->CurrentRunTime = v19;
      if ( !v25 )
      {
        LOBYTE(v15) = 1;
        KiEndThreadAccountingPeriodEx(CurrentPrcb, v12, v16, v15);
      }
      v20 = KeGetCurrentPrcb();
      v21 = (signed __int32 *)v20->SchedulerAssist;
      if ( v21 )
      {
        _m_prefetchw(v21);
        v22 = *v21;
        do
        {
          v23 = v22;
          v22 = _InterlockedCompareExchange(v21, v22 & 0xFFDFFFFF, v22);
        }
        while ( v23 != v22 );
        if ( (v22 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v20);
      }
      _enable();
      *(_QWORD *)(CurrentPrcb + 8) = v14;
      if ( v14->WaitBlockFill6[68] == 1 )
        v14->ReadyTime = v14->ReadyTime - v14->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      v14->WaitBlockFill6[68] = 2;
      v12->WaitIrql = CurrentIrql;
      v12->WaitReason = 32;
      KiQueueReadyThread(CurrentPrcb, &v62, v12);
      LOBYTE(v24) = CurrentIrql;
      v25 = (unsigned __int8)KiSwapContext(v12, v14, v24) == 0;
    }
    else
    {
      v25 = (v12->MiscFlags & 0x40) == 0;
    }
    if ( !v25 )
    {
      if ( (_DWORD)KiIrqlFlags )
      {
        v26 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v26 - 2) <= 0xDu )
        {
          v27 = KeGetCurrentPrcb();
          v28 = v27->SchedulerAssist;
          v25 = (v28[5] & 0xFFFF0003) == 0;
          v28[5] &= 0xFFFF0003;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick(v27);
        }
      }
      __writecr8(1uLL);
      v12->MiscFlags &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
    }
    if ( (_DWORD)KiIrqlFlags )
    {
      v29 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v29 - 2) <= 0xDu )
      {
        v30 = KeGetCurrentPrcb();
        v31 = v30->SchedulerAssist;
        v32 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v25 = (v32 & v31[5]) == 0;
        v31[5] &= v32;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(v30);
      }
    }
    LOBYTE(v11) = CurrentIrql;
    __writecr8(CurrentIrql);
    return v11;
  }
  if ( !*(_QWORD *)(CurrentPrcb + 16) )
    return v11;
  LOBYTE(v11) = *(_BYTE *)(CurrentPrcb + 13242);
  if ( (_BYTE)v11 )
    return v11;
  if ( *(_BYTE *)(CurrentPrcb + 32) )
  {
    *(_BYTE *)(CurrentPrcb + 6) = 1;
    return v11;
  }
  memset(&v66[1], 0, 0x100uLL);
  v64 = 0LL;
  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) != 0 && !HalpInterruptNoShorthand )
  {
    v63 = 3;
    ProcNumber = (_PROCESSOR_NUMBER)-1;
    v46 = 1;
    v44[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
    v44[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
    v33 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, int *, __int64, _PROCESSOR_NUMBER *))(HalpInterruptController + 120);
    _disable();
    LOBYTE(v11) = v33(*(_QWORD *)(HalpInterruptController + 16), v44, &v63, 47LL, &ProcNumber);
    if ( (v68 & 0x200) != 0 )
      _enable();
    return v11;
  }
  LODWORD(v66[0]) = 2097153;
  memset((char *)v66 + 4, 0, 0x104uLL);
  LODWORD(v34) = KeGetPcr()->Prcb.Number;
  KeAddProcessorAffinityEx(v66, v34);
  v44[0] = 0;
  v53 = 0LL;
  v65 = 0LL;
  v52 = 0LL;
  memset(&v67[1], 0, 0x100uLL);
  v49 = 0;
  v48 = 0LL;
  if ( qword_140C62548 )
  {
    LOBYTE(v11) = qword_140C62548(v66, 47LL);
    return v11;
  }
  LODWORD(v67[0]) = 2097153;
  memset((char *)v67 + 4, 0, 0x104uLL);
  KiAndAffinityEx(&HalpInterruptPhysicalTargets, v66, v67, 32LL);
  v35 = v68;
  if ( HalpInterruptClusterModeEnabled )
  {
    v36 = (unsigned int *)HalpInterruptClusterData;
    ProcNumber = 0;
    while ( (unsigned __int64)v36 < HalpInterruptClusterDataEnd )
    {
      if ( (unsigned int)KeAndGroupAffinityEx(v66, v36 + 2, &v65) )
      {
        v37 = v65;
        v38 = 0;
        LODWORD(v48) = 6;
        v39 = 0;
        *((_QWORD *)&v48 + 1) = *v36;
        ProcNumber.Group = WORD4(v65);
        for ( ProcNumber.Number = 0; v37; ProcNumber.Number = v39 )
        {
          if ( (v37 & 1) != 0 )
          {
            v44[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
            v38 |= *(_DWORD *)(HalpInterruptTargets + 24LL * v44[0] + 12);
            HIDWORD(v48) = v38;
          }
          ++v39;
          v37 >>= 1;
        }
        v55[0] = -1;
        v56[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v56[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v55[1] = 1;
        v40 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
        _disable();
        v11 = v40(*(_QWORD *)(HalpInterruptController + 16), v56, &v48, 47LL, v55);
        if ( (v35 & 0x200) != 0 )
          _enable();
        if ( v11 < 0 )
          return v11;
      }
      v36 += 6;
    }
    goto LABEL_75;
  }
  if ( HalpInterruptPhysicalModeOnly )
    goto LABEL_75;
  *((_QWORD *)&v52 + 1) = v66[1];
  *(_QWORD *)&v52 = v66;
  LODWORD(v48) = 5;
  DWORD2(v48) = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(v44, &v52) )
  {
    if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v44[0]) == 5 )
      DWORD2(v48) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v44[0] + 8);
  }
  if ( !DWORD2(v48) )
    goto LABEL_75;
  v57 = -1;
  v58 = 1;
  v59[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
  v59[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
  v41 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, _QWORD, int *))(HalpInterruptController + 120);
  _disable();
  v11 = v41(*(_QWORD *)(HalpInterruptController + 16), v59, &v48, (unsigned int)(v58 + 46), &v57);
  if ( (v35 & 0x200) != 0 )
    _enable();
  if ( v11 >= 0 )
  {
LABEL_75:
    *((_QWORD *)&v52 + 1) = v67[1];
    *(_QWORD *)&v52 = v67;
    v44[0] = 0;
    LOWORD(v53) = 0;
    do
    {
      v11 = KeEnumerateNextProcessor(v44, &v52);
      if ( v11 )
        break;
      LODWORD(v48) = 4;
      v60[0] = -1;
      v60[1] = 1;
      DWORD2(v48) = *(_DWORD *)(HalpInterruptTargets + 24LL * v44[0] + 8);
      v61[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v61[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v42 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
      _disable();
      v11 = v42(*(_QWORD *)(HalpInterruptController + 16), v61, &v48, 47LL, v60);
      if ( (v35 & 0x200) != 0 )
        _enable();
    }
    while ( v11 >= 0 );
  }
  return v11;
}
