/*
 * XREFs of PfSnCancelTraceTimer @ 0x14035F934
 * Callers:
 *     PfSnDeactivateTrace @ 0x14035F854 (PfSnDeactivateTrace.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PfSnCancelTraceTimer(__int64 a1)
{
  KSPIN_LOCK *v1; // rbx
  KIRQL v3; // al
  unsigned __int64 v4; // rdi
  bool v5; // bp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  v1 = (KSPIN_LOCK *)(a1 + 272);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 272));
  *(_DWORD *)(a1 + 280) |= 2u;
  v4 = v3;
  v5 = KeCancelTimer((PKTIMER)(a1 + 136)) != 0;
  KxReleaseSpinLock(v1);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  if ( v5 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 360));
  return 0LL;
}
