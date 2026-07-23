/*
 * XREFs of PopFxProcessWork @ 0x1403128C4
 * Callers:
 *     PopFxDispatchPluginWorkOnce @ 0x140311E14 (PopFxDispatchPluginWorkOnce.c)
 *     PopFxActivateComponentWorker @ 0x1403126B0 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x140312F48 (PopFxIdleWorkerTail.c)
 *     PoFxCompleteIdleState @ 0x14035C560 (PoFxCompleteIdleState.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer @ 0x140252B60 (KeCancelTimer.c)
 *     PopFxCompleteDevicePowerRequired @ 0x140310D70 (PopFxCompleteDevicePowerRequired.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x140310E6C (PopFxScheduleDeviceIdleTimer.c)
 *     IoAcquireRemoveLockEx @ 0x140312780 (IoAcquireRemoveLockEx.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140312CE0 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxAddLogEntry @ 0x140312D84 (PopFxAddLogEntry.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x14031310C (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopFxCompleteComponentActivation @ 0x14031318C (PopFxCompleteComponentActivation.c)
 *     PopPluginDevicePower @ 0x140313500 (PopPluginDevicePower.c)
 *     PopPepProcessEvent @ 0x140313B90 (PopPepProcessEvent.c)
 *     PopPluginComponentIdleState @ 0x14035C600 (PopPluginComponentIdleState.c)
 *     PopDiagTraceFxComponentIdleState @ 0x14035C84C (PopDiagTraceFxComponentIdleState.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x14036B474 (PopFxUpdateDeviceIdleTimer.c)
 *     PopFxDeliverDevicePowerRequired @ 0x14036E14C (PopFxDeliverDevicePowerRequired.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     PopFxBugCheck @ 0x1405890D0 (PopFxBugCheck.c)
 *     PopFxCompleteComponentPerfState @ 0x140589A88 (PopFxCompleteComponentPerfState.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x1405940C0 (PopDiagTraceFxPerfRequestProgress.c)
 *     PopPepCompleteComponentIdleState @ 0x14059F094 (PopPepCompleteComponentIdleState.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x1405A113C (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x1405A11D8 (PopFxAcpiForwardPepWorkRequest.c)
 */

