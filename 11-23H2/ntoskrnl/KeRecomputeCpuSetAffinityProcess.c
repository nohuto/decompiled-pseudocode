/*
 * XREFs of KeRecomputeCpuSetAffinityProcess @ 0x140575794
 * Callers:
 *     NtSetInformationProcess @ 0x140774730 (NtSetInformationProcess.c)
 * Callees:
 *     KiQueueReadyThread @ 0x1402345E0 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x14023A3A0 (KiDeferredReadySingleThread.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiEndThreadAccountingPeriodEx @ 0x140248520 (KiEndThreadAccountingPeriodEx.c)
 *     KiReadyDeferredReadyList @ 0x140249D60 (KiReadyDeferredReadyList.c)
 *     KiAndAffinityEx @ 0x140252500 (KiAndAffinityEx.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252820 (KiFlushSoftwareInterruptBatch.c)
 *     KeAndGroupAffinityEx @ 0x140254540 (KeAndGroupAffinityEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x140255270 (KeGetProcessorIndexFromNumber.c)
 *     KeEnumerateNextProcessor @ 0x140257370 (KeEnumerateNextProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x140257460 (KeAddProcessorAffinityEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiAbPropagateBoosts @ 0x1402BC160 (KiAbPropagateBoosts.c)
 *     KiAbProcessThreadLocks @ 0x1402BC5E0 (KiAbProcessThreadLocks.c)
 *     KiDeliverApc @ 0x14030FB20 (KiDeliverApc.c)
 *     KiUpdateThreadCpuSetAffinitiesProcess @ 0x14039EB90 (KiUpdateThreadCpuSetAffinitiesProcess.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140428670 (KiSwapContext.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char __fastcall KeRecomputeCpuSetAffinityProcess(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 v3; // r15
  _DWORD *SchedulerAssist; // r9
  __int64 v5; // rdx
  __int64 CurrentPrcb; // rsi
  char v7; // di
  _QWORD *v8; // rbx
  int Processor; // eax
  ULONG_PTR v10; // rbp
  struct _KPRCB *v11; // rdi
  __int64 v12; // rbx
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  struct _KPRCB *v18; // rcx
  signed __int32 *v19; // r8
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  unsigned int v22; // r8d
  bool v23; // zf
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // rdx
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  _DWORD *v29; // r8
  int v30; // eax
  __int64 (__fastcall *v31)(_QWORD, _DWORD *, int *, __int64, _PROCESSOR_NUMBER *); // rax
  __int16 v32; // r12
  unsigned int *v33; // rbx
  unsigned __int64 v34; // rdi
  int v35; // ebp
  unsigned __int8 v36; // si
  __int64 (__fastcall *v37)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v38)(_QWORD, _DWORD *, __int128 *, _QWORD, int *); // rax
  __int64 (__fastcall *v39)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  _DWORD v41[2]; // [rsp+40h] [rbp-328h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp-320h] BYREF
  int v43; // [rsp+4Ch] [rbp-31Ch]
  _QWORD *v44; // [rsp+50h] [rbp-318h] BYREF
  __int128 v45; // [rsp+58h] [rbp-310h] BYREF
  int v46; // [rsp+68h] [rbp-300h]
  int v47; // [rsp+70h] [rbp-2F8h] BYREF
  __int64 v48; // [rsp+78h] [rbp-2F0h] BYREF
  __int128 v49; // [rsp+80h] [rbp-2E8h] BYREF
  __int64 v50; // [rsp+90h] [rbp-2D8h]
  __int64 *v51; // [rsp+98h] [rbp-2D0h] BYREF
  _DWORD v52[2]; // [rsp+A0h] [rbp-2C8h] BYREF
  _DWORD v53[2]; // [rsp+A8h] [rbp-2C0h] BYREF
  int v54; // [rsp+B0h] [rbp-2B8h] BYREF
  int v55; // [rsp+B4h] [rbp-2B4h]
  _DWORD v56[2]; // [rsp+B8h] [rbp-2B0h] BYREF
  _DWORD v57[2]; // [rsp+C0h] [rbp-2A8h] BYREF
  _DWORD v58[2]; // [rsp+C8h] [rbp-2A0h] BYREF
  unsigned __int64 v59; // [rsp+D0h] [rbp-298h] BYREF
  int v60; // [rsp+D8h] [rbp-290h] BYREF
  __int128 v61; // [rsp+DCh] [rbp-28Ch]
  __int128 v62; // [rsp+F0h] [rbp-278h] BYREF
  _QWORD v63[34]; // [rsp+100h] [rbp-268h] BYREF
  _QWORD v64[34]; // [rsp+210h] [rbp-158h] BYREF
  int v65; // [rsp+360h] [rbp-8h]

  v44 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v3 = (unsigned int)(unsigned __int8)v44 + 1;
  if ( (_DWORD)KiIrqlFlags
    && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)((_BYTE)v44 + 1)) != 0
    && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v5) = 4;
    else
      v5 = (-1LL << ((unsigned __int8)v44 + 1 + CurrentIrql)) & 4;
    SchedulerAssist[5] |= v5;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  KiUpdateThreadCpuSetAffinitiesProcess(a1, &v44);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  CurrentPrcb = (__int64)KeGetCurrentPrcb();
  v7 = 0;
  v8 = v44;
  if ( v44 )
  {
    v44 = (_QWORD *)*v44;
    do
    {
      KiDeferredReadySingleThread(CurrentPrcb, (unsigned __int64)(v8 - 27), (__int64)&v44);
      v8 = v44;
      v7 += v3;
      if ( v44 )
        v44 = (_QWORD *)*v44;
      if ( (v7 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch((unsigned __int8 *)(CurrentPrcb + 12760));
    }
    while ( v8 );
  }
  LOBYTE(Processor) = KiFlushSoftwareInterruptBatch((unsigned __int8 *)(CurrentPrcb + 12760));
  if ( CurrentIrql < 2u )
  {
    v10 = *(_QWORD *)(CurrentPrcb + 8);
    if ( *(_QWORD *)(CurrentPrcb + 16) )
    {
      if ( (*(unsigned __int8 *)(v10 + 792) | *(unsigned __int8 *)(v10 + 870)) != 0x3F )
      {
        v11 = KeGetCurrentPrcb();
        v48 = 0LL;
        v51 = 0LL;
        KiAbProcessThreadLocks(v10, v3, v3, v3, (__int64)&v48, (__int64)&v51, (__int64)&v11->AbSelfIoBoostsList);
        KiAbPropagateBoosts(&v51, (__int64)&v11->AbSelfIoBoostsList, (__int64)&v48);
        KiReadyDeferredReadyList((__int64)v11, &v48);
      }
      v47 = 0;
      v59 = CurrentPrcb & 0xFFFFFFFFFFFFFFFEuLL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentPrcb + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v47);
        while ( *(_QWORD *)(CurrentPrcb + 48) );
      }
      v12 = *(_QWORD *)(CurrentPrcb + 16);
      *(_QWORD *)(CurrentPrcb + 16) = 0LL;
      _disable();
      *(_BYTE *)(CurrentPrcb + 32) = v3;
      v13 = __rdtsc();
      v14 = v13 - *(_QWORD *)(CurrentPrcb + 33152);
      *(_QWORD *)(v10 + 72) += v14;
      v15 = *(unsigned int *)(v10 + 80);
      v16 = v14 * *(unsigned int *)(CurrentPrcb + 33208);
      *(_QWORD *)(CurrentPrcb + 33152) = v13;
      v17 = (v16 >> 16) + v15;
      if ( v17 > 0xFFFFFFFF )
        LODWORD(v17) = -1;
      v23 = (*(_BYTE *)(v10 + 2) & 0xBE) == 0;
      *(_DWORD *)(v10 + 80) = v17;
      v3 = 1LL;
      if ( !v23 )
        KiEndThreadAccountingPeriodEx(CurrentPrcb, v10, v14, 1u);
      v18 = KeGetCurrentPrcb();
      v19 = (signed __int32 *)v18->SchedulerAssist;
      if ( v19 )
      {
        _m_prefetchw(v19);
        v20 = *v19;
        do
        {
          v21 = v20;
          v20 = _InterlockedCompareExchange(v19, v20 & 0xFFDFFFFF, v20);
        }
        while ( v21 != v20 );
        if ( (v20 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v18);
      }
      _enable();
      *(_QWORD *)(CurrentPrcb + 8) = v12;
      if ( *(_BYTE *)(v12 + 388) == 1 )
        *(_DWORD *)(v12 + 132) = *(_DWORD *)(v12 + 132) - *(_DWORD *)(v12 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v12 + 388) = 2;
      *(_BYTE *)(v10 + 390) = CurrentIrql;
      *(_BYTE *)(v10 + 643) = 32;
      KiQueueReadyThread(CurrentPrcb, (__int64 *)&v59, v10);
      LOBYTE(v22) = CurrentIrql;
      v23 = (unsigned __int8)KiSwapContext(v10, v12, v22) == 0;
    }
    else
    {
      v23 = (*(_DWORD *)(v10 + 116) & 0x40) == 0;
    }
    if ( !v23 )
    {
      if ( (_DWORD)KiIrqlFlags )
      {
        v24 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v3) != 0 && (unsigned __int8)(v24 - 2) <= 0xDu )
        {
          v25 = KeGetCurrentPrcb();
          v26 = v25->SchedulerAssist;
          v23 = (v26[5] & 0xFFFF0003) == 0;
          v26[5] &= 0xFFFF0003;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick((__int64)v25);
        }
      }
      __writecr8(v3);
      *(_DWORD *)(v10 + 116) &= ~0x40u;
      KiDeliverApc(0, 0LL, 0LL);
    }
    if ( (_DWORD)KiIrqlFlags )
    {
      v27 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v3) != 0 && (unsigned __int8)(v27 - 2) <= 0xDu )
      {
        v28 = KeGetCurrentPrcb();
        v29 = v28->SchedulerAssist;
        v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + CurrentIrql));
        v23 = (v30 & v29[5]) == 0;
        v29[5] &= v30;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick((__int64)v28);
      }
    }
    LOBYTE(Processor) = CurrentIrql;
    __writecr8(CurrentIrql);
    return Processor;
  }
  if ( !*(_QWORD *)(CurrentPrcb + 16) )
    return Processor;
  LOBYTE(Processor) = *(_BYTE *)(CurrentPrcb + 13242);
  if ( (_BYTE)Processor )
    return Processor;
  if ( *(_BYTE *)(CurrentPrcb + 32) )
  {
    *(_BYTE *)(CurrentPrcb + 6) = v3;
    return Processor;
  }
  memset(&v63[1], 0, 0x100uLL);
  v61 = 0LL;
  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) != 0 && !HalpInterruptNoShorthand )
  {
    v60 = 3;
    ProcNumber = (_PROCESSOR_NUMBER)-1;
    v43 = 1;
    v41[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
    v41[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
    v31 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, int *, __int64, _PROCESSOR_NUMBER *))(HalpInterruptController + 120);
    _disable();
    LOBYTE(Processor) = v31(*(_QWORD *)(HalpInterruptController + 16), v41, &v60, 47LL, &ProcNumber);
    if ( (v65 & 0x200) != 0 )
      _enable();
    return Processor;
  }
  LODWORD(v63[0]) = 2097153;
  memset((char *)v63 + 4, 0, 0x104uLL);
  KeAddProcessorAffinityEx((unsigned __int16 *)v63, KeGetPcr()->Prcb.Number);
  v41[0] = 0;
  v50 = 0LL;
  v62 = 0LL;
  v49 = 0LL;
  memset(&v64[1], 0, 0x100uLL);
  v46 = 0;
  v45 = 0LL;
  if ( qword_140C62548 )
  {
    LOBYTE(Processor) = qword_140C62548(v63, 47LL);
    return Processor;
  }
  LODWORD(v64[0]) = 2097153;
  memset((char *)v64 + 4, 0, 0x104uLL);
  KiAndAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, (unsigned __int16 *)v63, v64, 0x20u);
  v32 = v65;
  if ( HalpInterruptClusterModeEnabled )
  {
    v33 = (unsigned int *)HalpInterruptClusterData;
    ProcNumber = 0;
    while ( (unsigned __int64)v33 < HalpInterruptClusterDataEnd )
    {
      if ( (unsigned int)KeAndGroupAffinityEx(v63, (__int64)(v33 + 2), (char *)&v62) )
      {
        v34 = v62;
        v35 = 0;
        LODWORD(v45) = 6;
        v36 = 0;
        *((_QWORD *)&v45 + 1) = *v33;
        ProcNumber.Group = WORD4(v62);
        for ( ProcNumber.Number = 0; v34; ProcNumber.Number = v36 )
        {
          if ( (v34 & 1) != 0 )
          {
            v41[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
            v35 |= *(_DWORD *)(HalpInterruptTargets + 24LL * v41[0] + 12);
            HIDWORD(v45) = v35;
          }
          ++v36;
          v34 >>= 1;
        }
        v52[0] = -1;
        v53[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v53[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v52[1] = 1;
        v37 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
        _disable();
        Processor = v37(*(_QWORD *)(HalpInterruptController + 16), v53, &v45, 47LL, v52);
        if ( (v32 & 0x200) != 0 )
          _enable();
        if ( Processor < 0 )
          return Processor;
      }
      v33 += 6;
    }
    goto LABEL_71;
  }
  if ( HalpInterruptPhysicalModeOnly )
    goto LABEL_71;
  *((_QWORD *)&v49 + 1) = v63[1];
  *(_QWORD *)&v49 = v63;
  LODWORD(v45) = 5;
  DWORD2(v45) = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(v41, (unsigned __int16 **)&v49) )
  {
    if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v41[0]) == 5 )
      DWORD2(v45) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v41[0] + 8);
  }
  if ( !DWORD2(v45) )
    goto LABEL_71;
  v54 = -1;
  v55 = 1;
  v56[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
  v56[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
  v38 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, _QWORD, int *))(HalpInterruptController + 120);
  _disable();
  Processor = v38(*(_QWORD *)(HalpInterruptController + 16), v56, &v45, (unsigned int)(v55 + 46), &v54);
  if ( (v32 & 0x200) != 0 )
    _enable();
  if ( Processor >= 0 )
  {
LABEL_71:
    *((_QWORD *)&v49 + 1) = v64[1];
    *(_QWORD *)&v49 = v64;
    v41[0] = 0;
    LOWORD(v50) = 0;
    do
    {
      Processor = KeEnumerateNextProcessor(v41, (unsigned __int16 **)&v49);
      if ( Processor )
        break;
      LODWORD(v45) = 4;
      v57[0] = -1;
      v57[1] = 1;
      DWORD2(v45) = *(_DWORD *)(HalpInterruptTargets + 24LL * v41[0] + 8);
      v58[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v58[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v39 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
      _disable();
      Processor = v39(*(_QWORD *)(HalpInterruptController + 16), v58, &v45, 47LL, v57);
      if ( (v32 & 0x200) != 0 )
        _enable();
    }
    while ( Processor >= 0 );
  }
  return Processor;
}
