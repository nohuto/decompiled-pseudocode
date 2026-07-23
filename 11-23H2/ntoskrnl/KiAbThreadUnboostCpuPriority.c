/*
 * XREFs of KiAbThreadUnboostCpuPriority @ 0x140318150
 * Callers:
 *     KiAbThreadRemoveBoostsSlow @ 0x1403180D0 (KiAbThreadRemoveBoostsSlow.c)
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
 *     KiSetPriorityThread @ 0x1402B0860 (KiSetPriorityThread.c)
 *     KiAbPropagateBoosts @ 0x1402BC160 (KiAbPropagateBoosts.c)
 *     KiAbProcessThreadLocks @ 0x1402BC5E0 (KiAbProcessThreadLocks.c)
 *     KiDeliverApc @ 0x14030FB20 (KiDeliverApc.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x140428670 (KiSwapContext.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char __fastcall KiAbThreadUnboostCpuPriority(ULONG_PTR BugCheckParameter1, unsigned int a2)
{
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 v5; // r15
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // rdx
  char v8; // di
  char v9; // al
  char v10; // al
  unsigned int v11; // edx
  char v12; // dl
  char v13; // cl
  int v14; // edi
  __int64 CurrentPrcb; // rsi
  char v16; // di
  _QWORD *v17; // rbx
  int Processor; // eax
  ULONG_PTR v19; // rbp
  struct _KPRCB *v20; // rdi
  __int64 v21; // rbx
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r8
  __int64 v24; // rax
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
  __int64 (__fastcall *v40)(_QWORD, _DWORD *, int *, __int64, _PROCESSOR_NUMBER *); // rax
  __int16 v41; // r12
  unsigned int *v42; // rbx
  unsigned __int64 v43; // rdi
  int v44; // ebp
  unsigned __int8 v45; // si
  __int64 (__fastcall *v46)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v47)(_QWORD, _DWORD *, __int128 *, _QWORD, int *); // rax
  __int64 (__fastcall *v48)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  _DWORD v50[2]; // [rsp+40h] [rbp-338h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp-330h] BYREF
  int v52; // [rsp+4Ch] [rbp-32Ch]
  _QWORD *v53; // [rsp+50h] [rbp-328h] BYREF
  int v54; // [rsp+58h] [rbp-320h]
  __int128 v55; // [rsp+60h] [rbp-318h] BYREF
  int v56; // [rsp+70h] [rbp-308h]
  int v57; // [rsp+78h] [rbp-300h] BYREF
  int v58; // [rsp+7Ch] [rbp-2FCh] BYREF
  __int64 v59; // [rsp+80h] [rbp-2F8h] BYREF
  __int128 v60; // [rsp+88h] [rbp-2F0h] BYREF
  __int64 v61; // [rsp+98h] [rbp-2E0h]
  __int64 *v62; // [rsp+A0h] [rbp-2D8h] BYREF
  _DWORD v63[2]; // [rsp+A8h] [rbp-2D0h] BYREF
  _DWORD v64[2]; // [rsp+B0h] [rbp-2C8h] BYREF
  int v65; // [rsp+B8h] [rbp-2C0h] BYREF
  int v66; // [rsp+BCh] [rbp-2BCh]
  _DWORD v67[2]; // [rsp+C0h] [rbp-2B8h] BYREF
  _DWORD v68[2]; // [rsp+C8h] [rbp-2B0h] BYREF
  _DWORD v69[2]; // [rsp+D0h] [rbp-2A8h] BYREF
  unsigned __int64 v70; // [rsp+D8h] [rbp-2A0h] BYREF
  int v71; // [rsp+E0h] [rbp-298h] BYREF
  __int128 v72; // [rsp+E4h] [rbp-294h]
  __int128 v73; // [rsp+F8h] [rbp-280h] BYREF
  _QWORD v74[34]; // [rsp+110h] [rbp-268h] BYREF
  _QWORD v75[34]; // [rsp+220h] [rbp-158h] BYREF
  int v76; // [rsp+370h] [rbp-8h]

  v54 = 0;
  v53 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v5 = (unsigned int)(unsigned __int8)v53 + 1;
  if ( (_DWORD)KiIrqlFlags
    && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)((_BYTE)v53 + 1)) != 0
    && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v7) = 4;
    else
      v7 = (-1LL << ((unsigned __int8)v53 + 1 + CurrentIrql)) & 4;
    SchedulerAssist[5] |= v7;
  }
  while ( 1 )
  {
    v32 = !_BitScanForward((unsigned int *)&v14, a2);
    v54 = v14;
    if ( v32 )
      break;
    v8 = v5 + v14;
    v57 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v57);
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    v9 = *(_BYTE *)(v8 + BugCheckParameter1 + 824);
    if ( !v9 )
      KeBugCheckEx(0x157u, BugCheckParameter1, v8, 2uLL, 0LL);
    v10 = v9 - v5;
    *(_BYTE *)(v8 + BugCheckParameter1 + 824) = v10;
    if ( !v10 )
    {
      v11 = *(_DWORD *)(BugCheckParameter1 + 856) ^ (1 << v8);
      *(_DWORD *)(BugCheckParameter1 + 856) = v11;
      if ( v11 < (_DWORD)v5 << v8 )
      {
        v12 = *(_BYTE *)(BugCheckParameter1 + 195);
        if ( v12 <= 31 )
        {
          v13 = *(_BYTE *)(BugCheckParameter1 + 563)
              + (*(_BYTE *)(BugCheckParameter1 + 564) & 0xF)
              + (*(_BYTE *)(BugCheckParameter1 + 564) >> 4);
          if ( v13 < v12 )
            KiSetPriorityThread(BugCheckParameter1, (unsigned __int64)&v53, v13);
        }
      }
    }
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
    a2 &= a2 - 1;
  }
  CurrentPrcb = (__int64)KeGetCurrentPrcb();
  v16 = 0;
  v17 = v53;
  if ( v53 )
  {
    v53 = (_QWORD *)*v53;
    do
    {
      KiDeferredReadySingleThread(CurrentPrcb, (unsigned __int64)(v17 - 27), (__int64)&v53);
      v17 = v53;
      v16 += v5;
      if ( v53 )
        v53 = (_QWORD *)*v53;
      if ( (v16 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch((unsigned __int8 *)(CurrentPrcb + 12760));
    }
    while ( v17 );
  }
  LOBYTE(Processor) = KiFlushSoftwareInterruptBatch((unsigned __int8 *)(CurrentPrcb + 12760));
  if ( CurrentIrql < 2u )
  {
    v19 = *(_QWORD *)(CurrentPrcb + 8);
    if ( *(_QWORD *)(CurrentPrcb + 16) )
    {
      if ( (*(unsigned __int8 *)(v19 + 792) | *(unsigned __int8 *)(v19 + 870)) != 0x3F )
      {
        v20 = KeGetCurrentPrcb();
        v59 = 0LL;
        v62 = 0LL;
        KiAbProcessThreadLocks(v19, v5, v5, v5, (__int64)&v59, (__int64)&v62, (__int64)&v20->AbSelfIoBoostsList);
        KiAbPropagateBoosts(&v62, (__int64)&v20->AbSelfIoBoostsList, (__int64)&v59);
        KiReadyDeferredReadyList((__int64)v20, &v59);
      }
      v58 = 0;
      v70 = CurrentPrcb & 0xFFFFFFFFFFFFFFFEuLL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentPrcb + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v58);
        while ( *(_QWORD *)(CurrentPrcb + 48) );
      }
      v21 = *(_QWORD *)(CurrentPrcb + 16);
      *(_QWORD *)(CurrentPrcb + 16) = 0LL;
      _disable();
      *(_BYTE *)(CurrentPrcb + 32) = v5;
      v22 = __rdtsc();
      v23 = v22 - *(_QWORD *)(CurrentPrcb + 33152);
      *(_QWORD *)(v19 + 72) += v23;
      v24 = *(unsigned int *)(v19 + 80);
      v25 = v23 * *(unsigned int *)(CurrentPrcb + 33208);
      *(_QWORD *)(CurrentPrcb + 33152) = v22;
      v26 = (v25 >> 16) + v24;
      if ( v26 > 0xFFFFFFFF )
        LODWORD(v26) = -1;
      v32 = (*(_BYTE *)(v19 + 2) & 0xBE) == 0;
      *(_DWORD *)(v19 + 80) = v26;
      v5 = 1LL;
      if ( !v32 )
        KiEndThreadAccountingPeriodEx(CurrentPrcb, v19, v23, 1u);
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
      if ( *(_BYTE *)(v21 + 388) == 1 )
        *(_DWORD *)(v21 + 132) = *(_DWORD *)(v21 + 132) - *(_DWORD *)(v21 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v21 + 388) = 2;
      *(_BYTE *)(v19 + 390) = CurrentIrql;
      *(_BYTE *)(v19 + 643) = 32;
      KiQueueReadyThread(CurrentPrcb, (__int64 *)&v70, v19);
      LOBYTE(v31) = CurrentIrql;
      v32 = (unsigned __int8)KiSwapContext(v19, v21, v31) == 0;
    }
    else
    {
      v32 = (*(_DWORD *)(v19 + 116) & 0x40) == 0;
    }
    if ( !v32 )
    {
      if ( (_DWORD)KiIrqlFlags )
      {
        v33 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v5) != 0 && (unsigned __int8)(v33 - 2) <= 0xDu )
        {
          v34 = KeGetCurrentPrcb();
          v35 = v34->SchedulerAssist;
          v32 = (v35[5] & 0xFFFF0003) == 0;
          v35[5] &= 0xFFFF0003;
          if ( v32 )
            KiRemoveSystemWorkPriorityKick(v34);
        }
      }
      __writecr8(v5);
      *(_DWORD *)(v19 + 116) &= ~0x40u;
      KiDeliverApc(0, 0LL, 0LL);
    }
    if ( (_DWORD)KiIrqlFlags )
    {
      v36 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v5) != 0 && (unsigned __int8)(v36 - 2) <= 0xDu )
      {
        v37 = KeGetCurrentPrcb();
        v38 = v37->SchedulerAssist;
        v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + CurrentIrql));
        v32 = (v39 & v38[5]) == 0;
        v38[5] &= v39;
        if ( v32 )
          KiRemoveSystemWorkPriorityKick(v37);
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
    *(_BYTE *)(CurrentPrcb + 6) = v5;
    return Processor;
  }
  memset(&v74[1], 0, 0x100uLL);
  v72 = 0LL;
  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) != 0 && !HalpInterruptNoShorthand )
  {
    v71 = 3;
    ProcNumber = (_PROCESSOR_NUMBER)-1;
    v52 = 1;
    v50[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
    v50[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
    v40 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, int *, __int64, _PROCESSOR_NUMBER *))(HalpInterruptController + 120);
    _disable();
    LOBYTE(Processor) = v40(*(_QWORD *)(HalpInterruptController + 16), v50, &v71, 47LL, &ProcNumber);
    if ( (v76 & 0x200) != 0 )
      _enable();
    return Processor;
  }
  LODWORD(v74[0]) = 2097153;
  memset((char *)v74 + 4, 0, 0x104uLL);
  KeAddProcessorAffinityEx((unsigned __int16 *)v74, KeGetPcr()->Prcb.Number);
  v50[0] = 0;
  v61 = 0LL;
  v73 = 0LL;
  v60 = 0LL;
  memset(&v75[1], 0, 0x100uLL);
  v56 = 0;
  v55 = 0LL;
  if ( qword_140C62548 )
  {
    LOBYTE(Processor) = qword_140C62548(v74, 47LL);
    return Processor;
  }
  LODWORD(v75[0]) = 2097153;
  memset((char *)v75 + 4, 0, 0x104uLL);
  KiAndAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, (unsigned __int16 *)v74, v75, 0x20u);
  v41 = v76;
  if ( HalpInterruptClusterModeEnabled )
  {
    v42 = (unsigned int *)HalpInterruptClusterData;
    ProcNumber = 0;
    while ( (unsigned __int64)v42 < HalpInterruptClusterDataEnd )
    {
      if ( (unsigned int)KeAndGroupAffinityEx(v74, (__int64)(v42 + 2), (char *)&v73) )
      {
        v43 = v73;
        v44 = 0;
        LODWORD(v55) = 6;
        v45 = 0;
        *((_QWORD *)&v55 + 1) = *v42;
        ProcNumber.Group = WORD4(v73);
        for ( ProcNumber.Number = 0; v43; ProcNumber.Number = v45 )
        {
          if ( (v43 & 1) != 0 )
          {
            v50[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
            v44 |= *(_DWORD *)(HalpInterruptTargets + 24LL * v50[0] + 12);
            HIDWORD(v55) = v44;
          }
          ++v45;
          v43 >>= 1;
        }
        v63[0] = -1;
        v64[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v64[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v63[1] = 1;
        v46 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
        _disable();
        Processor = v46(*(_QWORD *)(HalpInterruptController + 16), v64, &v55, 47LL, v63);
        if ( (v41 & 0x200) != 0 )
          _enable();
        if ( Processor < 0 )
          return Processor;
      }
      v42 += 6;
    }
    goto LABEL_83;
  }
  if ( HalpInterruptPhysicalModeOnly )
    goto LABEL_83;
  *((_QWORD *)&v60 + 1) = v74[1];
  *(_QWORD *)&v60 = v74;
  LODWORD(v55) = 5;
  DWORD2(v55) = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(v50, (unsigned __int16 **)&v60) )
  {
    if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v50[0]) == 5 )
      DWORD2(v55) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v50[0] + 8);
  }
  if ( !DWORD2(v55) )
    goto LABEL_83;
  v65 = -1;
  v66 = 1;
  v67[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
  v67[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
  v47 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, _QWORD, int *))(HalpInterruptController + 120);
  _disable();
  Processor = v47(*(_QWORD *)(HalpInterruptController + 16), v67, &v55, (unsigned int)(v66 + 46), &v65);
  if ( (v41 & 0x200) != 0 )
    _enable();
  if ( Processor >= 0 )
  {
LABEL_83:
    *((_QWORD *)&v60 + 1) = v75[1];
    *(_QWORD *)&v60 = v75;
    v50[0] = 0;
    LOWORD(v61) = 0;
    do
    {
      Processor = KeEnumerateNextProcessor(v50, (unsigned __int16 **)&v60);
      if ( Processor )
        break;
      LODWORD(v55) = 4;
      v68[0] = -1;
      v68[1] = 1;
      DWORD2(v55) = *(_DWORD *)(HalpInterruptTargets + 24LL * v50[0] + 8);
      v69[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v69[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v48 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
      _disable();
      Processor = v48(*(_QWORD *)(HalpInterruptController + 16), v69, &v55, 47LL, v68);
      if ( (v41 & 0x200) != 0 )
        _enable();
    }
    while ( Processor >= 0 );
  }
  return Processor;
}