__int64 __fastcall PopFxProcessWork(ULONG_PTR BugCheckParameter2, int *a2, __int64 a3)
{
  __int64 result; // rax
  int *v6; // rdi
  ULONG_PTR v7; // rdx
  char v8; // r13
  __int64 v9; // r9
  ULONG_PTR v10; // rbx
  __int64 v11; // rcx
  char v12; // di
  unsigned __int64 v13; // rbp
  ULONG_PTR v14; // rsi
  ULONG_PTR v15; // rdi
  __int64 v16; // rbx
  unsigned __int64 v17; // r14
  _DWORD *SchedulerAssist; // r8
  void (__fastcall *v19)(_QWORD, _QWORD); // rax
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  BOOLEAN v22; // al
  char v23; // al
  ULONG_PTR v24; // rbp
  __int64 v25; // r14
  __int64 v26; // rbx
  int v27; // ecx
  signed __int32 v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r8
  struct _KPRCB *v31; // r10
  _DWORD *v32; // r9
  bool v33; // zf
  ULONG_PTR v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // r14
  __int64 v37; // rbp
  signed __int32 v38; // ebx
  __int64 v39; // r9
  ULONG_PTR v40; // rsi
  unsigned int v41; // ebx
  ULONG_PTR v42; // rbx
  KSPIN_LOCK *v43; // rbp
  unsigned __int64 v44; // rsi
  struct _KPRCB *v45; // r9
  _DWORD *v46; // r8
  ULONG_PTR v47; // rbx
  NTSTATUS v48; // esi
  __int64 v49; // rax
  __int64 v50; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v53; // eax
  _QWORD v54[4]; // [rsp+40h] [rbp-68h] BYREF
  NTSTATUS v55; // [rsp+60h] [rbp-48h]
  int v56; // [rsp+64h] [rbp-44h]
  __int64 v57; // [rsp+C0h] [rbp+18h] BYREF

  v57 = 0LL;
  result = *a2;
  if ( (unsigned int)result > 8 )
    PopFxBugCheck(0x603uLL, BugCheckParameter2, *a2, 0LL);
  v6 = a2 + 2;
  while ( 1 )
  {
    v7 = *a2;
    v8 = 0;
    v9 = 1LL;
    if ( !(_DWORD)v7 )
    {
      v14 = *(_QWORD *)v6;
      if ( BugCheckParameter2 )
LABEL_112:
        PopFxBugCheck(0x603uLL, BugCheckParameter2, v7, 0LL);
      v15 = (unsigned int)v6[2];
      if ( (unsigned int)v15 >= *(_DWORD *)(v14 + 828) )
        PopFxBugCheck(0x611uLL, 0LL, v14, v15);
      _mm_lfence();
      v16 = *(_QWORD *)(*(_QWORD *)(v14 + 832) + 8 * v15);
      if ( *(_DWORD *)(v16 + 152) )
        PopFxBugCheck(0x615uLL, 0LL, (unsigned int)v15, 0LL);
      if ( *(int *)(v16 + 88) < 0 )
        PopFxBugCheck(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v14 + 832) + 8 * v15), 1uLL);
      if ( (*(_DWORD *)(v16 + 88) & 0x3FFFFFFF) == 0 )
        PopFxBugCheck(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v14 + 832) + 8 * v15), 2uLL);
      if ( *(_DWORD *)(v16 + 140) )
        PopFxBugCheck(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v14 + 832) + 8 * v15), 3uLL);
      v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v16 + 200));
      if ( *(_DWORD *)(v16 + 216) == 1 )
      {
        *(_QWORD *)(v16 + 224) = MEMORY[0xFFFFF78000000008];
        *(_BYTE *)(v16 + 208) = 1;
      }
      KxReleaseSpinLock((volatile signed __int64 *)(v16 + 200));
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && CurrentIrql <= 0xFu
          && (unsigned __int8)v17 <= 0xFu
          && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v53 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v33 = (v53 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v53;
          if ( v33 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v17);
      LOBYTE(SchedulerAssist) = 1;
      PopDiagTraceFxComponentLogicalCondition(*(_QWORD *)(v14 + 48), (unsigned int)v15, SchedulerAssist);
      v19 = *(void (__fastcall **)(_QWORD, _QWORD))(v14 + 112);
      if ( v19 )
        v19(*(_QWORD *)(v14 + 192), (unsigned int)v15);
      PopPepProcessEvent(*(_QWORD *)(v14 + 56), *(_QWORD *)(v14 + 56) + 208 * v15 + 192, 2, 3);
      return PopFxCompleteComponentActivation(v14);
    }
    if ( (_DWORD)v7 != 1 )
      break;
    v24 = *(_QWORD *)v6;
    if ( BugCheckParameter2 )
      goto LABEL_112;
    v25 = (unsigned int)v6[2];
    if ( (unsigned int)v25 >= *(_DWORD *)(v24 + 828) )
      PopFxBugCheck(0x611uLL, 0LL, *(_QWORD *)v6, (unsigned int)v6[2]);
    _mm_lfence();
    v26 = *(_QWORD *)(*(_QWORD *)(v24 + 832) + 8 * v25);
    if ( (unsigned int)v6[3] >= *(_DWORD *)(v26 + 156) )
      PopFxBugCheck(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v24 + 832) + 8 * v25), 0LL);
    v27 = v6[3];
    if ( v27 == *(_DWORD *)(v26 + 152) )
      PopFxBugCheck(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v24 + 832) + 8 * v25), 1uLL);
    if ( v27 && *(_DWORD *)(v26 + 152) )
      PopFxBugCheck(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v24 + 832) + 8 * v25), 2uLL);
    *(_DWORD *)(v26 + 152) = v6[3];
    *(_DWORD *)(v26 + 140) = 2;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v24 + 128))(
      *(_QWORD *)(v24 + 192),
      (unsigned int)v25,
      (unsigned int)v6[3],
      1LL);
    v28 = _InterlockedExchangeAdd((volatile signed __int32 *)(v26 + 140), 0xFFFFFFFF);
    v29 = *(_QWORD *)(v24 + 48);
    if ( v28 == 1 )
    {
      PopDiagTraceFxComponentIdleState(v29, (unsigned int)v25, (unsigned int)v6[3]);
      result = PopPluginComponentIdleState(v24, (unsigned int)v25, v30, a2);
      v8 = result;
    }
    else
    {
      result = PopFxAddLogEntry(v29, (unsigned int)v25, 14LL, 0LL);
    }
