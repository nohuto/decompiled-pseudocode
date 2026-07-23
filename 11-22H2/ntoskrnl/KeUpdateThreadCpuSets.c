/*
 * XREFs of KeUpdateThreadCpuSets @ 0x14039DDF8
 * Callers:
 *     NtSetInformationThread @ 0x140733AB0 (NtSetInformationThread.c)
 * Callees:
 *     KiQueueReadyThread @ 0x1402344F0 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x14023A2B0 (KiDeferredReadySingleThread.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     KiEndThreadAccountingPeriodEx @ 0x140248430 (KiEndThreadAccountingPeriodEx.c)
 *     KiReadyDeferredReadyList @ 0x140249C70 (KiReadyDeferredReadyList.c)
 *     KiAndAffinityEx @ 0x140252320 (KiAndAffinityEx.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252640 (KiFlushSoftwareInterruptBatch.c)
 *     KeAndGroupAffinityEx @ 0x140254360 (KeAndGroupAffinityEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x140255090 (KeGetProcessorIndexFromNumber.c)
 *     KeEnumerateNextProcessor @ 0x140257190 (KeEnumerateNextProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x140257280 (KeAddProcessorAffinityEx.c)
 *     KiAbPropagateBoosts @ 0x1402BBEA0 (KiAbPropagateBoosts.c)
 *     KiAbProcessThreadLocks @ 0x1402BC320 (KiAbProcessThreadLocks.c)
 *     KiDeliverApc @ 0x14030F6B0 (KiDeliverApc.c)
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x14039E710 (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KiSwapContext @ 0x140427C20 (KiSwapContext.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KeUpdateThreadCpuSets(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 v2; // r15
  _DWORD *SchedulerAssist; // r9
  __int64 v4; // rdx
  __int64 CurrentPrcb; // rsi
  char v6; // di
  _QWORD *v7; // rbx
  int Processor; // eax
  ULONG_PTR v9; // rbp
  struct _KPRCB *v10; // rdi
  __int64 v11; // rbx
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r8
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  struct _KPRCB *v17; // rcx
  signed __int32 *v18; // r8
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  __int64 v21; // r8
  bool v22; // zf
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rdx
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r9
  _DWORD *v28; // r8
  int v29; // eax
  __int64 (__fastcall *v30)(_QWORD, _DWORD *, int *, __int64, _PROCESSOR_NUMBER *); // rax
  __int16 v31; // r12
  unsigned int *v32; // rbx
  unsigned __int64 v33; // rdi
  int v34; // ebp
  unsigned __int8 v35; // si
  __int64 (__fastcall *v36)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v37)(_QWORD, _DWORD *, __int128 *, _QWORD, int *); // rax
  __int64 (__fastcall *v38)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  _DWORD v40[2]; // [rsp+40h] [rbp-328h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp-320h] BYREF
  int v42; // [rsp+4Ch] [rbp-31Ch]
  _QWORD *v43; // [rsp+50h] [rbp-318h] BYREF
  __int128 v44; // [rsp+58h] [rbp-310h] BYREF
  int v45; // [rsp+68h] [rbp-300h]
  int v46; // [rsp+70h] [rbp-2F8h] BYREF
  __int64 v47; // [rsp+78h] [rbp-2F0h] BYREF
  __int128 v48; // [rsp+80h] [rbp-2E8h] BYREF
  __int64 v49; // [rsp+90h] [rbp-2D8h]
  __int64 *v50; // [rsp+98h] [rbp-2D0h] BYREF
  _DWORD v51[2]; // [rsp+A0h] [rbp-2C8h] BYREF
  _DWORD v52[2]; // [rsp+A8h] [rbp-2C0h] BYREF
  int v53; // [rsp+B0h] [rbp-2B8h] BYREF
  int v54; // [rsp+B4h] [rbp-2B4h]
  _DWORD v55[2]; // [rsp+B8h] [rbp-2B0h] BYREF
  _DWORD v56[2]; // [rsp+C0h] [rbp-2A8h] BYREF
  _DWORD v57[2]; // [rsp+C8h] [rbp-2A0h] BYREF
  unsigned __int64 v58; // [rsp+D0h] [rbp-298h] BYREF
  int v59; // [rsp+D8h] [rbp-290h] BYREF
  __int128 v60; // [rsp+DCh] [rbp-28Ch]
  __int128 v61; // [rsp+F0h] [rbp-278h] BYREF
  _QWORD v62[34]; // [rsp+100h] [rbp-268h] BYREF
  _QWORD v63[34]; // [rsp+210h] [rbp-158h] BYREF
  int v64; // [rsp+360h] [rbp-8h]

  v43 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v2 = (unsigned int)(unsigned __int8)v43 + 1;
  if ( (_DWORD)KiIrqlFlags
    && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)((_BYTE)v43 + 1)) != 0
    && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v4) = 4;
    else
      v4 = (-1LL << ((unsigned __int8)v43 + 1 + CurrentIrql)) & 4;
    SchedulerAssist[5] |= v4;
  }
  KiUpdateThreadCpuSetAffinitiesFromDpcLevel(a1, &v43);
  CurrentPrcb = (__int64)KeGetCurrentPrcb();
  v6 = 0;
  v7 = v43;
  if ( v43 )
  {
    v43 = (_QWORD *)*v43;
    do
    {
      KiDeferredReadySingleThread(CurrentPrcb, (unsigned __int64)(v7 - 27), (__int64)&v43);
      v7 = v43;
      v6 += v2;
      if ( v43 )
        v43 = (_QWORD *)*v43;
      if ( (v6 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch((unsigned __int8 *)(CurrentPrcb + 12760));
    }
    while ( v7 );
  }
  LOBYTE(Processor) = KiFlushSoftwareInterruptBatch((unsigned __int8 *)(CurrentPrcb + 12760));
  if ( CurrentIrql < 2u )
  {
    v9 = *(_QWORD *)(CurrentPrcb + 8);
    if ( *(_QWORD *)(CurrentPrcb + 16) )
    {
      if ( (*(unsigned __int8 *)(v9 + 792) | *(unsigned __int8 *)(v9 + 870)) != 0x3F )
      {
        v10 = KeGetCurrentPrcb();
        v47 = 0LL;
        v50 = 0LL;
        KiAbProcessThreadLocks(v9, v2, v2, v2, (__int64)&v47, (__int64)&v50, (__int64)&v10->AbSelfIoBoostsList);
        KiAbPropagateBoosts(&v50, (__int64)&v10->AbSelfIoBoostsList, (__int64)&v47);
        KiReadyDeferredReadyList((__int64)v10, &v47);
      }
      v46 = 0;
      v58 = CurrentPrcb & 0xFFFFFFFFFFFFFFFEuLL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentPrcb + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v46);
        while ( *(_QWORD *)(CurrentPrcb + 48) );
      }
      v11 = *(_QWORD *)(CurrentPrcb + 16);
      *(_QWORD *)(CurrentPrcb + 16) = 0LL;
      _disable();
      *(_BYTE *)(CurrentPrcb + 32) = v2;
      v12 = __rdtsc();
      v13 = v12 - *(_QWORD *)(CurrentPrcb + 33152);
      *(_QWORD *)(v9 + 72) += v13;
      v14 = *(unsigned int *)(v9 + 80);
      v15 = v13 * *(unsigned int *)(CurrentPrcb + 33208);
      *(_QWORD *)(CurrentPrcb + 33152) = v12;
      v16 = (v15 >> 16) + v14;
      if ( v16 > 0xFFFFFFFF )
        LODWORD(v16) = -1;
      v22 = (*(_BYTE *)(v9 + 2) & 0xBE) == 0;
      *(_DWORD *)(v9 + 80) = v16;
      v2 = 1LL;
      if ( !v22 )
        KiEndThreadAccountingPeriodEx(CurrentPrcb, v9, v13, 1u);
      v17 = KeGetCurrentPrcb();
      v18 = (signed __int32 *)v17->SchedulerAssist;
      if ( v18 )
      {
        _m_prefetchw(v18);
        v19 = *v18;
        do
        {
          v20 = v19;
          v19 = _InterlockedCompareExchange(v18, v19 & 0xFFDFFFFF, v19);
        }
        while ( v20 != v19 );
        if ( (v19 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v17);
      }
      _enable();
      *(_QWORD *)(CurrentPrcb + 8) = v11;
      if ( *(_BYTE *)(v11 + 388) == 1 )
        *(_DWORD *)(v11 + 132) = *(_DWORD *)(v11 + 132) - *(_DWORD *)(v11 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v11 + 388) = 2;
      *(_BYTE *)(v9 + 390) = CurrentIrql;
      *(_BYTE *)(v9 + 643) = 32;
      KiQueueReadyThread(CurrentPrcb, (__int64 *)&v58, v9);
      LOBYTE(v21) = CurrentIrql;
      v22 = (unsigned __int8)KiSwapContext(v9, v11, v21) == 0;
    }
    else
    {
      v22 = (*(_DWORD *)(v9 + 116) & 0x40) == 0;
    }
    if ( !v22 )
    {
      if ( (_DWORD)KiIrqlFlags )
      {
        v23 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v2) != 0 && (unsigned __int8)(v23 - 2) <= 0xDu )
        {
          v24 = KeGetCurrentPrcb();
          v25 = v24->SchedulerAssist;
          v22 = (v25[5] & 0xFFFF0003) == 0;
          v25[5] &= 0xFFFF0003;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(v24);
        }
      }
      __writecr8(v2);
      *(_DWORD *)(v9 + 116) &= ~0x40u;
      KiDeliverApc(0, 0LL, 0LL);
    }
    if ( (_DWORD)KiIrqlFlags )
    {
      v26 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v2) != 0 && (unsigned __int8)(v26 - 2) <= 0xDu )
      {
        v27 = KeGetCurrentPrcb();
        v28 = v27->SchedulerAssist;
        v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + CurrentIrql));
        v22 = (v29 & v28[5]) == 0;
        v28[5] &= v29;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(v27);
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
    *(_BYTE *)(CurrentPrcb + 6) = v2;
    return Processor;
  }
  memset(&v62[1], 0, 0x100uLL);
  v60 = 0LL;
  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) != 0 && !HalpInterruptNoShorthand )
  {
    v59 = 3;
    ProcNumber = (_PROCESSOR_NUMBER)-1;
    v42 = 1;
    v40[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
    v40[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
    v30 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, int *, __int64, _PROCESSOR_NUMBER *))(HalpInterruptController + 120);
    _disable();
    LOBYTE(Processor) = v30(*(_QWORD *)(HalpInterruptController + 16), v40, &v59, 47LL, &ProcNumber);
    if ( (v64 & 0x200) != 0 )
      _enable();
    return Processor;
  }
  LODWORD(v62[0]) = 2097153;
  memset((char *)v62 + 4, 0, 0x104uLL);
  KeAddProcessorAffinityEx((unsigned __int16 *)v62, KeGetPcr()->Prcb.Number);
  v40[0] = 0;
  v49 = 0LL;
  v61 = 0LL;
  v48 = 0LL;
  memset(&v63[1], 0, 0x100uLL);
  v45 = 0;
  v44 = 0LL;
  if ( qword_140C62628 )
  {
    LOBYTE(Processor) = qword_140C62628(v62, 47LL);
    return Processor;
  }
  LODWORD(v63[0]) = 2097153;
  memset((char *)v63 + 4, 0, 0x104uLL);
  KiAndAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, (unsigned __int16 *)v62, v63, 0x20u);
  v31 = v64;
  if ( HalpInterruptClusterModeEnabled )
  {
    v32 = (unsigned int *)HalpInterruptClusterData;
    ProcNumber = 0;
    while ( (unsigned __int64)v32 < HalpInterruptClusterDataEnd )
    {
      if ( (unsigned int)KeAndGroupAffinityEx(v62, (__int64)(v32 + 2), (char *)&v61) )
      {
        v33 = v61;
        v34 = 0;
        LODWORD(v44) = 6;
        v35 = 0;
        *((_QWORD *)&v44 + 1) = *v32;
        ProcNumber.Group = WORD4(v61);
        for ( ProcNumber.Number = 0; v33; ProcNumber.Number = v35 )
        {
          if ( (v33 & 1) != 0 )
          {
            v40[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
            v34 |= *(_DWORD *)(HalpInterruptTargets + 24LL * v40[0] + 12);
            HIDWORD(v44) = v34;
          }
          ++v35;
          v33 >>= 1;
        }
        v51[0] = -1;
        v52[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v52[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v51[1] = 1;
        v36 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
        _disable();
        Processor = v36(*(_QWORD *)(HalpInterruptController + 16), v52, &v44, 47LL, v51);
        if ( (v31 & 0x200) != 0 )
          _enable();
        if ( Processor < 0 )
          return Processor;
      }
      v32 += 6;
    }
    goto LABEL_71;
  }
  if ( HalpInterruptPhysicalModeOnly )
    goto LABEL_71;
  *((_QWORD *)&v48 + 1) = v62[1];
  *(_QWORD *)&v48 = v62;
  LODWORD(v44) = 5;
  DWORD2(v44) = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(v40, (unsigned __int16 **)&v48) )
  {
    if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v40[0]) == 5 )
      DWORD2(v44) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v40[0] + 8);
  }
  if ( !DWORD2(v44) )
    goto LABEL_71;
  v53 = -1;
  v54 = 1;
  v55[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
  v55[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
  v37 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, _QWORD, int *))(HalpInterruptController + 120);
  _disable();
  Processor = v37(*(_QWORD *)(HalpInterruptController + 16), v55, &v44, (unsigned int)(v54 + 46), &v53);
  if ( (v31 & 0x200) != 0 )
    _enable();
  if ( Processor >= 0 )
  {
LABEL_71:
    *((_QWORD *)&v48 + 1) = v63[1];
    *(_QWORD *)&v48 = v63;
    v40[0] = 0;
    LOWORD(v49) = 0;
    do
    {
      Processor = KeEnumerateNextProcessor(v40, (unsigned __int16 **)&v48);
      if ( Processor )
        break;
      LODWORD(v44) = 4;
      v56[0] = -1;
      v56[1] = 1;
      DWORD2(v44) = *(_DWORD *)(HalpInterruptTargets + 24LL * v40[0] + 8);
      v57[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v57[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v38 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
      _disable();
      Processor = v38(*(_QWORD *)(HalpInterruptController + 16), v57, &v44, 47LL, v56);
      if ( (v31 & 0x200) != 0 )
        _enable();
    }
    while ( Processor >= 0 );
  }
  return Processor;
}
