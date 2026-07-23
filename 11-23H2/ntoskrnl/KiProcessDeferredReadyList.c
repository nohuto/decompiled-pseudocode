/*
 * XREFs of KiProcessDeferredReadyList @ 0x1402B1100
 * Callers:
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     PsImpersonateContainerOfThread @ 0x14025A170 (PsImpersonateContainerOfThread.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A9440 (NtWaitForWorkViaWorkerFactory.c)
 *     KeSetPriorityThread @ 0x1402B05D0 (KeSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1402B98F0 (KeSetActualBasePriorityThread.c)
 *     KiExitThreadWait @ 0x1402BBF20 (KiExitThreadWait.c)
 *     KiAbApplyWakeupBoost @ 0x1402BCB30 (KiAbApplyWakeupBoost.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140306090 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x140306EE0 (KeSetSystemGroupAffinityThread.c)
 *     KeSetPriorityBoost @ 0x140307C20 (KeSetPriorityBoost.c)
 *     KeWaitForMultipleObjects @ 0x140311430 (KeWaitForMultipleObjects.c)
 *     KiClearSystemPriority @ 0x140346270 (KiClearSystemPriority.c)
 *     KeSetPriorityAndQuantumProcess @ 0x140350330 (KeSetPriorityAndQuantumProcess.c)
 *     KiSetSystemPriorityThread @ 0x140356070 (KiSetSystemPriorityThread.c)
 *     KeSetAffinityProcess @ 0x1403AEC48 (KeSetAffinityProcess.c)
 *     KiAbForceProcessLockEntry @ 0x1403CCC68 (KiAbForceProcessLockEntry.c)
 *     KiUpdateVpBackingThreadPriorityOnPriorityQuery @ 0x14056EFEC (KiUpdateVpBackingThreadPriorityOnPriorityQuery.c)
 *     KiParkCurrentProcessor @ 0x14057E38C (KiParkCurrentProcessor.c)
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
 *     KiAbPropagateBoosts @ 0x1402BC160 (KiAbPropagateBoosts.c)
 *     KiAbProcessThreadLocks @ 0x1402BC5E0 (KiAbProcessThreadLocks.c)
 *     KiDeliverApc @ 0x14030FB20 (KiDeliverApc.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140428670 (KiSwapContext.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char __fastcall KiProcessDeferredReadyList(__int64 a1, _QWORD *a2, unsigned __int8 a3)
{
  _QWORD *v3; // rbx
  unsigned __int64 v4; // r13
  char v7; // r14
  unsigned __int8 *v8; // rbp
  __int64 v9; // rax
  ULONG_PTR v10; // rbp
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v12; // rbx
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  bool v18; // zf
  struct _KPRCB *v19; // r8
  signed __int32 *SchedulerAssist; // rdx
  signed __int32 v21; // eax
  signed __int32 v22; // ett
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rdx
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // rcx
  _DWORD *v28; // rdx
  struct _KPRCB *v29; // r10
  _DWORD *v30; // r9
  __int64 (__fastcall *v31)(_QWORD, _DWORD *, int *, _QWORD, _PROCESSOR_NUMBER *); // r10
  __int16 v32; // r13
  unsigned int *v33; // r14
  unsigned __int8 v34; // di
  int v35; // esi
  unsigned __int64 v36; // rbx
  __int64 (__fastcall *v37)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v38)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v39)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  _DWORD v41[2]; // [rsp+40h] [rbp-338h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp-330h] BYREF
  int v43; // [rsp+4Ch] [rbp-32Ch]
  __int128 v44; // [rsp+50h] [rbp-328h] BYREF
  int v45; // [rsp+60h] [rbp-318h]
  int v46; // [rsp+68h] [rbp-310h] BYREF
  __int64 v47; // [rsp+70h] [rbp-308h] BYREF
  _DWORD v48[2]; // [rsp+78h] [rbp-300h] BYREF
  _DWORD v49[2]; // [rsp+80h] [rbp-2F8h] BYREF
  _DWORD v50[2]; // [rsp+88h] [rbp-2F0h] BYREF
  _DWORD v51[2]; // [rsp+90h] [rbp-2E8h] BYREF
  _DWORD v52[2]; // [rsp+98h] [rbp-2E0h] BYREF
  _DWORD v53[2]; // [rsp+A0h] [rbp-2D8h] BYREF
  __int128 v54; // [rsp+A8h] [rbp-2D0h] BYREF
  __int64 v55; // [rsp+B8h] [rbp-2C0h]
  __int64 v56; // [rsp+C0h] [rbp-2B8h] BYREF
  unsigned __int64 v57; // [rsp+C8h] [rbp-2B0h] BYREF
  int v58; // [rsp+D0h] [rbp-2A8h] BYREF
  __int128 v59; // [rsp+D4h] [rbp-2A4h]
  __int128 v60; // [rsp+E8h] [rbp-290h] BYREF
  _QWORD v61[34]; // [rsp+100h] [rbp-278h] BYREF
  _QWORD v62[34]; // [rsp+210h] [rbp-168h] BYREF
  int v63; // [rsp+370h] [rbp-8h]

  v3 = (_QWORD *)*a2;
  v4 = a3;
  v7 = 0;
  if ( *a2 )
  {
    *a2 = *v3;
    do
    {
      KiDeferredReadySingleThread(a1, (unsigned __int64)(v3 - 27), (__int64)a2);
      v3 = (_QWORD *)*a2;
      ++v7;
      if ( *a2 )
        *a2 = *v3;
      v8 = (unsigned __int8 *)(a1 + 12760);
      if ( (v7 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch((unsigned __int8 *)(a1 + 12760));
    }
    while ( v3 );
  }
  else
  {
    v8 = (unsigned __int8 *)(a1 + 12760);
  }
  KiFlushSoftwareInterruptBatch(v8);
  v9 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)v4 < 2u )
  {
    v10 = *(_QWORD *)(a1 + 8);
    if ( v9 )
    {
      if ( (*(unsigned __int8 *)(v10 + 792) | *(unsigned __int8 *)(v10 + 870)) != 0x3F )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v47 = 0LL;
        v56 = 0LL;
        KiAbProcessThreadLocks(v10, 1, 1, 1, (__int64)&v47, (__int64)&v56, (__int64)&CurrentPrcb->AbSelfIoBoostsList);
        KiAbPropagateBoosts(&v56, &CurrentPrcb->AbSelfIoBoostsList, &v47);
        KiReadyDeferredReadyList((__int64)CurrentPrcb, &v47);
      }
      v46 = 0;
      v57 = a1 & 0xFFFFFFFFFFFFFFFEuLL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v46);
        while ( *(_QWORD *)(a1 + 48) );
      }
      v12 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      _disable();
      *(_BYTE *)(a1 + 32) = 1;
      v13 = __rdtsc();
      v14 = v13 - *(_QWORD *)(a1 + 33152);
      *(_QWORD *)(v10 + 72) += v14;
      v15 = *(unsigned int *)(v10 + 80);
      v16 = v14 * *(unsigned int *)(a1 + 33208);
      *(_QWORD *)(a1 + 33152) = v13;
      v17 = (v16 >> 16) + v15;
      if ( v17 > 0xFFFFFFFF )
        LODWORD(v17) = -1;
      v18 = (*(_BYTE *)(v10 + 2) & 0xBE) == 0;
      *(_DWORD *)(v10 + 80) = v17;
      if ( !v18 )
        KiEndThreadAccountingPeriodEx(a1, v10, v14, 1u);
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
      *(_QWORD *)(a1 + 8) = v12;
      if ( *(_BYTE *)(v12 + 388) == 1 )
        *(_DWORD *)(v12 + 132) = *(_DWORD *)(v12 + 132) - *(_DWORD *)(v12 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v12 + 388) = 2;
      *(_BYTE *)(v10 + 643) = 32;
      *(_BYTE *)(v10 + 390) = v4;
      KiQueueReadyThread(a1, (__int64 *)&v57, v10);
      LOBYTE(v9) = KiSwapContext(v10, v12, (unsigned __int8)v4);
      if ( !(_BYTE)v9 )
        goto LABEL_42;
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(CurrentIrql - 2) <= 0xDu )
        {
          v24 = KeGetCurrentPrcb();
          v25 = v24->SchedulerAssist;
          v18 = (v25[5] & 0xFFFF0003) == 0;
          v25[5] &= 0xFFFF0003;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(v24);
        }
      }
    }
    else
    {
      LODWORD(v9) = *(_DWORD *)(v10 + 116);
      if ( (v9 & 0x40) == 0 )
        goto LABEL_42;
      if ( (_DWORD)KiIrqlFlags )
      {
        v26 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v26 - 2) <= 0xDu )
        {
          v27 = KeGetCurrentPrcb();
          v28 = v27->SchedulerAssist;
          v18 = (v28[5] & 0xFFFF0003) == 0;
          v28[5] &= 0xFFFF0003;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(v27);
        }
      }
    }
    __writecr8(1uLL);
    *(_DWORD *)(v10 + 116) &= ~0x40u;
    LOBYTE(v9) = KiDeliverApc(0LL, 0LL, 0LL);
LABEL_42:
    if ( (_DWORD)KiIrqlFlags )
    {
      LOBYTE(v9) = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v9) = v9 - 2;
        if ( (unsigned __int8)v9 <= 0xDu )
        {
          v29 = KeGetCurrentPrcb();
          v30 = v29->SchedulerAssist;
          LODWORD(v9) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v18 = ((unsigned int)v9 & v30[5]) == 0;
          v30[5] &= v9;
          if ( v18 )
            LOBYTE(v9) = KiRemoveSystemWorkPriorityKick(v29);
        }
      }
    }
    __writecr8(v4);
    return v9;
  }
  if ( !v9 )
    return v9;
  LOBYTE(v9) = *(_BYTE *)(a1 + 13242);
  if ( (_BYTE)v9 )
    return v9;
  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 6) = 1;
    return v9;
  }
  memset(&v61[1], 0, 0x100uLL);
  v59 = 0LL;
  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) != 0 && !HalpInterruptNoShorthand )
  {
    v58 = 3;
    v31 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, int *, _QWORD, _PROCESSOR_NUMBER *))(HalpInterruptController + 120);
    ProcNumber = (_PROCESSOR_NUMBER)-1;
    v41[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
    v41[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
    v43 = 1;
    _disable();
    LOBYTE(v9) = v31(*(_QWORD *)(HalpInterruptController + 16), v41, &v58, (unsigned int)(v43 + 46), &ProcNumber);
    if ( (v63 & 0x200) != 0 )
      _enable();
    return v9;
  }
  LODWORD(v61[0]) = 2097153;
  memset((char *)v61 + 4, 0, 0x104uLL);
  KeAddProcessorAffinityEx((unsigned __int16 *)v61, KeGetPcr()->Prcb.Number);
  v55 = 0LL;
  v41[0] = 0;
  v60 = 0LL;
  v54 = 0LL;
  memset(&v62[1], 0, 0x100uLL);
  v45 = 0;
  v44 = 0LL;
  if ( qword_140C62548 )
  {
    LOBYTE(v9) = qword_140C62548(v61, 47LL);
    return v9;
  }
  LODWORD(v62[0]) = 2097153;
  memset((char *)v62 + 4, 0, 0x104uLL);
  KiAndAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, (unsigned __int16 *)v61, v62, 0x20u);
  v32 = v63;
  if ( !HalpInterruptClusterModeEnabled )
  {
    if ( !HalpInterruptPhysicalModeOnly )
    {
      *((_QWORD *)&v54 + 1) = v61[1];
      LODWORD(v44) = 5;
      *(_QWORD *)&v54 = v61;
      DWORD2(v44) = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(v41, (unsigned __int16 **)&v54) )
      {
        if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v41[0]) == 5 )
          DWORD2(v44) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v41[0] + 8);
      }
      if ( DWORD2(v44) )
      {
        v50[0] = -1;
        v50[1] = 1;
        v51[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v51[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v38 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
        _disable();
        LODWORD(v9) = v38(*(_QWORD *)(HalpInterruptController + 16), v51, &v44, 47LL, v50);
        if ( (v32 & 0x200) != 0 )
          _enable();
        if ( (int)v9 < 0 )
          return v9;
      }
    }
LABEL_79:
    *((_QWORD *)&v54 + 1) = v62[1];
    v41[0] = 0;
    *(_QWORD *)&v54 = v62;
    LOWORD(v55) = 0;
    for ( LODWORD(v9) = KeEnumerateNextProcessor(v41, (unsigned __int16 **)&v54);
          !(_DWORD)v9;
          LODWORD(v9) = KeEnumerateNextProcessor(v41, (unsigned __int16 **)&v54) )
    {
      LODWORD(v44) = 4;
      v52[0] = -1;
      v52[1] = 1;
      DWORD2(v44) = *(_DWORD *)(HalpInterruptTargets + 24LL * v41[0] + 8);
      v53[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v53[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v39 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
      _disable();
      LODWORD(v9) = v39(*(_QWORD *)(HalpInterruptController + 16), v53, &v44, 47LL, v52);
      if ( (v32 & 0x200) != 0 )
        _enable();
      if ( (int)v9 < 0 )
        break;
    }
    return v9;
  }
  v33 = (unsigned int *)HalpInterruptClusterData;
  ProcNumber = 0;
  if ( HalpInterruptClusterData >= (unsigned __int64)HalpInterruptClusterDataEnd )
    goto LABEL_79;
  while ( 1 )
  {
    if ( (unsigned int)KeAndGroupAffinityEx(v61, (__int64)(v33 + 2), (char *)&v60) )
    {
      v34 = 0;
      LODWORD(v44) = 6;
      v35 = 0;
      v36 = v60;
      *((_QWORD *)&v44 + 1) = *v33;
      ProcNumber.Group = WORD4(v60);
      for ( ProcNumber.Number = 0; v36; ProcNumber.Number = v34 )
      {
        if ( (v36 & 1) != 0 )
        {
          v41[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
          v35 |= *(_DWORD *)(HalpInterruptTargets + 24LL * v41[0] + 12);
          HIDWORD(v44) = v35;
        }
        ++v34;
        v36 >>= 1;
      }
      v48[0] = -1;
      v48[1] = 1;
      v49[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v49[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v37 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
      _disable();
      LODWORD(v9) = v37(*(_QWORD *)(HalpInterruptController + 16), v49, &v44, 47LL, v48);
      if ( (v32 & 0x200) != 0 )
        _enable();
      if ( (int)v9 < 0 )
        return v9;
    }
    v33 += 6;
    if ( (unsigned __int64)v33 >= HalpInterruptClusterDataEnd )
      goto LABEL_79;
  }
}
