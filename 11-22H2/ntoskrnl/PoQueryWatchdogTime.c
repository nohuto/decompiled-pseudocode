/*
 * XREFs of PoQueryWatchdogTime @ 0x1403191F0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxWaitForLockOwnerShip @ 0x140260E00 (KxWaitForLockOwnerShip.c)
 *     PopComputeWatchdogTimeout @ 0x14028ECD8 (PopComputeWatchdogTimeout.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402E7464 (KiQueryUnbiasedInterruptTime.c)
 *     KxWaitForLockChainValid @ 0x14031A4F0 (KxWaitForLockChainValid.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045FB2E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405715E8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057FFFC (KiHaltOnAddressWakeEntireList.c)
 */

BOOLEAN __stdcall PoQueryWatchdogTime(PDEVICE_OBJECT Pdo, PULONG SecondsRemaining)
{
  unsigned __int64 v2; // rdi
  _QWORD *DeviceNode; // rbx
  unsigned __int8 CurrentIrql; // dl
  signed __int64 *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  BOOLEAN result; // al
  _DWORD *SchedulerAssist; // r9
  __int64 v13; // r10
  unsigned __int8 v14; // cl
  __int64 v15; // r15
  unsigned __int64 v16; // rbp
  __int64 v17; // rax
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v20; // r9
  int v21; // eax
  bool v22; // zf
  __int64 v23; // rbp
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rax
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r10
  _DWORD *v28; // r9
  int v29; // eax
  unsigned __int8 v30; // cl
  struct _KPRCB *v31; // r9
  _DWORD *v32; // r8
  int v33; // eax
  unsigned __int64 UnbiasedInterruptTime; // rax
  BOOLEAN v35; // cl
  unsigned __int64 v36; // rdi
  signed __int32 v37[8]; // [rsp+0h] [rbp-68h] BYREF
  __int128 v38; // [rsp+20h] [rbp-48h] BYREF
  __int64 v39; // [rsp+30h] [rbp-38h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  v39 = 0LL;
  v2 = -1LL;
  v38 = 0LL;
  if ( Pdo )
    DeviceNode = Pdo->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  *(_QWORD *)&v38 = 0LL;
  *((_QWORD *)&v38 + 1) = &PopIrpLock;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v13) = 4;
    else
      v13 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v13;
  }
  LOBYTE(v39) = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v38, &PopIrpLock);
  }
  else
  {
    v6 = (signed __int64 *)_InterlockedExchange64((volatile __int64 *)&PopIrpLock, (__int64)&v38);
    if ( v6 )
      KxWaitForLockOwnerShip((signed __int64)&v38, v6);
  }
  v7 = DeviceNode[33];
  PopIrpLockThread = (__int64)KeGetCurrentThread();
  if ( v7 )
  {
    v15 = *(_QWORD *)(v7 + 72LL * *(char *)(v7 + 66) + 200);
    v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + 288));
    if ( *(_DWORD *)(v15 + 296) == 1 )
    {
      v17 = *(_QWORD *)(v15 + 48) + 10000000LL * (unsigned int)PopComputeWatchdogTimeout(v15);
      if ( v17 != -1 )
        v2 = v17;
    }
    KxReleaseSpinLock((volatile signed __int64 *)(v15 + 288));
    if ( (_DWORD)KiIrqlFlags )
    {
      v18 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v18 <= 0xFu && (unsigned __int8)v16 <= 0xFu && v18 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v20 = CurrentPrcb->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
        v22 = (v21 & v20[5]) == 0;
        v20[5] &= v21;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v16);
  }
  v8 = DeviceNode[35];
  if ( v8 )
  {
    v23 = *(_QWORD *)(v8 + 72LL * *(char *)(v8 + 66) + 200);
    v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v23 + 288));
    if ( *(_DWORD *)(v23 + 296) == 1 )
    {
      v25 = *(_QWORD *)(v23 + 48) + 10000000LL * (unsigned int)PopComputeWatchdogTimeout(v23);
      if ( v25 < v2 )
        v2 = v25;
    }
    KxReleaseSpinLock((volatile signed __int64 *)(v23 + 288));
    if ( (_DWORD)KiIrqlFlags )
    {
      v26 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v26 <= 0xFu && (unsigned __int8)v24 <= 0xFu && v26 >= 2u )
      {
        v27 = KeGetCurrentPrcb();
        v28 = v27->SchedulerAssist;
        v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
        v22 = (v29 & v28[5]) == 0;
        v28[5] &= v29;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(v27);
      }
    }
    __writecr8(v24);
  }
  PopIrpLockThread = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v38, retaddr);
    goto LABEL_12;
  }
  _m_prefetchw(&v38);
  v9 = v38;
  if ( !(_QWORD)v38 )
  {
    if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v38 + 1), 0LL, (signed __int64)&v38) == &v38 )
      goto LABEL_12;
    v9 = KxWaitForLockChainValid(&v38);
  }
  *(_QWORD *)&v38 = 0LL;
  v14 = BYTE8(v38);
  if ( ((v14 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v9 + 8), *((__int64 *)&v38 + 1))) & 4) != 0 )
  {
    _InterlockedOr(v37, 0);
    KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v9 + 8) >> 5) & 0x7F], 0LL));
  }
LABEL_12:
  v10 = (unsigned __int8)v39;
  if ( (_DWORD)KiIrqlFlags )
  {
    v30 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v30 <= 0xFu && (unsigned __int8)v39 <= 0xFu && v30 >= 2u )
    {
      v31 = KeGetCurrentPrcb();
      v32 = v31->SchedulerAssist;
      v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v39 + 1));
      v22 = (v33 & v32[5]) == 0;
      v32[5] &= v33;
      if ( v22 )
        KiRemoveSystemWorkPriorityKick(v31);
    }
  }
  __writecr8(v10);
  if ( v2 == -1LL )
    return 0;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  if ( UnbiasedInterruptTime <= v2 )
  {
    v36 = v2 - UnbiasedInterruptTime;
    result = v35;
    *SecondsRemaining = v36 / 0x989680;
  }
  else
  {
    *SecondsRemaining = 0;
    return v35;
  }
  return result;
}
