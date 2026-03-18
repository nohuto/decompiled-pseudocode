/*
 * XREFs of MiRefPageFileSpaceBitmaps @ 0x14037E3A0
 * Callers:
 *     MiStoreEvictPageFile @ 0x14024FDF0 (MiStoreEvictPageFile.c)
 *     MiStoreWriteModifiedPages @ 0x14037B44C (MiStoreWriteModifiedPages.c)
 *     MiFindPageFileWriteCluster @ 0x14037E048 (MiFindPageFileWriteCluster.c)
 *     MiBuildReservationCluster @ 0x14059B62C (MiBuildReservationCluster.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiRefPageFileSpaceBitmaps(int *a1, __int64 a2)
{
  volatile LONG *v2; // rbx
  KIRQL v5; // al
  __int64 v6; // r14
  unsigned __int64 v7; // rbp
  int v8; // edi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf

  v2 = a1 + 58;
  v5 = ExAcquireSpinLockExclusive(a1 + 58);
  v6 = *((_QWORD *)a1 + 14);
  v7 = v5;
  ++*(_DWORD *)v6;
  *(_OWORD *)a2 = *(_OWORD *)v6;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(v6 + 16);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(v6 + 32);
  v8 = *a1;
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v12 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v12 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  *(_DWORD *)(a2 + 8) = v8;
  *(_DWORD *)(a2 + 24) = v8;
  *(_QWORD *)a2 = v6;
  return result;
}
