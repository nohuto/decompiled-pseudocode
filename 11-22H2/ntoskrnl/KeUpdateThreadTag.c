/*
 * XREFs of KeUpdateThreadTag @ 0x140366580
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140246750 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KeAddProcessorAffinityEx @ 0x140257280 (KeAddProcessorAffinityEx.c)
 *     KiComputeHeteroThreadQos @ 0x1402B0DC0 (KiComputeHeteroThreadQos.c)
 *     KiEndThreadCycleAccumulation @ 0x1402B2C60 (KiEndThreadCycleAccumulation.c)
 *     KiStartThreadCycleAccumulation @ 0x1402B2D10 (KiStartThreadCycleAccumulation.c)
 *     KiIpiStallOnPacketTargetsPrcb @ 0x1402C02C0 (KiIpiStallOnPacketTargetsPrcb.c)
 *     KiIpiSendPacket @ 0x1402C0300 (KiIpiSendPacket.c)
 *     KiCheckPreferredHeteroProcessor @ 0x1402C8460 (KiCheckPreferredHeteroProcessor.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140307790 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiSendSoftwareInterrupt @ 0x140318764 (KiSendSoftwareInterrupt.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     KeCheckAndApplyBamQos @ 0x140460D10 (KeCheckAndApplyBamQos.c)
 *     KiSetThreadQosLevelUnsafe @ 0x140461FF8 (KiSetThreadQosLevelUnsafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeUpdateThreadTag(__int64 a1, int a2)
{
  __int64 CurrentIrql; // rbx
  char v4; // r14
  _DWORD *SchedulerAssist; // r9
  __int64 v6; // rdx
  struct _KPRCB *CurrentPrcb; // rbx
  char v8; // r15
  char v9; // r14
  char v10; // al
  struct _KPRCB *v11; // rcx
  signed __int32 *v12; // r8
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  int v15; // esi
  int v16; // ecx
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rax
  unsigned int ProcessorCount; // ecx
  struct _KPRCB **Prcbs; // rdx
  __int64 v20; // r8
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  _DWORD *v23; // r8
  int v24; // eax
  bool v25; // zf
  __int64 result; // rax
  int *v27; // rbx
  char v28; // r13
  __int64 v29; // rsi
  volatile signed __int32 *v30; // r15
  char v31; // al
  __int64 v32; // rax
  __int64 v33; // r14
  __int64 v34; // r14
  __int64 v35; // rax
  char v36; // al
  int v37; // ebx
  unsigned __int8 v38; // cl
  _DWORD *v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // rcx
  _DWORD *v44; // rdx
  int v45; // r10d
  int v46; // ecx
  _BYTE *v47; // rax
  unsigned int v48; // ecx
  __int64 *v49; // rdx
  __int64 v50; // r8
  int v51; // ecx
  _BYTE *v52; // rax
  unsigned int v53; // ecx
  __int64 *v54; // rdx
  __int64 v55; // r8
  BOOL v56; // eax
  char v57; // r11
  __int64 v58; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v59; // [rsp+40h] [rbp-C0h]
  int v60; // [rsp+48h] [rbp-B8h] BYREF
  int v61; // [rsp+4Ch] [rbp-B4h] BYREF
  struct _KPRCB *v62; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v63; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v64; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v65[68]; // [rsp+70h] [rbp-90h] BYREF
  int v66; // [rsp+1D8h] [rbp+D8h] BYREF

  v66 = a2;
  memset(v65, 0, 0x108uLL);
  v58 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v59 = CurrentIrql;
  __writecr8(2uLL);
  v4 = v58 + 1;
  if ( (_DWORD)KiIrqlFlags
    && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v4) != 0
    && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( (_BYTE)CurrentIrql == 2 )
      LODWORD(v6) = 4;
    else
      v6 = (-1LL << (v4 + (unsigned __int8)CurrentIrql)) & 4;
    SchedulerAssist[5] |= v6;
  }
  v60 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v60);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( *(unsigned __int8 *)(a1 + 124) == v66 )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    goto LABEL_43;
  }
  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v8 = 0;
    v9 = 0;
    _disable();
    KiEndThreadCycleAccumulation((__int64)CurrentPrcb, a1, 0LL, 0);
    v10 = v66;
    if ( v66 )
      _interlockedbittestandset((volatile signed __int32 *)a1, 0x14u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)a1, 0x14u);
    *(_BYTE *)(a1 + 124) = v10;
    KiStartThreadCycleAccumulation((__int64)CurrentPrcb, a1, 0LL);
    v11 = KeGetCurrentPrcb();
    v12 = (signed __int32 *)v11->SchedulerAssist;
    if ( v12 )
    {
      _m_prefetchw(v12);
      v13 = *v12;
      do
      {
        v14 = v13;
        v13 = _InterlockedCompareExchange(v12, v13 & 0xFFDFFFFF, v13);
      }
      while ( v14 != v13 );
      if ( (v13 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v11);
    }
    _enable();
    v15 = KiComputeHeteroThreadQos(a1, 0LL);
    if ( v15 == (unsigned __int8)*(_DWORD *)(a1 + 512) )
      goto LABEL_33;
    KiAcquirePrcbLocksForIsolationUnit((__int64)CurrentPrcb, 0, &v58);
    KiSetThreadQosLevelUnsafe(a1);
    if ( !CurrentPrcb->NextThread )
    {
      v16 = *(_DWORD *)(a1 + 120) >> 1;
      v62 = CurrentPrcb;
      if ( (v16 & 1) == 0 )
      {
        Prcbs = &v62;
        ProcessorCount = 1;
        goto LABEL_28;
      }
      CoreControlBlock = CurrentPrcb->CoreControlBlock;
      ProcessorCount = CoreControlBlock->ProcessorCount;
      Prcbs = CoreControlBlock->Prcbs;
      if ( CoreControlBlock->ProcessorCount )
      {
LABEL_28:
        v20 = ProcessorCount;
        do
        {
          if ( KeHeteroSystem )
            (*Prcbs)->PriorityState[64].AllFields ^= (*(_BYTE *)(a1 + 512) ^ (*Prcbs)->PriorityState[64].AllFields) & 7;
          ++Prcbs;
          --v20;
        }
        while ( v20 );
      }
    }
    KiReleasePrcbLocksForIsolationUnit(&v58);
LABEL_33:
    if ( v15 == 4 )
    {
      if ( KiCheckPreferredHeteroProcessor(a1, (__int64)CurrentPrcb, 1) )
      {
        CurrentPrcb->QuantumEnd = 1;
        v8 = 1;
      }
      else
      {
        v9 = 1;
      }
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    if ( v8 )
      KiSendSoftwareInterrupt(CurrentPrcb->Number, 2);
    if ( v9 )
      KeCheckAndApplyBamQos(CurrentPrcb, a1);
    v4 = 1;
    goto LABEL_42;
  }
  v27 = (int *)(a1 + 536);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v28 = *(_BYTE *)(a1 + 388);
        v29 = 0LL;
        v30 = 0LL;
        if ( v28 != 1 )
          break;
        v27 = (int *)(a1 + 536);
        v34 = *(unsigned int *)(a1 + 536);
        if ( (int)v34 >= 0 )
        {
          v29 = KiProcessorBlock[v34];
          KiAcquirePrcbLocksForIsolationUnit(v29, 0, &v58);
          if ( *(_BYTE *)(a1 + 388) == 1 && *v27 == (_DWORD)v34 )
            goto LABEL_81;
          goto LABEL_78;
        }
        v35 = (unsigned int)v34;
        LODWORD(v35) = v34 & 0x7FFFFFFF;
        v61 = 0;
        v30 = *(volatile signed __int32 **)(KiProcessorBlock[v35] + 34888);
        while ( _interlockedbittestandset64(v30, 0LL) )
        {
          do
            KeYieldProcessorEx(&v61);
          while ( *(_QWORD *)v30 );
        }
        if ( *(_BYTE *)(a1 + 388) == 1 && *v27 == (_DWORD)v34 )
          goto LABEL_81;
        _InterlockedAnd64((volatile signed __int64 *)v30, 0LL);
LABEL_79:
        v4 = 1;
      }
      if ( *(_BYTE *)(a1 + 388) != 2 )
        break;
LABEL_60:
      v27 = (int *)(a1 + 536);
      v32 = *(unsigned int *)(a1 + 536);
      if ( (int)v32 >= 0 )
      {
        v29 = KiProcessorBlock[v32];
        KiAcquirePrcbLocksForIsolationUnit(v29, 0, &v58);
        if ( a1 == *(_QWORD *)(v29 + 8) )
          goto LABEL_81;
        KiReleasePrcbLocksForIsolationUnit(&v58);
      }
    }
    if ( *(_BYTE *)(a1 + 388) != 3 )
      break;
    v27 = (int *)(a1 + 536);
    v33 = *(unsigned int *)(a1 + 536);
    if ( (int)v33 >= 0 )
    {
      v29 = KiProcessorBlock[v33];
      KiAcquirePrcbLocksForIsolationUnit(v29, 0, &v58);
      if ( a1 == *(_QWORD *)(v29 + 16) )
        goto LABEL_81;
      if ( *(_BYTE *)(a1 + 388) == 3 && *v27 == (_DWORD)v33 )
        __fastfail(0x1Eu);
LABEL_78:
      KiReleasePrcbLocksForIsolationUnit(&v58);
      goto LABEL_79;
    }
    v4 = 1;
  }
  if ( *(_BYTE *)(a1 + 388) != 5 )
    goto LABEL_81;
  v31 = *(_BYTE *)(a1 + 112) & 7;
  if ( v31 != v4 && (unsigned __int8)(v31 - 3) > 3u )
  {
    v28 = 2;
    goto LABEL_60;
  }
  v27 = (int *)(a1 + 536);
LABEL_81:
  if ( v28 == 2 || (v27 = (int *)(a1 + 536), *(_BYTE *)(a1 + 113)) )
  {
    v37 = *v27;
    v65[0] = 2097153;
    v4 = 1;
    memset(&v65[1], 0, 0x104uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)v65, v37 & 0x7FFFFFFF);
    v38 = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v38 <= 0xFu )
    {
      v39 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v38 == 12 )
        LODWORD(v40) = 4096;
      else
        v40 = (-1LL << (v38 + 1)) & 0x1FFC;
      v39[5] |= v40;
    }
    KiIpiSendPacket(0, (int)v65, (__int64)KiIpiUpdateThreadTag, a1, (__int64)&v66, 0LL);
    KiIpiStallOnPacketTargetsPrcb(v41, (__int64)KeGetCurrentPrcb());
    if ( (_DWORD)KiIrqlFlags )
    {
      v42 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v42 - 2) <= 0xDu )
      {
        v43 = KeGetCurrentPrcb();
        v44 = v43->SchedulerAssist;
        v25 = (v44[5] & 0xFFFF0007) == 0;
        v44[5] &= 0xFFFF0007;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(v43);
      }
    }
    __writecr8(2uLL);
  }
  else
  {
    v36 = v66;
    if ( v66 )
      _interlockedbittestandset((volatile signed __int32 *)a1, 0x14u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)a1, 0x14u);
    *(_BYTE *)(a1 + 124) = v36;
    v4 = 1;
  }
  v45 = KiComputeHeteroThreadQos(a1, 0LL);
  if ( v45 != (unsigned __int8)*(_DWORD *)(a1 + 512) )
  {
    KiSetThreadQosLevelUnsafe(a1);
    if ( v28 == 2 )
    {
      if ( !*(_QWORD *)(v29 + 16) )
      {
        v51 = *(_DWORD *)(a1 + 120) >> 1;
        v64 = v29;
        if ( (v51 & 1) != 0 )
        {
          v52 = *(_BYTE **)(v29 + 34904);
          v53 = (unsigned __int8)*v52;
          v54 = (__int64 *)(v52 + 8);
          if ( !*v52 )
            goto LABEL_121;
        }
        else
        {
          v54 = &v64;
          v53 = 1;
        }
        v55 = v53;
        do
        {
          if ( KeHeteroSystem )
            *(_BYTE *)(*(_QWORD *)(*v54 + 56) + 64LL) ^= (*(_BYTE *)(a1 + 512) ^ *(_BYTE *)(*(_QWORD *)(*v54 + 56) + 64LL)) & 7;
          ++v54;
          --v55;
        }
        while ( v55 );
      }
    }
    else if ( v28 == 3 )
    {
      v46 = *(_DWORD *)(a1 + 120) >> 1;
      v63 = v29;
      if ( (v46 & 1) != 0 )
      {
        v47 = *(_BYTE **)(v29 + 34904);
        v48 = (unsigned __int8)*v47;
        v49 = (__int64 *)(v47 + 8);
        if ( *v47 )
          goto LABEL_107;
      }
      else
      {
        v49 = &v63;
        v48 = 1;
LABEL_107:
        v50 = v48;
        do
        {
          if ( KeHeteroSystem )
            *(_BYTE *)(*(_QWORD *)(*v49 + 56) + 64LL) ^= (*(_BYTE *)(a1 + 512) ^ *(_BYTE *)(*(_QWORD *)(*v49 + 56) + 64LL)) & 7;
          ++v49;
          --v50;
        }
        while ( v50 );
      }
    }
  }
LABEL_121:
  if ( v28 == 2 && v45 == 4 && ((v56 = KiCheckPreferredHeteroProcessor(a1, v29, 1), KeHeteroSystemQos) || v56) )
  {
    *(_BYTE *)(v29 + 13241) = 1;
    v57 = 1;
  }
  else
  {
    v57 = 0;
  }
  if ( v29 )
    KiReleasePrcbLocksForIsolationUnit(&v58);
  if ( v30 )
    _InterlockedAnd64((volatile signed __int64 *)v30, 0LL);
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( v57 )
    KiSendSoftwareInterrupt(*(_DWORD *)(v29 + 36), 2);
LABEL_42:
  LOBYTE(CurrentIrql) = v59;
LABEL_43:
  if ( (_DWORD)KiIrqlFlags )
  {
    v21 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v4) != 0
      && v21 <= 0xFu
      && (unsigned __int8)CurrentIrql <= 0xFu
      && v21 >= 2u )
    {
      v22 = KeGetCurrentPrcb();
      v23 = v22->SchedulerAssist;
      v24 = ~(unsigned __int16)(-1LL << (v4 + (unsigned __int8)CurrentIrql));
      v25 = (v24 & v23[5]) == 0;
      v23[5] &= v24;
      if ( v25 )
        KiRemoveSystemWorkPriorityKick(v22);
    }
  }
  result = (unsigned __int8)CurrentIrql;
  __writecr8((unsigned __int8)CurrentIrql);
  return result;
}
