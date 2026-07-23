/*
 * XREFs of MiInsertSubsectionNode @ 0x1402E40B8
 * Callers:
 *     MiAppendSubsectionChain @ 0x140293568 (MiAppendSubsectionChain.c)
 *     MiCreateDataFileMap @ 0x140745BD0 (MiCreateDataFileMap.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x140288350 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiInsertSubsectionNode(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 *v3; // rdi
  KIRQL v6; // bl
  _QWORD *v7; // r10
  bool v8; // r8
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rax
  char result; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf

  v3 = (unsigned __int64 *)(a1 + 280);
  if ( a3 )
    v6 = 17;
  else
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v7 = (_QWORD *)*v3;
  v8 = 0;
  if ( *v3 )
  {
    v9 = *(unsigned int *)(a2 + 36) | ((unsigned __int64)(*(_WORD *)(a2 + 32) & 0xFFC0) << 26);
    while ( 1 )
    {
      v10 = *((unsigned int *)v7 - 5) | ((unsigned __int64)(*(_WORD *)(v7 - 3) & 0xFFC0) << 26);
      v11 = v10 + *((unsigned int *)v7 - 4);
      if ( *((_WORD *)v7 - 11) < 0x10u )
        --v11;
      if ( v9 <= v11 && v9 < v10 )
      {
        v12 = (_QWORD *)*v7;
        if ( !*v7 )
        {
          v8 = 0;
          break;
        }
      }
      else
      {
        v12 = (_QWORD *)v7[1];
        if ( !v12 )
        {
          v8 = 1;
          break;
        }
      }
      v7 = v12;
    }
  }
  result = RtlAvlInsertNodeEx(v3, (unsigned __int64)v7, v8, a2 + 56);
  ++v3[1];
  v3[2] = a2;
  if ( v6 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << (v6 + 1));
        v18 = (v17 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v17;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    result = v6;
    __writecr8(v6);
  }
  return result;
}