LABEL_18:
    if ( !v8 )
      return result;
  }
  switch ( (_DWORD)v7 )
  {
    case 2:
      v10 = *((_QWORD *)a2 + 1);
      if ( BugCheckParameter2 )
        goto LABEL_112;
      v11 = *(_QWORD *)(v10 + 48);
      v12 = *((_BYTE *)a2 + 16);
      if ( v11 )
      {
        LOBYTE(a3) = *((_BYTE *)a2 + 16);
        LOBYTE(v7) = 1;
        PopDiagTraceFxDevicePowerRequirement(v11, v7, a3);
      }
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 360));
      if ( !v12 )
      {
        _m_prefetchw((const void *)(v10 + 32));
        if ( (_InterlockedOr((volatile signed __int32 *)(v10 + 32), 0) & 0x80u) != 0 )
          PopFxBugCheck(0x609uLL, 0LL, v10, 1uLL);
        PopPluginDevicePower(v10, 0LL, 0LL);
        _InterlockedOr((volatile signed __int32 *)(v10 + 32), 0x80u);
        if ( *(_QWORD *)(v10 + 144) )
        {
          if ( *(_DWORD *)(v10 + 36) || *(_DWORD *)(v10 + 40) || (*(_DWORD *)(v10 + 32) & 4) != 0 )
            PopFxBugCheck(0x610uLL, 0LL, v10, 0LL);
          *(_DWORD *)(v10 + 40) = 2;
          if ( !PopFxScheduleDeviceIdleTimer(v10) )
          {
            PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(v10 + 48), 0LL, 0LL);
            (*(void (__fastcall **)(_QWORD))(v10 + 144))(*(_QWORD *)(v10 + 192));
            _InterlockedOr((volatile signed __int32 *)(v10 + 32), 0x40u);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 40), 0xFFFFFFFF) != 1 )
              PopFxAddLogEntry(*(_QWORD *)(v10 + 48), 0LL, 17LL, 0LL);
          }
        }
        else
        {
          PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(v10 + 48), 0LL, 0LL);
          _InterlockedOr((volatile signed __int32 *)(v10 + 32), 0x40u);
        }
        goto LABEL_16;
      }
      *(_DWORD *)(v10 + 36) = 2;
      _m_prefetchw((const void *)(v10 + 32));
      v20 = *(_DWORD *)(v10 + 32);
      do
      {
        v21 = v20;
        v20 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 32), v20 & 0xFFFFFF7F, v20);
      }
      while ( v21 != v20 );
      if ( (v20 & 0x80u) == 0 )
        PopFxBugCheck(0x609uLL, 0LL, v10, 0LL);
      _m_prefetchw((const void *)(v10 + 32));
      if ( (_InterlockedOr((volatile signed __int32 *)(v10 + 32), 0) & 4) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)(v10 + 32), 0xFFFFFFFB);
        *(_DWORD *)(v10 + 40) = 0;
        v22 = KeCancelTimer((PKTIMER)(v10 + 368));
        _InterlockedAdd((volatile signed __int32 *)(v10 + 36), 0xFFFFFFFF);
        if ( !v22 )
          goto LABEL_16;
        v23 = PopFxCompleteDevicePowerRequired(v10, (__int64)a2);
      }
      else
      {
        if ( *(_DWORD *)(v10 + 40) )
        {
LABEL_16:
          result = KxReleaseSpinLock((volatile signed __int64 *)(v10 + 360));
          if ( (_DWORD)KiIrqlFlags )
          {
            result = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
              && (unsigned __int8)result <= 0xFu
              && (unsigned __int8)v13 <= 0xFu
              && (unsigned __int8)result >= 2u )
            {
              v31 = KeGetCurrentPrcb();
              v32 = v31->SchedulerAssist;
              result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
              v33 = ((unsigned int)result & v32[5]) == 0;
              a3 = (unsigned int)result & v32[5];
              v32[5] = a3;
              if ( v33 )
                result = KiRemoveSystemWorkPriorityKick(v31);
            }
          }
          __writecr8(v13);
          v6 = a2 + 2;
          goto LABEL_18;
        }
        v23 = PopFxDeliverDevicePowerRequired(v10);
      }
      v8 = v23;
      goto LABEL_16;
    case 3:
      v47 = *(_QWORD *)v6;
      v48 = -1073741822;
      if ( *(_QWORD *)(*(_QWORD *)v6 + 152LL) )
      {
        v48 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v47 + 240), 0LL, &Src, 1u, 0x20u);
        if ( v48 >= 0 )
        {
          v48 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, __int64 *))(v47 + 152))(
                  *(_QWORD *)(v47 + 192),
                  *((_QWORD *)v6 + 1),
                  *((_QWORD *)v6 + 3),
                  *((_QWORD *)v6 + 4),
                  *((_QWORD *)v6 + 5),
                  *((_QWORD *)v6 + 6),
                  &v57);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v47 + 244), 0xFFFFFFFF) == 1 )
            KeSetEvent((PRKEVENT)(v47 + 248), 0, 0);
        }
      }
      v49 = *(_QWORD *)(v47 + 56);
      v56 = 0;
      v55 = v48;
      v50 = *(_QWORD *)(v49 + 32);
      v54[0] = *(_QWORD *)(v50 + 72);
      v54[1] = *((_QWORD *)v6 + 1);
      v54[2] = *((_QWORD *)v6 + 2);
      v54[3] = v57;
      return (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)(v50 + 64) + 96LL))(
               15LL,
               v54,
               a3,
               v9);
    case 4:
      v42 = *(_QWORD *)v6;
      v43 = (KSPIN_LOCK *)(*(_QWORD *)v6 + 360LL);
      v44 = KeAcquireSpinLockRaiseToDpc(v43);
      if ( *((_BYTE *)v6 + 8) )
        _InterlockedOr((volatile signed __int32 *)(v42 + 32), 8u);
      else
        _InterlockedAnd((volatile signed __int32 *)(v42 + 32), 0xFFFFFFF7);
      PopFxUpdateDeviceIdleTimer(v42);
      result = KxReleaseSpinLock((volatile signed __int64 *)v43);
      if ( (_DWORD)KiIrqlFlags )
      {
        result = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && (unsigned __int8)result <= 0xFu
          && (unsigned __int8)v44 <= 0xFu
          && (unsigned __int8)result >= 2u )
        {
          v45 = KeGetCurrentPrcb();
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v44 + 1));
          v46 = v45->SchedulerAssist;
          v33 = ((unsigned int)result & v46[5]) == 0;
          v46[5] &= result;
          if ( v33 )
            result = KiRemoveSystemWorkPriorityKick(v45);
        }
      }
      __writecr8(v44);
      break;
    case 5:
      v40 = *(_QWORD *)v6;
      if ( !BugCheckParameter2 )
        goto LABEL_80;
      v41 = v6[2];
      if ( v41 >= *(_DWORD *)(v40 + 828) )
        PopFxBugCheck(0x611uLL, BugCheckParameter2, *(_QWORD *)v6, (unsigned int)v6[2]);
      PopFxAddLogEntry(*(_QWORD *)(v40 + 48), v41, 18LL, 1LL);
      return PopPepCompleteComponentIdleState(*(_QWORD *)(v40 + 56), v41);
    case 6:
      v34 = *(_QWORD *)v6;
      if ( BugCheckParameter2 )
      {
        v35 = (unsigned int)v6[2];
        if ( (unsigned int)v35 >= *(_DWORD *)(v34 + 828) )
          PopFxBugCheck(0x611uLL, BugCheckParameter2, *(_QWORD *)v6, (unsigned int)v6[2]);
        _mm_lfence();
        v36 = *(_QWORD *)(*(_QWORD *)(v34 + 832) + 8 * v35);
        v37 = *(_QWORD *)(v36 + 424);
        v38 = _InterlockedDecrement((volatile signed __int32 *)(v37 + 40));
        _InterlockedOr((volatile signed __int32 *)(v37 + 40), 0x20000000u);
        if ( (v38 & 0x8000000) == 0 )
          PopFxAddLogEntry(*(_QWORD *)(v34 + 48), v35, 20LL, 1LL);
        PopDiagTraceFxPerfRequestProgress(v37, v38 & 7, a3, v9);
        LOBYTE(v39) = *((_BYTE *)v6 + 12);
        return PopFxCompleteComponentPerfState(v34, *(unsigned int *)(v36 + 16), *(_QWORD *)(v36 + 424), v39);
      }
LABEL_80:
      PopFxBugCheck(0x603uLL, 0LL, v7, 0LL);
    case 7:
      return PopFxAcpiForwardPepAcpiNotifyRequest(*(_QWORD *)v6);
    case 8:
      return PopFxAcpiForwardPepWorkRequest(*(_QWORD *)v6);
    default:
      return result;
  }
  return result;
}
