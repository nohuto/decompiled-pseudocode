/*
 * XREFs of PspUnlockQuotaExpansion @ 0x140208514
 * Callers:
 *     PspReturnResourceQuota @ 0x140208380 (PspReturnResourceQuota.c)
 *     PspExpandQuota @ 0x140208400 (PspExpandQuota.c)
 *     PspInsertExpansionEntry @ 0x1403AE244 (PspInsertExpansionEntry.c)
 *     PspExpandLimit @ 0x1405A3C48 (PspExpandLimit.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PspUnlockQuotaExpansion(_DWORD *a1, unsigned __int8 a2)
{
  volatile signed __int64 *v2; // rbx
  unsigned __int64 v3; // rdi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rdi
  bool v6; // zf
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // edx

  v2 = (volatile signed __int64 *)(a1 + 4);
  v3 = a2;
  if ( *a1 )
  {
    result = KxReleaseSpinLock(a1 + 4);
    if ( (_DWORD)KiIrqlFlags )
    {
      result = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && (unsigned __int8)result <= 0xFu
        && (unsigned __int8)v3 <= 0xFu
        && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        result = -1LL << ((unsigned __int8)v3 + 1);
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)result;
        v6 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v6 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v3);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 4);
    result = KeAbPostRelease((ULONG_PTR)v2);
    v6 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v6 )
    {
      result = (__int64)&CurrentThread->152;
      if ( *(_QWORD *)result != result )
        return KiCheckForKernelApcDelivery();
    }
  }
  return result;
}
