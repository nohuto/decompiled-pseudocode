/*
 * XREFs of PopShutdownListenerInsertCallback @ 0x140598930
 * Callers:
 *     NtPowerInformation @ 0x140784430 (NtPowerInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopShutdownListenerInsertCallback(_QWORD *a1)
{
  _QWORD *Pool2; // rax
  unsigned int v3; // edi
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rsi
  _QWORD *v6; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // edx
  bool v11; // zf

  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 544040269LL);
  v3 = 0;
  v4 = Pool2;
  if ( Pool2 )
  {
    Pool2[2] = *a1;
    Pool2[3] = a1[1];
    Pool2[4] = a1[2];
    v5 = KeAcquireSpinLockRaiseToDpc(&PopShutdownNotificationCallbackLock);
    v6 = (_QWORD *)qword_140C3A618;
    if ( *(PVOID **)qword_140C3A618 != &PopShutdownNotificationCallbackList )
      __fastfail(3u);
    *v4 = &PopShutdownNotificationCallbackList;
    v4[1] = v6;
    *v6 = v4;
    qword_140C3A618 = (__int64)v4;
    KxReleaseSpinLock((volatile signed __int64 *)&PopShutdownNotificationCallbackLock);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v5 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v5);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
