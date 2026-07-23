/*
 * XREFs of KeStartThread @ 0x1402BE0A8
 * Callers:
 *     KiStartPrcbThread @ 0x140383070 (KiStartPrcbThread.c)
 *     PspInsertThread @ 0x14073F3AC (PspInsertThread.c)
 * Callees:
 *     KeIsSubsetAffinityEx @ 0x1402031E0 (KeIsSubsetAffinityEx.c)
 *     KeSelectInitialIdealProcessorForThread @ 0x14020380C (KeSelectInitialIdealProcessorForThread.c)
 *     KiComputeGroupMask @ 0x140223B28 (KiComputeGroupMask.c)
 *     KiAcquireKobjectLockSafe @ 0x140251F10 (KiAcquireKobjectLockSafe.c)
 *     KiCopyAffinityEx @ 0x1402544A0 (KiCopyAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x140255050 (KeIsEmptyAffinityEx.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14029CAB0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KiInitializeForegroundBoostThread @ 0x1402BDE28 (KiInitializeForegroundBoostThread.c)
 *     KiAdjustProcessIdealProcessorSetsForThreadCreation @ 0x1402BDF84 (KiAdjustProcessIdealProcessorSetsForThreadCreation.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1402BE03C (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x1402BFD90 (KiUpdateNodeAffinitizedFlag.c)
 *     ExGenRandom @ 0x1403173F0 (ExGenRandom.c)
 *     KiFreezeSingleThread @ 0x14036F30C (KiFreezeSingleThread.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiFindBiasedSetMember @ 0x14045F7AC (KiFindBiasedSetMember.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KiExtendProcessAffinity @ 0x14057E9F4 (KiExtendProcessAffinity.c)
 *     EtwTraceIdealProcessor @ 0x1405FCE20 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KeStartThread(__int64 a1, unsigned __int16 *a2, unsigned int *a3)
{
  unsigned __int64 CurrentThread; // rsi
  unsigned __int64 v7; // rdi
  unsigned __int8 CurrentIrql; // r15
  char v9; // al
  __int64 v10; // rcx
  unsigned int v11; // r14d
  _QWORD *v12; // rsi
  __int64 v13; // r12
  int v14; // eax
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // r8
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v22; // rax
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  unsigned int v25; // eax
  unsigned int v26; // r10d
  unsigned __int8 v27; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v29; // r8
  int v30; // eax
  bool v31; // zf
  __int64 v32; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v33; // [rsp+28h] [rbp-D8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v35[68]; // [rsp+50h] [rbp-B0h] BYREF

  v35[0] = 2097153;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v35[1], 0, 0x104uLL);
  CurrentThread = (unsigned __int64)KeGetCurrentThread();
  v7 = *(_QWORD *)(a1 + 184);
  v33 = 0LL;
  *(_DWORD *)(a1 + 120) ^= (*(_DWORD *)(a1 + 120) ^ (4 * *(_DWORD *)(v7 + 632))) & 8;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v22) = 4;
    if ( CurrentIrql != 2 )
      v22 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v22;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v7 + 64));
  KiAdjustProcessIdealProcessorSetsForThreadCreation(v7);
  v9 = *(_BYTE *)(v7 + 640);
  *(_BYTE *)(a1 + 563) = v9;
  *(_BYTE *)(a1 + 195) = v9;
  if ( !a2 || (unsigned int)KeIsEmptyAffinityEx(a2) )
  {
    KiCopyAffinityEx((__int64)v35, HIWORD(v35[0]), (unsigned __int16 *)(v7 + 80));
    a2 = (unsigned __int16 *)v35;
    if ( v7 == *(_QWORD *)(CurrentThread + 544) )
      LOWORD(CurrentThread) = *(_WORD *)(CurrentThread + 584);
    else
      LOWORD(CurrentThread) = *(_WORD *)(v7 + 1040);
LABEL_5:
    LOWORD(v33) = CurrentThread;
    goto LABEL_6;
  }
  if ( !(unsigned int)KeIsSubsetAffinityEx((__int64)a2, v7 + 80) )
    KiExtendProcessAffinity(v7, a2);
  CurrentThread = *(unsigned __int16 *)(v7 + 1040);
  if ( (unsigned __int16)CurrentThread < *a2 && *(_QWORD *)&a2[4 * CurrentThread + 4] )
    goto LABEL_5;
  ExGenRandom(1LL);
  v25 = KiComputeGroupMask(a2);
  LOWORD(CurrentThread) = KiFindBiasedSetMember(v25, v26);
  LOWORD(v33) = CurrentThread;
LABEL_6:
  if ( (unsigned __int16)CurrentThread >= *a2 )
    v10 = 0LL;
  else
    v10 = *(_QWORD *)&a2[4 * (unsigned __int16)CurrentThread + 4];
  v32 = v10;
  KiCopyAffinityEx(*(_QWORD *)(a1 + 576), *(_WORD *)(*(_QWORD *)(a1 + 576) + 2LL), a2);
  KiCopyAffinityEx(*(_QWORD *)(a1 + 552), *(_WORD *)(*(_QWORD *)(a1 + 552) + 2LL), a2);
  *(_WORD *)(a1 + 584) = CurrentThread;
  *(_WORD *)(a1 + 560) = CurrentThread;
  KiUpdateNodeAffinitizedFlag(a1);
  if ( a3 )
  {
    v11 = *a3;
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0);
  }
  else
  {
    v11 = (unsigned __int16)KeSelectInitialIdealProcessorForThread(v7, &v32);
  }
  *(_DWORD *)(a1 + 196) = v11;
  v12 = (_QWORD *)(v7 + 48);
  *(_DWORD *)(a1 + 588) = v11;
  v13 = KiProcessorBlock[v11];
  if ( (_QWORD *)*v12 == v12 && (_UNKNOWN *)v7 != &KiInitialProcess )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(&KiProcessListLock, &LockHandle);
    v23 = (_QWORD *)qword_140C42668;
    v24 = (_QWORD *)(v7 + 848);
    if ( *(__int64 **)qword_140C42668 != &KiProcessListHead )
      goto LABEL_51;
    *(_QWORD *)(v7 + 856) = qword_140C42668;
    *v24 = &KiProcessListHead;
    *v23 = v24;
    qword_140C42668 = v7 + 848;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  }
  *(_DWORD *)(a1 + 120) ^= (*(_DWORD *)(a1 + 120) ^ (*(_DWORD *)(v7 + 632) << 6)) & 0x100;
  v14 = *(unsigned __int8 *)(v7 + 641);
  v15 = *(_DWORD *)(a1 + 120);
  *(_BYTE *)(a1 + 651) = v14;
  v16 = (unsigned int)(KiCyclesPerClockQuantum * v14);
  if ( (v15 & 0x20) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 5u);
  *(_QWORD *)(a1 + 32) = v16;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)v7);
  v18 = *(_QWORD **)(v7 + 56);
  v19 = (_QWORD *)(a1 + 760);
  if ( (_QWORD *)*v18 != v12 )
LABEL_51:
    __fastfail(3u);
  *v19 = v12;
  *(_QWORD *)(a1 + 768) = v18;
  *v18 = v19;
  *(_QWORD *)(v7 + 56) = v19;
  _InterlockedAnd((volatile signed __int32 *)v7, 0xFFFFFF7F);
  if ( *(_DWORD *)(v7 + 888) )
    KiFreezeSingleThread(KeGetCurrentPrcb(), a1, 0LL);
  if ( (*(_DWORD *)(v7 + 632) & 8) != 0 )
  {
    LOBYTE(v17) = 1;
    KiFreezeSingleThread(KeGetCurrentPrcb(), a1, v17);
  }
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(v7 + 880);
  if ( *(_QWORD *)(v7 + 880) )
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
  KiUpdateSharedReadyQueueAffinityThread(v13, a1);
  if ( *(_QWORD *)(v7 + 1024) )
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x17u);
  KiInitializeForegroundBoostThread(a1);
  if ( (*(_DWORD *)(a1 + 116) & 0x400) == 0 )
    *(_DWORD *)(a1 + 952) = *(_DWORD *)(v7 + 68);
  if ( dword_140D1D394 < (unsigned int)KiHgsPlusConfiguration )
  {
    *(_BYTE *)(a1 + 516) = dword_140D1D394;
    if ( dword_140D1D394 < (unsigned int)KiHgsPlusConfiguration )
      *(_BYTE *)(a1 + 516) = dword_140D1D394;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 64));
  if ( (_DWORD)KiIrqlFlags )
  {
    v27 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v29 = CurrentPrcb->SchedulerAssist;
      v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v31 = (v30 & v29[5]) == 0;
      v29[5] &= v30;
      if ( v31 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( _bittest((const signed __int32 *)&xmmword_140D1EAD0, 0x1Bu) )
    result = EtwTraceIdealProcessor(a1, 1350LL, 0xFFFFFFFFLL, v11);
  if ( _bittest((const signed __int32 *)&xmmword_140D1EAD0, 0x1Bu) )
    result = EtwTraceIdealProcessor(a1, 1351LL, 0xFFFFFFFFLL, v11);
  _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 840), 8u);
  return result;
}
