/*
 * XREFs of IopFindDiskIoAttribution @ 0x140365DD0
 * Callers:
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x1403639F0 (IopAcquireReferencesFromIoAttributionHandle.c)
 *     IoRecordIoAttribution @ 0x140365D40 (IoRecordIoAttribution.c)
 * Callees:
 *     IopDiskIoAttributionTreeCompare @ 0x140244090 (IopDiskIoAttributionTreeCompare.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IopFindDiskIoAttribution(unsigned __int64 a1)
{
  __int64 v1; // rbp
  KIRQL v2; // al
  __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  int v5; // edi
  int v6; // eax
  __int64 v7; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // edx
  bool v13; // zf
  unsigned __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = a1;
  v1 = 0LL;
  v2 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
  v3 = IopDiskIoAttributionTree;
  v4 = v2;
  if ( (BYTE8(IopDiskIoAttributionTree) & 1) != 0 && (_QWORD)IopDiskIoAttributionTree )
    v3 = (unsigned __int64)&IopDiskIoAttributionTree ^ IopDiskIoAttributionTree;
  v5 = BYTE8(IopDiskIoAttributionTree) & 1;
  if ( v3 )
  {
    do
    {
      v6 = IopDiskIoAttributionTreeCompare(&v14, v3);
      if ( v6 >= 0 )
      {
        if ( v6 <= 0 )
          break;
        v7 = *(_QWORD *)(v3 + 8);
      }
      else
      {
        v7 = *(_QWORD *)v3;
      }
      if ( v5 && v7 )
        v3 ^= v7;
      else
        v3 = v7;
    }
    while ( v3 );
    if ( v3 )
    {
      v1 = v3;
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v3 + 32)) <= 1 )
        __fastfail(0xEu);
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&IopDiskIoAttributionLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return v1;
}
