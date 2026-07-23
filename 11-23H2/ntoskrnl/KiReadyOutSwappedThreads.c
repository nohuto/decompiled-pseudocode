/*
 * XREFs of KiReadyOutSwappedThreads @ 0x14034D394
 * Callers:
 *     KiOutSwapProcesses @ 0x14034CF20 (KiOutSwapProcesses.c)
 *     KiInSwapProcesses @ 0x14034D22C (KiInSwapProcesses.c)
 * Callees:
 *     KiQueueReadyThread @ 0x1402345E0 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiEndThreadAccountingPeriodEx @ 0x140248520 (KiEndThreadAccountingPeriodEx.c)
 *     KiReadyDeferredReadyList @ 0x140249D60 (KiReadyDeferredReadyList.c)
 *     KiAndAffinityEx @ 0x140252500 (KiAndAffinityEx.c)
 *     KeAndGroupAffinityEx @ 0x140254540 (KeAndGroupAffinityEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x140255270 (KeGetProcessorIndexFromNumber.c)
 *     KeEnumerateNextProcessor @ 0x140257370 (KeEnumerateNextProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x140257460 (KeAddProcessorAffinityEx.c)
 *     KiEnterDeferredReadyState @ 0x1402B9420 (KiEnterDeferredReadyState.c)
 *     KiAbPropagateBoosts @ 0x1402BC160 (KiAbPropagateBoosts.c)
 *     KiAbProcessThreadLocks @ 0x1402BC5E0 (KiAbProcessThreadLocks.c)
 *     KiDeliverApc @ 0x14030FB20 (KiDeliverApc.c)
 *     KiInswapAndReadyThread @ 0x14034DBDC (KiInswapAndReadyThread.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140428670 (KiSwapContext.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwTraceReadyThread @ 0x14046785A (EtwTraceReadyThread.c)
 */

