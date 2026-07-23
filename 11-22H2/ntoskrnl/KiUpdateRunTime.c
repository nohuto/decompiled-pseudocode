/*
 * XREFs of KiUpdateRunTime @ 0x1402C74B0
 * Callers:
 *     KiUpdateTime @ 0x1402C3670 (KiUpdateTime.c)
 *     KeClockInterruptNotify @ 0x1402C4670 (KeClockInterruptNotify.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140254BF0 (HalRequestSoftwareInterrupt.c)
 *     KiSetClockTimer @ 0x1402C2568 (KiSetClockTimer.c)
 *     KeQueryPerformanceCounter @ 0x1402C3240 (KeQueryPerformanceCounter.c)
 *     KeAccumulateTicks @ 0x1402C7AE0 (KeAccumulateTicks.c)
 *     KiCheckPreferredHeteroProcessor @ 0x1402C8460 (KiCheckPreferredHeteroProcessor.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiShouldScanSharedReadyQueue @ 0x140307008 (KiShouldScanSharedReadyQueue.c)
 *     KiSetDpcRequestFlag @ 0x140318724 (KiSetDpcRequestFlag.c)
 *     KiRequestSoftwareInterrupt @ 0x140318788 (KiRequestSoftwareInterrupt.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KeCheckAndApplyBamQos @ 0x140460D10 (KeCheckAndApplyBamQos.c)
 *     KeUpdatePendingQosRequest @ 0x140460E1C (KeUpdatePendingQosRequest.c)
 *     PoSetProcessorQoS @ 0x140462800 (PoSetProcessorQoS.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall KiUpdateRunTime(char a1, unsigned __int8 a2, int a3)
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int16 v5; // si
  volatile signed __int32 *SchedulerAssist; // r9
  int v9; // r13d
  unsigned int LastTick; // ebx
  struct _KPRCB *v11; // rcx
  signed __int32 *v12; // r8
  __int64 v13; // rdx
  _KTHREAD *CurrentThread; // r14
  unsigned __int64 result; // rax
  __int64 v16; // r8
  struct _KPRCB *v17; // rbx
  _KPRCBFLAG v18; // eax
  __int64 v19; // rsi
  __int64 v20; // rbx
  LARGE_INTEGER v21; // rbp
  __int64 v22; // r15
  LARGE_INTEGER v23; // rax
  int v24; // r13d
  __int64 v25; // rdx
  signed __int32 v26; // eax
  signed __int32 v27; // ett
  __int64 CurrentIrql; // rcx
  __int64 v29; // rbx
  LARGE_INTEGER v30; // rbp
  __int64 v31; // r15
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned __int64 v35; // rbx
  unsigned int v36; // ebp
  unsigned __int8 v37; // bl
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  unsigned __int8 v39; // bl
  __int64 i; // rcx
  char v41; // dl
  __int64 v42; // r8
  char v43; // r8
  unsigned __int8 v44; // bl
  __int64 v45; // rdx
  _DWORD *v46; // r9
  unsigned __int8 v47; // cl
  struct _KPRCB *v48; // r10
  _DWORD *v49; // r9
  int v50; // eax
  bool v51; // zf
  volatile signed __int32 *v52; // rcx
  _KPRCBFLAG v53; // ecx
  bool v54; // si
  __int64 ThreadFlags2; // rdx
  unsigned int PrcbFlags; // ecx
  struct _KPRCB *v57; // rcx
  signed __int32 *v58; // r8
  signed __int32 v59; // eax
  signed __int32 v60; // ett
  _DWORD *v61; // r8
  __int64 v62; // r11
  unsigned __int8 v63; // cl
  struct _KPRCB *v64; // r9
  _DWORD *v65; // r8
  int v66; // eax
  _DWORD *v67; // r10
  __int64 v68; // r11
  unsigned __int8 v69; // cl
  struct _KPRCB *v70; // r9
  _DWORD *v71; // r8
  int v72; // eax
  char v73; // [rsp+30h] [rbp-178h] BYREF
  char v74; // [rsp+31h] [rbp-177h] BYREF
  char v75; // [rsp+32h] [rbp-176h] BYREF
  int v76; // [rsp+34h] [rbp-174h]
  __int64 v77; // [rsp+38h] [rbp-170h]
  int v78; // [rsp+40h] [rbp-168h] BYREF
  int v79; // [rsp+44h] [rbp-164h] BYREF
  int v80; // [rsp+48h] [rbp-160h]
  int v81; // [rsp+4Ch] [rbp-15Ch] BYREF
  __int64 v82; // [rsp+50h] [rbp-158h]
  __int64 v83; // [rsp+58h] [rbp-150h]
  __int64 v84; // [rsp+60h] [rbp-148h]
  __int64 v85; // [rsp+68h] [rbp-140h] BYREF
  __int64 v86; // [rsp+70h] [rbp-138h] BYREF
  __int64 v87; // [rsp+78h] [rbp-130h] BYREF
  __int64 v88; // [rsp+80h] [rbp-128h] BYREF
  __int64 v89; // [rsp+88h] [rbp-120h]
  char v90[32]; // [rsp+90h] [rbp-118h] BYREF
  __int64 *v91; // [rsp+B0h] [rbp-F8h]
  __int64 v92; // [rsp+B8h] [rbp-F0h]
  __int64 *v93; // [rsp+C0h] [rbp-E8h]
  __int64 v94; // [rsp+C8h] [rbp-E0h]
  __int64 *v95; // [rsp+D0h] [rbp-D8h]
  __int64 v96; // [rsp+D8h] [rbp-D0h]
  __int64 *v97; // [rsp+E0h] [rbp-C8h]
  __int64 v98; // [rsp+E8h] [rbp-C0h]
  int *v99; // [rsp+F0h] [rbp-B8h]
  __int64 v100; // [rsp+F8h] [rbp-B0h]
  int *v101; // [rsp+100h] [rbp-A8h]
  __int64 v102; // [rsp+108h] [rbp-A0h]
  char *v103; // [rsp+110h] [rbp-98h]
  __int64 v104; // [rsp+118h] [rbp-90h]
  char *v105; // [rsp+120h] [rbp-88h]
  __int64 v106; // [rsp+128h] [rbp-80h]
  char v107[32]; // [rsp+130h] [rbp-78h] BYREF
  int *v108; // [rsp+150h] [rbp-58h]
  __int64 v109; // [rsp+158h] [rbp-50h]
  char *v110; // [rsp+160h] [rbp-48h]
  __int64 v111; // [rsp+168h] [rbp-40h]
  int v112; // [rsp+1A0h] [rbp-8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = v112;
  ++CurrentPrcb->ClockInterrupts;
  ++CurrentPrcb->InterruptLastCount;
  _disable();
  SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
  if ( SchedulerAssist )
    _InterlockedOr(SchedulerAssist, 0x200000u);
  v9 = MEMORY[0xFFFFF78000000320];
  LastTick = CurrentPrcb->LastTick;
  v80 = MEMORY[0xFFFFF78000000320];
  if ( (v5 & 0x200) != 0 )
  {
    v11 = KeGetCurrentPrcb();
    v12 = (signed __int32 *)v11->SchedulerAssist;
    if ( v12 )
    {
      _m_prefetchw(v12);
      v26 = *v12;
      do
      {
        v27 = v26;
        v26 = _InterlockedCompareExchange(v12, v26 & 0xFFDFFFFF, v26);
      }
      while ( v27 != v26 );
      if ( (v26 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v11);
    }
    _enable();
  }
  KeAccumulateTicks((_DWORD)CurrentPrcb, LastTick, v9, a2, a1, a3);
  CurrentPrcb->ClockKeepAlive = 1;
  LODWORD(v13) = 0x8000;
  v82 = 0x8000LL;
  if ( KiClockTimerPerCpuTickScheduling )
  {
    CurrentIrql = KeGetCurrentIrql();
    v77 = CurrentIrql;
    __writecr8(0xFuLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
    {
      v46 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( (_BYTE)CurrentIrql != 15 )
        v13 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 0xFFFC;
      v46[5] |= v13;
    }
    v84 = -(__int64)KeMaximumIncrement;
    v76 = KeMinimumIncrement;
    while ( 1 )
    {
      v29 = MEMORY[0xFFFFF78000000340];
      if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
      {
        v30.QuadPart = MEMORY[0xFFFFF78000000350];
        v31 = MEMORY[0xFFFFF78000000008];
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        if ( MEMORY[0xFFFFF78000000340] == v29 )
          break;
      }
      _mm_pause();
    }
    if ( PerformanceCounter.QuadPart <= (unsigned __int64)v30.QuadPart )
    {
      v34 = v31;
    }
    else
    {
      v83 = 0LL;
      v33 = -1 - v30.QuadPart + PerformanceCounter.QuadPart;
      if ( MEMORY[0xFFFFF78000000369] )
        v33 <<= MEMORY[0xFFFFF78000000369];
      v83 = ((unsigned __int64)v33 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
      v34 = v83 + v31;
    }
    v5 = v112;
    v35 = v34 - v84;
    v36 = v76;
    if ( (unsigned int)dword_140C02F60 > 5 )
    {
      v91 = &v85;
      v88 = v34;
      v85 = v84;
      v86 = -v84;
      v92 = 8LL;
      v93 = &v86;
      v94 = 8LL;
      v95 = &v87;
      v87 = v34 - v84;
      v97 = &v88;
      v99 = &v78;
      v101 = &v79;
      v103 = &v73;
      v105 = &v74;
      v96 = 8LL;
      v98 = 8LL;
      v78 = v76;
      v100 = 4LL;
      v79 = 3;
      v102 = 4LL;
      v73 = 1;
      v104 = 1LL;
      v74 = 0;
      v106 = 1LL;
      tlgWriteTransfer_EtwWriteTransfer(&dword_140C02F60, &byte_14002D597, 0LL, 0LL, 10, v90);
    }
    CurrentPrcb->ClockTimerState.ClockTimerEntries[3].TypeFlags |= 3u;
    CurrentPrcb->ClockTimerState.ClockTimerEntries[3].DueTime = v35;
    v37 = v77;
    CurrentPrcb->ClockTimerState.ClockTimerEntries[3].TolerableDelay = v36;
    if ( (_DWORD)KiIrqlFlags )
    {
      v47 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v47 <= 0xFu && v37 <= 0xFu && v47 >= 2u )
      {
        v48 = KeGetCurrentPrcb();
        v49 = v48->SchedulerAssist;
        v50 = ~(unsigned __int16)(-1LL << (v37 + 1));
        v51 = (v50 & v49[5]) == 0;
        v49[5] &= v50;
        if ( v51 )
          KiRemoveSystemWorkPriorityKick(v48);
      }
    }
    __writecr8(v37);
    LODWORD(v13) = v82;
  }
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( CurrentThread != CurrentPrcb->IdleThread )
  {
    if ( ((unsigned int)v13 & KiVelocityFlags) != 0 && (signed int)(CurrentPrcb->NormalPriorityReadyScanTick - v9) < 0 )
    {
      if ( (unsigned int)KiShouldScanSharedReadyQueue(CurrentPrcb)
        && (CurrentPrcb->SharedReadyQueue->ReadySummary & 0x300) != 0
        || (CurrentPrcb->ReadySummary & 0x300) != 0 )
      {
        KiSetDpcRequestFlag(&CurrentPrcb->13244, 64LL);
        LOBYTE(v45) = 2;
        KiRequestSoftwareInterrupt(CurrentPrcb, v45);
      }
      else
      {
        CurrentPrcb->NormalPriorityReadyScanTick = v9 + KiNormalPriorityBoostScanLatencyTicks;
      }
    }
    result = CurrentThread->CycleTime;
    if ( result >= CurrentThread->QuantumTarget )
      goto LABEL_23;
    result = KiCheckPreferredHeteroProcessor(CurrentThread, CurrentPrcb, 1LL);
    if ( (_DWORD)result )
      goto LABEL_23;
    v17 = KeGetCurrentPrcb();
    v18.PrcbFlags = (volatile int)v17->PrcbFlags;
    if ( (v18.PrcbFlags & 0x300) != 0 )
    {
      _disable();
      v52 = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
      if ( v52 )
        _InterlockedOr(v52, 0x200000u);
      v53.PrcbFlags = (volatile int)v17->PrcbFlags;
      v54 = (v5 & 0x200) != 0;
      ThreadFlags2 = (unsigned __int8)CurrentThread->ThreadFlags2;
      if ( (_DWORD)ThreadFlags2 == LOBYTE(v53.PrcbFlags) )
      {
        PrcbFlags = v53.PrcbFlags & 0xFFFFFCFF;
        v17->PrcbFlags.PrcbFlags = PrcbFlags;
      }
      else
      {
        if ( (unsigned __int8)PoSetProcessorQoS(v17, ThreadFlags2, v16) )
          v17->PrcbFlags.PrcbFlags &= 0xFFFFFCFF;
        PrcbFlags = v17->PrcbFlags.PrcbFlags;
      }
      if ( (PrcbFlags & 0x300) == 0 )
        KeUpdatePendingQosRequest(v17);
      if ( v54 )
      {
        v57 = KeGetCurrentPrcb();
        v58 = (signed __int32 *)v57->SchedulerAssist;
        if ( v58 )
        {
          _m_prefetchw(v58);
          v59 = *v58;
          do
          {
            v60 = v59;
            v59 = _InterlockedCompareExchange(v58, v59 & 0xFFDFFFFF, v59);
          }
          while ( v60 != v59 );
          if ( (v59 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v57);
        }
        _enable();
      }
    }
    else if ( LOBYTE(CurrentThread->ThreadFlags2) != LOBYTE(v18.PrcbFlags) )
    {
      KeCheckAndApplyBamQos(v17, CurrentThread);
    }
  }
  v19 = 0LL;
  while ( 1 )
  {
    v20 = MEMORY[0xFFFFF78000000340];
    if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
    {
      v21.QuadPart = MEMORY[0xFFFFF78000000350];
      v22 = MEMORY[0xFFFFF78000000008];
      v23 = KeQueryPerformanceCounter(0LL);
      if ( MEMORY[0xFFFFF78000000340] == v20 )
        break;
    }
    _mm_pause();
  }
  v24 = v80;
  if ( v23.QuadPart > (unsigned __int64)v21.QuadPart )
  {
    v89 = 0LL;
    v25 = -1 - v21.QuadPart + v23.QuadPart;
    if ( MEMORY[0xFFFFF78000000369] )
      v25 <<= MEMORY[0xFFFFF78000000369];
    v19 = ((unsigned __int64)v25 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
    v89 = v19;
  }
  result = MEMORY[0xFFFFF78000000320];
  if ( MEMORY[0xFFFFF78000000320] > CurrentPrcb->GenerationTarget )
  {
    if ( KiClockTimerPerCpuTickScheduling )
    {
      v39 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v39 <= 0xFu )
      {
        v61 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v39 == 15 )
          LODWORD(v62) = v82;
        else
          v62 = (-1LL << (v39 + 1)) & 0xFFFC;
        v61[5] |= v62;
      }
      CurrentPrcb->ClockTimerState.ClockTimerEntries[4].TypeFlags &= ~1u;
      if ( (unsigned int)dword_140C02F60 > 5 )
      {
        v81 = 4;
        v108 = &v81;
        v109 = 4LL;
        v110 = &v75;
        v75 = 0;
        v111 = 1LL;
        tlgWriteTransfer_EtwWriteTransfer(&dword_140C02F60, byte_14002D55B, 0LL, 0LL, 4, v107);
      }
      if ( (_DWORD)KiIrqlFlags )
      {
        v63 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v63 <= 0xFu && v39 <= 0xFu && v63 >= 2u )
        {
          v64 = KeGetCurrentPrcb();
          v65 = v64->SchedulerAssist;
          v66 = ~(unsigned __int16)(-1LL << (v39 + 1));
          v51 = (v66 & v65[5]) == 0;
          v65[5] &= v66;
          if ( v51 )
            KiRemoveSystemWorkPriorityKick(v64);
        }
      }
      result = v39;
      __writecr8(v39);
    }
LABEL_23:
    CurrentPrcb->QuantumEnd = 1;
    if ( !CurrentPrcb->NestingLevel )
      return HalRequestSoftwareInterrupt(2);
    CurrentPrcb->InterruptRequest = 1;
    return result;
  }
  if ( v19 + v22 > CurrentPrcb->GenerationTarget * KeMaximumIncrement && KiClockTimerPerCpuTickScheduling )
  {
    v43 = CurrentPrcb->GroupSchedulingOverQuota == 0;
    v44 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v44 <= 0xFu )
    {
      v67 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v44 == 15 )
        LODWORD(v68) = v82;
      else
        v68 = (-1LL << (v44 + 1)) & 0xFFFC;
      v67[5] |= v68;
    }
    KiSetClockTimer((__int64)CurrentPrcb, -(__int64)KeMaximumIncrement, KeMinimumIncrement, 4, v43, 0);
    if ( (_DWORD)KiIrqlFlags )
    {
      v69 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v69 <= 0xFu && v44 <= 0xFu && v69 >= 2u )
      {
        v70 = KeGetCurrentPrcb();
        v71 = v70->SchedulerAssist;
        v72 = ~(unsigned __int16)(-1LL << (v44 + 1));
        v51 = (v72 & v71[5]) == 0;
        v71[5] &= v72;
        if ( v51 )
          KiRemoveSystemWorkPriorityKick(v70);
      }
    }
    result = v44;
    __writecr8(v44);
  }
  SchedulingGroup = CurrentThread->SchedulingGroup;
  if ( SchedulingGroup )
  {
    result = CurrentPrcb->ScbOffset;
    for ( i = (__int64)SchedulingGroup + result; i; i = *(_QWORD *)(i + 408) )
    {
      result = CurrentPrcb->ScbOffset;
      v41 = *(_BYTE *)(i + 112);
      v42 = i - result;
      if ( (v41 & 4) != 0 )
      {
        result = *(_QWORD *)(i + 24);
        if ( *(_QWORD *)i >= result )
          goto LABEL_23;
      }
      else if ( (v41 & 0x20) == 0 )
      {
        result = *(_QWORD *)(i + 8);
        if ( *(_QWORD *)i > result )
          goto LABEL_23;
      }
      if ( (v41 & 0x12) == 0 )
      {
        result = *(_QWORD *)(v42 + 48);
        if ( (__int64)result <= 0 )
          goto LABEL_23;
      }
    }
  }
  if ( (signed int)(CurrentPrcb->ReadyScanTick - v24) < 0 )
  {
    result = KiShouldScanSharedReadyQueue(CurrentPrcb);
    if ( !(_DWORD)result || (result = CurrentPrcb->SharedReadyQueue->ReadySummary, (result & 0x7FFE) == 0) )
    {
      if ( (CurrentPrcb->ReadySummary & 0x7FFE) == 0 )
      {
        result = (unsigned int)(v24 + 75);
        CurrentPrcb->ReadyScanTick = result;
      }
    }
  }
  return result;
}
