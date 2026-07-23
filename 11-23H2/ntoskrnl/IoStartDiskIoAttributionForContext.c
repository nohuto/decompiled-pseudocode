/*
 * XREFs of IoStartDiskIoAttributionForContext @ 0x140362658
 * Callers:
 *     PspSetJobIoAttribution @ 0x1407D85B4 (PspSetJobIoAttribution.c)
 *     PspIoRateEntryActivate @ 0x1407D893C (PspIoRateEntryActivate.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14024CD90 (RtlRbInsertNodeEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     IopDiskIoAttributionTreeCompare @ 0x14035E750 (IopDiskIoAttributionTreeCompare.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall IoStartDiskIoAttributionForContext(PRTL_BALANCED_NODE Node)
{
  unsigned __int64 v2; // rsi
  signed __int64 v3; // rbx
  BOOLEAN v4; // r8
  int v5; // edi
  unsigned __int64 v6; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  v2 = ExAcquireSpinLockExclusive(&IopDiskIoAttributionLock);
  if ( (*(_BYTE *)(&IopDiskIoAttributionTree + 1) & 1) != 0 )
  {
    if ( IopDiskIoAttributionTree )
      v3 = (unsigned __int64)IopDiskIoAttributionTree ^ (unsigned __int64)&IopDiskIoAttributionTree;
    else
      v3 = 0LL;
  }
  else
  {
    v3 = (signed __int64)IopDiskIoAttributionTree;
  }
  v4 = 0;
  v5 = *(_BYTE *)(&IopDiskIoAttributionTree + 1) & 1;
  if ( v3 )
  {
    while ( 1 )
    {
      if ( (int)IopDiskIoAttributionTreeCompare((unsigned __int64 *)&Node[1], v3) < 0 )
      {
        v6 = *(_QWORD *)v3;
        if ( v5 )
        {
          if ( !v6 )
            goto LABEL_14;
          v6 ^= v3;
        }
        if ( !v6 )
        {
LABEL_14:
          v4 = 0;
          break;
        }
      }
      else
      {
        v6 = *(_QWORD *)(v3 + 8);
        if ( v5 )
        {
          if ( !v6 )
            goto LABEL_15;
          v6 ^= v3;
        }
        if ( !v6 )
        {
LABEL_15:
          v4 = 1;
          break;
        }
      }
      v3 = v6;
    }
  }
  RtlRbInsertNodeEx((PRTL_RB_TREE)&IopDiskIoAttributionTree, (PRTL_BALANCED_NODE)v3, v4, Node);
  ExReleaseSpinLockExclusiveFromDpcLevel(&IopDiskIoAttributionLock);
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
      v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v11 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
}
