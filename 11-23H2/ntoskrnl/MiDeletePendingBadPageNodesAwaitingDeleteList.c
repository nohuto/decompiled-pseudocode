/*
 * XREFs of MiDeletePendingBadPageNodesAwaitingDeleteList @ 0x140629F50
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 MiDeletePendingBadPageNodesAwaitingDeleteList()
{
  KIRQL i; // al
  _QWORD *v1; // rcx
  PVOID *v2; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v6; // eax
  bool v7; // zf
  PVOID v8; // rdi
  KIRQL v9; // bl
  unsigned __int8 v10; // al
  struct _KPRCB *v11; // r9
  _DWORD *v12; // r8
  int v13; // eax
  __int64 result; // rax

  for ( i = ExAcquireSpinLockExclusive(&dword_140C67310); ; i = ExAcquireSpinLockExclusive(&dword_140C67310) )
  {
    v8 = qword_140C67320;
    v9 = i;
    if ( qword_140C67320 == &qword_140C67320 )
      break;
    v1 = *(_QWORD **)qword_140C67320;
    v2 = (PVOID *)*((_QWORD *)qword_140C67320 + 1);
    if ( *(PVOID *)(*(_QWORD *)qword_140C67320 + 8LL) != qword_140C67320 || *v2 != qword_140C67320 )
      __fastfail(3u);
    *v2 = v1;
    v1[1] = v2;
    --qword_140C67330;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C67310);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v6 = ~(unsigned __int16)(-1LL << (v9 + 1));
        v7 = (v6 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v6;
        if ( v7 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v9);
    ExFreePoolWithTag(v8, 0);
  }
  byte_140C67338 = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C67310);
  if ( (_DWORD)KiIrqlFlags )
  {
    v10 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v10 <= 0xFu && v9 <= 0xFu && v10 >= 2u )
    {
      v11 = KeGetCurrentPrcb();
      v12 = v11->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << (v9 + 1));
      v7 = (v13 & v12[5]) == 0;
      v12[5] &= v13;
      if ( v7 )
        KiRemoveSystemWorkPriorityKick((__int64)v11);
    }
  }
  result = v9;
  __writecr8(v9);
  return result;
}
