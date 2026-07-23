/*
 * XREFs of RtlCompareExchangePointerMapping @ 0x1405AA860
 * Callers:
 *     <none>
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14024CD90 (RtlRbInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpAcquirePropStoreLockExclusive @ 0x1405AB220 (RtlpAcquirePropStoreLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlCompareExchangePointerMapping(
        _RTL_BALANCED_NODE *a1,
        _RTL_BALANCED_NODE *a2,
        _RTL_BALANCED_NODE **a3,
        _RTL_BALANCED_NODE **a4)
{
  _RTL_BALANCED_NODE *Pool2; // rdi
  unsigned __int64 v9; // rbp
  unsigned __int64 Root; // rdx
  BOOLEAN v11; // r8
  _RTL_BALANCED_NODE *v12; // rax
  unsigned int v13; // ebx
  unsigned __int64 v14; // rax
  _RTL_BALANCED_NODE *v15; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf

  if ( KeGetCurrentIrql() <= 2u )
    Pool2 = (_RTL_BALANCED_NODE *)ExAllocatePool2(64LL, 40LL, 1886539858LL);
  else
    Pool2 = 0LL;
  v9 = (unsigned __int8)RtlpAcquirePropStoreLockExclusive(&RtlpPtrTreeLock);
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
  v11 = 0;
  if ( Root )
  {
    while ( 1 )
    {
      if ( (__int64)a1 - *(_QWORD *)(Root + 24) >= 0 )
      {
        if ( (__int64)a1 - *(_QWORD *)(Root + 24) <= 0 )
        {
          v15 = *(_RTL_BALANCED_NODE **)(Root + 32);
          if ( !a3 || v15 == *a3 )
            *(_QWORD *)(Root + 32) = a2;
          v13 = 0x40000000;
LABEL_28:
          if ( a4 )
            *a4 = v15;
          goto LABEL_30;
        }
        v14 = *(_QWORD *)(Root + 8);
        if ( !v14 || (v12 = (_RTL_BALANCED_NODE *)(Root ^ v14)) == 0LL )
        {
          v11 = 1;
          break;
        }
      }
      else
      {
        if ( !*(_QWORD *)Root )
          break;
        v12 = (_RTL_BALANCED_NODE *)(Root ^ *(_QWORD *)Root);
        if ( !v12 )
          break;
      }
      Root = (unsigned __int64)v12;
    }
  }
  if ( Pool2 )
  {
    Pool2[1].Children[0] = a1;
    Pool2[1].Children[1] = a2;
    RtlRbInsertNodeEx(&RtlpPtrTree, (PRTL_BALANCED_NODE)Root, v11, Pool2);
    if ( a3 )
      v15 = *a3;
    else
      v15 = 0LL;
    Pool2 = 0LL;
    v13 = 0;
    goto LABEL_28;
  }
  v13 = -1073741670;
LABEL_30:
  ExReleaseSpinLockExclusiveFromDpcLevel(&RtlpPtrTreeLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v9 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v20 = (v19 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v19;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v9);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return v13;
}
