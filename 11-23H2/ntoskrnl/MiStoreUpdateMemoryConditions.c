/*
 * XREFs of MiStoreUpdateMemoryConditions @ 0x140222F70
 * Callers:
 *     MiAdjustModifiedPageLoad @ 0x14021F234 (MiAdjustModifiedPageLoad.c)
 *     MiModifiedPageWriter @ 0x1403B2940 (MiModifiedPageWriter.c)
 *     MiFlushAllPagesWorker @ 0x14063A234 (MiFlushAllPagesWorker.c)
 *     MiFlushAllStoreSwapPages @ 0x14063A33C (MiFlushAllStoreSwapPages.c)
 * Callees:
 *     MiUseLowIoPriorityForModifiedPages @ 0x140222ED8 (MiUseLowIoPriorityForModifiedPages.c)
 *     KeQueryEffectiveBasePriorityThread @ 0x1402230D4 (KeQueryEffectiveBasePriorityThread.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiGetAvailablePagesBelowPriority @ 0x14025BD60 (MiGetAvailablePagesBelowPriority.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetActualBasePriorityThread @ 0x1402B98F0 (KeSetActualBasePriorityThread.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140345304 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x1405BF274 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 */

void __fastcall MiStoreUpdateMemoryConditions(__int64 a1)
{
  volatile LONG *v1; // r15
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  unsigned int v5; // r13d
  int v6; // r12d
  int v7; // r14d
  unsigned __int64 AvailablePagesBelowPriority; // rax
  unsigned __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rcx
  char v12; // cl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v16; // eax
  bool v17; // zf
  signed __int32 v18[18]; // [rsp+0h] [rbp-48h] BYREF

  v1 = (volatile LONG *)(a1 + 1352);
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1352));
  if ( *(_DWORD *)(a1 + 1268) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v1);
    v12 = (char)KiIrqlFlags;
    if ( !(_DWORD)KiIrqlFlags )
      goto LABEL_17;
    goto LABEL_19;
  }
  v4 = *(_QWORD *)(a1 + 17216);
  v5 = !MiUseLowIoPriorityForModifiedPages(a1);
  if ( v4 < 0xA0 )
  {
    v10 = 0;
    v6 = 1;
    v7 = 18;
  }
  else
  {
    v6 = 0;
    if ( v4 < 0x420 )
    {
      v10 = 1;
      v7 = 18;
    }
    else
    {
      v7 = 8;
      AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(a1, 6LL);
      if ( AvailablePagesBelowPriority < 3LL * *(_QWORD *)(*(_QWORD *)(a1 + 16920) + 2392LL) )
      {
        v10 = 2;
      }
      else
      {
        v9 = *(_QWORD *)(a1 + 17824);
        if ( v9 >= AvailablePagesBelowPriority + 0x2000 )
          v10 = (v9 < AvailablePagesBelowPriority + 0x2000 + AvailablePagesBelowPriority) + 2;
        else
          v10 = 4;
      }
    }
  }
  if ( (unsigned int)KeQueryEffectiveBasePriorityThread(*(_QWORD *)(a1 + 1232)) != v7 )
    KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 1232));
  if ( v6 )
    KeSetEvent((PRKEVENT)(a1 + 1240), 0, 0);
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 200) + 24LL);
  if ( *(unsigned __int8 *)(v11 + 2040) != v10 || !v10 || *(unsigned __int8 *)(v11 + 2041) != v5 )
  {
    *(_BYTE *)(v11 + 2040) = v10;
    *(_BYTE *)(v11 + 2041) = v5;
    _InterlockedOr(v18, 0);
    SMKM_STORE_MGR<SM_TRAITS>::SmUpdateMemoryConditions(v11, v10, v5);
    if ( !v10 )
      SMKM_STORE_MGR<SM_TRAITS>::SmDrainSList(*(_QWORD *)(*(_QWORD *)(a1 + 200) + 24LL) + 1408LL, 0LL);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  v12 = (char)KiIrqlFlags;
  if ( (_DWORD)KiIrqlFlags )
  {
LABEL_19:
    CurrentIrql = KeGetCurrentIrql();
    if ( (v12 & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v17 = (v16 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v16;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
LABEL_17:
  __writecr8(v3);
}
