/*
 * XREFs of RtlRemovePointerMapping @ 0x1405E7870
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpAcquirePropStoreLockExclusive @ 0x1405E7AF0 (RtlpAcquirePropStoreLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlRemovePointerMapping(__int64 a1, _QWORD *a2)
{
  unsigned __int8 v4; // al
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf

  v4 = RtlpAcquirePropStoreLockExclusive(&RtlpPtrTreeLock);
  v5 = (unsigned __int64)RtlpPtrTree;
  v6 = v4;
  if ( (qword_140C0D788 & 1) != 0 && RtlpPtrTree )
    v5 = (unsigned __int64)&RtlpPtrTree ^ (unsigned __int64)RtlpPtrTree;
  while ( v5 )
  {
    if ( a1 - *(_QWORD *)(v5 + 24) >= 0 )
    {
      if ( a1 - *(_QWORD *)(v5 + 24) <= 0 )
      {
        RtlRbRemoveNode((unsigned __int64 *)&RtlpPtrTree, v5);
        break;
      }
      v7 = *(_QWORD *)(v5 + 8);
    }
    else
    {
      v7 = *(_QWORD *)v5;
    }
    if ( (qword_140C0D788 & 1) != 0 && v7 )
      v5 ^= v7;
    else
      v5 = v7;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&RtlpPtrTreeLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v12 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  if ( !v5 )
    return 3221226021LL;
  *a2 = *(_QWORD *)(v5 + 32);
  ExFreePoolWithTag((PVOID)v5, 0);
  return 0LL;
}
