/*
 * XREFs of PopGetDope @ 0x1403C5428
 * Callers:
 *     PoRegisterDeviceForIdleDetection @ 0x1403052D0 (PoRegisterDeviceForIdleDetection.c)
 *     PopAssociateThermalRequest @ 0x14084E300 (PopAssociateThermalRequest.c)
 *     PoVolumeDevice @ 0x14087240C (PoVolumeDevice.c)
 *     PopDeactiveThermalRequest @ 0x1409830C8 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x140983378 (PopOrphanCoolingExtension.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopGetDope(__int64 a1)
{
  __int64 v1; // rdi
  __int64 Pool2; // rax
  void *v4; // rbx
  unsigned __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // dl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  v1 = *(_QWORD *)(a1 + 312);
  if ( !*(_QWORD *)(v1 + 24) )
  {
    Pool2 = ExAllocatePool2(64LL, 96LL, 1162891076LL);
    v4 = (void *)Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 52) = 0;
      *(_DWORD *)(Pool2 + 56) = 0;
      *(_QWORD *)(Pool2 + 40) = Pool2 + 32;
      *(_QWORD *)(Pool2 + 32) = Pool2 + 32;
      *(_QWORD *)(Pool2 + 24) = a1;
      v5 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
      if ( !*(_QWORD *)(v1 + 24) )
      {
        *(_QWORD *)(v1 + 24) = v4;
        v4 = 0LL;
      }
      KxReleaseSpinLock((volatile signed __int64 *)&PopDopeGlobalLock);
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
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v5);
      if ( v4 )
        ExFreePoolWithTag(v4, 0x45504F44u);
    }
  }
  return *(_QWORD *)(v1 + 24);
}
