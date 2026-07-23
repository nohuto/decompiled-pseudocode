/*
 * XREFs of KiSetHeteroPolicyThread @ 0x140577A9C
 * Callers:
 *     KeSetUserHeteroCpuPolicyThread @ 0x14056F134 (KeSetUserHeteroCpuPolicyThread.c)
 *     PopUpdateSingleThreadHeteroPolicies @ 0x1408A5FA0 (PopUpdateSingleThreadHeteroPolicies.c)
 * Callees:
 *     KiRescheduleThreadAfterAffinityChange @ 0x140203570 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiQueueReadyThread @ 0x1402344F0 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x14023A2B0 (KiDeferredReadySingleThread.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140246750 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiEndThreadAccountingPeriodEx @ 0x140248430 (KiEndThreadAccountingPeriodEx.c)
 *     KiReadyDeferredReadyList @ 0x140249C70 (KiReadyDeferredReadyList.c)
 *     KiAndAffinityEx @ 0x140252320 (KiAndAffinityEx.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252640 (KiFlushSoftwareInterruptBatch.c)
 *     KeAndGroupAffinityEx @ 0x140254360 (KeAndGroupAffinityEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x140255090 (KeGetProcessorIndexFromNumber.c)
 *     KeEnumerateNextProcessor @ 0x140257190 (KeEnumerateNextProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x140257280 (KeAddProcessorAffinityEx.c)
 *     KiComputeHeteroThreadQos @ 0x1402B0DC0 (KiComputeHeteroThreadQos.c)
 *     KiAbPropagateBoosts @ 0x1402BBEA0 (KiAbPropagateBoosts.c)
 *     KiAbProcessThreadLocks @ 0x1402BC320 (KiAbProcessThreadLocks.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140307790 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiDeliverApc @ 0x14030F6B0 (KiDeliverApc.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KiSwapContext @ 0x140427C20 (KiSwapContext.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiConvertDynamicHeteroPolicy @ 0x140460FE8 (KiConvertDynamicHeteroPolicy.c)
 *     KiGenerateHeteroSets @ 0x140461040 (KiGenerateHeteroSets.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceIdealProcessor @ 0x1405FCE20 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KiSetHeteroPolicyThread(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 v5; // r14
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // rdx
  int v8; // edx
  int v9; // r9d
  __int64 v10; // r8
  char v11; // cl
  unsigned int v12; // eax
  int v13; // esi
  __int64 v14; // r13
  _WORD *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdi
  int v18; // eax
  char v19; // cl
  unsigned __int64 v20; // rax
  int v21; // edx
  int v22; // ecx
  unsigned int v23; // r12d
  unsigned __int8 v24; // r14
  __int64 v25; // rdi
  volatile signed __int32 *v26; // rsi
  char v27; // al
  __int64 v28; // rax
  __int64 v29; // rbp
  __int64 v30; // rbp
  __int64 v31; // rax
  __int64 CurrentPrcb; // rsi
  char v33; // di
  _QWORD *v34; // rbx
  ULONG_PTR v35; // rbp
  struct _KPRCB *v36; // rdi
  __int64 v37; // rbx
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // r8
  __int64 v40; // rcx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rcx
  struct _KPRCB *v43; // rcx
  signed __int32 *v44; // r8
  signed __int32 v45; // eax
  signed __int32 v46; // ett
  unsigned int v47; // r8d
  bool v48; // zf
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // rcx
  _DWORD *v51; // rdx
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // r9
  _DWORD *v54; // r8
  int v55; // eax
  void (__fastcall *v56)(_QWORD, _DWORD *, int *, __int64, _PROCESSOR_NUMBER *); // rax
  __int16 v57; // r12
  unsigned int *v58; // rbx
  unsigned __int64 v59; // rdi
  int v60; // ebp
  unsigned __int8 v61; // si
  __int64 (__fastcall *v62)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v63; // eax
  __int64 (__fastcall *v64)(_QWORD, _DWORD *, __int128 *, _QWORD, int *); // rax
  int v65; // eax
  __int64 (__fastcall *v66)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v67; // eax
  _DWORD v69[4]; // [rsp+40h] [rbp-398h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+50h] [rbp-388h] BYREF
  int v71; // [rsp+54h] [rbp-384h]
  unsigned int v72; // [rsp+58h] [rbp-380h]
  __int64 v73; // [rsp+60h] [rbp-378h] BYREF
  _QWORD *v74; // [rsp+68h] [rbp-370h] BYREF
  int v75; // [rsp+70h] [rbp-368h] BYREF
  __int128 v76; // [rsp+78h] [rbp-360h] BYREF
  int v77; // [rsp+88h] [rbp-350h]
  _DWORD v78[2]; // [rsp+90h] [rbp-348h] BYREF
  int v79; // [rsp+98h] [rbp-340h] BYREF
  unsigned int v80; // [rsp+9Ch] [rbp-33Ch]
  unsigned int v81; // [rsp+A0h] [rbp-338h]
  unsigned int v82; // [rsp+A4h] [rbp-334h]
  int v83; // [rsp+A8h] [rbp-330h] BYREF
  __int64 v84; // [rsp+B0h] [rbp-328h] BYREF
  __int128 v85; // [rsp+B8h] [rbp-320h] BYREF
  __int64 v86; // [rsp+C8h] [rbp-310h]
  __int64 *v87; // [rsp+D0h] [rbp-308h] BYREF
  _DWORD v88[2]; // [rsp+D8h] [rbp-300h] BYREF
  _DWORD v89[2]; // [rsp+E0h] [rbp-2F8h] BYREF
  int v90; // [rsp+E8h] [rbp-2F0h] BYREF
  int v91; // [rsp+ECh] [rbp-2ECh]
  _DWORD v92[2]; // [rsp+F0h] [rbp-2E8h] BYREF
  _DWORD v93[2]; // [rsp+F8h] [rbp-2E0h] BYREF
  _DWORD v94[6]; // [rsp+100h] [rbp-2D8h] BYREF
  unsigned __int64 v95; // [rsp+118h] [rbp-2C0h] BYREF
  __int128 v96; // [rsp+120h] [rbp-2B8h] BYREF
  __int128 v97; // [rsp+130h] [rbp-2A8h] BYREF
  __int64 v98; // [rsp+140h] [rbp-298h]
  int v99; // [rsp+148h] [rbp-290h] BYREF
  __int128 v100; // [rsp+14Ch] [rbp-28Ch]
  __int128 v101; // [rsp+160h] [rbp-278h] BYREF
  _QWORD v102[34]; // [rsp+170h] [rbp-268h] BYREF
  _QWORD v103[34]; // [rsp+280h] [rbp-158h] BYREF
  int v104; // [rsp+3D0h] [rbp-8h]

  v75 = 0;
  v98 = 0LL;
  v73 = 0LL;
  v96 = 0LL;
  v74 = 0LL;
  v97 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v5 = (unsigned int)(unsigned __int8)v73 + 1;
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)(v73 + 1)) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v7) = 4;
    else
      v7 = (-1LL << ((unsigned __int8)v73 + 1 + CurrentIrql)) & 4;
    SchedulerAssist[5] |= v7;
  }
  v78[0] = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(v78);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v8 = *(unsigned __int8 *)(a1 + 125);
  v9 = v8;
  v10 = *(unsigned int *)(a1 + 588);
  v11 = *(_BYTE *)(a1 + 126) ^ (*(_BYTE *)(a1 + 126) ^ a2) & 0x7F;
  v12 = *(_DWORD *)(a1 + 196);
  if ( v11 >= 0 )
    v9 = a2;
  v80 = *(_DWORD *)(a1 + 588);
  v82 = v12;
  *(_BYTE *)(a1 + 126) = v11;
  if ( v9 == 8 )
    v9 = KiDefaultHeteroCpuPolicy;
  v72 = v9;
  if ( !KeHeteroSystem )
  {
    v72 = 0;
    *(_BYTE *)(a1 + 126) = v11 & 0x7F;
    v9 = 0;
  }
  if ( v8 == v9 )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    goto LABEL_59;
  }
  v13 = v9;
  v14 = KiProcessorBlock[v10];
  if ( v9 >= 5 )
    v13 = KiConvertDynamicHeteroPolicy(a1);
  v15 = *(_WORD **)(a1 + 576);
  v16 = *(unsigned __int8 *)(v14 + 208);
  if ( (unsigned __int16)v16 >= *v15 )
    v17 = 0LL;
  else
    v17 = *(_QWORD *)&v15[4 * v16 + 4];
  v18 = KiComputeHeteroThreadQos(a1, &v75);
  KiGenerateHeteroSets(*(_QWORD *)(v14 + 192), v17, v13, *(_BYTE *)(a1 + 516), v18, v75, (__int64 *)&v97);
  if ( ((unsigned __int64)v97 & *(_QWORD *)(v14 + 200)) == 0 )
  {
    v19 = *(_BYTE *)(v14 + 209);
    _BitScanForward64(&v20, __ROR8__(v97, v19));
    v21 = *(unsigned __int8 *)(v14 + 208) << 6;
    v78[1] = v20;
    v22 = KiProcessorNumberToIndexMappingTable[v21 + ((v19 + (_BYTE)v20) & 0x3F)];
    LODWORD(v20) = *(_DWORD *)(a1 + 116);
    *(_DWORD *)(a1 + 588) = v22;
    if ( (v20 & 8) == 0 )
      *(_DWORD *)(a1 + 196) = v22;
  }
  v23 = *(_DWORD *)(a1 + 588);
  v81 = *(_DWORD *)(a1 + 196);
  while ( 1 )
  {
    while ( 1 )
    {
      v24 = *(_BYTE *)(a1 + 388);
      v25 = 0LL;
      v26 = 0LL;
      if ( v24 == 1 )
        break;
      switch ( *(_BYTE *)(a1 + 388) )
      {
        case 2:
LABEL_35:
          v28 = *(unsigned int *)(a1 + 536);
          if ( (int)v28 >= 0 )
          {
            v25 = KiProcessorBlock[v28];
            KiAcquirePrcbLocksForIsolationUnit(v25, 0, &v73);
            if ( a1 == *(_QWORD *)(v25 + 8) )
              goto LABEL_54;
            goto LABEL_37;
          }
          break;
        case 3:
          v29 = *(unsigned int *)(a1 + 536);
          if ( (int)v29 >= 0 )
          {
            v25 = KiProcessorBlock[v29];
            KiAcquirePrcbLocksForIsolationUnit(v25, 0, &v73);
            if ( a1 == *(_QWORD *)(v25 + 16) )
              goto LABEL_54;
            if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v29 )
              __fastfail(0x1Eu);
LABEL_37:
            KiReleasePrcbLocksForIsolationUnit(&v73);
          }
          break;
        case 5:
          v27 = *(_BYTE *)(a1 + 112) & 7;
          if ( v27 == 1 || (unsigned __int8)(v27 - 3) <= 3u )
            goto LABEL_54;
          v24 = 2;
          goto LABEL_35;
        default:
          goto LABEL_54;
      }
    }
    v30 = *(unsigned int *)(a1 + 536);
    if ( (int)v30 >= 0 )
      break;
    v31 = (unsigned int)v30;
    LODWORD(v31) = v30 & 0x7FFFFFFF;
    v79 = 0;
    v26 = *(volatile signed __int32 **)(KiProcessorBlock[v31] + 34888);
    while ( _interlockedbittestandset64(v26, 0LL) )
    {
      do
        KeYieldProcessorEx(&v79);
      while ( *(_QWORD *)v26 );
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v30 )
      goto LABEL_54;
    _InterlockedAnd64((volatile signed __int64 *)v26, 0LL);
  }
  v25 = KiProcessorBlock[v30];
  KiAcquirePrcbLocksForIsolationUnit(v25, 0, &v73);
  if ( *(_BYTE *)(a1 + 388) != 1 || *(_DWORD *)(a1 + 536) != (_DWORD)v30 )
    goto LABEL_37;
LABEL_54:
  *(_BYTE *)(a1 + 125) = v72;
  WORD4(v96) = *(unsigned __int8 *)(v14 + 208);
  *(_QWORD *)&v96 = v98;
  KiRescheduleThreadAfterAffinityChange(
    a1,
    0LL,
    (__int64)&v96,
    v24,
    v25,
    (__int64)&v73,
    (volatile signed __int64 *)v26,
    (__int64)&v74);
  if ( _bittest((const signed __int32 *)&xmmword_140D1EAD0, 0x1Bu) )
    EtwTraceIdealProcessor(a1, 1350LL, v80, v23);
  if ( _bittest((const signed __int32 *)&xmmword_140D1EAD0, 0x1Bu) )
    EtwTraceIdealProcessor(a1, 1351LL, v82, v81);
  v5 = 1LL;
LABEL_59:
  CurrentPrcb = (__int64)KeGetCurrentPrcb();
  v33 = 0;
  v34 = v74;
  if ( v74 )
  {
    v74 = (_QWORD *)*v74;
    do
    {
      KiDeferredReadySingleThread(CurrentPrcb, (unsigned __int64)(v34 - 27), (__int64)&v74);
      v34 = v74;
      v33 += v5;
      if ( v74 )
        v74 = (_QWORD *)*v74;
      if ( (v33 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch((unsigned __int8 *)(CurrentPrcb + 12760));
    }
    while ( v34 );
  }
  KiFlushSoftwareInterruptBatch((unsigned __int8 *)(CurrentPrcb + 12760));
  if ( CurrentIrql < 2u )
  {
    v35 = *(_QWORD *)(CurrentPrcb + 8);
    if ( *(_QWORD *)(CurrentPrcb + 16) )
    {
      if ( (*(unsigned __int8 *)(v35 + 792) | *(unsigned __int8 *)(v35 + 870)) != 0x3F )
      {
        v36 = KeGetCurrentPrcb();
        v84 = 0LL;
        v87 = 0LL;
        KiAbProcessThreadLocks(v35, v5, v5, v5, (__int64)&v84, (__int64)&v87, (__int64)&v36->AbSelfIoBoostsList);
        KiAbPropagateBoosts(&v87, (__int64)&v36->AbSelfIoBoostsList, (__int64)&v84);
        KiReadyDeferredReadyList((__int64)v36, &v84);
      }
      v83 = 0;
      v95 = CurrentPrcb & 0xFFFFFFFFFFFFFFFEuLL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentPrcb + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v83);
        while ( *(_QWORD *)(CurrentPrcb + 48) );
      }
      v37 = *(_QWORD *)(CurrentPrcb + 16);
      *(_QWORD *)(CurrentPrcb + 16) = 0LL;
      _disable();
      *(_BYTE *)(CurrentPrcb + 32) = v5;
      v38 = __rdtsc();
      v39 = v38 - *(_QWORD *)(CurrentPrcb + 33152);
      *(_QWORD *)(v35 + 72) += v39;
      v40 = *(unsigned int *)(v35 + 80);
      v41 = v39 * *(unsigned int *)(CurrentPrcb + 33208);
      *(_QWORD *)(CurrentPrcb + 33152) = v38;
      v42 = (v41 >> 16) + v40;
      if ( v42 > 0xFFFFFFFF )
        LODWORD(v42) = -1;
      v48 = (*(_BYTE *)(v35 + 2) & 0xBE) == 0;
      *(_DWORD *)(v35 + 80) = v42;
      v5 = 1LL;
      if ( !v48 )
        KiEndThreadAccountingPeriodEx(CurrentPrcb, v35, v39, 1u);
      v43 = KeGetCurrentPrcb();
      v44 = (signed __int32 *)v43->SchedulerAssist;
      if ( v44 )
      {
        _m_prefetchw(v44);
        v45 = *v44;
        do
        {
          v46 = v45;
          v45 = _InterlockedCompareExchange(v44, v45 & 0xFFDFFFFF, v45);
        }
        while ( v46 != v45 );
        if ( (v45 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v43);
      }
      _enable();
      *(_QWORD *)(CurrentPrcb + 8) = v37;
      if ( *(_BYTE *)(v37 + 388) == 1 )
        *(_DWORD *)(v37 + 132) = *(_DWORD *)(v37 + 132) - *(_DWORD *)(v37 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v37 + 388) = 2;
      *(_BYTE *)(v35 + 390) = CurrentIrql;
      *(_BYTE *)(v35 + 643) = 32;
      KiQueueReadyThread(CurrentPrcb, (__int64 *)&v95, v35);
      LOBYTE(v47) = CurrentIrql;
      v48 = (unsigned __int8)KiSwapContext(v35, v37, v47) == 0;
    }
    else
    {
      v48 = (*(_DWORD *)(v35 + 116) & 0x40) == 0;
    }
    if ( !v48 )
    {
      if ( (_DWORD)KiIrqlFlags )
      {
        v49 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v5) != 0 && (unsigned __int8)(v49 - 2) <= 0xDu )
        {
          v50 = KeGetCurrentPrcb();
          v51 = v50->SchedulerAssist;
          v48 = (v51[5] & 0xFFFF0003) == 0;
          v51[5] &= 0xFFFF0003;
          if ( v48 )
            KiRemoveSystemWorkPriorityKick((__int64)v50);
        }
      }
      __writecr8(v5);
      *(_DWORD *)(v35 + 116) &= ~0x40u;
      KiDeliverApc(0, 0LL, 0LL);
    }
    if ( (_DWORD)KiIrqlFlags )
    {
      v52 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v5) != 0 && (unsigned __int8)(v52 - 2) <= 0xDu )
      {
        v53 = KeGetCurrentPrcb();
        v54 = v53->SchedulerAssist;
        v55 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + CurrentIrql));
        v48 = (v55 & v54[5]) == 0;
        v54[5] &= v55;
        if ( v48 )
          KiRemoveSystemWorkPriorityKick((__int64)v53);
      }
    }
    __writecr8(CurrentIrql);
    return v72;
  }
  if ( !*(_QWORD *)(CurrentPrcb + 16) || *(_BYTE *)(CurrentPrcb + 13242) )
    return v72;
  if ( *(_BYTE *)(CurrentPrcb + 32) )
  {
    *(_BYTE *)(CurrentPrcb + 6) = v5;
    return v72;
  }
  memset(&v102[1], 0, 0x100uLL);
  v100 = 0LL;
  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) != 0 && !HalpInterruptNoShorthand )
  {
    v99 = 3;
    ProcNumber = (_PROCESSOR_NUMBER)-1;
    v69[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
    v69[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
    v56 = *(void (__fastcall **)(_QWORD, _DWORD *, int *, __int64, _PROCESSOR_NUMBER *))(HalpInterruptController + 120);
    v71 = 1;
    _disable();
    v56(*(_QWORD *)(HalpInterruptController + 16), v69, &v99, 47LL, &ProcNumber);
    if ( (v104 & 0x200) != 0 )
      _enable();
    return v72;
  }
  LODWORD(v102[0]) = 2097153;
  memset((char *)v102 + 4, 0, 0x104uLL);
  KeAddProcessorAffinityEx((unsigned __int16 *)v102, KeGetPcr()->Prcb.Number);
  v69[0] = 0;
  v86 = 0LL;
  v101 = 0LL;
  v85 = 0LL;
  memset(&v103[1], 0, 0x100uLL);
  v77 = 0;
  v76 = 0LL;
  if ( qword_140C62628 )
  {
    qword_140C62628(v102, 47LL);
    return v72;
  }
  LODWORD(v103[0]) = 2097153;
  memset((char *)v103 + 4, 0, 0x104uLL);
  KiAndAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, (unsigned __int16 *)v102, v103, 0x20u);
  v57 = v104;
  if ( HalpInterruptClusterModeEnabled )
  {
    v58 = (unsigned int *)HalpInterruptClusterData;
    ProcNumber = 0;
    while ( (unsigned __int64)v58 < HalpInterruptClusterDataEnd )
    {
      if ( (unsigned int)KeAndGroupAffinityEx(v102, (__int64)(v58 + 2), (char *)&v101) )
      {
        v59 = v101;
        v60 = 0;
        LODWORD(v76) = 6;
        v61 = 0;
        *((_QWORD *)&v76 + 1) = *v58;
        ProcNumber.Group = WORD4(v101);
        for ( ProcNumber.Number = 0; v59; ProcNumber.Number = v61 )
        {
          if ( (v59 & 1) != 0 )
          {
            v69[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
            v60 |= *(_DWORD *)(HalpInterruptTargets + 24LL * v69[0] + 12);
            HIDWORD(v76) = v60;
          }
          ++v61;
          v59 >>= 1;
        }
        v88[0] = -1;
        v89[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v89[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v88[1] = 1;
        v62 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
        _disable();
        v63 = v62(*(_QWORD *)(HalpInterruptController + 16), v89, &v76, 47LL, v88);
        if ( (v57 & 0x200) != 0 )
          _enable();
        if ( v63 < 0 )
          return v72;
      }
      v58 += 6;
    }
LABEL_123:
    *((_QWORD *)&v85 + 1) = v103[1];
    *(_QWORD *)&v85 = v103;
    v69[0] = 0;
    LOWORD(v86) = 0;
    do
    {
      if ( (unsigned int)KeEnumerateNextProcessor(v69, (unsigned __int16 **)&v85) )
        break;
      LODWORD(v76) = 4;
      v93[0] = -1;
      v93[1] = 1;
      DWORD2(v76) = *(_DWORD *)(HalpInterruptTargets + 24LL * v69[0] + 8);
      v94[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v94[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v66 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
      _disable();
      v67 = v66(*(_QWORD *)(HalpInterruptController + 16), v94, &v76, 47LL, v93);
      if ( (v57 & 0x200) != 0 )
        _enable();
    }
    while ( v67 >= 0 );
  }
  else
  {
    if ( HalpInterruptPhysicalModeOnly )
      goto LABEL_123;
    *((_QWORD *)&v85 + 1) = v102[1];
    *(_QWORD *)&v85 = v102;
    LODWORD(v76) = 5;
    DWORD2(v76) = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(v69, (unsigned __int16 **)&v85) )
    {
      if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v69[0]) == 5 )
        DWORD2(v76) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v69[0] + 8);
    }
    if ( !DWORD2(v76) )
      goto LABEL_123;
    v90 = -1;
    v91 = 1;
    v92[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
    v92[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
    v64 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, _QWORD, int *))(HalpInterruptController + 120);
    _disable();
    v65 = v64(*(_QWORD *)(HalpInterruptController + 16), v92, &v76, (unsigned int)(v91 + 46), &v90);
    if ( (v57 & 0x200) != 0 )
      _enable();
    if ( v65 >= 0 )
      goto LABEL_123;
  }
  return v72;
}
