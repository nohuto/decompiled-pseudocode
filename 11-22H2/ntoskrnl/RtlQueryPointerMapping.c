/*
 * XREFs of RtlQueryPointerMapping @ 0x1405AA880
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7AE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpAcquirePropStoreLockShared @ 0x1405AADB4 (RtlpAcquirePropStoreLockShared.c)
 */

__int64 __fastcall RtlQueryPointerMapping(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 Root; // rbx
  unsigned __int64 v6; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  v4 = (unsigned __int8)RtlpAcquirePropStoreLockShared(&RtlpPtrTreeLock);
  if ( (*(_BYTE *)&RtlpPtrTree.0 & 1) != 0 )
  {
    if ( RtlpPtrTree.Root )
      Root = (unsigned __int64)RtlpPtrTree.Root ^ (unsigned __int64)&RtlpPtrTree;
    else
      Root = 0LL;
  }
  else
  {
    Root = (unsigned __int64)RtlpPtrTree.Root;
  }
  while ( Root )
  {
    if ( a1 - *(_QWORD *)(Root + 24) >= 0 )
    {
      if ( a1 - *(_QWORD *)(Root + 24) <= 0 )
        break;
      v6 = *(_QWORD *)(Root + 8);
    }
    else
    {
      v6 = *(_QWORD *)Root;
    }
    if ( (*(_BYTE *)&RtlpPtrTree.0 & 1) != 0 && v6 )
      Root ^= v6;
    else
      Root = v6;
  }
  if ( Root )
    *a2 = *(_QWORD *)(Root + 32);
  ExReleaseSpinLockSharedFromDpcLevel(&RtlpPtrTreeLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v4 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v11 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v4);
  return Root == 0 ? 0xC0000225 : 0;
}
