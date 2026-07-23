/*
 * XREFs of MiUpdatePageFileList @ 0x140395FE0
 * Callers:
 *     MiIncreaseCommitLimits @ 0x140396244 (MiIncreaseCommitLimits.c)
 *     MiInsertPageFileInList @ 0x140834390 (MiInsertPageFileInList.c)
 *     MiDeletePagefile @ 0x140A32AB0 (MiDeletePagefile.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x140288350 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x14028B1E0 (RtlAvlRemoveNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiUpdatePageFileList(__int64 a1, int a2)
{
  unsigned __int64 *v4; // rbp
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  bool v7; // r8
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf

  if ( !*(_QWORD *)(a1 + 56) )
    return;
  v4 = (unsigned __int64 *)(a1 + 256);
  v5 = ExAcquireSpinLockExclusive(&dword_140C69648);
  if ( !a2 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140C69640, v4);
    goto LABEL_8;
  }
  v6 = *(_QWORD *)(a1 + 56);
  *(_WORD *)(a1 + 204) |= 0x100u;
  v7 = 0;
  v8 = (_QWORD *)qword_140C69640;
  if ( !qword_140C69640 )
    goto LABEL_7;
  while ( v6 < *(v8 - 25) )
  {
    v9 = (_QWORD *)*v8;
    if ( !*v8 )
      goto LABEL_7;
LABEL_6:
    v8 = v9;
  }
  v9 = (_QWORD *)v8[1];
  if ( v9 )
    goto LABEL_6;
  v7 = 1;
LABEL_7:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C69640, (unsigned __int64)v8, v7, (unsigned __int64)v4);
LABEL_8:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C69648);
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
      v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v14 = (v13 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v5);
}
