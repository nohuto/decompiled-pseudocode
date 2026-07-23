/*
 * XREFs of KiCheckForThreadDispatch @ 0x1402BCA48
 * Callers:
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KeRemoveQueueEx @ 0x1402A9F20 (KeRemoveQueueEx.c)
 *     KiFastReadyThread @ 0x1402BB954 (KiFastReadyThread.c)
 *     KiExitThreadWait @ 0x1402BBC60 (KiExitThreadWait.c)
 *     KiAbProcessContextSwitch @ 0x1402BBDE8 (KiAbProcessContextSwitch.c)
 *     KeRemovePriQueue @ 0x1402BF080 (KeRemovePriQueue.c)
 *     KiBeginThreadWait @ 0x1402C18E0 (KiBeginThreadWait.c)
 *     KeGenericProcessorCallback @ 0x140305A04 (KeGenericProcessorCallback.c)
 *     KeWaitForMultipleObjects @ 0x140310FC0 (KeWaitForMultipleObjects.c)
 * Callees:
 *     KiQueueReadyThread @ 0x1402344F0 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     KiEndThreadAccountingPeriodEx @ 0x140248430 (KiEndThreadAccountingPeriodEx.c)
 *     KiReadyDeferredReadyList @ 0x140249C70 (KiReadyDeferredReadyList.c)
 *     KiAndAffinityEx @ 0x140252320 (KiAndAffinityEx.c)
 *     KeAndGroupAffinityEx @ 0x140254360 (KeAndGroupAffinityEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x140255090 (KeGetProcessorIndexFromNumber.c)
 *     KeEnumerateNextProcessor @ 0x140257190 (KeEnumerateNextProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x140257280 (KeAddProcessorAffinityEx.c)
 *     KiAbPropagateBoosts @ 0x1402BBEA0 (KiAbPropagateBoosts.c)
 *     KiAbProcessThreadLocks @ 0x1402BC320 (KiAbProcessThreadLocks.c)
 *     KiDeliverApc @ 0x14030F6B0 (KiDeliverApc.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KiSwapContext @ 0x140427C20 (KiSwapContext.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiCheckForThreadDispatch(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  ULONG_PTR v5; // r15
  int v6; // ecx
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v8; // rbx
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  struct _KPRCB *v14; // r8
  signed __int32 *SchedulerAssist; // rdx
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  __int64 v18; // r8
  bool v19; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v21; // rcx
  _DWORD *v22; // rdx
  struct _KPRCB *v23; // r10
  _DWORD *v24; // r9
  __int64 (__fastcall *v25)(_QWORD, _DWORD *, int *, _QWORD, _PROCESSOR_NUMBER *); // rax
  unsigned int *v26; // rbx
  unsigned __int64 v27; // rdi
  int v28; // r15d
  unsigned __int8 v29; // r14
  __int64 (__fastcall *v30)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int16 v31; // bx
  __int64 (__fastcall *v32)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v33)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  _DWORD v35[2]; // [rsp+40h] [rbp-328h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp-320h] BYREF
  int v37; // [rsp+4Ch] [rbp-31Ch]
  __int128 v38; // [rsp+50h] [rbp-318h] BYREF
  int v39; // [rsp+60h] [rbp-308h]
  int v40; // [rsp+68h] [rbp-300h] BYREF
  __int64 v41; // [rsp+70h] [rbp-2F8h] BYREF
  __int128 v42; // [rsp+78h] [rbp-2F0h] BYREF
  __int64 v43; // [rsp+88h] [rbp-2E0h]
  __int64 *v44; // [rsp+90h] [rbp-2D8h] BYREF
  _DWORD v45[2]; // [rsp+98h] [rbp-2D0h] BYREF
  _DWORD v46[2]; // [rsp+A0h] [rbp-2C8h] BYREF
  _DWORD v47[2]; // [rsp+A8h] [rbp-2C0h] BYREF
  _DWORD v48[2]; // [rsp+B0h] [rbp-2B8h] BYREF
  _DWORD v49[2]; // [rsp+B8h] [rbp-2B0h] BYREF
  _DWORD v50[2]; // [rsp+C0h] [rbp-2A8h] BYREF
  unsigned __int64 v51; // [rsp+C8h] [rbp-2A0h] BYREF
  int v52; // [rsp+D0h] [rbp-298h] BYREF
  __int128 v53; // [rsp+D4h] [rbp-294h]
  __int128 v54; // [rsp+E8h] [rbp-280h] BYREF
  _QWORD v55[34]; // [rsp+100h] [rbp-268h] BYREF
  _QWORD v56[34]; // [rsp+210h] [rbp-158h] BYREF
  int v57; // [rsp+360h] [rbp-8h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = a2;
  if ( a2 < 2u )
  {
    v5 = *(_QWORD *)(a1 + 8);
    if ( v2 )
    {
      v6 = *(unsigned __int8 *)(v5 + 792) | *(unsigned __int8 *)(v5 + 870);
      v41 = 0LL;
      if ( v6 != 63 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v44 = 0LL;
        KiAbProcessThreadLocks(v5, 1, 1, 1, (__int64)&v41, (__int64)&v44, (__int64)&CurrentPrcb->AbSelfIoBoostsList);
        KiAbPropagateBoosts(&v44, (__int64)&CurrentPrcb->AbSelfIoBoostsList, (__int64)&v41);
        KiReadyDeferredReadyList((__int64)CurrentPrcb, &v41);
      }
      v40 = 0;
      v51 = a1 & 0xFFFFFFFFFFFFFFFEuLL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v40);
        while ( *(_QWORD *)(a1 + 48) );
      }
      v8 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      _disable();
      *(_BYTE *)(a1 + 32) = 1;
      v9 = __rdtsc();
      v10 = v9 - *(_QWORD *)(a1 + 33152);
      *(_QWORD *)(v5 + 72) += v10;
      v11 = *(unsigned int *)(v5 + 80);
      v12 = v10 * *(unsigned int *)(a1 + 33208);
      *(_QWORD *)(a1 + 33152) = v9;
      v13 = (v12 >> 16) + v11;
      if ( v13 > 0xFFFFFFFF )
        LODWORD(v13) = -1;
      v19 = (*(_BYTE *)(v5 + 2) & 0xBE) == 0;
      *(_DWORD *)(v5 + 80) = v13;
      if ( !v19 )
        KiEndThreadAccountingPeriodEx(a1, v5, v10, 1u);
      v14 = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)v14->SchedulerAssist;
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
          KiRemoveSystemWorkPriorityKick(v14);
      }
      _enable();
      *(_QWORD *)(a1 + 8) = v8;
      if ( *(_BYTE *)(v8 + 388) == 1 )
        *(_DWORD *)(v8 + 132) = *(_DWORD *)(v8 + 132) - *(_DWORD *)(v8 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v8 + 388) = 2;
      *(_BYTE *)(v5 + 390) = v3;
      *(_BYTE *)(v5 + 643) = 32;
      KiQueueReadyThread(a1, (__int64 *)&v51, v5);
      LOBYTE(v18) = v3;
      LOBYTE(v2) = KiSwapContext(v5, v8, v18);
      v19 = (_BYTE)v2 == 0;
    }
    else
    {
      LODWORD(v2) = *(_DWORD *)(v5 + 116);
      v19 = (v2 & 0x40) == 0;
    }
    if ( !v19 )
    {
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(CurrentIrql - 2) <= 0xDu )
        {
          v21 = KeGetCurrentPrcb();
          v22 = v21->SchedulerAssist;
          v19 = (v22[5] & 0xFFFF0003) == 0;
          v22[5] &= 0xFFFF0003;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v5 + 116) &= ~0x40u;
      LOBYTE(v2) = KiDeliverApc(0LL, 0LL, 0LL);
    }
    if ( (_DWORD)KiIrqlFlags )
    {
      LOBYTE(v2) = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v2) = v2 - 2;
        if ( (unsigned __int8)v2 <= 0xDu )
        {
          v23 = KeGetCurrentPrcb();
          v24 = v23->SchedulerAssist;
          LODWORD(v2) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v19 = ((unsigned int)v2 & v24[5]) == 0;
          v24[5] &= v2;
          if ( v19 )
            LOBYTE(v2) = KiRemoveSystemWorkPriorityKick(v23);
        }
      }
    }
    __writecr8(v3);
    return v2;
  }
  if ( !v2 )
    return v2;
  LOBYTE(v2) = *(_BYTE *)(a1 + 13242);
  if ( (_BYTE)v2 )
    return v2;
  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 6) = 1;
    return v2;
  }
  memset(&v55[1], 0, 0x100uLL);
  v53 = 0LL;
  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) != 0 && !HalpInterruptNoShorthand )
  {
    v52 = 3;
    ProcNumber = (_PROCESSOR_NUMBER)-1;
    v37 = 1;
    v35[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
    v35[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
    v25 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, int *, _QWORD, _PROCESSOR_NUMBER *))(HalpInterruptController + 120);
    _disable();
    LOBYTE(v2) = v25(*(_QWORD *)(HalpInterruptController + 16), v35, &v52, (unsigned int)(v37 + 46), &ProcNumber);
    if ( (v57 & 0x200) != 0 )
      _enable();
    return v2;
  }
  LODWORD(v55[0]) = 2097153;
  memset((char *)v55 + 4, 0, 0x104uLL);
  KeAddProcessorAffinityEx((unsigned __int16 *)v55, KeGetPcr()->Prcb.Number);
  v35[0] = 0;
  v43 = 0LL;
  v54 = 0LL;
  v42 = 0LL;
  memset(&v56[1], 0, 0x100uLL);
  v39 = 0;
  v38 = 0LL;
  if ( qword_140C62628 )
  {
    LOBYTE(v2) = qword_140C62628(v55, 47LL);
    return v2;
  }
  LODWORD(v56[0]) = 2097153;
  memset((char *)v56 + 4, 0, 0x104uLL);
  KiAndAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, (unsigned __int16 *)v55, v56, 0x20u);
  if ( HalpInterruptClusterModeEnabled )
  {
    v26 = (unsigned int *)HalpInterruptClusterData;
    ProcNumber = 0;
    while ( (unsigned __int64)v26 < HalpInterruptClusterDataEnd )
    {
      if ( (unsigned int)KeAndGroupAffinityEx(v55, (__int64)(v26 + 2), (char *)&v54) )
      {
        v27 = v54;
        v28 = 0;
        LODWORD(v38) = 6;
        v29 = 0;
        *((_QWORD *)&v38 + 1) = *v26;
        ProcNumber.Group = WORD4(v54);
        for ( ProcNumber.Number = 0; v27; ProcNumber.Number = v29 )
        {
          if ( (v27 & 1) != 0 )
          {
            v35[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
            v28 |= *(_DWORD *)(HalpInterruptTargets + 24LL * v35[0] + 12);
            HIDWORD(v38) = v28;
          }
          ++v29;
          v27 >>= 1;
        }
        v45[0] = -1;
        v45[1] = 1;
        v46[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v46[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v30 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
        _disable();
        LODWORD(v2) = v30(*(_QWORD *)(HalpInterruptController + 16), v46, &v38, 47LL, v45);
        if ( (v57 & 0x200) != 0 )
          _enable();
        if ( (int)v2 < 0 )
          return v2;
      }
      v26 += 6;
    }
    goto LABEL_57;
  }
  if ( HalpInterruptPhysicalModeOnly )
    goto LABEL_57;
  *((_QWORD *)&v42 + 1) = v55[1];
  *(_QWORD *)&v42 = v55;
  LODWORD(v38) = 5;
  DWORD2(v38) = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(v35, (unsigned __int16 **)&v42) )
  {
    if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v35[0]) == 5 )
      DWORD2(v38) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v35[0] + 8);
  }
  if ( !DWORD2(v38) )
  {
LABEL_57:
    v31 = v57;
LABEL_58:
    *((_QWORD *)&v42 + 1) = v56[1];
    *(_QWORD *)&v42 = v56;
    v35[0] = 0;
    LOWORD(v43) = 0;
    do
    {
      LODWORD(v2) = KeEnumerateNextProcessor(v35, (unsigned __int16 **)&v42);
      if ( (_DWORD)v2 )
        break;
      LODWORD(v38) = 4;
      v49[0] = -1;
      v49[1] = 1;
      DWORD2(v38) = *(_DWORD *)(HalpInterruptTargets + 24LL * v35[0] + 8);
      v50[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v50[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v33 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
      _disable();
      LODWORD(v2) = v33(*(_QWORD *)(HalpInterruptController + 16), v50, &v38, 47LL, v49);
      if ( (v31 & 0x200) != 0 )
        _enable();
    }
    while ( (int)v2 >= 0 );
    return v2;
  }
  v47[0] = -1;
  v47[1] = 1;
  v48[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
  v48[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
  v32 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
  _disable();
  LODWORD(v2) = v32(*(_QWORD *)(HalpInterruptController + 16), v48, &v38, 47LL, v47);
  v31 = v57;
  if ( (v57 & 0x200) != 0 )
    _enable();
  if ( (int)v2 >= 0 )
    goto LABEL_58;
  return v2;
}
