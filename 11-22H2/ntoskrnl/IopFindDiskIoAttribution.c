/*
 * XREFs of IopFindDiskIoAttribution @ 0x140316C68
 * Callers:
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x14020C5D0 (IopAcquireReferencesFromIoAttributionHandle.c)
 *     IoRecordIoAttribution @ 0x14020C650 (IoRecordIoAttribution.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7AE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140314440 (ExAcquireSpinLockShared.c)
 *     IopDiskIoAttributionTreeCompare @ 0x14035DF60 (IopDiskIoAttributionTreeCompare.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall IopFindDiskIoAttribution(__int64 a1)
{
  unsigned __int64 v1; // rbp
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rbx
  int v4; // edi
  int v5; // eax
  unsigned __int64 v6; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // edx
  bool v12; // zf
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = a1;
  v1 = 0LL;
  v2 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
  if ( (*(_BYTE *)(&IopDiskIoAttributionTree + 1) & 1) != 0 )
  {
    if ( IopDiskIoAttributionTree )
      v3 = (unsigned __int64)IopDiskIoAttributionTree ^ (unsigned __int64)&IopDiskIoAttributionTree;
    else
      v3 = 0LL;
  }
  else
  {
    v3 = (unsigned __int64)IopDiskIoAttributionTree;
  }
  v4 = *(_BYTE *)(&IopDiskIoAttributionTree + 1) & 1;
  while ( v3 )
  {
    v5 = IopDiskIoAttributionTreeCompare(&v13, v3);
    if ( v5 >= 0 )
    {
      if ( v5 <= 0 )
        break;
      v6 = *(_QWORD *)(v3 + 8);
    }
    else
    {
      v6 = *(_QWORD *)v3;
    }
    if ( v4 && v6 )
      v3 ^= v6;
    else
      v3 = v6;
  }
  if ( v3 )
  {
    v1 = v3;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v3 + 32)) <= 1 )
      __fastfail(0xEu);
  }
  ExReleaseSpinLockSharedFromDpcLevel(&IopDiskIoAttributionLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v2 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v12 = (v11 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v11;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
  return v1;
}
