/*
 * XREFs of KeRevertToUserMultipleGroupAffinityThread @ 0x14036BAC8
 * Callers:
 *     PsRevertToUserMultipleGroupAffinityThread @ 0x1405A4120 (PsRevertToUserMultipleGroupAffinityThread.c)
 *     MiCombineAllPhysicalMemory @ 0x1406F9DC0 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     KiQueueReadyThread @ 0x1402344F0 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x14023A2B0 (KiDeferredReadySingleThread.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     KiEndThreadAccountingPeriodEx @ 0x140248430 (KiEndThreadAccountingPeriodEx.c)
 *     KiReadyDeferredReadyList @ 0x140249C70 (KiReadyDeferredReadyList.c)
 *     KiAndAffinityEx @ 0x140252320 (KiAndAffinityEx.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252640 (KiFlushSoftwareInterruptBatch.c)
 *     KeAndGroupAffinityEx @ 0x140254360 (KeAndGroupAffinityEx.c)
 *     KiCopyAffinityEx @ 0x1402544A0 (KiCopyAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x140255050 (KeIsEmptyAffinityEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x140255090 (KeGetProcessorIndexFromNumber.c)
 *     KeEnumerateNextProcessor @ 0x140257190 (KeEnumerateNextProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x140257280 (KeAddProcessorAffinityEx.c)
 *     KiAbPropagateBoosts @ 0x1402BBEA0 (KiAbPropagateBoosts.c)
 *     KiAbProcessThreadLocks @ 0x1402BC320 (KiAbProcessThreadLocks.c)
 *     KiSetSystemAffinityThread @ 0x14030702C (KiSetSystemAffinityThread.c)
 *     KiDeliverApc @ 0x14030F6B0 (KiDeliverApc.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x140427C20 (KiSwapContext.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KeRevertToUserMultipleGroupAffinityThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  int MiscFlags; // eax
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r9
  __int64 v6; // rdx
  __int64 CurrentPrcb; // rsi
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  unsigned int UserIdealProcessor; // r12d
  unsigned __int16 v10; // dx
  unsigned __int16 *v11; // r15
  char v12; // al
  char v13; // al
  _WORD *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  struct _SINGLE_LIST_ENTRY *v17; // r8
  _WORD *v18; // rbp
  _QWORD *v19; // rbx
  int v20; // ebp
  char v21; // di
  ULONG_PTR v22; // rbp
  struct _KPRCB *v23; // rdi
  __int64 v24; // rbx
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // r8
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  struct _KPRCB *v30; // rcx
  signed __int32 *v31; // r8
  signed __int32 v32; // eax
  signed __int32 v33; // ett
  __int64 v34; // r8
  bool v35; // zf
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // rcx
  _DWORD *v38; // rdx
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r9
  _DWORD *v41; // r8
  int v42; // eax
  __int64 (__fastcall *v43)(_QWORD, _DWORD *, int *, _QWORD, _PROCESSOR_NUMBER *); // rax
  __int16 v44; // r12
  unsigned int *v45; // rbx
  unsigned __int64 v46; // rdi
  unsigned __int8 v47; // si
  bool v48; // zf
  __int64 (__fastcall *v49)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v50)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v51)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  _DWORD v53[2]; // [rsp+40h] [rbp-328h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp-320h] BYREF
  int v55; // [rsp+4Ch] [rbp-31Ch]
  _QWORD *v56; // [rsp+50h] [rbp-318h] BYREF
  __int128 v57; // [rsp+58h] [rbp-310h] BYREF
  int v58; // [rsp+68h] [rbp-300h]
  int v59; // [rsp+70h] [rbp-2F8h] BYREF
  int v60; // [rsp+74h] [rbp-2F4h] BYREF
  __int64 v61; // [rsp+78h] [rbp-2F0h] BYREF
  __int128 v62; // [rsp+80h] [rbp-2E8h] BYREF
  __int64 v63; // [rsp+90h] [rbp-2D8h]
  __int64 *v64; // [rsp+98h] [rbp-2D0h] BYREF
  _DWORD v65[2]; // [rsp+A0h] [rbp-2C8h] BYREF
  _DWORD v66[2]; // [rsp+A8h] [rbp-2C0h] BYREF
  _DWORD v67[2]; // [rsp+B0h] [rbp-2B8h] BYREF
  _DWORD v68[2]; // [rsp+B8h] [rbp-2B0h] BYREF
  _DWORD v69[2]; // [rsp+C0h] [rbp-2A8h] BYREF
  _DWORD v70[2]; // [rsp+C8h] [rbp-2A0h] BYREF
  unsigned __int64 v71; // [rsp+D0h] [rbp-298h] BYREF
  int v72; // [rsp+D8h] [rbp-290h] BYREF
  __int128 v73; // [rsp+DCh] [rbp-28Ch]
  __int128 v74; // [rsp+F0h] [rbp-278h] BYREF
  _QWORD v75[34]; // [rsp+100h] [rbp-268h] BYREF
  _QWORD v76[34]; // [rsp+210h] [rbp-158h] BYREF
  int v77; // [rsp+360h] [rbp-8h]

  v56 = 0LL;
  CurrentThread = KeGetCurrentThread();
  MiscFlags = CurrentThread->MiscFlags;
  if ( (MiscFlags & 8) == 0 )
    return MiscFlags;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v6) = 4;
    else
      v6 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v6;
  }
  CurrentPrcb = (__int64)KeGetCurrentPrcb();
  v59 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v59);
    while ( CurrentThread->ThreadLock );
  }
  Next = CurrentThread->SystemAffinityTokenListHead.Next;
  UserIdealProcessor = 2048;
  v10 = KeActiveProcessors[0];
  if ( Next )
    CurrentThread->SystemAffinityTokenListHead = (_SINGLE_LIST_ENTRY)Next->Next;
  v11 = *(unsigned __int16 **)(a1 + 24);
  if ( *v11 > v10
    || v11[1] < v10
    || (v12 = *(_BYTE *)(a1 + 19), (v12 & 1) == 0)
    || Next != (struct _SINGLE_LIST_ENTRY *)a1 )
  {
    KeBugCheckEx(0x1E8u, (ULONG_PTR)CurrentThread, 1uLL, 0LL, 0LL);
  }
  if ( *(_BYTE *)(a1 + 18) == 1 )
    *(_BYTE *)(a1 + 18) = v12 & 2;
  memset(v11 + 4, 0, 8LL * *v11);
  *v11 = 1;
  v13 = *(_BYTE *)(a1 + 18);
  if ( v13 )
  {
    if ( v13 != 2 )
      goto LABEL_31;
    if ( (*(_BYTE *)(a1 + 19) & 2) == 0 )
      KeBugCheckEx(0x1E8u, (ULONG_PTR)CurrentThread, 3uLL, 0LL, 0LL);
    v14 = *(_WORD **)(a1 + 24);
    v15 = *(unsigned __int16 *)(a1 + 16);
    v16 = *(_QWORD *)(a1 + 8);
    if ( *v14 <= (unsigned __int16)v15 )
    {
      if ( v14[1] <= (unsigned __int16)v15 )
        goto LABEL_31;
      *v14 = v15 + 1;
    }
    *(_QWORD *)&v14[4 * v15 + 4] |= v16;
  }
  else
  {
    v17 = CurrentThread->SystemAffinityTokenListHead.Next;
    if ( v17 )
    {
      if ( (BYTE2(v17[2].Next) & 0xFD) != 0 )
        KeBugCheckEx(0x1E8u, (ULONG_PTR)CurrentThread, 2uLL, 0LL, 0LL);
      KiCopyAffinityEx(*(_QWORD *)(a1 + 24), *(_WORD *)(*(_QWORD *)(a1 + 24) + 2LL), (unsigned __int16 *)v17[3].Next);
    }
  }
LABEL_31:
  v18 = *(_WORD **)(a1 + 24);
  if ( (unsigned int)KeIsEmptyAffinityEx(v18) )
  {
    KiCopyAffinityEx((__int64)v18, v18[1], &CurrentThread->UserAffinity->Count);
    CurrentThread->MiscFlags &= ~8u;
    UserIdealProcessor = CurrentThread->UserIdealProcessor;
  }
  KiSetSystemAffinityThread(CurrentPrcb, *(unsigned __int16 **)(a1 + 24), 0LL, UserIdealProcessor, (__int64)&v56);
  v19 = v56;
  v20 = 0;
  v21 = 0;
  if ( v56 )
  {
    v56 = (_QWORD *)*v56;
    do
    {
      KiDeferredReadySingleThread(CurrentPrcb, (unsigned __int64)(v19 - 27), (__int64)&v56);
      v19 = v56;
      ++v21;
      if ( v56 )
        v56 = (_QWORD *)*v56;
      if ( (v21 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch((unsigned __int8 *)(CurrentPrcb + 12760));
    }
    while ( v19 );
  }
  LOBYTE(MiscFlags) = KiFlushSoftwareInterruptBatch((unsigned __int8 *)(CurrentPrcb + 12760));
  if ( CurrentIrql < 2u )
  {
    v22 = *(_QWORD *)(CurrentPrcb + 8);
    if ( *(_QWORD *)(CurrentPrcb + 16) )
    {
      if ( (*(unsigned __int8 *)(v22 + 792) | *(unsigned __int8 *)(v22 + 870)) != 0x3F )
      {
        v23 = KeGetCurrentPrcb();
        v61 = 0LL;
        v64 = 0LL;
        KiAbProcessThreadLocks(v22, 1, 1, 1, (__int64)&v61, (__int64)&v64, (__int64)&v23->AbSelfIoBoostsList);
        KiAbPropagateBoosts(&v64, (__int64)&v23->AbSelfIoBoostsList, (__int64)&v61);
        KiReadyDeferredReadyList((__int64)v23, &v61);
      }
      v60 = 0;
      v71 = CurrentPrcb & 0xFFFFFFFFFFFFFFFEuLL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentPrcb + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v60);
        while ( *(_QWORD *)(CurrentPrcb + 48) );
      }
      v24 = *(_QWORD *)(CurrentPrcb + 16);
      *(_QWORD *)(CurrentPrcb + 16) = 0LL;
      _disable();
      *(_BYTE *)(CurrentPrcb + 32) = 1;
      v25 = __rdtsc();
      v26 = v25 - *(_QWORD *)(CurrentPrcb + 33152);
      *(_QWORD *)(v22 + 72) += v26;
      v27 = *(unsigned int *)(v22 + 80);
      v28 = v26 * *(unsigned int *)(CurrentPrcb + 33208);
      *(_QWORD *)(CurrentPrcb + 33152) = v25;
      v29 = (v28 >> 16) + v27;
      if ( v29 > 0xFFFFFFFF )
        LODWORD(v29) = -1;
      v35 = (*(_BYTE *)(v22 + 2) & 0xBE) == 0;
      *(_DWORD *)(v22 + 80) = v29;
      if ( !v35 )
        KiEndThreadAccountingPeriodEx(CurrentPrcb, v22, v26, 1u);
      v30 = KeGetCurrentPrcb();
      v31 = (signed __int32 *)v30->SchedulerAssist;
      if ( v31 )
      {
        _m_prefetchw(v31);
        v32 = *v31;
        do
        {
          v33 = v32;
          v32 = _InterlockedCompareExchange(v31, v32 & 0xFFDFFFFF, v32);
        }
        while ( v33 != v32 );
        if ( (v32 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v30);
      }
      _enable();
      *(_QWORD *)(CurrentPrcb + 8) = v24;
      if ( *(_BYTE *)(v24 + 388) == 1 )
        *(_DWORD *)(v24 + 132) = *(_DWORD *)(v24 + 132) - *(_DWORD *)(v24 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v24 + 388) = 2;
      *(_BYTE *)(v22 + 390) = CurrentIrql;
      *(_BYTE *)(v22 + 643) = 32;
      KiQueueReadyThread(CurrentPrcb, (__int64 *)&v71, v22);
      LOBYTE(v34) = CurrentIrql;
      v35 = (unsigned __int8)KiSwapContext(v22, v24, v34) == 0;
    }
    else
    {
      v35 = (*(_DWORD *)(v22 + 116) & 0x40) == 0;
    }
    if ( !v35 )
    {
      if ( (_DWORD)KiIrqlFlags )
      {
        v36 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v36 - 2) <= 0xDu )
        {
          v37 = KeGetCurrentPrcb();
          v38 = v37->SchedulerAssist;
          v35 = (v38[5] & 0xFFFF0003) == 0;
          v38[5] &= 0xFFFF0003;
          if ( v35 )
            KiRemoveSystemWorkPriorityKick(v37);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v22 + 116) &= ~0x40u;
      KiDeliverApc(0, 0LL, 0LL);
    }
    if ( (_DWORD)KiIrqlFlags )
    {
      v39 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v39 - 2) <= 0xDu )
      {
        v40 = KeGetCurrentPrcb();
        v41 = v40->SchedulerAssist;
        v42 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v35 = (v42 & v41[5]) == 0;
        v41[5] &= v42;
        if ( v35 )
          KiRemoveSystemWorkPriorityKick(v40);
      }
    }
    LOBYTE(MiscFlags) = CurrentIrql;
    __writecr8(CurrentIrql);
    return MiscFlags;
  }
  if ( !*(_QWORD *)(CurrentPrcb + 16) )
    return MiscFlags;
  LOBYTE(MiscFlags) = *(_BYTE *)(CurrentPrcb + 13242);
  if ( (_BYTE)MiscFlags )
    return MiscFlags;
  if ( *(_BYTE *)(CurrentPrcb + 32) )
  {
    *(_BYTE *)(CurrentPrcb + 6) = 1;
    return MiscFlags;
  }
  memset(&v75[1], 0, 0x100uLL);
  v73 = 0LL;
  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) != 0 && !HalpInterruptNoShorthand )
  {
    v72 = 3;
    ProcNumber = (_PROCESSOR_NUMBER)-1;
    v55 = 1;
    v53[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
    v53[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
    v43 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, int *, _QWORD, _PROCESSOR_NUMBER *))(HalpInterruptController + 120);
    _disable();
    LOBYTE(MiscFlags) = v43(*(_QWORD *)(HalpInterruptController + 16), v53, &v72, (unsigned int)(v55 + 46), &ProcNumber);
    if ( (v77 & 0x200) != 0 )
      _enable();
    return MiscFlags;
  }
  LODWORD(v75[0]) = 2097153;
  memset((char *)v75 + 4, 0, 0x104uLL);
  KeAddProcessorAffinityEx((unsigned __int16 *)v75, KeGetPcr()->Prcb.Number);
  v53[0] = 0;
  v63 = 0LL;
  v74 = 0LL;
  v62 = 0LL;
  memset(&v76[1], 0, 0x100uLL);
  v58 = 0;
  v57 = 0LL;
  if ( qword_140C62628 )
  {
    LOBYTE(MiscFlags) = qword_140C62628(v75, 47LL);
    return MiscFlags;
  }
  LODWORD(v76[0]) = 2097153;
  memset((char *)v76 + 4, 0, 0x104uLL);
  KiAndAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, (unsigned __int16 *)v75, v76, 0x20u);
  v44 = v77;
  if ( HalpInterruptClusterModeEnabled )
  {
    v45 = (unsigned int *)HalpInterruptClusterData;
    ProcNumber = 0;
    while ( (unsigned __int64)v45 < HalpInterruptClusterDataEnd )
    {
      if ( (unsigned int)KeAndGroupAffinityEx(v75, (__int64)(v45 + 2), (char *)&v74) )
      {
        v46 = v74;
        v47 = 0;
        LODWORD(v57) = 6;
        v48 = (_QWORD)v74 == 0LL;
        *((_QWORD *)&v57 + 1) = *v45;
        ProcNumber.Group = WORD4(v74);
        while ( 1 )
        {
          ProcNumber.Number = v47;
          if ( v48 )
            break;
          if ( (v46 & 1) != 0 )
          {
            v53[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
            v20 |= *(_DWORD *)(HalpInterruptTargets + 24LL * v53[0] + 12);
            HIDWORD(v57) = v20;
          }
          ++v47;
          v46 >>= 1;
          v48 = v46 == 0;
        }
        v65[0] = -1;
        v65[1] = 1;
        v66[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v66[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v49 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
        _disable();
        MiscFlags = v49(*(_QWORD *)(HalpInterruptController + 16), v66, &v57, 47LL, v65);
        if ( (v44 & 0x200) != 0 )
          _enable();
        v20 = 0;
        if ( MiscFlags < 0 )
          return MiscFlags;
      }
      v45 += 6;
    }
    goto LABEL_108;
  }
  if ( HalpInterruptPhysicalModeOnly )
    goto LABEL_108;
  *((_QWORD *)&v62 + 1) = v75[1];
  *(_QWORD *)&v62 = v75;
  LODWORD(v57) = 5;
  DWORD2(v57) = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(v53, (unsigned __int16 **)&v62) )
  {
    if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v53[0]) == 5 )
      DWORD2(v57) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v53[0] + 8);
  }
  if ( !DWORD2(v57) )
    goto LABEL_108;
  v67[0] = -1;
  v67[1] = 1;
  v68[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
  v68[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
  v50 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
  _disable();
  MiscFlags = v50(*(_QWORD *)(HalpInterruptController + 16), v68, &v57, 47LL, v67);
  if ( (v44 & 0x200) != 0 )
    _enable();
  if ( MiscFlags >= 0 )
  {
LABEL_108:
    *((_QWORD *)&v62 + 1) = v76[1];
    *(_QWORD *)&v62 = v76;
    v53[0] = 0;
    LOWORD(v63) = 0;
    do
    {
      MiscFlags = KeEnumerateNextProcessor(v53, (unsigned __int16 **)&v62);
      if ( MiscFlags )
        break;
      LODWORD(v57) = 4;
      v69[0] = -1;
      v69[1] = 1;
      DWORD2(v57) = *(_DWORD *)(HalpInterruptTargets + 24LL * v53[0] + 8);
      v70[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v70[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v51 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
      _disable();
      MiscFlags = v51(*(_QWORD *)(HalpInterruptController + 16), v70, &v57, 47LL, v69);
      if ( (v44 & 0x200) != 0 )
        _enable();
    }
    while ( MiscFlags >= 0 );
  }
  return MiscFlags;
}
