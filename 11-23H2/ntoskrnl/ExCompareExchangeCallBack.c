/*
 * XREFs of ExCompareExchangeCallBack @ 0x14039FE58
 * Callers:
 *     IoRegisterPriorityCallback @ 0x14039FDB0 (IoRegisterPriorityCallback.c)
 *     IoUnregisterPriorityCallback @ 0x1405574E0 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x14056C300 (KeDeregisterBoundCallback.c)
 *     KeRegisterBoundCallback @ 0x14056C9F0 (KeRegisterBoundCallback.c)
 *     DbgkLkmdRegisterCallback @ 0x140842C90 (DbgkLkmdRegisterCallback.c)
 *     PsEstablishWin32Callouts @ 0x140842D50 (PsEstablishWin32Callouts.c)
 *     PsSetLoadImageNotifyRoutineEx @ 0x140842DE0 (PsSetLoadImageNotifyRoutineEx.c)
 *     PoRegisterCoalescingCallback @ 0x140842F70 (PoRegisterCoalescingCallback.c)
 *     PspSetCreateThreadNotifyRoutine @ 0x140843064 (PspSetCreateThreadNotifyRoutine.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140843108 (PspSetCreateProcessNotifyRoutine.c)
 *     DbgkLkmdUnregisterCallback @ 0x14093AC90 (DbgkLkmdUnregisterCallback.c)
 *     PoUnregisterCoalescingCallback @ 0x140986E40 (PoUnregisterCoalescingCallback.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x1409B5C10 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x1409B5D00 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D360 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402894C0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireRundownProtectionEx @ 0x1402F5CE0 (ExAcquireRundownProtectionEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall ExCompareExchangeCallBack(signed __int64 *a1, struct _EX_RUNDOWN_REF *a2, __int64 a3)
{
  signed __int64 i; // rbx
  signed __int64 *v7; // rsi
  signed __int64 Count; // rax
  signed __int64 v9; // rtt
  signed __int64 v11; // rax
  unsigned __int64 v12; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  unsigned int v18; // ebx
  signed __int64 v19; // rdx
  signed __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax

  if ( a2 && !ExAcquireRundownProtectionEx(a2, 0x10u) )
    return 0;
  _m_prefetchw(a1);
  for ( i = *a1; (a3 ^ (unsigned __int64)i) <= 0xF; i = v11 )
  {
    v11 = _InterlockedCompareExchange64(a1, ((unsigned __int64)a2 | 0xF) & -(__int64)(a2 != 0LL), i);
    if ( i == v11 )
      break;
  }
  v7 = (signed __int64 *)(i & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (i & 0xFFFFFFFFFFFFFFF0uLL) != a3 )
  {
    if ( a2 )
    {
      _m_prefetchw(a2);
      Count = a2->Count;
      while ( (Count & 1) == 0 )
      {
        v9 = Count;
        Count = _InterlockedCompareExchange64((volatile signed __int64 *)a2, Count - 32, Count);
        if ( v9 == Count )
          return 0;
      }
      v22 = Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v22, 0xFFFFFFFFFFFFFFF0uLL) == 16
        && !_interlockedbittestandreset((volatile signed __int32 *)(v22 + 32), 0) )
      {
        KeSetEvent((PRKEVENT)(v22 + 8), 0, 0);
      }
    }
    return 0;
  }
  if ( v7 )
  {
    v12 = ExAcquireSpinLockExclusive(&ExpCallBackFlush);
    ExReleaseSpinLockExclusiveFromDpcLevel(&ExpCallBackFlush);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
        v17 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v12);
    v18 = (i & 0xF) + 1;
    _m_prefetchw(v7);
    v19 = *v7;
    if ( (*v7 & 1) != 0 )
    {
LABEL_25:
      v21 = v19 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v21, -(__int64)v18) == v18
        && !_interlockedbittestandreset((volatile signed __int32 *)(v21 + 32), 0) )
      {
        KeSetEvent((PRKEVENT)(v21 + 8), 0, 0);
      }
    }
    else
    {
      while ( 1 )
      {
        v20 = _InterlockedCompareExchange64(v7, v19 - 2 * v18, v19);
        v17 = v19 == v20;
        v19 = v20;
        if ( v17 )
          break;
        if ( (v20 & 1) != 0 )
          goto LABEL_25;
      }
    }
  }
  return 1;
}
