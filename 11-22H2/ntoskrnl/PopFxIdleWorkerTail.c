/*
 * XREFs of PopFxIdleWorkerTail @ 0x140312AD8
 * Callers:
 *     PopFxIdleWorker @ 0x1403129BC (PopFxIdleWorker.c)
 *     PoFxCompleteIdleCondition @ 0x140356D00 (PoFxCompleteIdleCondition.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxActivateComponentWorker @ 0x140312240 (PopFxActivateComponentWorker.c)
 *     PopFxAddRefDevice @ 0x1403122C4 (PopFxAddRefDevice.c)
 *     PopFxProcessWork @ 0x140312454 (PopFxProcessWork.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x140312C9C (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopFxCompleteComponentActivation @ 0x140312D1C (PopFxCompleteComponentActivation.c)
 *     PpmInterlockedUpdateTimeNoFence @ 0x140312F5C (PpmInterlockedUpdateTimeNoFence.c)
 *     PopFxUpdateAccountingActiveTime @ 0x140312F90 (PopFxUpdateAccountingActiveTime.c)
 *     PopFxDeactivateComponentDependencies @ 0x140313000 (PopFxDeactivateComponentDependencies.c)
 *     PopPluginComponentActive @ 0x1403135AC (PopPluginComponentActive.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopFxIdleWorkerTail(_QWORD *BugCheckParameter2, unsigned int a2, int *a3)
{
  __int64 v6; // rbx
  __int64 v7; // r13
  unsigned __int64 v8; // rbp
  __int64 v9; // r8
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  __int64 v12; // r8
  __int64 result; // rax
  unsigned __int64 v14; // rbp
  _DWORD *v15; // r8
  void (__fastcall *v16)(_QWORD, _QWORD); // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  int v24; // eax

  v6 = *(_QWORD *)(BugCheckParameter2[104] + 8LL * a2);
  v7 = MEMORY[0xFFFFF78000000008];
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 200));
  if ( *(_DWORD *)(v6 + 216) == 1 )
  {
    PopFxUpdateAccountingActiveTime(v6 + 200, v7, 0LL);
    *(_BYTE *)(v6 + 208) = 0;
  }
  KxReleaseSpinLock((volatile signed __int64 *)(v6 + 200));
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v8 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
      v21 = (v20 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v20;
      if ( v21 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v8);
  PopDiagTraceFxComponentLogicalCondition(BugCheckParameter2[6], a2, 0LL);
  PpmInterlockedUpdateTimeNoFence(BugCheckParameter2 + 63, v7, 0LL);
  _m_prefetchw((const void *)(v6 + 88));
  v10 = *(_DWORD *)(v6 + 88);
  do
  {
    v11 = v10;
    v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 88), v10, v10);
  }
  while ( v11 != v10 );
  if ( v10 == 0x40000000 )
  {
    if ( (unsigned __int8)PopPluginComponentActive(BugCheckParameter2, a2, v9, a3) == 1 )
      PopFxProcessWork(0LL, a3, v12);
    PopFxDeactivateComponentDependencies(v6);
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 88), 0, 0x40000000);
    if ( (_DWORD)result != 0x40000000 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 88));
      _InterlockedAnd((volatile signed __int32 *)(v6 + 88), 0xBFFFFFFF);
      return PopFxActivateComponentWorker((ULONG_PTR)BugCheckParameter2, v6, 0, 0LL);
    }
  }
  else
  {
    PopFxAddRefDevice((ULONG_PTR)BugCheckParameter2);
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 88));
    _InterlockedAnd((volatile signed __int32 *)(v6 + 88), 0xBFFFFFFF);
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 200));
    if ( *(_DWORD *)(v6 + 216) == 1 )
    {
      *(_QWORD *)(v6 + 224) = MEMORY[0xFFFFF78000000008];
      *(_BYTE *)(v6 + 208) = 1;
    }
    KxReleaseSpinLock((volatile signed __int64 *)(v6 + 200));
    if ( (_DWORD)KiIrqlFlags )
    {
      v22 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v22 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v22 >= 2u )
      {
        v23 = KeGetCurrentPrcb();
        v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
        v15 = v23->SchedulerAssist;
        v21 = (v24 & v15[5]) == 0;
        v15[5] &= v24;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(v23);
      }
    }
    __writecr8(v14);
    LOBYTE(v15) = 1;
    PopDiagTraceFxComponentLogicalCondition(BugCheckParameter2[6], a2, v15);
    v16 = (void (__fastcall *)(_QWORD, _QWORD))BugCheckParameter2[14];
    if ( v16 )
      v16(BugCheckParameter2[24], a2);
    return PopFxCompleteComponentActivation((ULONG_PTR)BugCheckParameter2);
  }
  return result;
}