void __fastcall KiReadyOutSwappedThreads(_QWORD *a1, unsigned __int8 a2)
{
  __int64 CurrentPrcb; // rbp
  unsigned __int64 v4; // r15
  _QWORD *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  ULONG_PTR v10; // r14
  int v11; // ecx
  struct _KPRCB *v12; // rdi
  __int64 v13; // rbx
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r8
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  struct _KPRCB *v19; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v21; // eax
  signed __int32 v22; // ett
  __int64 v23; // r8
  bool v24; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rdx
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  _DWORD *v30; // r9
  int v31; // eax
  void (__fastcall *v32)(_QWORD, _DWORD *, int *, _QWORD, _PROCESSOR_NUMBER *); // rax
  __int16 v33; // r15
  unsigned int *v34; // rbx
  unsigned __int64 v35; // rdi
  int v36; // r14d
  unsigned __int8 v37; // bp
  __int64 (__fastcall *v38)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v39; // eax
  __int64 (__fastcall *v40)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v41; // eax
  __int64 (__fastcall *v42)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v43; // eax
  _DWORD v44[2]; // [rsp+40h] [rbp-328h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp-320h] BYREF
  int v46; // [rsp+4Ch] [rbp-31Ch]
  __int128 v47; // [rsp+50h] [rbp-318h] BYREF
  int v48; // [rsp+60h] [rbp-308h]
  int v49; // [rsp+68h] [rbp-300h] BYREF
  int v50; // [rsp+6Ch] [rbp-2FCh] BYREF
  __int64 v51; // [rsp+70h] [rbp-2F8h] BYREF
  __int128 v52; // [rsp+78h] [rbp-2F0h] BYREF
  __int64 v53; // [rsp+88h] [rbp-2E0h]
  __int64 *v54; // [rsp+90h] [rbp-2D8h] BYREF
  _DWORD v55[2]; // [rsp+98h] [rbp-2D0h] BYREF
  _DWORD v56[2]; // [rsp+A0h] [rbp-2C8h] BYREF
  _DWORD v57[2]; // [rsp+A8h] [rbp-2C0h] BYREF
  _DWORD v58[2]; // [rsp+B0h] [rbp-2B8h] BYREF
  _DWORD v59[2]; // [rsp+B8h] [rbp-2B0h] BYREF
  _DWORD v60[2]; // [rsp+C0h] [rbp-2A8h] BYREF
  unsigned __int64 v61; // [rsp+C8h] [rbp-2A0h] BYREF
  int v62; // [rsp+D0h] [rbp-298h] BYREF
  __int128 v63; // [rsp+D4h] [rbp-294h]
  __int128 v64; // [rsp+E8h] [rbp-280h] BYREF
  _QWORD v65[34]; // [rsp+100h] [rbp-268h] BYREF
  _QWORD v66[34]; // [rsp+210h] [rbp-158h] BYREF
  int v67; // [rsp+360h] [rbp-8h]

  CurrentPrcb = (__int64)KeGetCurrentPrcb();
  v4 = a2;
  v5 = a1;
  do
  {
    v6 = (__int64)(v5 - 27);
    v49 = 0;
    v5 = (_QWORD *)*v5;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v49);
      while ( *(_QWORD *)(v6 + 64) );
    }
    KiEnterDeferredReadyState(v6);
    *(_QWORD *)(v6 + 64) = 0LL;
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    {
      LOBYTE(v9) = *(_BYTE *)(v6 + 567);
      LOBYTE(v7) = *(_BYTE *)(v6 + 566);
      EtwTraceReadyThread(v8, v7, v9, 0LL);
    }
    KiInswapAndReadyThread(CurrentPrcb, v6);
  }
  while ( v5 != a1 );
  if ( (unsigned __int8)v4 < 2u )
  {
    v10 = *(_QWORD *)(CurrentPrcb + 8);
    if ( *(_QWORD *)(CurrentPrcb + 16) )
    {
      v11 = *(unsigned __int8 *)(v10 + 792) | *(unsigned __int8 *)(v10 + 870);
      v51 = 0LL;
      if ( v11 != 63 )
      {
        v12 = KeGetCurrentPrcb();
        v54 = 0LL;
        KiAbProcessThreadLocks(v10, 1, 1, 1, (__int64)&v51, (__int64)&v54, (__int64)&v12->AbSelfIoBoostsList);
        KiAbPropagateBoosts(&v54, (__int64)&v12->AbSelfIoBoostsList, (__int64)&v51);
        KiReadyDeferredReadyList((__int64)v12, &v51);
      }
      v50 = 0;
      v61 = CurrentPrcb & 0xFFFFFFFFFFFFFFFEuLL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentPrcb + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v50);
        while ( *(_QWORD *)(CurrentPrcb + 48) );
      }
      v13 = *(_QWORD *)(CurrentPrcb + 16);
      *(_QWORD *)(CurrentPrcb + 16) = 0LL;
      _disable();
      *(_BYTE *)(CurrentPrcb + 32) = 1;
      v14 = __rdtsc();
      v15 = v14 - *(_QWORD *)(CurrentPrcb + 33152);
      *(_QWORD *)(v10 + 72) += v15;
      v16 = *(unsigned int *)(v10 + 80);
      v17 = v15 * *(unsigned int *)(CurrentPrcb + 33208);
      *(_QWORD *)(CurrentPrcb + 33152) = v14;
      v18 = (v17 >> 16) + v16;
      if ( v18 > 0xFFFFFFFF )
        LODWORD(v18) = -1;
      v24 = (*(_BYTE *)(v10 + 2) & 0xBE) == 0;
      *(_DWORD *)(v10 + 80) = v18;
      if ( !v24 )
        KiEndThreadAccountingPeriodEx(CurrentPrcb, v10, v15, 1u);
      v19 = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)v19->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v21 = *SchedulerAssist;
        do
        {
          v22 = v21;
          v21 = _InterlockedCompareExchange(SchedulerAssist, v21 & 0xFFDFFFFF, v21);
        }
        while ( v22 != v21 );
        if ( (v21 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v19);
      }
      _enable();
      *(_QWORD *)(CurrentPrcb + 8) = v13;
      if ( *(_BYTE *)(v13 + 388) == 1 )
        *(_DWORD *)(v13 + 132) = *(_DWORD *)(v13 + 132) - *(_DWORD *)(v13 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v13 + 388) = 2;
      *(_BYTE *)(v10 + 390) = v4;
      *(_BYTE *)(v10 + 643) = 32;
      KiQueueReadyThread(CurrentPrcb, (__int64 *)&v61, v10);
      LOBYTE(v23) = v4;
      v24 = (unsigned __int8)KiSwapContext(v10, v13, v23) == 0;
    }
    else
    {
      v24 = (*(_DWORD *)(v10 + 116) & 0x40) == 0;
    }
    if ( !v24 )
    {
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(CurrentIrql - 2) <= 0xDu )
        {
          v26 = KeGetCurrentPrcb();
          v27 = v26->SchedulerAssist;
          v24 = (v27[5] & 0xFFFF0003) == 0;
          v27[5] &= 0xFFFF0003;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(v26);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v10 + 116) &= ~0x40u;
      KiDeliverApc(0, 0LL, 0LL);
    }
    if ( (_DWORD)KiIrqlFlags )
    {
      v28 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v28 - 2) <= 0xDu )
      {
        v29 = KeGetCurrentPrcb();
        v30 = v29->SchedulerAssist;
        v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v24 = (v31 & v30[5]) == 0;
        v30[5] &= v31;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick(v29);
      }
    }
    __writecr8(v4);
    return;
  }
  if ( !*(_QWORD *)(CurrentPrcb + 16) || *(_BYTE *)(CurrentPrcb + 13242) )
    return;
  if ( *(_BYTE *)(CurrentPrcb + 32) )
  {
    *(_BYTE *)(CurrentPrcb + 6) = 1;
    return;
  }
  memset(&v65[1], 0, 0x100uLL);
  v63 = 0LL;
  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) != 0 && !HalpInterruptNoShorthand )
  {
    v62 = 3;
    ProcNumber = (_PROCESSOR_NUMBER)-1;
    v46 = 1;
    v44[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
    v44[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
    v32 = *(void (__fastcall **)(_QWORD, _DWORD *, int *, _QWORD, _PROCESSOR_NUMBER *))(HalpInterruptController + 120);
    _disable();
    v32(*(_QWORD *)(HalpInterruptController + 16), v44, &v62, (unsigned int)(v46 + 46), &ProcNumber);
    if ( (v67 & 0x200) != 0 )
      _enable();
    return;
  }
  LODWORD(v65[0]) = 2097153;
  memset((char *)v65 + 4, 0, 0x104uLL);
  KeAddProcessorAffinityEx((unsigned __int16 *)v65, KeGetPcr()->Prcb.Number);
  v44[0] = 0;
  v53 = 0LL;
  v64 = 0LL;
  v52 = 0LL;
  memset(&v66[1], 0, 0x100uLL);
  v48 = 0;
  v47 = 0LL;
  if ( qword_140C62548 )
  {
    qword_140C62548(v65, 47LL);
    return;
  }
  LODWORD(v66[0]) = 2097153;
  memset((char *)v66 + 4, 0, 0x104uLL);
  KiAndAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, (unsigned __int16 *)v65, v66, 0x20u);
  v33 = v67;
  if ( HalpInterruptClusterModeEnabled )
  {
    v34 = (unsigned int *)HalpInterruptClusterData;
    ProcNumber = 0;
    while ( (unsigned __int64)v34 < HalpInterruptClusterDataEnd )
    {
      if ( (unsigned int)KeAndGroupAffinityEx(v65, (__int64)(v34 + 2), (char *)&v64) )
      {
        v35 = v64;
        v36 = 0;
        LODWORD(v47) = 6;
        v37 = 0;
        *((_QWORD *)&v47 + 1) = *v34;
        ProcNumber.Group = WORD4(v64);
        for ( ProcNumber.Number = 0; v35; ProcNumber.Number = v37 )
        {
          if ( (v35 & 1) != 0 )
          {
            v44[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
            v36 |= *(_DWORD *)(HalpInterruptTargets + 24LL * v44[0] + 12);
            HIDWORD(v47) = v36;
          }
          ++v37;
          v35 >>= 1;
        }
        v55[0] = -1;
        v55[1] = 1;
        v56[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v56[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v38 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
        _disable();
        v39 = v38(*(_QWORD *)(HalpInterruptController + 16), v56, &v47, 47LL, v55);
        if ( (v33 & 0x200) != 0 )
          _enable();
        if ( v39 < 0 )
          return;
      }
      v34 += 6;
    }
    goto LABEL_75;
  }
  if ( HalpInterruptPhysicalModeOnly )
    goto LABEL_75;
  *((_QWORD *)&v52 + 1) = v65[1];
  *(_QWORD *)&v52 = v65;
  LODWORD(v47) = 5;
  DWORD2(v47) = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(v44, (unsigned __int16 **)&v52) )
  {
    if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v44[0]) == 5 )
      DWORD2(v47) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v44[0] + 8);
  }
  if ( !DWORD2(v47) )
    goto LABEL_75;
  v57[0] = -1;
  v57[1] = 1;
  v58[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
  v58[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
  v40 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
  _disable();
  v41 = v40(*(_QWORD *)(HalpInterruptController + 16), v58, &v47, 47LL, v57);
  if ( (v33 & 0x200) != 0 )
    _enable();
  if ( v41 >= 0 )
  {
LABEL_75:
    *((_QWORD *)&v52 + 1) = v66[1];
    *(_QWORD *)&v52 = v66;
    v44[0] = 0;
    LOWORD(v53) = 0;
    do
    {
      if ( (unsigned int)KeEnumerateNextProcessor(v44, (unsigned __int16 **)&v52) )
        break;
      LODWORD(v47) = 4;
      v59[0] = -1;
      v59[1] = 1;
      DWORD2(v47) = *(_DWORD *)(HalpInterruptTargets + 24LL * v44[0] + 8);
      v60[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v60[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v42 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
      _disable();
      v43 = v42(*(_QWORD *)(HalpInterruptController + 16), v60, &v47, 47LL, v59);
      if ( (v33 & 0x200) != 0 )
        _enable();
    }
    while ( v43 >= 0 );
  }
}
